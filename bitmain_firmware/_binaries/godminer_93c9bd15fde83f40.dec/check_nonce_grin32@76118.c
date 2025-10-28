int __fastcall check_nonce_grin32(int a1, int a2)
{
  _DWORD *v3; // r5
  int v4; // r6
  int v5; // r9
  int v6; // r8
  int *v7; // r7
  int v8; // r6
  int *v9; // r9
  int *v10; // r6
  int v11; // r0
  int v12; // t1
  int v13; // r8
  int v14; // r0
  int *v15; // r0
  int *v16; // r9
  int v17; // r2
  int v18; // r8
  int v19; // r10
  int v20; // r2
  int v21; // r3
  int v22; // t1
  int v23; // r8
  int v24; // r1
  int v25; // r9
  int v26; // lr
  int v27; // r3
  unsigned int v28; // r12
  unsigned int v29; // r1
  char *v30; // r0
  char v31; // r2
  bool v32; // zf
  unsigned __int64 v33; // r6
  int v35; // r7
  int v36; // r3
  int v37; // [sp+24h] [bp-1220h]
  int v38; // [sp+28h] [bp-121Ch]
  int v39; // [sp+2Ch] [bp-1218h]
  int v40; // [sp+34h] [bp-1210h]
  int v41; // [sp+40h] [bp-1204h]
  int v42; // [sp+44h] [bp-1200h]
  int v44; // [sp+4Ch] [bp-11F8h]
  unsigned __int64 v45; // [sp+58h] [bp-11ECh]
  _DWORD s[8]; // [sp+60h] [bp-11E4h] BYREF
  struct timeval tv; // [sp+80h] [bp-11C4h] BYREF
  int v48; // [sp+88h] [bp-11BCh]
  int v49; // [sp+8Ch] [bp-11B8h]
  int v50; // [sp+90h] [bp-11B4h]
  int v51; // [sp+94h] [bp-11B0h]
  int v52; // [sp+98h] [bp-11ACh]
  int v53; // [sp+9Ch] [bp-11A8h]
  struct timeval v54[21]; // [sp+A0h] [bp-11A4h] BYREF
  char v55[248]; // [sp+148h] [bp-10FCh] BYREF
  char v56[4100]; // [sp+240h] [bp-1004h] BYREF

  v44 = *(_DWORD *)(a1 + 624);
  v3 = (_DWORD *)(a2 + 35);
  memcpy(v55, (const void *)(v44 + 246 * *(unsigned __int8 *)(a2 + 16) + 4096), 0xF6u);
  v4 = *(unsigned __int16 *)(a2 + 33);
  v5 = *(_DWORD *)(a2 + 25);
  v6 = *(_DWORD *)(a2 + 29);
  gettimeofday(&tv, 0);
  v7 = (int *)calloc(1u, 0x78u);
  if ( !v7 )
    puts("graph calloc failed!");
  v7[24] = (int)sub_3E7F0;
  v7[25] = (int)sub_3E56C;
  v7[29] = (int)sub_3DDB8;
  v7[26] = (int)sub_3F048;
  v7[27] = (int)sub_3E094;
  v7[28] = 255800;
  sub_3E7F0(v7, 32, 25);
  (*(void (__fastcall **)(int, char *, int, _DWORD, int, int, int, _DWORD))(v7[23] + 72))(
    v7[23],
    v55,
    246,
    *(_DWORD *)(v7[23] + 72),
    v5,
    v6,
    21,
    0);
  v8 = v4 >> 2;
  if ( v8 )
  {
    v9 = &v3[v8];
    v10 = (int *)(a2 + 35);
    do
    {
      v11 = ((int (__fastcall *)(int *, int, _DWORD))v7[29])(v7, *v10, 0);
      v12 = *v10++;
      v13 = v11;
      v14 = ((int (__fastcall *)(int *, int, int))v7[29])(v7, v12, 1);
      ((void (__fastcall *)(int *, int, int))v7[27])(v7, v14, v13);
    }
    while ( v9 != v10 );
  }
  v15 = (int *)((int (__fastcall *)(int *))v7[28])(v7);
  v16 = v15;
  if ( v15 )
  {
    if ( *v15 <= 0 )
    {
      v42 = 0;
      v41 = 0;
    }
    else
    {
      v17 = v15[1];
      v18 = 0;
      v19 = 0;
      while ( 1 )
      {
        v20 = v17 + v18;
        v21 = a2 + 31;
        do
        {
          v22 = *(_DWORD *)(v20 + 4);
          v20 += 4;
          *(_DWORD *)(v21 + 4) = v3[v22];
          v21 += 4;
        }
        while ( a2 + 199 != v21 );
        qsort(v3, 0x2Au, 4u, (__compar_fn_t)sub_71330);
        ++v19;
        v17 = v16[1];
        if ( v19 >= *v16 )
          break;
        v18 += 172;
      }
      v41 = *(unsigned __int8 *)(v17 + v18);
      v42 = v41;
    }
  }
  else
  {
    v42 = 0;
    v41 = 0;
  }
  ((void (__fastcall *)(int *))v7[25])(v7);
  free(v7);
  gettimeofday(v54, 0);
  pthread_mutex_lock(&stru_1A8A24);
  v23 = 0;
  logfmt_raw(
    v56,
    0x1000u,
    0,
    "%s, nsols: %d, time: %ld us",
    "findcycle_grin32",
    *v16,
    v54[0].tv_usec + (_DWORD)&loc_F4240 * v54[0].tv_sec - 1000000 * tv.tv_sec - tv.tv_usec);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_grin32/backend_grin32.c",
    160,
    "findcycle_grin32",
    16,
    378,
    20,
    v56);
  pthread_mutex_lock(&stru_1A8A24);
  tv.tv_sec = (__time_t)"chain";
  v24 = *(_DWORD *)(a1 + 136);
  tv.tv_usec = 5;
  ++dword_1A8A20[0];
  v48 = 3;
  v40 = *(unsigned __int16 *)(a2 + 33);
  v38 = *(_DWORD *)(a2 + 25);
  v39 = *(_DWORD *)(a2 + 29);
  v25 = *(unsigned __int8 *)(a2 + 16);
  v52 = 0;
  v50 = v24;
  v51 = v24 >> 31;
  logfmt_raw(
    v56,
    0x1000u,
    0,
    v53,
    "chain",
    5,
    3,
    v49,
    (__int64)v24,
    0,
    v53,
    "nonce %llx wc %d sols_len %d cycle len (%d/42)",
    v37,
    v38,
    v39,
    v25,
    v40,
    v41);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_grin32/backend_grin32.c",
    160,
    "check_nonce_grin32",
    18,
    392,
    20,
    v56);
  if ( v42 == 42 )
  {
    memset(s, 0, sizeof(s));
    memset(v54, 0, sizeof(v54));
    do
    {
      v26 = 32 * v23;
      v27 = 0;
      v28 = *(_DWORD *)(a2 + 4 * (v23 + 8) + 3);
      do
      {
        v29 = v28 >> v27;
        v30 = &v56[(unsigned int)(v26 + v27) >> 3];
        v31 = (v26 + v27) & 7;
        v32 = ((v28 >> v27) & 1) == 0;
        if ( ((v28 >> v27) & 1) != 0 )
          LOBYTE(v29) = *(v30 - 416);
        ++v27;
        if ( !v32 )
          *(v30 - 416) = v29 | (1 << v31);
      }
      while ( v27 != 32 );
      ++v23;
    }
    while ( v23 != 42 );
    blake2b(s, (int)v54, 168);
    HIDWORD(v45) = HIBYTE(s[0])
                 | (unsigned __int16)(BYTE2(s[0]) << 8)
                 | (BYTE1(s[0]) << 16) & 0xFFFFFF
                 | (LOBYTE(s[0]) << 24);
    LODWORD(v45) = _byteswap_ushort(HIWORD(s[1])) | (BYTE1(s[1]) << 16) & 0xFFFFFF | (LOBYTE(s[1]) << 24);
    v33 = *(_QWORD *)(v44 + 8 * (*(unsigned __int8 *)(a2 + 16) + 384));
    if ( v45 > v33 )
    {
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(
        v56,
        0x1000u,
        0,
        "nonce %016llx hw target (%016llx:%016llx) not reach pool",
        *(_DWORD *)(a2 + 25),
        *(_DWORD *)(a2 + 29),
        v45,
        v33);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_grin32/backend_grin32.c",
        160,
        "check_nonce_grin32",
        18,
        420,
        20,
        v56);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    pthread_mutex_lock(&stru_1A8A24);
    v35 = *(unsigned __int8 *)(a2 + 16);
    v36 = *(_DWORD *)(a1 + 136);
    v54[0].tv_sec = (__time_t)"chain";
    v54[0].tv_usec = 5;
    v54[1].tv_sec = 3;
    v54[2] = (struct timeval)v36;
    v54[3].tv_sec = 0;
    ++dword_1A8A20[0];
    logfmt_raw(
      v56,
      0x1000u,
      0,
      v54[3].tv_usec,
      "chain",
      5,
      3,
      v54[1].tv_usec,
      (__int64)v36,
      0,
      v54[3].tv_usec,
      "wc %d error_nonce",
      v35);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_grin32/backend_grin32.c",
      160,
      "check_nonce_grin32",
      18,
      394,
      20,
      v56);
    return 2;
  }
}
