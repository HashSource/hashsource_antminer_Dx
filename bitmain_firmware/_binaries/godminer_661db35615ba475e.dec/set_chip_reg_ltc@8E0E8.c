int __fastcall set_chip_reg_ltc(int a1, int a2)
{
  int v2; // r2
  char v3; // r4
  int v4; // r5
  int v5; // r10
  int v6; // r9
  char v7; // lr
  __int16 v8; // r4
  char v9; // r7
  int v10; // r8
  int v11; // lr
  int v12; // r6
  int v13; // r4
  unsigned int v14; // r12
  unsigned __int8 *v15; // r11
  int v16; // r7
  int v17; // r3
  int v18; // r1
  char v19; // r12
  _BYTE v21[2]; // [sp+4h] [bp-34h] BYREF
  _DWORD v22[2]; // [sp+6h] [bp-32h] BYREF
  char v23; // [sp+Eh] [bp-2Ah]

  if ( !*(_BYTE *)(a1 + 128) )
    return 4;
  v2 = 0;
  v3 = *(_BYTE *)(a2 + 8);
  v22[0] = 0;
  v4 = 1;
  v5 = 1;
  v6 = 1;
  v7 = (16 * (v3 & 1)) | 1;
  v8 = *(_WORD *)(a2 + 10);
  v9 = 32 * (*(_BYTE *)(a2 + 15) & 3);
  v22[1] = bswap32(*(_DWORD *)a2);
  v22[0] = v7 & 0x1F | 0x40;
  v10 = 1;
  HIBYTE(v22[0]) = v8;
  v11 = LOBYTE(v22[0]);
  v21[0] = 85;
  v12 = 1;
  v23 = v9;
  v13 = 64;
  v14 = 128;
  v21[1] = -86;
  v15 = (unsigned __int8 *)v22;
  BYTE1(v22[0]) = 9;
  while ( 1 )
  {
    ++v2;
    v16 = (v11 & v14) != 0;
    v17 = (unsigned __int8)(v16 ^ v12);
    v14 >>= 1;
    v18 = (unsigned __int8)(v17 ^ v10);
    if ( v2 == 8 )
      break;
    if ( !--v13 )
      goto LABEL_8;
LABEL_4:
    v12 = v4;
    v10 = v6;
    v4 = v5;
    v6 = v17;
    v5 = v18;
  }
  --v13;
  v2 = 0;
  v14 = 128;
  ++v15;
  if ( v13 )
  {
    v11 = *v15;
    goto LABEL_4;
  }
LABEL_8:
  if ( v4 )
    v19 = 24;
  else
    v19 = 8;
  if ( v4 )
    LOBYTE(v4) = 16;
  if ( !v5 )
    v19 = v4;
  if ( v17 != v10 )
    v19 |= 4u;
  if ( v6 )
    v19 |= 2u;
  if ( v16 != v12 )
    v19 |= 1u;
  v23 = v23 & 0xE0 | v19 & 0x1F;
  send_command_packet(a1, v21, 0xBu);
  return 0;
}
