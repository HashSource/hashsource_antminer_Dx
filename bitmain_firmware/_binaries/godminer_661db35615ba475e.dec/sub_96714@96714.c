int __fastcall sub_96714(_DWORD *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, signed int *a6, _DWORD *a7)
{
  int v8; // r6
  int v10; // r1
  int v12; // r3
  int v13; // r12
  int v14; // r2
  unsigned int v15; // r1
  signed int v16; // r0
  signed int v17; // r9
  unsigned int v18; // r3
  int v19; // r2
  int v20; // lr
  int v21; // r11
  int v22; // r10
  int v23; // r9
  int v24; // r8
  int v25; // r6
  int v26; // r12
  int v27; // r0
  unsigned int v28; // r1
  unsigned __int8 *v29; // r4
  int v30; // r7
  int v31; // r3
  int v32; // r2
  int v33; // r1
  int v34; // r2
  int v36; // [sp+20h] [bp-100Ch]
  char var1004[4120]; // [sp+28h] [bp-1004h] BYREF

  v8 = a1[150];
  v10 = *(unsigned __int8 *)(a2 + 7);
  v12 = *(_DWORD *)(v8 + 8 * v10);
  v13 = *(_DWORD *)(v8 + 8 * v10 + 4);
  *(_DWORD *)a3 = v12;
  *(_DWORD *)(a3 + 4) = v13;
  *a7 = v12;
  strcpy((char *)(a3 + 16), (const char *)(v8 + 32 * (v10 + 32)));
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(a2 + 2);
  *(_BYTE *)(a3 + 52) = *(_BYTE *)(a2 + 6) & 0x7F;
  v14 = *(unsigned __int8 *)(a2 + 7);
  *(_BYTE *)(a3 + 53) = v14;
  v15 = a1[56];
  *(_QWORD *)(a3 + 72) = *(_QWORD *)(8 * (v14 + 2689) + v8);
  v16 = *(unsigned __int8 *)(a2 + 2) / v15;
  v17 = v16;
  if ( v16 >= a1[45] )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(var1004, 0x1000u, 0, "Nonce error, wrong source chip number");
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dash/backend_dash.c",
      156,
      "packet_2_nonce_dash",
      19,
      187,
      100,
      var1004);
    v18 = 0;
    *a6 = 0;
  }
  else
  {
    v18 = *(unsigned __int8 *)(a2 + 2) / v15;
    *a6 = v16;
  }
  v19 = a1[56];
  *(_DWORD *)(a3 + 8) = v18;
  *(_DWORD *)(a3 + 12) = (bswap32(*(_DWORD *)(a2 + 2)) - ((v19 * v17) << 24)) % 0xA;
  pthread_mutex_lock(&stru_197BB8);
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
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "packet_2_nonce_dash",
    19,
    201,
    20,
    var1004);
  v20 = 1;
  v21 = *(unsigned __int8 *)(a2 + 2);
  v22 = 1;
  v36 = a2;
  v23 = 1;
  v24 = 1;
  v25 = 1;
  v26 = 51;
  v27 = 0;
  v28 = 128;
  v29 = (unsigned __int8 *)(a2 + 2);
  while ( 1 )
  {
    ++v27;
    v30 = (v21 & v28) != 0;
    v31 = (unsigned __int8)(v30 ^ v25);
    v28 >>= 1;
    v32 = (unsigned __int8)(v31 ^ v24);
    if ( v27 == 8 )
      break;
    if ( !--v26 )
      goto LABEL_9;
LABEL_5:
    v25 = v20;
    v24 = v23;
    v20 = v22;
    v23 = v31;
    v22 = v32;
  }
  --v26;
  v27 = 0;
  v28 = 128;
  ++v29;
  if ( v26 )
  {
    v21 = *v29;
    goto LABEL_5;
  }
LABEL_9:
  if ( v20 )
    v33 = 24;
  else
    v33 = 8;
  if ( v20 )
    v20 = 16;
  if ( !v22 )
    v33 = v20;
  if ( v31 != v24 )
    v33 = (unsigned __int8)v33 | 4;
  if ( v23 )
    v33 |= 2u;
  v34 = *(_BYTE *)(v36 + 8) & 0x1F;
  if ( v23 )
    v33 = (unsigned __int8)v33;
  if ( v30 != v25 )
    v33 = (unsigned __int8)v33 | 1;
  if ( v34 == v33 )
  {
    *a5 = *(_DWORD *)(a3 + 48);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v33, v34);
    return 2;
  }
}
