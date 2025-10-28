int __fastcall packet_2_nonce_ckb2(unsigned int *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  unsigned int v8; // r4
  int v10; // r1
  char *v13; // r0
  __int64 v14; // r2
  _DWORD *v15; // r4
  int v16; // r0
  int v17; // r1
  int v18; // r3
  signed int v19; // r0
  int v20; // r7
  int v21; // r9
  int v22; // r8
  int v23; // lr
  int v24; // r12
  int v25; // r1
  int v26; // r4
  unsigned int v27; // r0
  unsigned __int8 *v28; // r10
  int v29; // r11
  int v30; // r6
  int v31; // r3
  int v32; // r2
  int v33; // r1
  int v34; // r2
  int v35; // r2
  int v36; // r4
  int v37; // r1
  int v38; // r2
  int v39; // r0
  signed int v40; // r1
  _DWORD *v41; // [sp+0h] [bp-Ch]

  if ( *(char *)(a2 + 11) >= 0 )
    return 1;
  v8 = a1[150];
  v10 = *(unsigned __int8 *)(a2 + 10);
  v41 = (_DWORD *)(a3 + 48);
  v13 = (char *)(a3 + 16);
  v14 = *(_QWORD *)(v8 + 8 * v10);
  *(_QWORD *)a3 = v14;
  *a7 = v14;
  strcpy(v13, (const char *)(v8 + 32 * (v10 + 32)));
  v15 = (_DWORD *)(v8 + 48 * *(unsigned __int8 *)(a2 + 10) + 5152);
  v16 = v15[1];
  v17 = v15[2];
  v18 = v15[3];
  *(_DWORD *)(a3 + 48) = *v15;
  v41[1] = v16;
  v41[2] = v17;
  v41[3] = v18;
  *(_DWORD *)(a3 + 58) = *(_DWORD *)(a2 + 3);
  *(_WORD *)(a3 + 62) = *(_WORD *)(a2 + 7);
  *(_BYTE *)(a3 + 64) = *(_BYTE *)(a2 + 9);
  *(_BYTE *)(a3 + 65) = *(_BYTE *)(a2 + 10) & 0x7F;
  v19 = *(unsigned __int8 *)(a2 + 3) / a1[56];
  if ( v19 >= (int)a1[45] )
  {
    v39 = rand();
    sub_F73DC(v39, a1[45]);
    v19 = v40;
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
  ++v28;
  v26 = 0;
  v27 = 128;
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
    v34 = 16;
  else
    v34 = 0;
  if ( !v21 )
    v33 = v34;
  if ( v31 != v23 )
    v33 |= 4u;
  if ( v22 )
    v33 |= 2u;
  if ( v30 != v24 )
    v33 |= 1u;
  v35 = *(_BYTE *)(a2 + 11) & 0x1F;
  if ( v35 == v33 )
  {
    v36 = v41[1];
    v37 = v41[2];
    v38 = v41[3];
    *a5 = *v41;
    a5[1] = v36;
    a5[3] = v38;
    a5[2] = v37;
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v33, v35);
    return 2;
  }
}
