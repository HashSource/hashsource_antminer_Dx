int __fastcall packet_2_nonce_ltc(
        unsigned int *a1,
        unsigned __int8 *a2,
        int a3,
        _BYTE *a4,
        _DWORD *a5,
        int *a6,
        _DWORD *a7)
{
  unsigned int v8; // r5
  int v10; // r1
  char *v13; // r0
  __int64 v14; // r2
  int v15; // r3
  int v16; // r3
  unsigned int v17; // r5
  signed int v18; // r0
  int v19; // r7
  int v20; // r10
  unsigned __int8 *v21; // r11
  int v22; // r9
  int v23; // r8
  int v24; // r12
  int v25; // r2
  int v26; // r5
  unsigned int v27; // r1
  int v28; // r4
  int v29; // lr
  int v30; // r3
  int v31; // r0
  int v32; // r0
  int v33; // r1
  int v34; // r1
  int v35; // r2
  int v36; // r2
  unsigned __int8 *v37; // [sp+0h] [bp-Ch]

  if ( a2[8] >> 5 != 4 )
    return 1;
  v8 = a1[150];
  v10 = a2[7];
  v13 = (char *)(a3 + 16);
  v14 = *(_QWORD *)(v8 + 8 * v10);
  *(_QWORD *)a3 = v14;
  *a7 = v14;
  strcpy(v13, (const char *)(v8 + ((v10 + 16) << 6)));
  *(_DWORD *)(a3 + 80) = *(_DWORD *)(a2 + 2);
  *(_BYTE *)(a3 + 84) = a2[6] & 0x3F;
  v15 = a2[7];
  *(_BYTE *)(a3 + 85) = v15;
  memcpy((void *)(a3 + 86), (const void *)(v8 + 16 * (v15 + 1504)), *(_DWORD *)(v8 + 4 * (v15 + 6528)));
  v16 = a2[7];
  *(_DWORD *)(a3 + 104) = *(_DWORD *)(v8 + 4 * (v16 + 6528));
  *(_DWORD *)(a3 + 108) = *(_DWORD *)(v8 + 4 * (v16 + 6656));
  v17 = a2[2];
  v18 = ((unsigned __int8)((_BYTE)v17 << 7) | (a2[3] >> 1)) / a1[56];
  if ( v18 >= (int)a1[45] )
  {
    v32 = rand();
    sub_F73DC(v32, a1[45]);
    v18 = v33;
    *a6 = v33;
    v17 = a2[2];
  }
  else
  {
    *a6 = v18;
  }
  v19 = 1;
  v37 = a2;
  *(_DWORD *)(a3 + 8) = v18;
  *(_DWORD *)(a3 + 12) = v17 >> 1;
  v20 = 1;
  v21 = a2 + 2;
  v22 = 1;
  v23 = 1;
  v24 = 1;
  v25 = 51;
  v26 = 0;
  v27 = 128;
  v28 = a2[2];
  while ( 1 )
  {
    ++v26;
    v29 = (v28 & v27) != 0;
    v30 = (unsigned __int8)(v29 ^ v24);
    v27 >>= 1;
    v31 = (unsigned __int8)(v30 ^ v23);
    if ( v26 == 8 )
      break;
    if ( !--v25 )
      goto LABEL_12;
LABEL_7:
    v24 = v19;
    v23 = v22;
    v19 = v20;
    v22 = v30;
    v20 = v31;
  }
  --v25;
  ++v21;
  v26 = 0;
  v27 = 128;
  if ( v25 )
  {
    v28 = *v21;
    goto LABEL_7;
  }
LABEL_12:
  if ( v19 )
    v34 = 24;
  else
    v34 = 8;
  if ( v19 )
    v35 = 16;
  else
    v35 = 0;
  if ( !v20 )
    v34 = v35;
  if ( v30 != v23 )
    v34 |= 4u;
  if ( v22 )
    v34 |= 2u;
  if ( v29 != v24 )
    v34 |= 1u;
  v36 = v37[8] & 0x1F;
  if ( v36 == v34 )
  {
    *a5 = *(_DWORD *)(a3 + 80);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v34, v36);
    return 2;
  }
}
