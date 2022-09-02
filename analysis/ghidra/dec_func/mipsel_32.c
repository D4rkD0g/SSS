
void FUN_00000000(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    iVar1 = func_0xfffffc78();
    for (iVar2 = param_2 * 0x38 + iVar2; iVar2 != iVar1; iVar2 = iVar2 + 0x38) {
      func_0xffffffac(iVar2);
    }
    *(int *)(*param_1 + -4) = param_2;
  }
  return;
}

