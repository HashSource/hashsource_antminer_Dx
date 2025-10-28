int __fastcall packet_2_nonce_ckb2(unsigned int *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  unsigned int v9; // r6
  int v12; // r1
  char *v13; // r0
  int v14; // r3
  int v15; // r2
  int v16; // r0
  int v17; // r1
  int v18; // r3
  signed int v19; // r0
  int v20; // lr
  int v21; // r9
  int v22; // r8
  int v23; // r7
  int v24; // r6
  int v25; // r1
  int v26; // r12
  unsigned int v27; // r0
  unsigned __int8 *v28; // r10
  int v29; // r11
  int v30; // r5
  int v31; // r3
  int v32; // r2
  int v33; // r1
  int v34; // r2
  int v35; // r12
  int v36; // r1
  int v37; // r2
  int v38; // r0
  signed int v39; // r1
  _DWORD *v40; // [sp+0h] [bp-30h]

  if ( *(char *)(a2 + 11) >= 0 )
    return 1;
  v9 = a1[156];
  v12 = *(unsigned __int8 *)(a2 + 10);
  v13 = (char *)(a3 + 16);
  v14 = *(_DWORD *)(v9 + 8 * v12);
  v40 = (_DWORD *)(a3 + 48);
  v15 = *(_DWORD *)(v9 + 8 * v12 + 4);
  *(_DWORD *)a3 = v14;
  *(_DWORD *)(a3 + 4) = v15;
  *a7 = v14;
  strcpy(v13, (const char *)(v9 + 32 * (v12 + 32)));
  v16 = *(_DWORD *)(v9 + 48 * *(unsigned __int8 *)(a2 + 10) + 5156);
  v17 = *(_DWORD *)(v9 + 48 * *(unsigned __int8 *)(a2 + 10) + 5160);
  v18 = *(_DWORD *)(v9 + 48 * *(unsigned __int8 *)(a2 + 10) + 5164);
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(v9 + 48 * *(unsigned __int8 *)(a2 + 10) + 5152);
  *(_DWORD *)(a3 + 56) = v17;
  *(_DWORD *)(a3 + 60) = v18;
  *(_DWORD *)(a3 + 52) = v16;
  *(_DWORD *)(a3 + 58) = *(_DWORD *)(a2 + 3);
  *(_WORD *)(a3 + 62) = *(_WORD *)(a2 + 7);
  *(_BYTE *)(a3 + 64) = *(_BYTE *)(a2 + 9);
  *(_BYTE *)(a3 + 65) = *(_BYTE *)(a2 + 10) & 0x7F;
  v19 = *(unsigned __int8 *)(a2 + 3) / a1[60];
  if ( v19 >= (int)a1[48] )
  {
    v38 = rand();
    sub_16E4B4(v38, a1[48]);
    v19 = v39;
  }
  v20 = 1;
  v21 = 1;
  v22 = 1;
  v23 = 1;
  *a6 = v19;
  v24 = 1;
  *(_DWORD *)(a3 + 8) = v19;
  v25 = 75;
  v26 = 0;
  v27 = 128;
  *(_DWORD *)(a3 + 12) = (*(_BYTE *)(a2 + 8) & 7) + 4 * (*(unsigned __int8 *)(a2 + 8) >> 3);
  v28 = (unsigned __int8 *)(a2 + 2);
  v29 = *(unsigned __int8 *)(a2 + 2);
  while ( 1 )
  {
    ++v26;
    v30 = (v29 & v27) != 0;
    v31 = (unsigned __int8)(v30 ^ v24);
    v27 >>= 1;
    v32 = (unsigned __int8)(v31 ^ v23);
    if ( v26 == 8 )
      break;
    if ( !--v25 )
      goto LABEL_11;
LABEL_7:
    v24 = v20;
    v23 = v22;
    v20 = v21;
    v22 = v31;
    v21 = v32;
  }
  --v25;
  v26 = 0;
  v27 = 128;
  ++v28;
  if ( v25 )
  {
    v29 = *v28;
    goto LABEL_7;
  }
LABEL_11:
  if ( v20 )
    v33 = 24;
  else
    v33 = 8;
  if ( v20 )
    v20 = 16;
  if ( !v21 )
    v33 = v20;
  if ( v31 != v23 )
    v33 |= 4u;
  v34 = *(_BYTE *)(a2 + 11) & 0x1F;
  if ( v31 != v23 )
    v33 = (unsigned __int8)v33;
  if ( v22 )
    v33 = (unsigned __int8)v33 | 2;
  if ( v30 != v24 )
    v33 = (unsigned __int8)v33 | 1;
  if ( v34 == v33 )
  {
    v35 = v40[1];
    v36 = v40[2];
    v37 = v40[3];
    *a5 = *v40;
    a5[1] = v35;
    a5[3] = v37;
    a5[2] = v36;
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v33, v34);
    return 2;
  }
}
