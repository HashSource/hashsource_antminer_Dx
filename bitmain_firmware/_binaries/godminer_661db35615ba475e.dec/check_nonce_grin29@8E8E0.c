int __fastcall check_nonce_grin29(int a1, int a2)
{
  int *v3; // r5
  int v4; // r6
  int v5; // r9
  int v6; // r8
  int *v7; // r7
  int v8; // r6
  int *v9; // r8
  int *v10; // r6
  __int64 v11; // r0
  int v12; // t1
  int *v13; // r0
  int *v14; // r10
  int v15; // r2
  int v16; // r8
  int v17; // r9
  int v18; // r2
  int *v19; // r3
  int v20; // t1
  int v21; // r10
  int v22; // r8
  int v23; // r6
  int v24; // r3
  unsigned int v25; // r12
  unsigned int v26; // r1
  char *v27; // r0
  char v28; // r2
  bool v29; // zf
  int v30; // r9
  unsigned __int64 v31; // r6
  int v33; // r10
  int v34; // r0
  int v35; // [sp+24h] [bp-1220h]
  int v36; // [sp+28h] [bp-121Ch]
  int v37; // [sp+2Ch] [bp-1218h]
  int v38; // [sp+34h] [bp-1210h]
  int v39; // [sp+44h] [bp-1200h]
  int v40; // [sp+48h] [bp-11FCh]
  int v42; // [sp+54h] [bp-11F0h]
  int v43; // [sp+58h] [bp-11ECh]
  int v44; // [sp+60h] [bp-11E4h]
  _DWORD s[8]; // [sp+68h] [bp-11DCh] BYREF
  struct timeval tv; // [sp+88h] [bp-11BCh] BYREF
  int v47; // [sp+90h] [bp-11B4h]
  int v48; // [sp+94h] [bp-11B0h]
  __int64 v49; // [sp+98h] [bp-11ACh]
  int v50; // [sp+A0h] [bp-11A4h]
  int v51; // [sp+A4h] [bp-11A0h]
  struct timeval v52[20]; // [sp+A8h] [bp-119Ch] BYREF
  char v53[248]; // [sp+148h] [bp-10FCh] BYREF
  char v54[4100]; // [sp+240h] [bp-1004h] BYREF

  v3 = (int *)(a2 + 35);
  v42 = *(_DWORD *)(a1 + 600);
  memcpy(v53, (const void *)(v42 + 246 * *(unsigned __int8 *)(a2 + 16) + 4352), 0xF6u);
  v4 = *(unsigned __int16 *)(a2 + 33);
  v5 = *(_DWORD *)(a2 + 25);
  v6 = *(_DWORD *)(a2 + 29);
  gettimeofday(&tv, 0);
  v7 = (int *)calloc(1u, 0x78u);
  if ( !v7 )
    puts("graph calloc failed!");
  v7[24] = (int)sub_4D658;
  v7[25] = (int)sub_4CF9C;
  v7[29] = (int)sub_4CDF8;
  v7[26] = (int)sub_4DDA8;
  v7[27] = (int)sub_4DC3C;
  v7[28] = 315664;
  sub_4D658(v7, 29, 21);
  (*(void (__fastcall **)(int, char *, int, _DWORD, int, int, int, _DWORD))(v7[23] + 72))(
    v7[23],
    v53,
    246,
    *(_DWORD *)(v7[23] + 72),
    v5,
    v6,
    25,
    0);
  v8 = v4 >> 2;
  if ( v8 )
  {
    v9 = &v3[v8];
    v10 = v3;
    do
    {
      v11 = ((__int64 (__fastcall *)(int *, int))v7[29])(v7, *v10);
      v12 = *v10++;
      ((void (__fastcall *)(int *, _DWORD, int))v7[27])(
        v7,
        (2 * v11) & 0x1FFFFFFE | v12 & 1,
        (2 * HIDWORD(v11)) & 0x1FFFFFFE | v12 & 1);
    }
    while ( v9 != v10 );
  }
  v13 = (int *)((int (__fastcall *)(int *))v7[28])(v7);
  v14 = v13;
  if ( v13 )
  {
    if ( *v13 <= 0 )
    {
      v40 = 0;
      v39 = 0;
    }
    else
    {
      v15 = v13[1];
      v16 = 0;
      v17 = 0;
      while ( 1 )
      {
        v18 = v15 + v16;
        v19 = (int *)(a2 + 31);
        do
        {
          v20 = *(_DWORD *)(v18 + 4);
          v18 += 4;
          v19[1] = v3[v20];
          ++v19;
        }
        while ( v3 + 41 != v19 );
        qsort(v3, 0x2Au, 4u, (__compar_fn_t)sub_84480);
        ++v17;
        v15 = v14[1];
        if ( v17 >= *v14 )
          break;
        v16 += 172;
      }
      v39 = *(unsigned __int8 *)(v15 + v16);
      v40 = v39;
    }
  }
  else
  {
    v40 = 0;
    v39 = 0;
  }
  ((void (__fastcall *)(int *))v7[25])(v7);
  free(v7);
  gettimeofday(v52, 0);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(
    v54,
    0x1000u,
    0,
    "%s, nsols: %d, time: %ld us",
    "findcycle_grin29",
    *v14,
    v52[0].tv_usec + (_DWORD)&loc_F4240 * v52[0].tv_sec - 1000000 * tv.tv_sec - tv.tv_usec);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_grin29/backend_grin29.c",
    160,
    "findcycle_grin29",
    16,
    408,
    20,
    v54);
  pthread_mutex_lock(&stru_197BB8);
  tv.tv_sec = (__time_t)"chain";
  tv.tv_usec = 5;
  v47 = 3;
  ++dword_197BD4;
  v43 = *(_DWORD *)(a1 + 124);
  v38 = *(unsigned __int16 *)(a2 + 33);
  v36 = *(_DWORD *)(a2 + 25);
  v37 = *(_DWORD *)(a2 + 29);
  v50 = 0;
  v21 = *(unsigned __int8 *)(a2 + 16);
  v49 = v43;
  logfmt_raw(
    v54,
    0x1000u,
    0,
    v51,
    "chain",
    5,
    3,
    v48,
    (__int64)v43,
    0,
    v51,
    "nonce %llx wc %d sols_len %d cycle len (%d/42)",
    v35,
    v36,
    v37,
    v21,
    v38,
    v39);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_grin29/backend_grin29.c",
    160,
    "check_nonce_grin29",
    18,
    434,
    20,
    v54);
  if ( v40 == 42 )
  {
    v22 = 0;
    memset(s, 0, sizeof(s));
    v23 = 0;
    memset(v52, 0, 0x99u);
    do
    {
      v24 = 0;
      v25 = *(_DWORD *)(a2 + 4 * (v23 + 8) + 3) & 0x1FFFFFFF;
      do
      {
        v26 = v25 >> v24;
        v27 = &v54[(unsigned int)(v22 + v24) >> 3];
        v28 = (v22 + v24) & 7;
        v29 = ((v25 >> v24) & 1) == 0;
        if ( ((v25 >> v24) & 1) != 0 )
          LOBYTE(v26) = *(v27 - 408);
        ++v24;
        if ( !v29 )
          *(v27 - 408) = v26 | (1 << v28);
      }
      while ( v24 != 29 );
      ++v23;
      v22 += 29;
    }
    while ( v23 != 42 );
    blake2b(s, (int)v52, 153);
    v44 = _byteswap_ushort(HIWORD(s[1])) | (BYTE1(s[1]) << 16) & 0xFFFFFF | (LOBYTE(s[1]) << 24);
    v30 = HIBYTE(s[0]) | (unsigned __int16)(BYTE2(s[0]) << 8) | (BYTE1(s[0]) << 16) & 0xFFFFFF | (LOBYTE(s[0]) << 24);
    v31 = *(_QWORD *)(v42 + 8 * (*(unsigned __int8 *)(a2 + 16) + 384));
    if ( __PAIR64__(v30, v44) > v31 )
    {
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(
        v54,
        0x1000u,
        0,
        "nonce %016llx hw target (%016llx:%016llx) not reach pool\n",
        *(_DWORD *)(a2 + 25),
        *(_DWORD *)(a2 + 29),
        v44,
        v30,
        v31);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_grin29/backend_grin29.c",
        160,
        "check_nonce_grin29",
        18,
        462,
        20,
        v54);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    pthread_mutex_lock(&stru_197BB8);
    v52[0].tv_sec = (__time_t)"chain";
    v33 = *(unsigned __int8 *)(a2 + 16);
    v34 = *(_DWORD *)(a1 + 124);
    v52[0].tv_usec = 5;
    v52[1].tv_sec = 3;
    v52[3].tv_sec = 0;
    v52[2] = (struct timeval)v34;
    ++dword_197BD4;
    logfmt_raw(
      v54,
      0x1000u,
      0,
      v52[3].tv_usec,
      "chain",
      5,
      3,
      v52[1].tv_usec,
      (__int64)v34,
      0,
      v52[3].tv_usec,
      "wc %d error_nonce",
      v33);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_grin29/backend_grin29.c",
      160,
      "check_nonce_grin29",
      18,
      436,
      20,
      v54);
    return 2;
  }
}
