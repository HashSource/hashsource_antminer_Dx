int __fastcall check_nonce_grin29(int a1, int a2)
{
  int v3; // r4
  int v4; // r5
  int v5; // r8
  int v6; // r7
  int *v7; // r6
  int v8; // r5
  int *v9; // r8
  __int64 v10; // r0
  int v11; // t1
  int *v12; // r0
  int v13; // r1
  int *v14; // r8
  int v15; // r2
  int v16; // r7
  int v17; // r9
  int v18; // r2
  int v19; // r3
  int v20; // t1
  int v21; // r5
  int v22; // r2
  int v23; // r3
  int v24; // r4
  int i; // lr
  int v26; // r2
  unsigned int v27; // r0
  unsigned int v28; // r4
  unsigned int v29; // r1
  bool v30; // zf
  int v31; // r3
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r4
  int v35; // r11
  int v36; // r2
  int v37; // [sp+24h] [bp-1218h]
  int v38; // [sp+30h] [bp-120Ch]
  int v39; // [sp+40h] [bp-11FCh]
  int v40; // [sp+44h] [bp-11F8h]
  int v42; // [sp+50h] [bp-11ECh]
  _DWORD s[8]; // [sp+60h] [bp-11DCh] BYREF
  struct timeval tv; // [sp+80h] [bp-11BCh] BYREF
  int v45; // [sp+88h] [bp-11B4h]
  int v46; // [sp+8Ch] [bp-11B0h]
  int v47; // [sp+90h] [bp-11ACh]
  int v48; // [sp+94h] [bp-11A8h]
  int v49; // [sp+98h] [bp-11A4h]
  int v50; // [sp+9Ch] [bp-11A0h]
  struct timeval v51[20]; // [sp+A0h] [bp-119Ch] BYREF
  _BYTE dest[248]; // [sp+140h] [bp-10FCh] BYREF
  char v53[4100]; // [sp+238h] [bp-1004h] BYREF

  v42 = *(_DWORD *)(a1 + 600);
  v3 = a2 + 35;
  memcpy(dest, (const void *)(v42 + 246 * *(unsigned __int8 *)(a2 + 16) + 4352), 0xF6u);
  v4 = *(unsigned __int16 *)(a2 + 33);
  v5 = *(_DWORD *)(a2 + 25);
  v6 = *(_DWORD *)(a2 + 29);
  gettimeofday(&tv, 0);
  v7 = (int *)calloc(1u, 0x78u);
  if ( !v7 )
    puts("graph calloc failed!");
  v7[24] = (int)sub_4299C;
  v7[25] = (int)sub_424F8;
  v7[26] = (int)sub_42ED4;
  v7[27] = (int)sub_42DF0;
  v7[29] = (int)sub_423E8;
  v7[28] = 271817;
  sub_4299C(v7, 29, 21);
  (*(void (__fastcall **)(int, _BYTE *, int, _DWORD, int, int, int, _DWORD))(v7[23] + 72))(
    v7[23],
    dest,
    246,
    *(_DWORD *)(v7[23] + 72),
    v5,
    v6,
    25,
    0);
  v8 = v4 >> 2;
  if ( v8 )
  {
    v9 = (int *)(a2 + 35);
    do
    {
      v10 = ((__int64 (__fastcall *)(int *, int))v7[29])(v7, *v9);
      v11 = *v9++;
      ((void (__fastcall *)(int *, _DWORD, int))v7[27])(
        v7,
        (2 * v10) & 0x1FFFFFFE | v11 & 1,
        (2 * HIDWORD(v10)) & 0x1FFFFFFE | v11 & 1);
    }
    while ( (int *)(v3 + 4 * v8) != v9 );
  }
  v12 = (int *)((int (__fastcall *)(int *))v7[28])(v7);
  v14 = v12;
  if ( v12 )
  {
    if ( *v12 <= 0 )
    {
      v39 = 0;
      v40 = 0;
    }
    else
    {
      v15 = v12[1];
      v16 = 0;
      v17 = 0;
      while ( 1 )
      {
        v18 = v15 + v16;
        v19 = a2 + 31;
        do
        {
          v20 = *(_DWORD *)(v18 + 4);
          v18 += 4;
          *(_DWORD *)(v19 + 4) = *(_DWORD *)(v3 + 4 * v20);
          v19 += 4;
        }
        while ( a2 + 199 != v19 );
        qsort((void *)(a2 + 35), 0x2Au, 4u, (__compar_fn_t)sub_D59F0);
        ++v17;
        v15 = v14[1];
        v13 = v16 + 172;
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
    v39 = 0;
    v40 = 0;
  }
  ((void (__fastcall *)(int *, int))v7[25])(v7, v13);
  free(v7);
  gettimeofday(v51, 0);
  pthread_mutex_lock(&stru_3B526C);
  v21 = 0;
  logfmt_raw(
    v53,
    0x1000u,
    0,
    "%s, nsols: %d, time: %ld us",
    "findcycle_grin29",
    *v14,
    v51[0].tv_usec + (_DWORD)&loc_F4240 * v51[0].tv_sec - 1000000 * tv.tv_sec - tv.tv_usec);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_grin29/backend_grin29.c",
    77,
    "findcycle_grin29",
    16,
    408,
    20,
    v53);
  pthread_mutex_lock(&stru_3B526C);
  tv.tv_sec = (__time_t)"chain";
  tv.tv_usec = 5;
  ++dword_3B52A8;
  v45 = 3;
  v22 = *(unsigned __int16 *)(a2 + 33);
  v23 = *(_DWORD *)(a2 + 25);
  v24 = *(_DWORD *)(a2 + 29);
  v49 = 0;
  v38 = *(unsigned __int8 *)(a2 + 16);
  v47 = *(_DWORD *)(a1 + 124);
  v48 = v47 >> 31;
  logfmt_raw(
    v53,
    0x1000u,
    0,
    v50,
    "chain",
    5,
    3,
    v46,
    (__int64)v47,
    0,
    v50,
    "nonce %llx wc %d sols_len %d cycle len (%d/42)",
    v37,
    v23,
    v24,
    v38,
    v22,
    v39);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_grin29/backend_grin29.c",
    77,
    "check_nonce_grin29",
    18,
    434,
    20,
    v53);
  if ( v40 == 42 )
  {
    memset(s, 0, sizeof(s));
    memset(v51, 0, 0x99u);
    for ( i = 0; i != 42; ++i )
    {
      v26 = 0;
      v27 = *(_DWORD *)(a2 + 4 * (i + 8) + 3) & 0x1FFFFFFF;
      do
      {
        v28 = v27 >> v26;
        v29 = (unsigned int)(v21 + v26) >> 3;
        v30 = ((v27 >> v26) & 1) == 0;
        v31 = 1 << ((v21 + v26) & 7);
        if ( ((v27 >> v26) & 1) != 0 )
          LOBYTE(v28) = *((_BYTE *)&v51[0].tv_sec + v29);
        ++v26;
        if ( !v30 )
          *((_BYTE *)&v51[0].tv_sec + v29) = v31 | v28;
      }
      while ( v26 != 29 );
      v21 += 29;
    }
    blake2b(s, (int)v51, 153);
    LODWORD(v32) = HIBYTE(s[1])
                 | (unsigned __int16)(BYTE2(s[1]) << 8)
                 | (BYTE1(s[1]) << 16) & 0xFFFFFF
                 | (LOBYTE(s[1]) << 24);
    HIDWORD(v32) = HIBYTE(s[0])
                 | (unsigned __int16)(BYTE2(s[0]) << 8)
                 | (BYTE1(s[0]) << 16) & 0xFFFFFF
                 | (LOBYTE(s[0]) << 24);
    v33 = *(_QWORD *)(v42 + 8 * (*(unsigned __int8 *)(a2 + 16) + 384));
    if ( v33 < v32 )
    {
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(
        v53,
        0x1000u,
        0,
        "nonce %016llx hw target (%016llx:%016llx) not reach pool\n",
        *(_DWORD *)(a2 + 25),
        *(_DWORD *)(a2 + 29),
        v32,
        v33);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_grin29/backend_grin29.c",
        77,
        "check_nonce_grin29",
        18,
        462,
        20,
        v53);
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
    v51[0].tv_sec = (__time_t)"chain";
    v51[0].tv_usec = 5;
    v51[1].tv_sec = 3;
    v51[2] = (struct timeval)v36;
    v51[3].tv_sec = 0;
    ++dword_3B52A8;
    logfmt_raw(
      v53,
      0x1000u,
      0,
      v51[3].tv_usec,
      "chain",
      5,
      3,
      v51[1].tv_usec,
      (__int64)v36,
      0,
      v51[3].tv_usec,
      "wc %d error_nonce",
      v35);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_grin29/backend_grin29.c",
      77,
      "check_nonce_grin29",
      18,
      436,
      20,
      v53);
    return 2;
  }
}
