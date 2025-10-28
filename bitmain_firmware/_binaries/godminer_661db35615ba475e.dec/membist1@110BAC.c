int __fastcall membist1(int a1)
{
  int v2; // r11
  void (__fastcall *v3)(int, int *); // r2
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
  int v15; // r12
  int v16; // r0
  unsigned int v17; // r1
  int *v18; // r2
  char *v19; // r2
  unsigned __int64 v20; // r6
  size_t v21; // r0
  int *v23; // r2
  char *ptr; // [sp+14h] [bp-1078h]
  _DWORD s[8]; // [sp+28h] [bp-1064h] BYREF
  char src[64]; // [sp+48h] [bp-1044h] BYREF
  int v27; // [sp+88h] [bp-1004h] BYREF
  int v28; // [sp+8Ch] [bp-1000h]
  int v29; // [sp+90h] [bp-FFCh]
  int v30; // [sp+94h] [bp-FF8h]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v27, 0x1000u, 0, "%s...", "membist1");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "membist1",
    8,
    11607,
    60,
    &v27);
  v2 = 0;
  memset(s, 0, sizeof(s));
  ptr = (char *)malloc(0x600u);
  do
  {
    v29 = 1;
    v27 = 1;
    v3 = *(void (__fastcall **)(int, int *))(a1 + 144);
    HIWORD(v29) = 12;
    v28 = 0;
    v30 = (unsigned __int8)v2;
    v3(a1, &v27);
    usleep((__useconds_t)"ead_unregister_cancel");
    usleep(0x2710u);
    v29 = 10485761;
    v27 = -2147483647;
    v30 = 0;
    v28 = 0;
    v4 = *(void (__fastcall **)(int, int *))(a1 + 144);
    LOBYTE(v30) = v2;
    v4(a1, &v27);
    usleep((__useconds_t)"ead_unregister_cancel");
    usleep((__useconds_t)"ead_unregister_cancel");
    v5 = sub_93DE0(a1, (unsigned __int16)v2, 161, ptr);
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
          pthread_mutex_lock(&stru_197BB8);
          v9 = *((unsigned __int8 *)v6 - 24);
          v10 = *((unsigned __int8 *)v6 - 20);
          v6 += 3;
          logfmt_raw((char *)&v27, 0x1000u, 0, "chip %02x core %02x membist not done!", v9, v10);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "membist1",
            8,
            11629,
            100,
            &v27);
          if ( v6 == (_DWORD *)v7 )
            goto LABEL_9;
        }
        if ( (v8 & 0xFFFFFF00) != 0 )
        {
          __pld(v6 - 1);
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw(
            (char *)&v27,
            0x1000u,
            0,
            "chip %02x core %02x membist err cnt: %08x",
            *((unsigned __int8 *)v6 - 24),
            *((unsigned __int8 *)v6 - 20),
            bswap32(*(v6 - 7)));
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_eth/backend_eth.c",
            154,
            "membist1",
            8,
            11625,
            100,
            &v27);
          v23 = &v27 + *((unsigned __int8 *)v6 - 24);
          *(v23 - 24) += bswap32(*(v6 - 7)) & 0x7FFFFF;
        }
        v6 += 3;
      }
      while ( v6 != (_DWORD *)v7 );
    }
LABEL_9:
    v11 = sub_93DE0(a1, (unsigned __int16)v2, 162, ptr);
    if ( v11 > 0 )
    {
      v12 = ptr + 28;
      v13 = (int)&ptr[12 * v11 + 28];
      do
      {
        while ( 1 )
        {
          v14 = *(v12 - 7);
          if ( (v14 & 0xFFFFFF00) != 0 && (v14 & 0x80) != 0 )
            break;
          v12 += 3;
          if ( (_DWORD *)v13 == v12 )
            goto LABEL_15;
        }
        __pld(v12);
        pthread_mutex_lock(&stru_197BB8);
        v15 = *((unsigned __int8 *)v12 - 24);
        v16 = *((unsigned __int8 *)v12 - 20);
        v17 = bswap32(*(v12 - 7));
        __pld(v12 - 1);
        v12 += 3;
        logfmt_raw((char *)&v27, 0x1000u, 0, "chip %02x core %02x membist lost cnt: %08x", v15, v16, v17);
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "membist1",
          8,
          11637,
          100,
          &v27);
        v18 = &v27 + *((unsigned __int8 *)v12 - 36);
        *(v18 - 24) += bswap32(*(v12 - 10)) & 0x7FFFFF;
      }
      while ( (_DWORD *)v13 != v12 );
    }
LABEL_15:
    ++v2;
  }
  while ( v2 != 8 );
  free(ptr);
  memset(src, 0, sizeof(src));
  v19 = "ok";
  v20 = s[1] + (unsigned __int64)s[0] + s[2] + s[3] + s[4] + s[5] + s[6] + s[7];
  if ( v20 > 0x800 )
    v19 = "failed";
  sprintf(src, "<mbist1> test %s(%llu)", v19, "failed", v20);
  v21 = strlen(src);
  if ( v21 <= 0x3F && dword_196BB4[0] <= 63 )
  {
    strncpy((char *)&dword_196BB4[16 * dword_196BB4[0] + 1], src, v21);
    ++dword_196BB4[0];
  }
  else
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw((char *)&v27, 0x1000u, 0, "slt_result is full!");
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "set_test_result",
      15,
      141,
      100,
      &v27);
  }
  ((void (__fastcall *)(int))off_18F508[0])(*(_DWORD *)(a1 + 120));
  return 0;
}
