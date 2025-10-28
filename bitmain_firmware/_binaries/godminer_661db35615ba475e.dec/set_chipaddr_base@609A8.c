int __fastcall set_chipaddr_base(int a1, int a2, int a3)
{
  int v5; // r3
  char v6; // t1
  int v7; // r6
  char v8; // r12
  int v9; // r3
  int v10; // lr
  int v11; // r12
  int v12; // r9
  int v13; // r8
  int v14; // r7
  int v15; // r4
  char v16; // r2
  int v17; // r0
  unsigned int v18; // r1
  unsigned __int8 *v19; // r10
  int v20; // r11
  int v23; // [sp+4h] [bp-34h]
  __int16 v24; // [sp+8h] [bp-30h] BYREF
  int v25; // [sp+Ah] [bp-2Eh] BYREF
  char v26; // [sp+Eh] [bp-2Ah]

  if ( !*(_BYTE *)(a1 + 128) )
    return 4;
  (*(void (**)(void))(a1 + 136))();
  usleep(0x2710u);
  v25 = 0;
  if ( a3 > 0 )
    --a2;
  v24 = -21931;
  v5 = 64;
  v26 = 0;
  LOBYTE(v25) = 64;
  if ( a3 > 0 )
    v5 = a2 + a3;
  BYTE1(v25) = 5;
  if ( a3 > 0 )
  {
    v23 = v5;
    while ( 1 )
    {
      usleep(0x2710u);
      v6 = *(_BYTE *)++a2;
      v7 = 8 * (BYTE1(v25) - 1);
      BYTE2(v25) = v6;
      if ( !v7 )
      {
        v8 = 28;
        v9 = 1;
LABEL_34:
        v8 |= 2u;
        goto LABEL_30;
      }
      v10 = 1;
      v11 = 0;
      v12 = (unsigned __int8)v25;
      v13 = 1;
      v14 = 1;
      v15 = 1;
      v16 = 1;
      v17 = 0;
      v18 = 128;
      v19 = (unsigned __int8 *)&v25;
      while ( 1 )
      {
        ++v17;
        LOBYTE(v9) = (v12 & v18) != 0 ? v16 ^ 1 : v16;
        v9 = (unsigned __int8)v9;
        ++v11;
        v16 = v10;
        v18 >>= 1;
        v20 = (unsigned __int8)(v9 ^ v15);
        if ( v17 == 8 )
          break;
        if ( v11 == v7 )
          goto LABEL_20;
LABEL_13:
        v15 = v14;
        v10 = v13;
        v14 = (unsigned __int8)v9;
        v13 = v20;
      }
      v17 = 0;
      v18 = 128;
      ++v19;
      if ( v7 != v11 )
        break;
LABEL_20:
      if ( v10 )
        v8 = 24;
      else
        v8 = 8;
      if ( v10 )
        LOBYTE(v10) = 16;
      if ( !v13 )
        v8 = v10;
      if ( (unsigned __int8)v9 != v15 )
        v8 |= 4u;
      if ( v14 )
        goto LABEL_34;
LABEL_30:
      if ( v9 )
        v8 |= 1u;
      v26 = v26 & 0xE0 | v8 & 0x1F;
      send_command_packet(a1, &v24, 7u);
      if ( v23 == a2 )
        return 0;
    }
    v12 = *v19;
    goto LABEL_13;
  }
  return 0;
}
