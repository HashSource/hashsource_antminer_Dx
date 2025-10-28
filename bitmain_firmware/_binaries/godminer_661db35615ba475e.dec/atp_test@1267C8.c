int __fastcall atp_test(int a1, int a2, int a3, int a4)
{
  __int16 v5; // r9
  void (__fastcall *v7)(int, unsigned int *); // r2
  void (__fastcall *v8)(int, unsigned int *); // r2
  void (__fastcall *v9)(int, unsigned int *); // r3
  void (__fastcall *v10)(int, unsigned int *); // r3
  void (__fastcall *v11)(int, unsigned int *); // r3
  void (__fastcall *v12)(int, unsigned int *); // r3
  void (__fastcall *v13)(int, unsigned int *); // r3
  unsigned int v16; // [sp+20h] [bp-1004h] BYREF
  int v17; // [sp+24h] [bp-1000h]
  int v18; // [sp+28h] [bp-FFCh]
  int v19; // [sp+2Ch] [bp-FF8h]

  v5 = (_WORD)a4 << 12;
  v18 = 0;
  v19 = 0;
  v16 = -520093697;
  v17 = 0;
  v7 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v18) = 1;
  HIWORD(v18) = 144;
  LOBYTE(v19) = a3;
  v7(a1, &v16);
  usleep((__useconds_t)"ead_unregister_cancel");
  v18 = 9502721;
  v19 = 0;
  v17 = 0;
  v16 = v5 & 0xF000 | 0x80000001;
  v8 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v19) = a3;
  v8(a1, &v16);
  usleep((__useconds_t)"ead_unregister_cancel");
  v18 = 9437185;
  v17 = 0;
  v16 = 251658240;
  v19 = (unsigned __int8)a3;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v16);
  usleep((__useconds_t)"ead_unregister_cancel");
  v18 = 1;
  v16 = v5 & 0xF000 | 0x80000089;
  v19 = 0;
  v9 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  v17 = 0;
  HIWORD(v18) = 145;
  LOBYTE(v19) = a3;
  v9(a1, &v16);
  usleep((__useconds_t)"ead_unregister_cancel");
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v16, 0x1000u, 0, "%s channel_id %1x, core_id %1x test vdda please", "atp_test", a4, a3);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "atp_test",
    8,
    8346,
    60,
    &v16);
  while ( IO_getc((_IO_FILE *)stdin) != 10 )
    ;
  v18 = 9437185;
  v17 = 0;
  v19 = (unsigned __int8)a3;
  v16 = 385875968;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v16);
  usleep((__useconds_t)"ead_unregister_cancel");
  v18 = 9502721;
  v19 = 0;
  v17 = 0;
  v16 = v5 & 0xF000 | 0x80000089;
  v10 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v19) = a3;
  v10(a1, &v16);
  usleep((__useconds_t)"ead_unregister_cancel");
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v16, 0x1000u, 0, "%s channel_id %1x, core_id %1x test vddhv please", "atp_test", a4, a3);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "atp_test",
    8,
    8350,
    60,
    &v16);
  IO_getc((_IO_FILE *)stdin);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v16, 0x1000u, 0, "%s reset atp address", "atp_test");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "atp_test",
    8,
    8353,
    60,
    &v16);
  v18 = 0;
  v19 = 0;
  v17 = 0;
  v11 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v18) = 1;
  HIWORD(v18) = 144;
  v16 = 0;
  LOBYTE(v19) = a3;
  v11(a1, &v16);
  usleep((__useconds_t)"ead_unregister_cancel");
  v18 = 9502721;
  v19 = 0;
  v17 = 0;
  v16 = v5 & 0xF000 | 0x80000089;
  v12 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  LOBYTE(v19) = a3;
  v12(a1, &v16);
  usleep((__useconds_t)"ead_unregister_cancel");
  v18 = 0;
  v19 = 0;
  v13 = *(void (__fastcall **)(int, unsigned int *))(a1 + 144);
  HIWORD(v18) = 144;
  LOBYTE(v18) = 1;
  v17 = 0;
  LOBYTE(v19) = a3;
  v16 = 0;
  v13(a1, &v16);
  usleep((__useconds_t)"ead_unregister_cancel");
  v18 = 9502721;
  v17 = 0;
  v19 = (unsigned __int8)a3;
  v16 = v5 & 0xF000 | 0x80000001;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 144))(a1, &v16);
  usleep((__useconds_t)"ead_unregister_cancel");
  return 0;
}
