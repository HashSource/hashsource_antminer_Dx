int __fastcall div8_seq(int a1, int a2, int a3, int a4)
{
  unsigned __int16 v8; // r3
  unsigned __int16 v9; // r2
  int v10; // r8
  int v11; // r6
  int v12; // r10
  int v13; // r11
  void (__fastcall *v14)(int, int *); // r3
  void (__fastcall *v15)(int, int *); // r3
  void (__fastcall *v16)(int, int *); // r3
  int v18; // [sp+10h] [bp-8h]
  int v19; // [sp+14h] [bp-4h]
  int v20; // [sp+18h] [bp+0h] BYREF
  int v21; // [sp+1Ch] [bp+4h]
  int v22; // [sp+20h] [bp+8h]
  int v23; // [sp+24h] [bp+Ch]

  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v20, 0x1000u, 0, "%s chip_id %02x core_id %02x", "div8_seq", a2, a3);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "div8_seq",
    8,
    9858,
    60,
    &v20);
  if ( a4 == 8 )
  {
    v13 = 61582;
    v19 = 61578;
    v12 = 61581;
    v11 = 61580;
    v18 = 61579;
    v10 = 61441;
  }
  else
  {
    v8 = (_WORD)a4 << 12;
    LOWORD(v12) = ((_WORD)a4 << 12) | 0x8D;
    LOWORD(v13) = ((_WORD)a4 << 12) | 0x8E;
    v9 = ((_WORD)a4 << 12) | 0x8B;
    v10 = (unsigned __int16)((_WORD)a4 << 12) | 1;
    v11 = (unsigned __int16)((_WORD)a4 << 12) | 0x8C;
    v12 = (unsigned __int16)v12;
    v13 = (unsigned __int16)v13;
    v18 = v9;
    v19 = v8 | 0x8A;
  }
  sub_1325F4(a1, a3, v10, 0xFFFFu);
  sub_1325F4(a1, a3, v18, 0xFF000000);
  sub_1325F4(a1, a3, v10, 0xFFFF0000);
  sub_1325F4(a1, a3, v11, 0xFF00u);
  sub_1325F4(a1, a3, v10, (unsigned int)&loc_FFFFC + 3);
  sub_1325F4(a1, a3, v11, 0xF0000000);
  sub_1325F4(a1, a3, v10, 0xFFF00000);
  sub_1325F4(a1, a3, v12, (unsigned int)&loc_FF00C + 3);
  sub_1325F4(a1, a3, v10, 0xFFFFFFu);
  sub_1325F4(a1, a3, v12, 0);
  sub_1325F4(a1, a3, v10, 0xFF000000);
  sub_1325F4(a1, a3, v13, 0xFF00FFu);
  sub_1325F4(a1, a3, v10, 0xFFFu);
  sub_1325F4(a1, a3, v19, 0xFF00000u);
  sub_1325F4(a1, a3, v10, 0xFFFFF000);
  sub_1325F4(a1, a3, v18, 0xFF0u);
  sub_1325F4(a1, a3, v10, 0);
  v22 = 0;
  v23 = 0;
  v21 = 0;
  v14 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v20 = 0;
  LOBYTE(v23) = a3;
  LOBYTE(v22) = 1;
  HIWORD(v22) = 144;
  v14(a1, &v20);
  usleep((__useconds_t)"ead_unregister_cancel");
  v22 = 1;
  v21 = 0;
  v20 = -2147450879;
  v23 = (unsigned __int8)a3;
  v15 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v22) = 145;
  v15(a1, &v20);
  usleep((__useconds_t)"ead_unregister_cancel");
  v22 = 0;
  v23 = 0;
  v16 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v22) = 144;
  LOBYTE(v22) = 1;
  v21 = 0;
  LOBYTE(v23) = a3;
  v20 = 0;
  v16(a1, &v20);
  usleep((__useconds_t)"ead_unregister_cancel");
  v22 = 9502721;
  v21 = 0;
  v23 = (unsigned __int8)a3;
  v20 = -2147442687;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v20);
  usleep((__useconds_t)"ead_unregister_cancel");
  return 0;
}
