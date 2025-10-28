int __fastcall set_core_reg_ltc(int a1, int *a2)
{
  int v2; // r2
  int v3; // r7
  unsigned __int8 v4; // r5
  char v5; // r9
  unsigned __int8 *v6; // r11
  int v7; // r10
  char v8; // r8
  int v9; // r10
  char v10; // lr
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
  unsigned int v23; // [sp+0h] [bp-38h]
  __int16 v24; // [sp+2h] [bp-36h]
  _BYTE v25[2]; // [sp+4h] [bp-34h] BYREF
  _DWORD v26[2]; // [sp+6h] [bp-32h] BYREF
  char v27; // [sp+Eh] [bp-2Ah]

  if ( !*(_BYTE *)(a1 + 128) )
    return 4;
  v2 = 0;
  v3 = 1;
  v4 = *((_BYTE *)a2 + 12);
  v5 = *((_BYTE *)a2 + 14);
  v6 = (unsigned __int8 *)v26;
  v7 = *a2;
  LOBYTE(v24) = v24 & 0xF0 | *((_WORD *)a2 + 5) & 0xF;
  v25[0] = 85;
  v26[0] = 0;
  HIWORD(v23) = v24 & 0xF00F | (16 * v4);
  LOWORD(v23) = v7;
  HIBYTE(v23) = HIBYTE(v23) & 0xF | 0x40 | ((v5 & 1) << 7);
  v8 = *((_BYTE *)a2 + 15);
  v9 = 1;
  v10 = *((_BYTE *)a2 + 9);
  LOBYTE(v26[0]) = (16 * (a2[2] & 1)) & 0x1E | 0x41;
  v26[1] = bswap32(v23);
  v27 = 32 * (v8 & 3);
  v25[1] = -86;
  v11 = LOBYTE(v26[0]);
  BYTE2(v26[0]) = v10;
  v12 = 1;
  v13 = 1;
  v14 = 1;
  v15 = 64;
  v16 = 128;
  BYTE1(v26[0]) = 9;
  HIBYTE(v26[0]) = 60;
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
    v14 = v3;
    v13 = v12;
    v3 = v9;
    v12 = v18;
    v9 = v19;
  }
  --v15;
  ++v6;
  v2 = 0;
  v16 = 128;
  if ( v15 )
  {
    v11 = *v6;
    goto LABEL_4;
  }
LABEL_8:
  if ( v3 )
    v20 = 24;
  else
    v20 = 8;
  if ( v3 )
    v21 = 16;
  else
    v21 = 0;
  if ( !v9 )
    v20 = v21;
  if ( v18 != v13 )
    v20 |= 4u;
  if ( v12 )
    v20 |= 2u;
  if ( v17 != v14 )
    v20 |= 1u;
  v27 = v27 & 0xE0 | v20 & 0x1F;
  send_command_packet(a1, v25, 0xBu);
  return 0;
}
