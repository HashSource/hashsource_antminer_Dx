int __fastcall packet_2_nonce_ltc(
        unsigned int *a1,
        unsigned __int8 *a2,
        int a3,
        _BYTE *a4,
        _DWORD *a5,
        int *a6,
        _DWORD *a7)
{
  unsigned int v9; // r6
  char *v12; // r0
  int v13; // r1
  int v14; // r3
  int v15; // r2
  int v16; // r3
  int v17; // r3
  unsigned int v18; // r6
  signed int v19; // r0
  int v20; // lr
  int v21; // r10
  unsigned __int8 *v22; // r11
  int v23; // r9
  int v24; // r8
  int v25; // r6
  int v26; // r2
  int v27; // r12
  unsigned int v28; // r1
  int v29; // r4
  int v30; // r7
  int v31; // r3
  int v32; // r0
  int v33; // r0
  int v34; // r1
  int v35; // r1
  int v36; // r2
  unsigned __int8 *v37; // [sp+0h] [bp-30h]

  if ( a2[8] >> 5 != 4 )
    return 1;
  v9 = a1[150];
  v12 = (char *)(a3 + 16);
  v13 = a2[7];
  v14 = *(_DWORD *)(v9 + 8 * v13);
  v15 = *(_DWORD *)(v9 + 8 * v13 + 4);
  *(_DWORD *)a3 = v14;
  *(_DWORD *)(a3 + 4) = v15;
  *a7 = v14;
  strcpy(v12, (const char *)(v9 + ((v13 + 16) << 6)));
  *(_DWORD *)(a3 + 80) = *(_DWORD *)(a2 + 2);
  *(_BYTE *)(a3 + 84) = a2[6] & 0x3F;
  v16 = a2[7];
  *(_BYTE *)(a3 + 85) = v16;
  memcpy((void *)(a3 + 86), (const void *)(v9 + 16 * (v16 + 1504)), *(_DWORD *)(v9 + 4 * (v16 + 6528)));
  v17 = a2[7];
  *(_DWORD *)(a3 + 104) = *(_DWORD *)(v9 + 4 * (v17 + 6528));
  *(_DWORD *)(a3 + 108) = *(_DWORD *)(v9 + 4 * (v17 + 6656));
  v18 = a2[2];
  v19 = ((unsigned __int8)((_BYTE)v18 << 7) | (a2[3] >> 1)) / a1[56];
  if ( v19 >= (int)a1[45] )
  {
    v33 = rand();
    sub_15D65C(v33, a1[45]);
    v19 = v34;
    *a6 = v34;
    v18 = a2[2];
  }
  else
  {
    *a6 = v19;
  }
  *(_DWORD *)(a3 + 8) = v19;
  v20 = 1;
  *(_DWORD *)(a3 + 12) = v18 >> 1;
  v21 = 1;
  v22 = a2 + 2;
  v23 = 1;
  v37 = a2;
  v24 = 1;
  v25 = 1;
  v26 = 51;
  v27 = 0;
  v28 = 128;
  v29 = a2[2];
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
      goto LABEL_12;
LABEL_7:
    v25 = v20;
    v24 = v23;
    v20 = v21;
    v23 = v31;
    v21 = v32;
  }
  --v26;
  v27 = 0;
  v28 = 128;
  ++v22;
  if ( v26 )
  {
    v29 = *v22;
    goto LABEL_7;
  }
LABEL_12:
  if ( v20 )
    v35 = 24;
  else
    v35 = 8;
  if ( v20 )
    v20 = 16;
  if ( !v21 )
    v35 = v20;
  if ( v31 != v24 )
    v35 = (unsigned __int8)v35 | 4;
  if ( v23 )
    v35 |= 2u;
  v36 = v37[8] & 0x1F;
  if ( v23 )
    v35 = (unsigned __int8)v35;
  if ( v30 != v25 )
    v35 = (unsigned __int8)v35 | 1;
  if ( v36 == v35 )
  {
    *a5 = *(_DWORD *)(a3 + 80);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v35, v36);
    return 2;
  }
}
