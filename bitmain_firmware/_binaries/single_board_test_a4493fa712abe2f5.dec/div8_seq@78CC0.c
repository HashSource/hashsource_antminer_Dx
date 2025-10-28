int __fastcall div8_seq(int a1, int a2, int a3, int a4)
{
  unsigned __int16 v8; // r3
  int v9; // r8
  int v10; // r9
  int v11; // r7
  int v12; // r10
  int v13; // r11
  void (__fastcall *v14)(int, int *); // r3
  void (__fastcall *v15)(int, int *); // r3
  void (__fastcall *v16)(int, int *); // r3
  void (__fastcall *v17)(int, int *); // r3
  int v19; // [sp+14h] [bp-1008h]
  int v20; // [sp+18h] [bp-1004h] BYREF
  int v21; // [sp+1Ch] [bp-1000h]
  int v22; // [sp+20h] [bp-FFCh]
  int v23; // [sp+24h] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v20, 0x1000u, 0, "%s chip_id %02x core_id %02x", "div8_seq", a2, a3);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
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
    v10 = 61579;
    v9 = 61441;
  }
  else
  {
    v8 = (_WORD)a4 << 12;
    LOWORD(v12) = ((_WORD)a4 << 12) | 0x8D;
    LOWORD(v13) = ((_WORD)a4 << 12) | 0x8E;
    v9 = (unsigned __int16)((_WORD)a4 << 12) | 1;
    v10 = (unsigned __int16)((_WORD)a4 << 12) | 0x8B;
    v11 = (unsigned __int16)((_WORD)a4 << 12) | 0x8C;
    v12 = (unsigned __int16)v12;
    v13 = (unsigned __int16)v13;
    v19 = v8 | 0x8A;
  }
  sub_D19C4(a1, a3, v9, 0xFFFFu);
  sub_D19C4(a1, a3, v10, 0xFF000000);
  sub_D19C4(a1, a3, v9, 0xFFFF0000);
  sub_D19C4(a1, a3, v11, 0xFF00u);
  sub_D19C4(a1, a3, v9, (unsigned int)"_all_phy");
  sub_D19C4(a1, a3, v11, 0xF0000000);
  sub_D19C4(a1, a3, v9, 0xFFF00000);
  sub_D19C4(a1, a3, v12, (unsigned int)"ting_get_addr_CKB2");
  sub_D19C4(a1, a3, v9, 0xFFFFFFu);
  sub_D19C4(a1, a3, v12, 0);
  sub_D19C4(a1, a3, v9, 0xFF000000);
  sub_D19C4(a1, a3, v13, 0xFF00FFu);
  sub_D19C4(a1, a3, v9, 0xFFFu);
  sub_D19C4(a1, a3, v19, 0xFF00000u);
  sub_D19C4(a1, a3, v9, 0xFFFFF000);
  sub_D19C4(a1, a3, v10, 0xFF0u);
  sub_D19C4(a1, a3, v9, 0);
  v22 = 0;
  v23 = 0;
  v21 = 0;
  v14 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v20 = 0;
  LOBYTE(v23) = a3;
  LOBYTE(v22) = 1;
  HIWORD(v22) = 144;
  v14(a1, &v20);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v22 = 0;
  v23 = 0;
  v21 = 0;
  v20 = -2147450879;
  v15 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v22) = 1;
  LOBYTE(v23) = a3;
  HIWORD(v22) = 145;
  v15(a1, &v20);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v22 = 9437184;
  v23 = 0;
  v21 = 0;
  v16 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v22) = 1;
  v20 = 0;
  LOBYTE(v23) = a3;
  v16(a1, &v20);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v22 = 9502721;
  v23 = 0;
  v21 = 0;
  v20 = -2147442687;
  v17 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v23) = a3;
  v17(a1, &v20);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  return 0;
}
