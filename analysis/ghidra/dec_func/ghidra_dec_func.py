from ghidra.program.model.block import SimpleBlockIterator
from ghidra.program.model.block import BasicBlockModel
from ghidra.app.util.exporter import CppExporter
from ghidra.app.util import Option
from java.io import File
from ghidra.app.cmd.function import CreateFunctionCmd
from ghidra.app.decompiler import DecompInterface 
import os
import logging

#/root/tools/ghidra1015/support/analyzeHeadless . 3 -deleteProject -import {} -processor x86:LE:32:default -cspec clangwindows  -postScript cppexp.py
# 86:LE:32:default clangwindows  
# 86:LE:64:default clangwindows 
# MIPS:LE:32:default default
# MIPS:LE:64:default default
print("FC:", currentProgram.getFunctionManager().getFunctionCount())
addressFactory = currentProgram.getAddressFactory()
adr = addressFactory.getDefaultAddressSpace().getAddress(0x0)
cmd = CreateFunctionCmd(adr)
cmd.applyTo(currentProgram)
print("FCA:", currentProgram.getFunctionManager().getFunctionCount())

decomp = DecompInterface()
decomp.openProgram(currentProgram)
#functions = list(currentProgram.functionManager.getFunctions(True)) 
functions = currentProgram.getFunctionManager().getFunctions(True)
failed_to_extract = []

#https://github.com/tenable/ghidra_tools/blob/main/extract_decomps/extract.py
path = "./newc/"
filename = f"{path}{currentProgram.getName()}.c"
for function in functions:
    decomp_res = decomp.decompileFunction(function, 1000, monitor)

    if decomp_res.isTimedOut():
        print(f"Timed out while attempting to decompile '{function.name}'")
    elif not decomp_res.decompileCompleted():
        print(f"Failed to decompile {function.name}")
        failed_to_extract.append(function.name)
        continue

    decomp_src = decomp_res.getDecompiledFunction().getC()

    try:
        #filename = f"{function.name}@{function.getEntryPoint()}.c"
        with open(filename, "a") as f:
            f.write(decomp_src)
    except Exception as e:
        logging.error(e)
        failed_to_extract.append(function.name)
        continue

if failed_to_extract:
    with open(path+"fail.txt", "a") as f:
        f.write(currentProgram.getName() + "\n")

print(f"Done to decompile {filename}")
