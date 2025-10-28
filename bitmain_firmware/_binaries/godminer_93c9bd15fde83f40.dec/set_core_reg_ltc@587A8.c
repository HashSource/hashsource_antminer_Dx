int __fastcall set_core_reg_ltc(int a1, int *a2)
{
  int v2; // r2
  int v3; // r5
  unsigned __int8 v4; // lr
  char v5; // r9
  unsigned __int8 *v6; // r11
  int v7; // r10
  char v8; // r8
  int v9; // r10
  char v10; // r7
  int v11; // lr
  int v12; // r9
  int v13; // r8
  int v14; // r6
  int v15; // r4
  unsigned int v16; // r12
  int v17; // r7
  int v18; // r3
  int v19; // r1
  char v20; // r12
  unsigned int v22; // [sp+0h] [bp-38h]
  __int16 v23; // [sp+2h] [bp-36h]
  _BYTE v24[2]; // [sp+4h] [bp-34h] BYREF
  _DWORD v25[2]; // [sp+6h] [bp-32h] BYREF
  char v26; // [sp+Eh] [bp-2Ah]

  if ( !*(_BYTE *)(a1 + 140) )
    return 4;
  v2 = 0;
  v3 = 1;
  v4 = *((_BYTE *)a2 + 12);
  v5 = *((_BYTE *)a2 + 14);
  v6 = (unsigned __int8 *)v25;
  v7 = *a2;
  LOBYTE(v23) = v23 & 0xF0 | *((_WORD *)a2 + 5) & 0xF;
  v24[0] = 85;
  v25[0] = 0;
  HIWORD(v22) = v23 & 0xF00F | (16 * v4);
  LOWORD(v22) = v7;
  HIBYTE(v22) = HIBYTE(v22) & 0xF | 0x40 | ((v5 & 1) << 7);
  v8 = *((_BYTE *)a2 + 15);
  v9 = 1;
  v10 = *((_BYTE *)a2 + 9);
  LOBYTE(v25[0]) = (16 * (a2[2] & 1)) & 0x1E | 0x41;
  v25[1] = bswap32(v22);
  v26 = 32 * (v8 & 3);
  v24[1] = -86;
  v11 = LOBYTE(v25[0]);
  BYTE2(v25[0]) = v10;
  v12 = 1;
  v13 = 1;
  v14 = 1;
  v15 = 64;
  v16 = 128;
  BYTE1(v25[0]) = 9;
  HIBYTE(v25[0]) = 60;
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
  v2 = 0;
  v16 = 128;
  ++v6;
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
    LOBYTE(v3) = 16;
  if ( !v9 )
    v20 = v3;
  if ( v18 != v13 )
    v20 |= 4u;
  if ( v12 )
    v20 |= 2u;
  if ( v17 != v14 )
    v20 |= 1u;
  v26 = v26 & 0xE0 | v20 & 0x1F;
  send_command_packet(a1, v24, 0xBu);
  return 0;
}
