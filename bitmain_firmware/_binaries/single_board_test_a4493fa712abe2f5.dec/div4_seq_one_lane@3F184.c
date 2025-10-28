int __fastcall div4_seq_one_lane(int a1, int a2, int a3, int a4)
{
  void (__fastcall *v8)(int, int *); // r3
  void (__fastcall *v9)(int, int *); // r3
  void (__fastcall *v10)(int, int *); // r3
  void (__fastcall *v11)(int, int *); // r3
  int v13; // [sp+10h] [bp-1004h] BYREF
  int v14; // [sp+14h] [bp-1000h]
  int v15; // [sp+18h] [bp-FFCh]
  int v16; // [sp+1Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v13, 0x1000u, 0, "%s chip_id %02x core_id %02x channel_id %02x", "div4_seq_one_lane", a2, a3, a4);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "div4_seq_one_lane",
    17,
    9951,
    60,
    &v13);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 1, 0xFFFFu);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x8B, 0xF0F00000);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 1, 0xFFFF0000);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x8C, 0xF0F0u);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 1, (unsigned int)"_all_phy");
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x8C, 0xF000000u);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 1, 0xFFF00000);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x8D, (unsigned int)&loc_F0F0E + 1);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 1, 0xFFFFFFu);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x8D, 0xF0000000);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 1, 0xFF000000);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x8E, 0xF0F0F0u);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 1, 0xFFFu);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x8A, 0xF0F0000u);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 1, 0xFFFFF000);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x8B, 0xF0Fu);
  sub_D19C4(a1, a3, (unsigned __int16)((_WORD)a4 << 12) | 1, 0);
  v15 = 0;
  v16 = 0;
  v14 = 0;
  v8 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v16) = a3;
  v13 = 0;
  LOBYTE(v15) = 1;
  HIWORD(v15) = 144;
  v8(a1, &v13);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v15 = 0;
  v16 = 0;
  v14 = 0;
  v13 = -2147450879;
  v9 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v15) = 1;
  LOBYTE(v16) = a3;
  HIWORD(v15) = 145;
  v9(a1, &v13);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v15 = 9437184;
  v16 = 0;
  v14 = 0;
  v10 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v15) = 1;
  LOBYTE(v16) = a3;
  v13 = 0;
  v10(a1, &v13);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v15 = 9502721;
  v16 = 0;
  v14 = 0;
  v13 = -2147442687;
  v11 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v16) = a3;
  v11(a1, &v13);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  return 0;
}
