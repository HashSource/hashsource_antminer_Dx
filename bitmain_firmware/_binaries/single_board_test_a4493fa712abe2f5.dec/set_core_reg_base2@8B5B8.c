int __fastcall set_core_reg_base2(int a1, int a2)
{
  char v2; // lr
  char v3; // r12
  char v4; // r3
  char v5; // lr
  unsigned int v6; // r2
  __int16 v7; // r5
  int v8; // r5
  int v9; // r10
  __int16 v10; // r6
  unsigned __int8 *v11; // r9
  int v12; // r1
  int v13; // r2
  unsigned __int8 *v14; // r8
  int v15; // lr
  int v16; // r12
  int v17; // r4
  unsigned int v18; // r0
  int v19; // r6
  int v20; // r11
  int v21; // r7
  int v22; // r3
  int v23; // r1
  char v24; // r2
  char v25; // r1
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
  v6 = bswap32(*(_DWORD *)a2);
  v7 = __rev16(*(unsigned __int16 *)(a2 + 10));
  v31 = 0;
  LOBYTE(v29) = v4 & 0x1F | 0x40;
  *(_WORD *)v30 = v7;
  v8 = 1;
  *(_DWORD *)&v30[2] = v6;
  v9 = 1;
  BYTE2(v29) = v3;
  HIBYTE(v29) = v5;
  v28[1] = -86;
  BYTE1(v29) = 11;
  v28[0] = 85;
  v10 = HIWORD(v6);
  v11 = (unsigned __int8 *)calloc(0xCu, 1u);
  v12 = *(_DWORD *)v30;
  v13 = 0;
  v14 = v11;
  v15 = 1;
  v16 = 1;
  v17 = 96;
  *(_DWORD *)v11 = v29;
  *((_DWORD *)v11 + 1) = v12;
  v18 = 128;
  *((_WORD *)v11 + 4) = v10;
  v19 = 1;
  v20 = *v11;
  while ( 1 )
  {
    ++v13;
    v21 = (v20 & v18) != 0;
    v22 = (unsigned __int8)(v21 ^ v19);
    v18 >>= 1;
    v23 = (unsigned __int8)(v22 ^ v16);
    if ( v13 == 8 )
      break;
    if ( !--v17 )
      goto LABEL_8;
LABEL_4:
    v19 = v8;
    v16 = v15;
    v8 = v9;
    v15 = v22;
    v9 = v23;
  }
  --v17;
  ++v14;
  v13 = 0;
  v18 = 128;
  if ( v17 )
  {
    v20 = *v14;
    goto LABEL_4;
  }
LABEL_8:
  if ( v8 )
    v24 = 24;
  else
    v24 = 8;
  if ( v8 )
    v25 = 16;
  else
    v25 = 0;
  if ( !v9 )
    v24 = v25;
  if ( v22 != v16 )
    v24 |= 4u;
  if ( v15 )
    v24 |= 2u;
  if ( v21 != v19 )
    v24 |= 1u;
  v31 = v31 & 0xE0 | v24 & 0x1F;
  free(v11);
  send_command_packet(a1, v28, 0xDu);
  return 0;
}
