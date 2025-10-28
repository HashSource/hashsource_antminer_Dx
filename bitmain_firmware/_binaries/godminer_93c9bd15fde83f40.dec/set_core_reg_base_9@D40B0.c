int __fastcall set_core_reg_base_9(int a1, int *a2)
{
  int v2; // r3
  unsigned __int8 *v3; // r11
  char v4; // r7
  __int16 v5; // r6
  char v6; // lr
  char v7; // r1
  int v8; // r5
  int v9; // lr
  int v10; // r12
  int v11; // r10
  int v12; // r9
  int v13; // r8
  int v14; // r6
  int v15; // r4
  unsigned int v16; // r1
  int v17; // r7
  int v18; // r3
  int v19; // r2
  char v20; // r12
  _BYTE v22[2]; // [sp+4h] [bp-34h] BYREF
  int v23; // [sp+6h] [bp-32h] BYREF
  char v24; // [sp+Ah] [bp-2Eh]
  char v25; // [sp+Bh] [bp-2Dh]
  char v26; // [sp+Ch] [bp-2Ch]
  char v27; // [sp+Dh] [bp-2Bh]
  char v28; // [sp+Eh] [bp-2Ah]

  if ( !*(_BYTE *)(a1 + 140) )
    return 4;
  v2 = *a2;
  v23 = 0;
  v3 = (unsigned __int8 *)&v23;
  v4 = *((_BYTE *)a2 + 9);
  v5 = *((_WORD *)a2 + 5);
  v6 = (16 * (a2[2] & 1)) | 4;
  v7 = *((_BYTE *)a2 + 12);
  v27 = v2;
  v25 = BYTE2(v2);
  v8 = 1;
  LOBYTE(v23) = v6 & 0x1F | 0x40;
  v26 = BYTE1(v2);
  v9 = (unsigned __int8)v23;
  v10 = 0;
  v28 = 0;
  HIBYTE(v23) = v5;
  v11 = 1;
  v24 = v7;
  v12 = 1;
  v22[0] = 85;
  v13 = 1;
  BYTE2(v23) = v4;
  v14 = 1;
  v22[1] = -86;
  v15 = 64;
  BYTE1(v23) = 9;
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
  v10 = 0;
  v16 = 128;
  ++v3;
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
    LOBYTE(v8) = 16;
  if ( !v11 )
    v20 = v8;
  if ( v18 != v13 )
    v20 |= 4u;
  if ( v12 )
    v20 |= 2u;
  if ( v17 != v14 )
    v20 |= 1u;
  v28 = v28 & 0xE0 | v20 & 0x1F;
  send_command_packet(a1, v22, 0xBu);
  return 0;
}
