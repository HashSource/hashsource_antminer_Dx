int __fastcall set_chipaddr_base(int a1, int a2, int a3)
{
  char v5; // t1
  int v6; // r12
  char v7; // r4
  int v8; // r3
  int v9; // r5
  int v10; // r4
  int v11; // r9
  int v12; // r8
  int v13; // lr
  int v14; // r6
  char v15; // r2
  int v16; // r0
  unsigned int v17; // r1
  unsigned __int8 *v18; // r10
  int v19; // r11
  char v20; // r2
  char v21; // r3
  int v24; // [sp+4h] [bp-10h]
  __int16 v25; // [sp+8h] [bp-Ch] BYREF
  int v26; // [sp+Ah] [bp-Ah] BYREF
  char v27; // [sp+Eh] [bp-6h]

  if ( *(_BYTE *)(a1 + 128) )
  {
    (*(void (**)(void))(a1 + 136))();
    usleep(0x2710u);
    v26 = 0;
    if ( a3 > 0 )
      --a2;
    v27 = 0;
    v25 = -21931;
    LOWORD(v26) = 1344;
    if ( a3 <= 0 )
      return 0;
    v24 = a2 + a3;
    while ( 1 )
    {
      usleep(0x2710u);
      v5 = *(_BYTE *)++a2;
      v6 = 8 * (BYTE1(v26) - 1);
      BYTE2(v26) = v5;
      if ( !v6 )
      {
        v7 = 28;
        v8 = 1;
LABEL_33:
        v7 |= 2u;
        if ( !v8 )
          goto LABEL_34;
LABEL_30:
        v21 = v27;
        v7 |= 1u;
        goto LABEL_31;
      }
      v9 = 1;
      v10 = 0;
      v11 = (unsigned __int8)v26;
      v12 = 1;
      v13 = 1;
      v14 = 1;
      v15 = 1;
      v16 = 0;
      v17 = 128;
      v18 = (unsigned __int8 *)&v26;
      while ( 1 )
      {
        ++v16;
        LOBYTE(v8) = (v11 & v17) != 0 ? v15 ^ 1 : v15;
        v8 = (unsigned __int8)v8;
        v17 >>= 1;
        v15 = v9;
        v19 = (unsigned __int8)(v8 ^ v14);
        ++v10;
        if ( v16 == 8 )
          break;
        if ( v10 == v6 )
          goto LABEL_18;
LABEL_11:
        v14 = v13;
        v9 = v12;
        v13 = (unsigned __int8)v8;
        v12 = v19;
      }
      ++v18;
      v16 = 0;
      v17 = 128;
      if ( v6 != v10 )
        break;
LABEL_18:
      if ( v9 )
        v7 = 24;
      else
        v7 = 8;
      if ( v9 )
        v20 = 16;
      else
        v20 = 0;
      if ( !v12 )
        v7 = v20;
      if ( (unsigned __int8)v8 != v14 )
        v7 |= 4u;
      if ( v13 )
        goto LABEL_33;
      if ( (_BYTE)v8 )
        goto LABEL_30;
LABEL_34:
      v21 = v27;
LABEL_31:
      v27 = v21 & 0xE0 | v7 & 0x1F;
      send_command_packet(a1, &v25, 7u);
      if ( v24 == a2 )
        return 0;
    }
    v11 = *v18;
    goto LABEL_11;
  }
  return 4;
}
