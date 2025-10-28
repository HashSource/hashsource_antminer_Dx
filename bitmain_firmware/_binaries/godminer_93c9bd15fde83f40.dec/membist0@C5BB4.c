int __fastcall membist0(int a1)
{
  int v2; // r4
  void (__fastcall *v3)(int, int *); // r3
  void (__fastcall *v4)(int, int *); // r3
  int v5; // r0
  _DWORD *v6; // r4
  int v7; // r6
  int v8; // r3
  int v9; // r12
  int v10; // r0
  int v11; // r0
  _DWORD *v12; // r4
  int v13; // r6
  int v14; // r3
  unsigned int v15; // r1
  int v16; // r12
  int v17; // r0
  int *v18; // r3
  int v19; // r0
  _DWORD *v20; // r4
  int v21; // r6
  int v22; // r3
  unsigned int v23; // r1
  int v24; // r12
  int v25; // r0
  int *v26; // r3
  _BYTE *v27; // r4
  unsigned int v28; // t1
  int v29; // r2
  char *v30; // r3
  unsigned __int64 v31; // r8
  size_t v32; // r0
  int *v34; // r3
  int v35; // [sp+18h] [bp-127Ch]
  int v36; // [sp+1Ch] [bp-1278h]
  char *ptr; // [sp+20h] [bp-1274h]
  int *v38; // [sp+2Ch] [bp-1268h]
  int *v39; // [sp+30h] [bp-1264h]
  _DWORD v41[5]; // [sp+3Ch] [bp-1258h] BYREF
  char src[64]; // [sp+50h] [bp-1244h] BYREF
  _BYTE s[512]; // [sp+90h] [bp-1204h] BYREF
  int v44; // [sp+290h] [bp-1004h] BYREF
  int v45; // [sp+294h] [bp-1000h]
  int v46; // [sp+298h] [bp-FFCh]
  int v47; // [sp+29Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v44, 0x1000u, 0, "%s...", "membist0");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "membist0",
    8,
    11542,
    60,
    &v44);
  v35 = 0;
  v38 = v41;
  v41[0] = -2023406815;
  v41[1] = 1266163410;
  v41[2] = 2015285835;
  v41[3] = 517098360;
  v41[4] = -766805986;
  memset(s, 0, sizeof(s));
  v39 = v41;
  ptr = (char *)malloc(0x600u);
  do
  {
    v36 = 0;
    pthread_mutex_lock(&stru_1A8A24);
    v2 = *v39++;
    logfmt_raw((char *)&v44, 0x1000u, 0, "membist final pattern %08x", v2);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "membist0",
      8,
      11550,
      60,
      &v44);
    v44 = v2;
    v46 = 10747905;
    v47 = 255;
    v45 = 0;
    (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v44);
    usleep((__useconds_t)&stru_18694.st_info);
    do
    {
      v46 = 786432;
      v47 = 0;
      v45 = 0;
      v3 = *(void (__fastcall **)(int, int *))(a1 + 156);
      LOBYTE(v47) = v36;
      LOBYTE(v46) = 1;
      v44 = 1;
      v3(a1, &v44);
      usleep((__useconds_t)&stru_18694.st_info);
      v46 = 10485761;
      v47 = 0;
      v44 = 3;
      v4 = *(void (__fastcall **)(int, int *))(a1 + 156);
      v45 = 0;
      LOBYTE(v47) = v36;
      v4(a1, &v44);
      usleep((__useconds_t)&stru_18694.st_info);
      usleep((__useconds_t)&stru_18694.st_info);
      v5 = sub_DF23C(a1, (unsigned __int16)v36, 161, ptr);
      if ( v5 > 0 )
      {
        v6 = ptr + 28;
        v7 = (int)&ptr[12 * v5 + 28];
        do
        {
          while ( 1 )
          {
            v8 = *(v6 - 7);
            if ( (v8 & 0x80) != 0 )
              break;
            __pld(v6);
            pthread_mutex_lock(&stru_1A8A24);
            v9 = *((unsigned __int8 *)v6 - 24);
            v10 = *((unsigned __int8 *)v6 - 20);
            v6 += 3;
            logfmt_raw((char *)&v44, 0x1000u, 0, "chip %02x core %02x membist not done!", v9, v10);
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "membist0",
              8,
              11566,
              100,
              &v44);
            if ( (_DWORD *)v7 == v6 )
              goto LABEL_10;
          }
          if ( (v8 & 0xFFFFFF00) != 0 )
          {
            __pld(v6 - 1);
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw(
              (char *)&v44,
              0x1000u,
              0,
              "chip %02x core %02x membist err cnt: %08x",
              *((unsigned __int8 *)v6 - 24),
              *((unsigned __int8 *)v6 - 20),
              bswap32(*(v6 - 7)));
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/backend_eth/backend_eth.c",
              154,
              "membist0",
              8,
              11562,
              100,
              &v44);
            v34 = &v44 + 16 * *((unsigned __int8 *)v6 - 24) + v35;
            *(v34 - 128) += bswap32(*(v6 - 7)) & 0x7FFFFF;
          }
          v6 += 3;
        }
        while ( (_DWORD *)v7 != v6 );
      }
