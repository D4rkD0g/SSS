import sys
import pefile

class PEINFO(object):
	"""docstring for PEINFO"""
	def __init__(self, pe):
		super(PEINFO, self).__init__()
		self.pe = pefile.PE(pe)

		

	def get_iat(self):
		print(self.pe.get_imphash())
		for item in self.pe.DIRECTORY_ENTRY_IMPORT:
			print(item.dll)
			for func in item.imports:
				print("func: ", func.name)

if __name__ == '__main__':
	if len(sys.argv) != 2:
		print(".py pe")
		exit()
	pe = sys.argv[1]
	peinfo = PEINFO(pe)
	peinfo.get_iat()