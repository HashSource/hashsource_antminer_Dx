int __fastcall sync_get_chip_reg_ltc(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  int v7; // r2
  char v8; // r10
  char v9; // r7
  __int16 v10; // lr
  char v11; // r8
  int v12; // r6
  int v13; // r12
  int v14; // r11
  int v15; // r10
  int v16; // r9
  int v17; // r7
  int v18; // lr
  unsigned int v19; // r0
  unsigned __int8 *v20; // r5
  int v21; // r8
  int v22; // r3
  int v23; // r1
  char v24; // r12
  int v25; // r1
  _BYTE v30[2]; // [sp+18h] [bp-Ch] BYREF
  int v31; // [sp+1Ah] [bp-Ah] BYREF
  char v32; // [sp+1Eh] [bp-6h]

  if ( !*(_BYTE *)(a1 + 140) )
    return 4;
  v7 = 0;
  v8 = *(_BYTE *)(a2 + 8);
  v31 = 0;
  v9 = *(_BYTE *)(a2 + 9);
  v10 = *(_WORD *)(a2 + 10);
  v11 = 32 * (*(_BYTE *)(a2 + 15) & 3);
  v12 = 1;
  LOBYTE(v31) = (16 * (v8 & 1)) & 0x1D | 0x42;
  BYTE2(v31) = v9;
  v13 = (unsigned __int8)v31;
  HIBYTE(v31) = v10;
  v14 = 1;
  v30[0] = 85;
  v15 = 1;
  v32 = v11;
  v16 = 1;
  v17 = 1;
  v30[1] = -86;
  v18 = 32;
  BYTE1(v31) = 5;
  v19 = 128;
  v20 = (unsigned __int8 *)&v31;
  while ( 1 )
  {
    ++v7;
    v21 = (v13 & v19) != 0;
    v22 = (unsigned __int8)(v21 ^ v17);
    v19 >>= 1;
    v23 = (unsigned __int8)(v22 ^ v16);
    if ( v7 == 8 )
      break;
    if ( !--v18 )
      goto LABEL_8;
LABEL_4:
    v17 = v12;
    v16 = v15;
    v12 = v14;
    v15 = v22;
    v14 = v23;
  }
  --v18;
  v7 = 0;
  v19 = 128;
  ++v20;
  if ( v18 )
  {
    v13 = *v20;
    goto LABEL_4;
  }
LABEL_8:
  if ( v12 )
    v24 = 24;
  else
    v24 = 8;
  if ( v12 )
    LOBYTE(v12) = 16;
  if ( !v14 )
    v24 = v12;
  if ( v22 != v16 )
    v24 |= 4u;
  if ( v15 )
    v24 |= 2u;
  if ( v21 != v17 )
    v24 |= 1u;
  v32 = v32 & 0xE0 | v24 & 0x1F;
  send_command_packet(a1, v30, 7u);
  v25 = a3;
  if ( !*(_BYTE *)(a2 + 8) )
    v25 = 1;
  if ( *(_BYTE *)(a1 + 140) )
    return sub_58144(a1, v25, a4, a5, a6);
  else
    return 4;
}
