int __fastcall set_core_reg_base_9(int a1, int *a2)
{
  int v2; // r3
  unsigned __int8 *v3; // r11
  char v4; // lr
  __int16 v5; // r12
  char v6; // r5
  char v7; // r1
  int v8; // r7
  int v9; // r5
  int v10; // r4
  int v11; // r10
  int v12; // r9
  int v13; // r8
  int v14; // r12
  int v15; // r6
  unsigned int v16; // r1
  int v17; // lr
  int v18; // r3
  int v19; // r2
  char v20; // r4
  char v21; // r2
  _BYTE v23[2]; // [sp+4h] [bp-34h] BYREF
  int v24; // [sp+6h] [bp-32h] BYREF
  char v25; // [sp+Ah] [bp-2Eh]
  char v26; // [sp+Bh] [bp-2Dh]
  char v27; // [sp+Ch] [bp-2Ch]
  char v28; // [sp+Dh] [bp-2Bh]
  char v29; // [sp+Eh] [bp-2Ah]

  if ( !*(_BYTE *)(a1 + 128) )
    return 4;
  v2 = *a2;
  v24 = 0;
  v3 = (unsigned __int8 *)&v24;
  v4 = *((_BYTE *)a2 + 9);
  v5 = *((_WORD *)a2 + 5);
  v6 = (16 * (a2[2] & 1)) | 4;
  v7 = *((_BYTE *)a2 + 12);
  v28 = v2;
  v26 = BYTE2(v2);
  v8 = 1;
  LOBYTE(v24) = v6 & 0x1F | 0x40;
  v27 = BYTE1(v2);
  v9 = (unsigned __int8)v24;
  v10 = 0;
  v29 = 0;
  HIBYTE(v24) = v5;
  v11 = 1;
  v25 = v7;
  v12 = 1;
  v23[0] = 85;
  v13 = 1;
  BYTE2(v24) = v4;
  v14 = 1;
  v23[1] = -86;
  v15 = 64;
  BYTE1(v24) = 9;
  v16 = 128;
  while ( 1 )
  {
    ++v10;
    v17 = (v9 & v16) != 0;
    v18 = (unsigned __int8)(v17 ^ v14);
    v16 >>= 1;
    v19 = (unsigned __int8)(v18 ^ v13);
    if ( v10 == 8 )
      break;
    if ( !--v15 )
      goto LABEL_8;
LABEL_4:
    v14 = v8;
    v13 = v12;
    v8 = v11;
    v12 = v18;
    v11 = v19;
  }
  --v15;
  ++v3;
  v10 = 0;
  v16 = 128;
  if ( v15 )
  {
    v9 = *v3;
    goto LABEL_4;
  }
LABEL_8:
  if ( v8 )
    v20 = 24;
  else
    v20 = 8;
  if ( v8 )
    v21 = 16;
  else
    v21 = 0;
  if ( !v11 )
    v20 = v21;
  if ( v18 != v13 )
    v20 |= 4u;
  if ( v12 )
    v20 |= 2u;
  if ( v17 != v14 )
    v20 |= 1u;
  v29 = v29 & 0xE0 | v20 & 0x1F;
  send_command_packet(a1, v23, 0xBu);
  return 0;
}
