int __fastcall sub_9D4C8(_DWORD *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  int v8; // r4
  int v10; // r1
  char *v12; // r0
  int v13; // r5
  int v14; // r2
  int v15; // r3
  unsigned int v16; // r1
  signed int v17; // r0
  signed int v18; // r9
  unsigned int v19; // r3
  int v20; // r2
  int v21; // r5
  int v22; // r11
  int v23; // r10
  int v24; // r9
  int v25; // r8
  int v26; // r12
  int v27; // r4
  int v28; // r0
  unsigned int v29; // r1
  unsigned __int8 *v30; // r6
  int v31; // lr
  int v32; // r3
  int v33; // r2
  int v34; // r1
  int v35; // r2
  int v36; // r2
  int v38; // [sp+20h] [bp-100Ch]
  char var1004[4120]; // [sp+28h] [bp-1004h] BYREF

  v8 = a1[150];
  v10 = *(unsigned __int8 *)(a2 + 7);
  v12 = (char *)(a3 + 16);
  v13 = *(_DWORD *)(v8 + 8 * v10);
  v14 = *(_DWORD *)(v8 + 8 * v10 + 4);
  *(_DWORD *)a3 = v13;
  *(_DWORD *)(a3 + 4) = v14;
  *a7 = v13;
  strcpy(v12, (const char *)(v8 + 32 * (v10 + 32)));
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(a2 + 2);
  *(_BYTE *)(a3 + 52) = *(_BYTE *)(a2 + 6) & 0x7F;
  v15 = *(unsigned __int8 *)(a2 + 7);
  *(_BYTE *)(a3 + 53) = v15;
  v16 = a1[56];
  *(_QWORD *)(a3 + 72) = *(_QWORD *)(v8 + 8 * (v15 + 2689));
  v17 = *(unsigned __int8 *)(a2 + 2) / v16;
  v18 = v17;
  if ( v17 >= a1[45] )
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(var1004, 0x1000u, 0, "Nonce error, wrong source chip number");
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
      73,
      "packet_2_nonce_dash",
      19,
      187,
      100,
      var1004);
    v19 = 0;
    *a6 = 0;
  }
  else
  {
    v19 = *(unsigned __int8 *)(a2 + 2) / v16;
    *a6 = v17;
  }
  v20 = a1[56];
  *(_DWORD *)(a3 + 8) = v19;
  *(_DWORD *)(a3 + 12) = (bswap32(*(_DWORD *)(a2 + 2)) - ((v20 * v18) << 24)) % 0xA;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(
    var1004,
    0x1000u,
    0,
    "%s Nonce: %02x%02x%02x%02x  chipid:%d  coreid:%d",
    "packet_2_nonce_dash",
    *(unsigned __int8 *)(a2 + 2),
    *(unsigned __int8 *)(a2 + 3),
    *(unsigned __int8 *)(a2 + 4),
    *(unsigned __int8 *)(a2 + 5),
    *(_DWORD *)(a3 + 8),
    *(_DWORD *)(a3 + 12));
  pthread_mutex_unlock(&stru_3B526C);
  v21 = 1;
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
    73,
    "packet_2_nonce_dash",
    19,
    201,
    20,
    var1004);
  v38 = a2;
  v22 = *(unsigned __int8 *)(a2 + 2);
  v23 = 1;
  v24 = 1;
  v25 = 1;
  v26 = 1;
  v27 = 51;
  v28 = 0;
  v29 = 128;
  v30 = (unsigned __int8 *)(a2 + 2);
  while ( 1 )
  {
    ++v28;
    v31 = (v22 & v29) != 0;
    v32 = (unsigned __int8)(v31 ^ v26);
    v29 >>= 1;
    v33 = (unsigned __int8)(v32 ^ v25);
    if ( v28 == 8 )
      break;
    if ( !--v27 )
      goto LABEL_9;
LABEL_5:
    v26 = v21;
    v25 = v24;
    v21 = v23;
    v24 = v32;
    v23 = v33;
  }
  --v27;
  ++v30;
  v28 = 0;
  v29 = 128;
  if ( v27 )
  {
    v22 = *v30;
    goto LABEL_5;
  }
LABEL_9:
  if ( v21 )
    v34 = 24;
  else
    v34 = 8;
  if ( v21 )
    v35 = 16;
  else
    v35 = 0;
  if ( !v23 )
    v34 = v35;
  if ( v32 != v25 )
    v34 |= 4u;
  if ( v24 )
    v34 |= 2u;
  if ( v31 != v26 )
    v34 |= 1u;
  v36 = *(_BYTE *)(v38 + 8) & 0x1F;
  if ( v36 == v34 )
  {
    *a5 = *(_DWORD *)(a3 + 48);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v34, v36);
    return 2;
  }
}
