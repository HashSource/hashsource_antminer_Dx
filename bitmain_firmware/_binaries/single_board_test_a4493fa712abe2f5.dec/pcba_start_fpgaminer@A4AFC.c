int __fastcall pcba_start_fpgaminer(int a1, int a2)
{
  int v2; // r7
  _DWORD *v5; // r11
  void (__fastcall *v6)(int, _DWORD *); // r3
  int v7; // r9
  _BOOL4 *v8; // r6
  int v9; // r4
  _DWORD *v10; // r5
  unsigned int v11; // r3
  unsigned int v12; // r2
  _BOOL4 v13; // r3
  bool v14; // cc
  _DWORD v17[2]; // [sp+10h] [bp-14h] BYREF
  int v18; // [sp+18h] [bp-Ch]
  int v19; // [sp+1Ch] [bp-8h]

  v2 = *(_DWORD *)(a1 + 180);
  v17[0] = -1425997824;
  v17[1] = 0;
  v18 = 1;
  v5 = calloc(v2, 8u);
  v19 = 0;
  v6 = *(void (__fastcall **)(int, _DWORD *))(a1 + 140);
  HIWORD(v18) = 252;
  v6(a1, v17);
  usleep((__useconds_t)&loc_30D40);
  (*(void (__fastcall **)(int))(a2 + 16))(115200);
  while ( 1 )
  {
    while ( 1 )
    {
      sleep(1u);
      if ( sub_A2D1C(a1, 252, v2, (int)v5) >= v2 )
        break;
      printf("%s[%d] is waiting\n", "pcba_start_fpgaminer", 1042);
    }
    if ( v2 > 0 )
    {
      v8 = fpga_type;
      v9 = 0;
      v7 = 0;
      v10 = v5;
      while ( 1 )
      {
        printf("%s chip%d reg_data %08x\n", "pcba_start_fpgaminer", v9, v10[1]);
        v11 = bswap32(v10[1]);
        v12 = HIBYTE(v11) & 0x7F;
        v13 = (v11 & 0x80000000) == 0;
        v14 = v12 > 0x7F;
        if ( v12 != 127 )
          v14 = v12 - 1 > 1;
        *v8++ = v13;
        if ( !v14 )
          break;
        if ( v12 )
          goto LABEL_15;
LABEL_11:
        ++v9;
        v10 += 2;
        if ( v2 == v9 )
          goto LABEL_12;
      }
      if ( v12 == 127 )
        goto LABEL_11;
      ++v7;
      if ( v12 <= 2 )
        goto LABEL_11;
LABEL_15:
      printf("%s unknow program type\n", "pcba_program_type_check");
      goto LABEL_11;
    }
    v7 = 0;
LABEL_12:
    if ( v2 == v7 )
      break;
    printf("%s[%d] starting %d\n", "pcba_start_fpgaminer", 1065, v7);
  }
  printf("%s[%d] success\n", "pcba_start_fpgaminer", 1059);
  return 1;
}
