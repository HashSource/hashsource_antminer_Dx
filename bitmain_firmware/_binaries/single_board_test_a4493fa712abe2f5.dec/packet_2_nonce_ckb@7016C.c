int __fastcall packet_2_nonce_ckb(
        unsigned int *a1,
        _BYTE *a2,
        int a3,
        _BYTE *a4,
        _DWORD *a5,
        signed int *a6,
        _DWORD *a7)
{
  unsigned int v8; // r4
  int v10; // r1
  _DWORD *v12; // r7
  char *v14; // r0
  __int64 v15; // r2
  int v16; // r1
  int v17; // r2
  int v18; // r3
  unsigned __int8 *v19; // r8
  signed int v20; // r0
  int v21; // r6
  int v22; // r10
  int v23; // r9
  int v24; // lr
  int v25; // r7
  int v26; // r1
  int v27; // r4
  unsigned int v28; // r0
  int v29; // r11
  int v30; // r12
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

  if ( (char)a2[9] >= 0 )
    return 1;
  v8 = a1[150];
  v10 = (unsigned __int8)a2[8];
  v12 = (_DWORD *)(a3 + 48);
  v14 = (char *)(a3 + 16);
  v15 = *(_QWORD *)(v8 + 8 * v10);
  v41 = v12;
  *(_QWORD *)a3 = v15;
  *a7 = v15;
  strcpy(v14, (const char *)(v8 + 32 * (v10 + 64)));
  v16 = *(_DWORD *)(v8 + 48 * (unsigned __int8)a2[8] + 10276);
  v17 = *(_DWORD *)(v8 + 48 * (unsigned __int8)a2[8] + 10280);
  v18 = *(_DWORD *)(v8 + 48 * (unsigned __int8)a2[8] + 10284);
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(v8 + 48 * (unsigned __int8)a2[8] + 10272);
  v12[1] = v16;
  v12[2] = v17;
  *(_DWORD *)(a3 + 60) = v18;
  v19 = a2 + 2;
  *(_DWORD *)(a3 + 59) = *(_DWORD *)(a2 + 2);
  *(_BYTE *)(a3 + 63) = a2[6];
  *(_BYTE *)(a3 + 64) = a2[7] & 0x7F;
  *(_BYTE *)(a3 + 65) = a2[8];
  v20 = (unsigned __int8)a2[2] / a1[56];
  if ( v20 >= (int)a1[45] )
  {
    v39 = rand();
    sub_F73DC(v39, a1[45]);
    v20 = v40;
  }
  v21 = 1;
  v22 = 1;
  v23 = 1;
  v24 = 1;
  v25 = 1;
  *a6 = v20;
  v26 = 59;
  *(_DWORD *)(a3 + 8) = v20;
  v27 = 0;
  v28 = 128;
  *(_DWORD *)(a3 + 12) = a2[6] & 0x1F;
  v29 = *v19;
  while ( 1 )
  {
    ++v27;
    v30 = (v29 & v28) != 0;
    v31 = (unsigned __int8)(v30 ^ v25);
    v28 >>= 1;
    v32 = (unsigned __int8)(v31 ^ v24);
    if ( v27 == 8 )
      break;
    if ( !--v26 )
      goto LABEL_11;
LABEL_7:
    v25 = v21;
    v24 = v23;
    v21 = v22;
    v23 = v31;
    v22 = v32;
  }
  --v26;
  ++v19;
  v27 = 0;
  v28 = 128;
  if ( v26 )
  {
    v29 = *v19;
    goto LABEL_7;
  }
LABEL_11:
  if ( v21 )
    v33 = 24;
  else
    v33 = 8;
  if ( v21 )
    v34 = 16;
  else
    v34 = 0;
  if ( !v22 )
    v33 = v34;
  if ( v31 != v24 )
    v33 |= 4u;
  if ( v23 )
    v33 |= 2u;
  if ( v30 != v25 )
    v33 |= 1u;
  v35 = a2[9] & 0x1F;
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
