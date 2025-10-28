int __fastcall div4_seq(int a1, int a2, int a3, int a4)
{
  unsigned __int16 v8; // r11
  unsigned __int16 v9; // r3
  int v10; // r8
  int v11; // r7
  int v12; // r9
  int v13; // r10
  int v14; // r11
  void (__fastcall *v15)(int, int *); // r3
  void (__fastcall *v16)(int, int *); // r3
  void (__fastcall *v17)(int, int *); // r3
  void (__fastcall *v18)(int, int *); // r3
  int v20; // [sp+14h] [bp-1008h]
  int v21; // [sp+18h] [bp-1004h] BYREF
  int v22; // [sp+1Ch] [bp-1000h]
  int v23; // [sp+20h] [bp-FFCh]
  int v24; // [sp+24h] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v21, 0x1000u, 0, "%s chip_id %02x core_id %02x", "div4_seq", a2, a3);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "div4_seq",
    8,
    9827,
    60,
    &v21);
  if ( a4 == 8 )
  {
    v14 = 61578;
    v13 = 61582;
    v12 = 61581;
    v11 = 61580;
    v20 = 61579;
    v10 = 61441;
  }
  else
  {
    v8 = (_WORD)a4 << 12;
    v9 = v8 | 0x8B;
    v10 = v8 | 1;
    v11 = v8 | 0x8C;
    v12 = v8 | 0x8D;
    v13 = v8 | 0x8E;
    v14 = v8 | 0x8A;
    v20 = v9;
  }
  sub_D19C4(a1, a3, v10, 0xFFFFu);
  sub_D19C4(a1, a3, v20, 0xF0F00000);
  sub_D19C4(a1, a3, v10, 0xFFFF0000);
  sub_D19C4(a1, a3, v11, 0xF0F0u);
  sub_D19C4(a1, a3, v10, (unsigned int)"_all_phy");
  sub_D19C4(a1, a3, v11, 0xF000000u);
  sub_D19C4(a1, a3, v10, 0xFFF00000);
  sub_D19C4(a1, a3, v12, (unsigned int)&loc_F0F0E + 1);
  sub_D19C4(a1, a3, v10, 0xFFFFFFu);
  sub_D19C4(a1, a3, v12, 0xF0000000);
  sub_D19C4(a1, a3, v10, 0xFF000000);
  sub_D19C4(a1, a3, v13, 0xF0F0F0u);
  sub_D19C4(a1, a3, v10, 0xFFFu);
  sub_D19C4(a1, a3, v14, 0xF0F0000u);
  sub_D19C4(a1, a3, v10, 0xFFFFF000);
  sub_D19C4(a1, a3, v20, 0xF0Fu);
  sub_D19C4(a1, a3, v10, 0);
  v23 = 0;
  v24 = 0;
  v22 = 0;
  v15 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v21 = 0;
  LOBYTE(v24) = a3;
  LOBYTE(v23) = 1;
  HIWORD(v23) = 144;
  v15(a1, &v21);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v23 = 0;
  v24 = 0;
  v22 = 0;
  v21 = -2147450879;
  v16 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v23) = 1;
  LOBYTE(v24) = a3;
  HIWORD(v23) = 145;
  v16(a1, &v21);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v23 = 9437184;
  v24 = 0;
  v22 = 0;
  v17 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v23) = 1;
  v21 = 0;
  LOBYTE(v24) = a3;
  v17(a1, &v21);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v23 = 9502721;
  v24 = 0;
  v22 = 0;
  v21 = -2147442687;
  v18 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v24) = a3;
  v18(a1, &v21);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  return 0;
}
