int __fastcall div2_seq_one_lane(int a1, int a2, int a3, int a4)
{
  unsigned __int16 v8; // r11
  void (__fastcall *v9)(int, int *); // r3
  void (__fastcall *v10)(int, int *); // r3
  void (__fastcall *v11)(int, int *); // r3
  void (__fastcall *v12)(int, int *); // r3
  int v14; // [sp+10h] [bp-1004h] BYREF
  int v15; // [sp+14h] [bp-1000h]
  int v16; // [sp+18h] [bp-FFCh]
  int v17; // [sp+1Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v14, 0x1000u, 0, "%s chip_id %02x core_id %02x channel_id %02x", "div2_seq_one_lane", a2, a3, a4);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "div2_seq_one_lane",
    17,
    9925,
    60,
    &v14);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 1, 0xFFFFu);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x8B, 0xCCCC0000);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 1, 0xFFFF0000);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x8C, 0xCCCCu);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 1, (unsigned int)"_all_phy");
  v8 = ((_WORD)a4 << 12) | 0x8D;
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x8C, 0xCCC00000);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 1, 0xFFF00000);
  sub_D19C4(a1, a3, v8, (unsigned int)&loc_CCCCC);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 1, 0xFFFFFFu);
  sub_D19C4(a1, a3, v8, 0xCC000000);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 1, 0xFF000000);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x8E, 0xCCCCCCu);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 1, 0xFFFu);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x8A, 0xCCCCC000);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 1, 0xFFFFF000);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x8B, 0xCCCu);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 1, 0);
  v16 = 0;
  v17 = 0;
  v15 = 0;
  v9 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v17) = a3;
  v14 = 0;
  LOBYTE(v16) = 1;
  HIWORD(v16) = 144;
  v9(a1, &v14);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v16 = 0;
  v17 = 0;
  v15 = 0;
  v14 = -2147450879;
  v10 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v16) = 1;
  LOBYTE(v17) = a3;
  HIWORD(v16) = 145;
  v10(a1, &v14);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v16 = 9437184;
  v17 = 0;
  v15 = 0;
  v11 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v16) = 1;
  LOBYTE(v17) = a3;
  v14 = 0;
  v11(a1, &v14);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v16 = 9502721;
  v17 = 0;
  v15 = 0;
  v14 = -2147442687;
  v12 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v17) = a3;
  v12(a1, &v14);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  return 0;
}
