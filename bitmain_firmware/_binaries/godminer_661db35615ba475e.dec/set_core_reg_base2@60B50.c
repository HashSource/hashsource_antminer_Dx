int __fastcall set_core_reg_base2(int a1, int a2)
{
  char v2; // r7
  char v3; // r6
  char v4; // r3
  char v5; // r7
  __int16 v6; // r12
  unsigned int v7; // r2
  unsigned __int8 *v8; // r0
  __int16 v9; // r12
  void *v10; // r9
  int v11; // r1
  int v12; // lr
  int v13; // r2
  unsigned __int8 *v14; // r8
  int v15; // r10
  int v16; // r7
  int v17; // r6
  int v18; // r4
  int v19; // r11
  int v20; // r12
  unsigned int v21; // r0
  int v22; // r5
  int v23; // r3
  int v24; // r1
  char v25; // r2
  _BYTE v28[2]; // [sp+8h] [bp-38h] BYREF
  int v29; // [sp+Ah] [bp-36h]
  _BYTE v30[6]; // [sp+Eh] [bp-32h]
  char v31; // [sp+14h] [bp-2Ch]

  if ( !*(_BYTE *)(a1 + 128) )
    return 4;
  v2 = *(_BYTE *)(a2 + 8);
  v29 = 0;
  v3 = *(_BYTE *)(a2 + 9);
  v4 = (16 * (v2 & 1)) | 4;
  v5 = *(_BYTE *)(a2 + 12);
  v6 = __rev16(*(unsigned __int16 *)(a2 + 10));
  v7 = bswap32(*(_DWORD *)a2);
  v31 = 0;
  LOBYTE(v29) = v4 & 0x1F | 0x40;
  *(_WORD *)v30 = v6;
  *(_DWORD *)&v30[2] = v7;
  BYTE2(v29) = v3;
  HIBYTE(v29) = v5;
  v28[1] = -86;
  BYTE1(v29) = 11;
  v28[0] = 85;
  v8 = (unsigned __int8 *)calloc(0xCu, 1u);
  v9 = *(_WORD *)&v30[4];
  v10 = v8;
  v11 = *(_DWORD *)v30;
  v12 = 1;
  v13 = 0;
  v14 = v8;
  v15 = 1;
  v16 = 1;
  *(_DWORD *)v8 = v29;
  *((_DWORD *)v8 + 1) = v11;
  v17 = 1;
  *((_WORD *)v8 + 4) = v9;
  v18 = 1;
  v19 = *v8;
  v20 = 96;
  v21 = 128;
  while ( 1 )
  {
    ++v13;
    v22 = (v19 & v21) != 0;
    v23 = (unsigned __int8)(v22 ^ v18);
    v21 >>= 1;
    v24 = (unsigned __int8)(v23 ^ v17);
    if ( v13 == 8 )
      break;
    if ( !--v20 )
      goto LABEL_8;
LABEL_4:
    v18 = v12;
    v17 = v16;
    v12 = v15;
    v16 = v23;
    v15 = v24;
  }
  --v20;
  v13 = 0;
  v21 = 128;
  ++v14;
  if ( v20 )
  {
    v19 = *v14;
    goto LABEL_4;
  }
LABEL_8:
  if ( v12 )
    v25 = 24;
  else
    v25 = 8;
  if ( v12 )
    LOBYTE(v12) = 16;
  if ( !v15 )
    v25 = v12;
  if ( v23 != v17 )
    v25 |= 4u;
  if ( v16 )
    v25 |= 2u;
  if ( v22 != v18 )
    v25 |= 1u;
  v31 = v31 & 0xE0 | v25 & 0x1F;
  free(v10);
  send_command_packet(a1, v28, 0xDu);
  return 0;
}
