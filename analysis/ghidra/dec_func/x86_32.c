
/* WARNING: Instruction at (ram,0x00000129) overlaps instruction at (ram,0x00000126)
    */

void FUN_00000000(int *param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  undefined uVar4;
  undefined2 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 uVar11;
  uint uVar12;
  int extraout_ECX;
  int extraout_ECX_00;
  char extraout_DH;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar17;
  undefined uVar18;
  undefined3 uStack27;
  undefined uStack24;
  undefined uStack23;
  undefined2 uStack22;
  undefined uStack20;
  undefined uStack19;
  int iVar16;
  
  uVar4 = SUB41(param_1,0);
  if ((uint)(param_1[1] * 3) < (uint)((param_1[3] + param_1[2]) * 4)) {
    func_0x00000250(uVar4);
  }
  uVar18 = uVar4;
  uVar6 = func_0x000002b0(uVar4,(undefined)param_2);
  iVar15 = *param_1;
  uVar9 = param_1[1];
  uStack24 = (undefined)uVar6;
  uStack23 = (undefined)(uVar6 >> 8);
  uStack22 = (undefined2)(uVar6 >> 0x10);
  uVar12 = uVar9 - 1 & uVar6;
  piVar7 = (int *)(uVar12 * 0x10);
  iVar1 = iVar15 + (int)piVar7;
  uStack27 = (undefined3)((uint)iVar1 >> 8);
  if (uVar12 == uVar9) {
    *(int *)(iVar1 + 0x44c72404) = *(int *)(iVar1 + 0x44c72404) + -1;
    *piVar7 = *piVar7 + (int)piVar7;
    bVar2 = (byte)iVar1 & 0x1f;
    uRam00951a1f = uRam00951a1f << bVar2 | uRam00951a1f >> 0x20 - bVar2;
  }
  else {
    iVar13 = uVar9 * 0x10 + uVar12 * -0x10;
    iVar14 = 0;
    iVar15 = iVar1;
    while (uVar9 = func_0x000002c1(uVar18), uVar9 == uVar6) {
      uVar5 = func_0x000002e1((char)iVar15);
      param_2._1_1_ = (undefined)((ushort)uVar5 >> 8);
      uVar18 = (undefined)param_2;
      pcVar10 = (char *)func_0x000002d1(uVar4,(char)uVar5,(undefined)param_2);
      if ((char)pcVar10 != '\0') {
        *pcVar10 = *pcVar10 + (char)pcVar10;
code_r0x000001c1:
        func_0x000002e7((char)iVar15,(char)pcVar10,uVar18);
        return;
      }
      while( true ) {
        iVar16 = iVar15;
        iVar15 = iVar16 + 0x10;
        iVar13 = iVar13 + -0x10;
        if (iVar13 == 0) {
          return;
        }
        uVar18 = (undefined)iVar15;
        cVar3 = func_0x000002b1(uVar18);
        if (cVar3 != '\0') break;
        uStack20 = (undefined)iVar14;
        uStack19 = (undefined)((uint)iVar14 >> 8);
        iVar8 = func_0xfffff681(uVar18);
        bVar17 = (char)iVar8 != '\0';
        iVar14 = iVar15;
        if (bVar17) {
          if (bVar17) {
            *(int *)(iVar16 + 0x1c) = *(int *)(iVar16 + 0x1c) + -1;
            iVar15 = iVar8;
          }
          uVar4 = func_0x00000327((undefined)param_2);
          func_0x000002e7((char)iVar15,uVar4);
          func_0x00000337((char)iVar15,uStack24);
          *(int *)(iVar16 + 0x18) = *(int *)(iVar16 + 0x18) + 1;
          return;
        }
      }
    }
    iVar15 = *(int *)(uVar9 & 0xffffff30);
    uVar9 = CONCAT13((undefined)param_2,param_1._1_3_);
    if (iVar15 != extraout_ECX) goto code_r0x00000135;
  }
code_r0x000000ee:
  param_2._1_1_ = 0x94;
  func_0xff43d45a(200,0x94,0xf1);
  func_0xff43509a(0x72);
  do {
    cVar3 = func_0xfffff67a((char)iVar15);
    iVar14 = CONCAT13(uStack24,uStack27);
    if (cVar3 != '\0') {
      piVar7 = (int *)(iVar15 + -0x76f3b201);
      *piVar7 = *piVar7 + (int)piVar7;
      *(char *)(iVar14 + -0x76fbdbbc) = *(char *)(iVar14 + -0x76fbdbbc) + (char)((uint)iVar1 >> 8);
      func_0x000002e7();
      func_0x00000337((char)iVar15,uStack23);
      *(int *)(uVar9 + 8) = *(int *)(uVar9 + 8) + 1;
      return;
    }
    while( true ) {
      iVar15 = iVar15 + 0x10;
      if (iVar14 == iVar15) goto code_r0x000000ee;
code_r0x00000135:
      cVar3 = func_0x000002aa((char)iVar15,param_2._1_1_);
      if (cVar3 == '\0') break;
      iVar14 = func_0x000002ba((char)iVar15);
      if (iVar14 == CONCAT13(uStack19,CONCAT12(uStack20,uStack22))) {
        uVar11 = func_0x000002da((short)iVar15);
        uVar18 = (undefined)((uint)uVar11 >> 0x10);
        param_2._1_1_ = (undefined)(uVar9 >> 0x18);
        cVar3 = func_0x000002ca((short)uVar9,(short)uVar11,param_2._2_2_);
        iVar14 = CONCAT13(uStack24,uStack27);
        if (cVar3 != '\0') {
          pcVar10 = (char *)func_0x00000327();
          goto code_r0x000001c1;
        }
      }
      else {
        *(char *)(uVar9 + 0x56) = *(char *)(uVar9 + 0x56) + extraout_DH;
        iVar14 = extraout_ECX_00;
      }
    }
  } while( true );
}

