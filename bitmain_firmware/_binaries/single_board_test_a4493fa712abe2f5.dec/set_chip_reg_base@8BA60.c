int __fastcall set_chip_reg_base(int a1, int a2)
{
  int v2; // r2
  int v3; // r7
  int v4; // r10
  int v5; // r9
  char v6; // r12
  unsigned int v7; // r4
  int v8; // r8
  __int16 v9; // r1
  int v10; // r12
  int v11; // r5
  unsigned __int8 *v12; // r11
  int v13; // r6
  unsigned int v14; // r4
  int v15; // lr
  int v16; // r3
  int v17; // r1
  char v18; // r4
  char v19; // r2
  _BYTE v21[2]; // [sp+4h] [bp-34h] BYREF
  _DWORD v22[2]; // [sp+6h] [bp-32h] BYREF
  char v23; // [sp+Eh] [bp-2Ah]

  if ( !*(_BYTE *)(a1 + 128) )
    return 4;
  v2 = 0;
  v3 = 1;
  v4 = 1;
  v22[0] = 0;
  v5 = 1;
  v6 = *(_BYTE *)(a2 + 8);
  v7 = *(_DWORD *)a2;
  v8 = 1;
  v9 = *(_WORD *)(a2 + 10);
  v22[1] = bswap32(v7);
  v22[0] = (16 * (v6 & 1)) & 0x1E | 0x41;
  v10 = 1;
  v21[0] = 85;
  v11 = LOBYTE(v22[0]);
  v23 = 0;
  v12 = (unsigned __int8 *)v22;
  HIBYTE(v22[0]) = v9;
  v13 = 64;
  v21[1] = -86;
  v14 = 128;
  BYTE1(v22[0]) = 9;
  while ( 1 )
  {
    ++v2;
    v15 = (v11 & v14) != 0;
    v16 = (unsigned __int8)(v15 ^ v10);
    v14 >>= 1;
    v17 = (unsigned __int8)(v16 ^ v8);
    if ( v2 == 8 )
      break;
    if ( !--v13 )
      goto LABEL_8;
LABEL_4:
    v10 = v3;
    v8 = v5;
    v3 = v4;
    v5 = v16;
    v4 = v17;
  }
  --v13;
  ++v12;
  v2 = 0;
  v14 = 128;
  if ( v13 )
  {
    v11 = *v12;
    goto LABEL_4;
  }
LABEL_8:
  if ( v3 )
    v18 = 24;
  else
    v18 = 8;
  if ( v3 )
    v19 = 16;
  else
    v19 = 0;
  if ( !v4 )
    v18 = v19;
  if ( v16 != v8 )
    v18 |= 4u;
  if ( v5 )
    v18 |= 2u;
  if ( v15 != v10 )
    v18 |= 1u;
  v23 = v23 & 0xE0 | v18 & 0x1F;
  send_command_packet(a1, v21, 0xBu);
  return 0;
}