LABEL_10:
      v11 = sub_DF23C(a1, (unsigned __int16)v36, 162, ptr);
      if ( v11 > 0 )
      {
        v12 = ptr + 40;
        v13 = (int)&ptr[12 * v11 + 40];
        do
        {
          while ( 1 )
          {
            v14 = *(v12 - 10);
            if ( (v14 & 0xFFFFFF00) != 0 && (v14 & 0x80) != 0 )
              break;
            v12 += 3;
            if ( v12 == (_DWORD *)v13 )
              goto LABEL_16;
          }
          __pld(v12);
          pthread_mutex_lock(&stru_1A8A24);
          v15 = *(v12 - 10);
          v16 = *((unsigned __int8 *)v12 - 36);
          v17 = *((unsigned __int8 *)v12 - 32);
          v12 += 3;
          logfmt_raw((char *)&v44, 0x1000u, 0, "chip %02x core %02x membist lost cnt: %08x", v16, v17, bswap32(v15));
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "membist0",
            8,
            11573,
            100,
            &v44);
          v18 = &v44 + 16 * *((unsigned __int8 *)v12 - 48) + v35;
          *(v18 - 128) += bswap32(*(v12 - 13)) & 0x7FFFFF;
        }
        while ( v12 != (_DWORD *)v13 );
      }
LABEL_16:
      v19 = sub_DF23C(a1, (unsigned __int16)v36, 163, ptr);
      if ( v19 > 0 )
      {
        v20 = ptr + 40;
        v21 = (int)&ptr[12 * v19 + 40];
        do
        {
          while ( 1 )
          {
            v22 = *(v20 - 10);
            if ( (v22 & 0xFFFF00) != 0 && (v22 & 0xC0) != 0 )
              break;
            v20 += 3;
            if ( (_DWORD *)v21 == v20 )
              goto LABEL_22;
          }
          __pld(v20);
          pthread_mutex_lock(&stru_1A8A24);
          v23 = *(v20 - 10);
          v24 = *((unsigned __int8 *)v20 - 36);
          v25 = *((unsigned __int8 *)v20 - 32);
          v20 += 3;
          logfmt_raw((char *)&v44, 0x1000u, 0, "chip %02x core %02x ethbist err cnt: %08x", v24, v25, bswap32(v23));
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "membist0",
            8,
            11581,
            100,
            &v44);
          v26 = &v44 + 16 * *((unsigned __int8 *)v20 - 48) + v35;
          *(v26 - 128) += bswap32(*(v20 - 13)) & 0x7FFF;
        }
        while ( (_DWORD *)v21 != v20 );
      }
LABEL_22:
      ++v36;
    }
    while ( v36 != 8 );
    ++v35;
  }
  while ( v35 != 5 );
  v27 = s;
  free(ptr);
  memset(src, 0, sizeof(src));
  do
  {
    while ( 1 )
    {
      v28 = *(_DWORD *)v27;
      v27 += 4;
      v29 = *v38++;
      v30 = "ok";
      v31 = *((unsigned int *)v27 + 15)
          + (unsigned __int64)*((unsigned int *)v27 + 31)
          + v28
          + *((unsigned int *)v27 + 47)
          + *((unsigned int *)v27 + 63)
          + *((unsigned int *)v27 + 79)
          + *((unsigned int *)v27 + 95)
          + *((unsigned int *)v27 + 111);
      if ( v31 > 0x800 )
        v30 = "failed";
      sprintf(src, "<mbist0 %08x> test %s(%llu)", v29, v30, v31);
      v32 = strlen(src);
      if ( v32 <= 0x3F && dword_1A8B44[0] <= 63 )
        break;
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw((char *)&v44, 0x1000u, 0, "slt_result is full!");
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "set_test_result",
        15,
        141,
        100,
        &v44);
      if ( &s[20] == v27 )
        goto LABEL_31;
    }
    strncpy((char *)&dword_1A8B44[16 * dword_1A8B44[0] + 1], src, v32);
    ++dword_1A8B44[0];
  }
  while ( &s[20] != v27 );
LABEL_31:
  ((void (__fastcall *)(int))off_1A2BB4[0])(*(_DWORD *)(a1 + 132));
  return 0;
}
