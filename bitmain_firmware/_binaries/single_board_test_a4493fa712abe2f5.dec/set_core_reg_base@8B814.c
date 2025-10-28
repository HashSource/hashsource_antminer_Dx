int __fastcall set_core_reg_base(int a1, int a2)
{
  int v2; // r2
  char v3; // r8
  unsigned int v4; // r3
  unsigned __int8 *v5; // r11
  __int16 v6; // lr
  char v7; // r12
  char v8; // r1
  int v9; // r7
  int v10; // r10
  int v11; // r5
  int v12; // r9
  int v13; // r8
  int v14; // r12
  int v15; // r6
  unsigned int v16; // r4
  int v17; // lr
  int v18; // r3
  int v19; // r1
  char v20; // r4
  char v21; // r2
  _BYTE v23[2]; // [sp+4h] [bp-34h] BYREF
  int v24; // [sp+6h] [bp-32h] BYREF
  char v25; // [sp+Ah] [bp-2Eh]
  unsigned int v26; // [sp+Bh] [bp-2Dh]
  char v27; // [sp+Fh] [bp-29h]

  if ( !*(_BYTE *)(a1 + 128) )
    return 4;
  v2 = 0;
  v3 = *(_BYTE *)(a2 + 8);
  v24 = 0;
  v4 = *(_DWORD *)a2;
  v5 = (unsigned __int8 *)&v24;
  v6 = *(_WORD *)(a2 + 10);
  v7 = *(_BYTE *)(a2 + 9);
  v8 = *(_BYTE *)(a2 + 12);
  v9 = 1;
  LOBYTE(v24) = (16 * (v3 & 1)) & 0x1B | 0x44;
  v10 = 1;
  v27 = 0;
  v11 = (unsigned __int8)v24;
  v26 = bswap32(v4);
  v12 = 1;
  BYTE2(v24) = v7;
  v13 = 1;
  v23[0] = 85;
  v14 = 1;
  v23[1] = -86;
  v15 = 72;
  HIBYTE(v24) = v6;
  v16 = 128;
  v25 = v8;
  BYTE1(v24) = 10;
  while ( 1 )
  {
    ++v2;
    v17 = (v11 & v16) != 0;
    v18 = (unsigned __int8)(v17 ^ v14);
    v16 >>= 1;
    v19 = (unsigned __int8)(v18 ^ v13);
    if ( v2 == 8 )
      break;
    if ( !--v15 )
      goto LABEL_8;
LABEL_4:
    v14 = v9;
    v13 = v12;
    v9 = v10;
    v12 = v18;
    v10 = v19;
  }
  --v15;
  ++v5;
  v2 = 0;
  v16 = 128;
  if ( v15 )
  {
    v11 = *v5;
    goto LABEL_4;
  }
LABEL_8:
  if ( v9 )
    v20 = 24;
  else
    v20 = 8;
  if ( v9 )
    v21 = 16;
  else
    v21 = 0;
  if ( !v10 )
    v20 = v21;
  if ( v18 != v13 )
    v20 |= 4u;
  if ( v12 )
    v20 |= 2u;
  if ( v17 != v14 )
    v20 |= 1u;
  v27 = v27 & 0xE0 | v20 & 0x1F;
  send_command_packet(a1, v23, 0xCu);
  return 0;
}
