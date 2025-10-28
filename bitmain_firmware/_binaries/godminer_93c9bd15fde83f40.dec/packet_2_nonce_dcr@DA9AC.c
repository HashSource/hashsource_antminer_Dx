int __fastcall packet_2_nonce_dcr(unsigned int *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  unsigned int v9; // r6
  char *v12; // r0
  int v13; // r1
  int v14; // r3
  int v15; // r2
  unsigned int v16; // r6
  int v17; // r2
  signed int v18; // r0
  int v19; // r2
  int v20; // r10
  int v21; // r9
  int v22; // r8
  int v23; // r6
  int v24; // lr
  int v25; // r12
  unsigned int v26; // r1
  unsigned __int8 *v27; // r11
  int v28; // r4
  int v29; // r7
  int v30; // r3
  int v31; // r0
  int v32; // r1
  int v33; // r2
  int v34; // r0
  signed int v35; // r1
  int v36; // [sp+0h] [bp-30h]

  if ( *(char *)(a2 + 10) >= 0 )
    return 1;
  v9 = a1[156];
  v12 = (char *)(a3 + 16);
  v13 = *(unsigned __int8 *)(a2 + 9);
  v14 = *(_DWORD *)(v9 + 8 * v13);
  v15 = *(_DWORD *)(v9 + 8 * v13 + 4);
  *(_DWORD *)a3 = v14;
  *(_DWORD *)(a3 + 4) = v15;
  *a7 = v14;
  strcpy(v12, (const char *)(v9 + 32 * (v13 + 32)));
  *(_BYTE *)(a3 + 52) = *(_BYTE *)(a2 + 3);
  v16 = v9 + 180 * *(unsigned __int8 *)(a2 + 9) + 5260;
  v17 = *(_DWORD *)(v16 + 4);
  *(_DWORD *)(a3 + 53) = *(_DWORD *)v16;
  *(_DWORD *)(a3 + 57) = v17;
  LOBYTE(v17) = *(_BYTE *)(v16 + 10);
  *(_WORD *)(a3 + 61) = *(_WORD *)(v16 + 8);
  *(_BYTE *)(a3 + 63) = v17;
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(a2 + 4);
  *(_BYTE *)(a3 + 64) = *(_BYTE *)(a2 + 8);
  *(_BYTE *)(a3 + 65) = *(_BYTE *)(a2 + 9) & 0x7F;
  v18 = *(unsigned __int8 *)(a2 + 3) / a1[60];
  if ( v18 >= (int)a1[48] )
  {
    v34 = rand();
    sub_16E4B4(v34, a1[48]);
    v18 = v35;
  }
  v19 = 1;
  v36 = a2;
  v20 = 1;
  v21 = 1;
  *a6 = v18;
  v22 = 1;
  *(_DWORD *)(a3 + 8) = v18;
  v23 = 1;
  v24 = 67;
  v25 = 0;
  v26 = 128;
  *(_DWORD *)(a3 + 12) = *(unsigned __int8 *)(a2 + 4);
  v27 = (unsigned __int8 *)(a2 + 2);
  v28 = *(unsigned __int8 *)(a2 + 2);
  while ( 1 )
  {
    ++v25;
    v29 = (v28 & v26) != 0;
    v30 = (unsigned __int8)(v29 ^ v23);
    v26 >>= 1;
    v31 = (unsigned __int8)(v30 ^ v22);
    if ( v25 == 8 )
      break;
    if ( !--v24 )
      goto LABEL_11;
LABEL_7:
    v23 = v19;
    v22 = v21;
    v19 = v20;
    v21 = v30;
    v20 = v31;
  }
  --v24;
  v25 = 0;
  v26 = 128;
  ++v27;
  if ( v24 )
  {
    v28 = *v27;
    goto LABEL_7;
  }
LABEL_11:
  if ( v19 )
    v32 = 24;
  else
    v32 = 8;
  if ( v19 )
    v19 = 16;
  if ( !v20 )
    v32 = v19;
  if ( v30 != v22 )
    v32 = (unsigned __int8)v32 | 4;
  if ( v21 )
    v32 |= 2u;
  v33 = *(_BYTE *)(v36 + 10) & 0x1F;
  if ( v21 )
    v32 = (unsigned __int8)v32;
  if ( v29 != v23 )
    v32 = (unsigned __int8)v32 | 1;
  if ( v33 == v32 )
  {
    *a5 = *(_DWORD *)(a3 + 48);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v32, v33);
    return 2;
  }
}
