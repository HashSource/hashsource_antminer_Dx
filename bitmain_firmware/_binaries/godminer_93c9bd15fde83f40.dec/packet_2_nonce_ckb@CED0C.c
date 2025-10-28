int __fastcall packet_2_nonce_ckb(
        unsigned int *a1,
        _BYTE *a2,
        int a3,
        _BYTE *a4,
        _DWORD *a5,
        signed int *a6,
        _DWORD *a7)
{
  unsigned int v9; // r5
  int v12; // r1
  char *v13; // r0
  int v14; // r3
  int v15; // r2
  int v16; // r1
  int v17; // r2
  int v18; // r3
  unsigned __int8 *v19; // r7
  signed int v20; // r0
  int v21; // lr
  int v22; // r10
  int v23; // r9
  int v24; // r8
  int v25; // r5
  int v26; // r1
  int v27; // r12
  unsigned int v28; // r0
  int v29; // r11
  int v30; // r6
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

  if ( (char)a2[9] >= 0 )
    return 1;
  v9 = a1[156];
  v12 = (unsigned __int8)a2[8];
  v13 = (char *)(a3 + 16);
  v14 = *(_DWORD *)(v9 + 8 * v12);
  v40 = (_DWORD *)(a3 + 48);
  v15 = *(_DWORD *)(v9 + 8 * v12 + 4);
  *(_DWORD *)a3 = v14;
  *(_DWORD *)(a3 + 4) = v15;
  *a7 = v14;
  strcpy(v13, (const char *)(v9 + 32 * (v12 + 64)));
  v16 = *(_DWORD *)(v9 + 48 * (unsigned __int8)a2[8] + 10276);
  v17 = *(_DWORD *)(v9 + 48 * (unsigned __int8)a2[8] + 10280);
  v18 = *(_DWORD *)(v9 + 48 * (unsigned __int8)a2[8] + 10284);
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(v9 + 48 * (unsigned __int8)a2[8] + 10272);
  *(_DWORD *)(a3 + 56) = v17;
  *(_DWORD *)(a3 + 60) = v18;
  *(_DWORD *)(a3 + 52) = v16;
  v19 = a2 + 2;
  *(_DWORD *)(a3 + 59) = *(_DWORD *)(a2 + 2);
  *(_BYTE *)(a3 + 63) = a2[6];
  *(_BYTE *)(a3 + 64) = a2[7] & 0x7F;
  *(_BYTE *)(a3 + 65) = a2[8];
  v20 = (unsigned __int8)a2[2] / a1[60];
  if ( v20 >= (int)a1[48] )
  {
    v38 = rand();
    sub_16E4B4(v38, a1[48]);
    v20 = v39;
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
  v27 = 0;
  v28 = 128;
  ++v19;
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
    v21 = 16;
  if ( !v22 )
    v33 = v21;
  if ( v31 != v24 )
    v33 |= 4u;
  v34 = a2[9] & 0x1F;
  if ( v31 != v24 )
    v33 = (unsigned __int8)v33;
  if ( v23 )
    v33 = (unsigned __int8)v33 | 2;
  if ( v30 != v25 )
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
