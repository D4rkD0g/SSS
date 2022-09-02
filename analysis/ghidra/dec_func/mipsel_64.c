
void FUN_00000000(longlong *param_1,uint param_2)

{
  undefined uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong in_t9;
  undefined4 uStack72;
  int iStack68;
  longlong lStack64;
  char *pcStack56;
  undefined8 uStack48;
  longlong lStack40;
  
  lStack40 = **(longlong **)(in_t9 + 0x1d45dc);
  if (*param_1 == 0) {
    pcStack56 = *(char **)(param_1[0x238] + 8);
    if (*(char *)((longlong)param_1 + 0xd) == '\0') {
      if ((pcStack56 == (char *)0x0) || (*pcStack56 == '\0')) {
        *(undefined *)((longlong)param_1 + 0xd) = 1;
      }
      else {
        uVar1 = func_0xffffffffffffed00(pcStack56,(param_2 & 2) != 0);
        *(undefined *)((longlong)param_1 + 0xd) = uVar1;
      }
    }
    if ((ulonglong)*(byte *)((longlong)param_1 + 0xd) < 7) {
                    /* WARNING: Could not recover jumptable at 0x00000100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*(longlong *)
                  ((ulonglong)*(byte *)((longlong)param_1 + 0xd) * 8 +
                  *(longlong *)(in_t9 + 0x1d3adc) + -0xdb8) + in_t9 + 0x1dba6c))();
      return;
    }
    *(longlong *)(*(longlong *)(in_t9 + 0x1d3aa4) + 0x26e8) = *param_1;
    if ((*param_1 == 0) || (lVar2 = (**(code **)(in_t9 + 0x1d3e5c))(*param_1), lVar2 != 0)) {
      uVar4 = **(undefined8 **)(in_t9 + 0x1d460c);
      uVar3 = (**(code **)(in_t9 + 0x1d3b94))(*param_1);
      (**(code **)(in_t9 + 0x1d448c))
                (uVar4,*(longlong *)(in_t9 + 0x1d3adc) + -0xed0,pcStack56,uVar3);
      if ((param_2 & 1) != 0) {
        (**(code **)(in_t9 + 0x1d3d2c))(*(longlong *)(in_t9 + 0x1d3adc) + -0x54e0,param_1);
        goto code_r0x000008c0;
      }
      (**(code **)(in_t9 + 0x1d44b4))(1);
    }
    (**(code **)(in_t9 + 0x1d3e64))(*param_1,1);
    (**(code **)(in_t9 + 0x1d3e6c))(*param_1,0,0);
    (**(code **)(in_t9 + 0x1d3e74))(*param_1,0,0);
    (**(code **)(in_t9 + 0x1d3e7c))(*param_1,0,0);
    func_0xfffffffffffe3b6c(*param_1,0,0);
    (**(code **)(in_t9 + 0x1d3e8c))(*param_1,0,0);
    func_0xfffffffffffe0938(*param_1,0,0);
    func_0xfffffffffffe5da0(*param_1,0,0);
    func_0xfffffffffffe7090(*param_1,0,0);
    func_0xffffffffffff1580(*param_1,0,0);
    (**(code **)(in_t9 + 0x1d3bdc))
              (*param_1,*(longlong *)(in_t9 + 0x1d3adc) + -0xea0,3,1,0,
               *(longlong *)(in_t9 + 0x1d3abc) + 0x6f4c,0,0);
    (**(code **)(in_t9 + 0x1d3bdc))
              (*param_1,*(longlong *)(in_t9 + 0x1d3adc) + -0xe88,1,1,0,
               *(longlong *)(in_t9 + 0x1d3abc) + 0x6e2c,0,0);
    (**(code **)(in_t9 + 0x1d3bdc))
              (*param_1,*(longlong *)(in_t9 + 0x1d3adc) + -0xe70,1,1,param_1,
               *(longlong *)(in_t9 + 0x1d3d04) + -0xaac,0,0);
    (**(code **)(in_t9 + 0x1d3bdc))
              (*param_1,*(longlong *)(in_t9 + 0x1d3adc) + -0xe60,1,1,0,
               *(longlong *)(in_t9 + 0x1d3e04) + -0x276c,0,0);
    (**(code **)(in_t9 + 0x1d3bdc))
              (*param_1,*(longlong *)(in_t9 + 0x1d3adc) + -0xe48,2,1,0,
               *(longlong *)(in_t9 + 0x1d3e04) + -0x2a48,0,0);
    (**(code **)(in_t9 + 0x1d3bdc))
              (*param_1,*(longlong *)(in_t9 + 0x1d3adc) + -0xe38,1,1,0,
               *(longlong *)(in_t9 + 0x1d3e04) + -0x28f0,0,0);
    (**(code **)(in_t9 + 0x1d3bdc))
              (*param_1,*(longlong *)(in_t9 + 0x1d3adc) + -0xe28,1,1,0,
               *(longlong *)(in_t9 + 0x1d3e04) + -0x2830,0,0);
    (**(code **)(in_t9 + 0x1d3bdc))
              (*param_1,*(longlong *)(in_t9 + 0x1d3adc) + -0xe20,1,1,0,
               *(longlong *)(in_t9 + 0x1d3d04) + -0x894,0,0);
    (**(code **)(in_t9 + 0x1d3bdc))
              (*param_1,*(longlong *)(in_t9 + 0x1d3adc) + -0xe20,2,1,0,
               *(longlong *)(in_t9 + 0x1d3d04) + -0x894,0,0);
    if (*(char *)((longlong)param_1 + 0xd) == '\x03') {
      uStack48 = (**(code **)(in_t9 + 0x1d3afc))(*(longlong *)(in_t9 + 0x1d3adc) + -0xe18,pcStack56)
      ;
      (*(code *)(*(longlong *)(in_t9 + 0x1d3abc) + 0x57e4))(uStack48);
      (**(code **)(in_t9 + 0x1d3d0c))(*param_1,uStack48,0,0,0);
      (**(code **)(in_t9 + 0x1d3b0c))(uStack48);
    }
    else if ((*(char *)((longlong)param_1 + 0xd) == '\x05') ||
            (*(char *)((longlong)param_1 + 0xd) == '\x06')) {
      uStack72 = 0;
      if (*(char *)((longlong)param_1 + 0xd) == '\x05') {
        lStack64 = func_0xffffffffffffeb58(pcStack56,&uStack72);
      }
      else {
        lStack64 = func_0xfffffffffffff018(param_1,&uStack72);
        if (lStack64 == 0) goto code_r0x000008c0;
      }
      iStack68 = (**(code **)(in_t9 + 0x1d3eb4))
                           (*param_1,*(longlong *)(in_t9 + 0x1d3adc) + -0x6768,lStack64,uStack72,
                            uStack72,3);
      if (iStack68 != 0) {
        (**(code **)(in_t9 + 0x1d448c))
                  (**(undefined8 **)(in_t9 + 0x1d460c),*(longlong *)(in_t9 + 0x1d3adc) + -0xde8,
                   iStack68);
      }
      if (0 < param_1[0x11]) {
        (**(code **)(in_t9 + 0x1d3d5c))
                  (*param_1,*(longlong *)(in_t9 + 0x1d3adc) + -0x6768,0x24,param_1 + 0x11);
      }
    }
  }
  if ((*(char *)((longlong)param_1 + 0x12) != '\0') && (*param_1 != 0)) {
    (**(code **)(in_t9 + 0x1d3d3c))(*param_1,*(longlong *)(in_t9 + 0x1d3d04) + 0x13e0,param_1);
  }
code_r0x000008c0:
  if (lStack40 != **(longlong **)(in_t9 + 0x1d45dc)) {
    (**(code **)(in_t9 + 0x1d457c))();
  }
  return;
}

