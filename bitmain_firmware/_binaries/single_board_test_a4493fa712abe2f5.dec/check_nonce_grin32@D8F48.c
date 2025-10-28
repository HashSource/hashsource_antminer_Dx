int __fastcall check_nonce_grin32(int a1, int a2)
{
  int v3; // r4
  int v4; // r5
  int v5; // r8
  int v6; // r7
  int *v7; // r6
  int v8; // r5
  int *v9; // r5
  int *v10; // r7
  int v11; // r0
  int v12; // t1
  int v13; // r8
  int v14; // r0
  int *v15; // r0
  int v16; // r1
  int *v17; // r7
  int v18; // r2
  int v19; // r8
  int v20; // r9
  int v21; // r2
  int v22; // r3
  int v23; // t1
  int i; // r12
  int v25; // r4
  int v26; // r2
  unsigned int v27; // r0
  unsigned int v28; // r5
  unsigned int v29; // r1
  bool v30; // zf
  int v31; // r3
  unsigned __int64 v32; // r6
  unsigned __int64 v33; // r4
  int v35; // r11
  int v36; // r2
  int v37; // [sp+24h] [bp-1220h]
  int v38; // [sp+28h] [bp-121Ch]
  int v39; // [sp+2Ch] [bp-1218h]
  int v40; // [sp+30h] [bp-1214h]
  int v41; // [sp+34h] [bp-1210h]
  int v42; // [sp+40h] [bp-1204h]
  int v43; // [sp+44h] [bp-1200h]
  int v45; // [sp+4Ch] [bp-11F8h]
  int v46; // [sp+50h] [bp-11F4h]
  _DWORD s[8]; // [sp+60h] [bp-11E4h] BYREF
  struct timeval tv; // [sp+80h] [bp-11C4h] BYREF
  int v49; // [sp+88h] [bp-11BCh]
  int v50; // [sp+8Ch] [bp-11B8h]
  int v51; // [sp+90h] [bp-11B4h]
  int v52; // [sp+94h] [bp-11B0h]
  int v53; // [sp+98h] [bp-11ACh]
  int v54; // [sp+9Ch] [bp-11A8h]
  struct timeval v55[21]; // [sp+A0h] [bp-11A4h] BYREF
  _BYTE dest[248]; // [sp+148h] [bp-10FCh] BYREF
  char v57[4100]; // [sp+240h] [bp-1004h] BYREF

  v45 = *(_DWORD *)(a1 + 600);
  v3 = a2 + 35;
  memcpy(dest, (const void *)(v45 + 246 * *(unsigned __int8 *)(a2 + 16) + 4096), 0xF6u);
  v4 = *(unsigned __int16 *)(a2 + 33);
  v5 = *(_DWORD *)(a2 + 25);
  v6 = *(_DWORD *)(a2 + 29);
  gettimeofday(&tv, 0);
  v7 = (int *)calloc(1u, 0x78u);
  if ( !v7 )
    puts("graph calloc failed!");
  v7[24] = (int)sub_426B8;
  v7[25] = (int)sub_4252C;
  v7[26] = (int)sub_42D04;
  v7[27] = (int)sub_4226C;
  v7[29] = (int)sub_42178;
  v7[28] = 271937;
  sub_426B8(v7, 32, 25);
  (*(void (__fastcall **)(int, _BYTE *, int, _DWORD, int, int, int, _DWORD))(v7[23] + 72))(
    v7[23],
    dest,
    246,
    *(_DWORD *)(v7[23] + 72),
    v5,
    v6,
    21,
    0);
  v8 = v4 >> 2;
  if ( v8 )
  {
    v9 = (int *)(v3 + 4 * v8);
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
  v17 = v15;
  if ( v15 )
  {
    if ( *v15 <= 0 )
    {
      v42 = 0;
      v43 = 0;
    }
    else
    {
      v18 = v15[1];
      v19 = 0;
      v20 = 0;
      while ( 1 )
      {
        v21 = v18 + v19;
        v22 = a2 + 31;
        do
        {
          v23 = *(_DWORD *)(v21 + 4);
          v21 += 4;
          *(_DWORD *)(v22 + 4) = *(_DWORD *)(v3 + 4 * v23);
          v22 += 4;
        }
        while ( a2 + 199 != v22 );
        qsort((void *)(a2 + 35), 0x2Au, 4u, (__compar_fn_t)sub_D5980);
        ++v20;
        v18 = v17[1];
        v16 = v19 + 172;
        if ( v20 >= *v17 )
          break;
        v19 += 172;
      }
      v42 = *(unsigned __int8 *)(v18 + v19);
      v43 = v42;
    }
  }
  else
  {
    v42 = 0;
    v43 = 0;
  }
  ((void (__fastcall *)(int *, int))v7[25])(v7, v16);
  free(v7);
  gettimeofday(v55, 0);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(
    v57,
    0x1000u,
    0,
    "%s, nsols: %d, time: %ld us",
    "findcycle_grin32",
    *v17,
    v55[0].tv_usec + (_DWORD)&loc_F4240 * v55[0].tv_sec - 1000000 * tv.tv_sec - tv.tv_usec);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_grin32/backend_grin32.c",
    77,
    "findcycle_grin32",
    16,
    378,
    20,
    v57);
  pthread_mutex_lock(&stru_3B526C);
  tv.tv_usec = 5;
  tv.tv_sec = (__time_t)"chain";
  v49 = 3;
  ++dword_3B52A8;
  v38 = *(_DWORD *)(a2 + 25);
  v46 = *(_DWORD *)(a1 + 124);
  v41 = *(unsigned __int16 *)(a2 + 33);
  v39 = *(_DWORD *)(a2 + 29);
  v53 = 0;
  v40 = *(unsigned __int8 *)(a2 + 16);
  v51 = v46;
  v52 = v46 >> 31;
  logfmt_raw(
    v57,
    0x1000u,
    0,
    v54,
    "chain",
    5,
    3,
    v50,
    (__int64)v46,
    0,
    v54,
    "nonce %llx wc %d sols_len %d cycle len (%d/42)",
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_grin32/backend_grin32.c",
    77,
    "check_nonce_grin32",
    18,
    392,
    20,
    v57);
  if ( v43 == 42 )
  {
    memset(s, 0, sizeof(s));
    memset(v55, 0, sizeof(v55));
    for ( i = 0; i != 42; ++i )
    {
      v25 = 32 * i;
      v26 = 0;
      v27 = *(_DWORD *)(a2 + 4 * (i + 8) + 3);
      do
      {
        v28 = v27 >> v26;
        v29 = (unsigned int)(v25 + v26) >> 3;
        v30 = ((v27 >> v26) & 1) == 0;
        v31 = 1 << ((v25 + v26) & 7);
        if ( ((v27 >> v26) & 1) != 0 )
          LOBYTE(v28) = *((_BYTE *)&v55[0].tv_sec + v29);
        ++v26;
        if ( !v30 )
          *((_BYTE *)&v55[0].tv_sec + v29) = v31 | v28;
      }
      while ( v26 != 32 );
    }
    blake2b(s, (int)v55, 168);
    LODWORD(v32) = HIBYTE(s[1])
                 | (unsigned __int16)(BYTE2(s[1]) << 8)
                 | (BYTE1(s[1]) << 16) & 0xFFFFFF
                 | (LOBYTE(s[1]) << 24);
    HIDWORD(v32) = HIBYTE(s[0])
                 | (unsigned __int16)(BYTE2(s[0]) << 8)
                 | (BYTE1(s[0]) << 16) & 0xFFFFFF
                 | (LOBYTE(s[0]) << 24);
    v33 = *(_QWORD *)(v45 + 8 * (*(unsigned __int8 *)(a2 + 16) + 384));
    if ( v33 < v32 )
    {
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(
        v57,
        0x1000u,
        0,
        "nonce %016llx hw target (%016llx:%016llx) not reach pool",
        *(_DWORD *)(a2 + 25),
        *(_DWORD *)(a2 + 29),
        v32,
        v33);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_grin32/backend_grin32.c",
        77,
        "check_nonce_grin32",
        18,
        420,
        20,
        v57);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    pthread_mutex_lock(&stru_3B526C);
    v35 = *(unsigned __int8 *)(a2 + 16);
    v36 = *(_DWORD *)(a1 + 124);
    v55[0].tv_sec = (__time_t)"chain";
    v55[0].tv_usec = 5;
    v55[1].tv_sec = 3;
    v55[2] = (struct timeval)v36;
    v55[3].tv_sec = 0;
    ++dword_3B52A8;
    logfmt_raw(
      v57,
      0x1000u,
      0,
      v55[3].tv_usec,
      "chain",
      5,
      3,
      v55[1].tv_usec,
      (__int64)v36,
      0,
      v55[3].tv_usec,
      "wc %d error_nonce",
      v35);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_grin32/backend_grin32.c",
      77,
      "check_nonce_grin32",
      18,
      394,
      20,
      v57);
    return 2;
  }
}
