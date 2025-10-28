int __fastcall div4_seq_one_lane(int a1, int a2, int a3, int a4)
{
  void (__fastcall *v8)(int, int *); // r3
  void (__fastcall *v9)(int, int *); // r3
  void (__fastcall *v10)(int, int *); // r3
  int v12; // [sp+Ch] [bp-1010h]
  int v13; // [sp+18h] [bp-1004h] BYREF
  int v14; // [sp+1Ch] [bp-1000h]
  int v15; // [sp+20h] [bp-FFCh]
  int v16; // [sp+24h] [bp-FF8h]

  pthread_mutex_lock(&stru_197BB8);
  v12 = a4;
  LOWORD(a4) = (_WORD)a4 << 12;
  logfmt_raw((char *)&v13, 0x1000u, 0, "%s chip_id %02x core_id %02x channel_id %02x", "div4_seq_one_lane", a2, a3, v12);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "div4_seq_one_lane",
    17,
    9951,
    60,
    &v13);
  sub_1325F4(a1, a3, (unsigned __int16)a4 | 1, 0xFFFFu);
  sub_1325F4(a1, a3, (unsigned __int16)a4 | 0x8B, 0xF0F00000);
  sub_1325F4(a1, a3, (unsigned __int16)a4 | 1, 0xFFFF0000);
  sub_1325F4(a1, a3, (unsigned __int16)a4 | 0x8C, 0xF0F0u);
  sub_1325F4(a1, a3, (unsigned __int16)a4 | 1, (unsigned int)&loc_FFFFC + 3);
  sub_1325F4(a1, a3, (unsigned __int16)a4 | 0x8C, 0xF000000u);
  sub_1325F4(a1, a3, (unsigned __int16)a4 | 1, 0xFFF00000);
  sub_1325F4(a1, a3, (unsigned __int16)a4 | 0x8D, (unsigned int)&loc_F0F0C + 3);
  sub_1325F4(a1, a3, (unsigned __int16)a4 | 1, 0xFFFFFFu);
  sub_1325F4(a1, a3, (unsigned __int16)a4 | 0x8D, 0xF0000000);
  sub_1325F4(a1, a3, (unsigned __int16)a4 | 1, 0xFF000000);
  sub_1325F4(a1, a3, a4 & 0xF000 | 0x8E, 0xF0F0F0u);
  sub_1325F4(a1, a3, (unsigned __int16)a4 | 1, 0xFFFu);
  sub_1325F4(a1, a3, a4 & 0xF000 | 0x8A, 0xF0F0000u);
  sub_1325F4(a1, a3, (unsigned __int16)a4 | 1, 0xFFFFF000);
  sub_1325F4(a1, a3, (unsigned __int16)a4 | 0x8B, 0xF0Fu);
  sub_1325F4(a1, a3, (unsigned __int16)a4 | 1, 0);
  v15 = 9437184;
  v16 = 0;
  v14 = 0;
  v8 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v16) = a3;
  v13 = 0;
  LOBYTE(v15) = 1;
  v8(a1, &v13);
  usleep((__useconds_t)"ead_unregister_cancel");
  v15 = 1;
  v14 = 0;
  v13 = -2147450879;
  v16 = (unsigned __int8)a3;
  v9 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v15) = 145;
  v9(a1, &v13);
  usleep((__useconds_t)"ead_unregister_cancel");
  v15 = 9437184;
  v16 = 0;
  v10 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v14 = 0;
  LOBYTE(v15) = 1;
  LOBYTE(v16) = a3;
  v13 = 0;
  v10(a1, &v13);
  usleep((__useconds_t)"ead_unregister_cancel");
  v15 = 9502721;
  v14 = 0;
  v16 = (unsigned __int8)a3;
  v13 = -2147442687;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v13);
  usleep((__useconds_t)"ead_unregister_cancel");
  return 0;
}
