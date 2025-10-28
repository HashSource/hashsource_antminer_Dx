int __fastcall serdes_phy_bist(int a1, char *a2, int a3, _BYTE *a4)
{
  int v7; // r11
  int v8; // r8
  bool v9; // zf
  int v10; // r0
  int v11; // r12
  int v12; // r12
  int v13; // r9
  int v14; // r10
  int v15; // lr
  int v16; // r6
  int v17; // r7
  void (__fastcall *v18)(int, int *); // r3
  int v20; // [sp+14h] [bp-1020h]
  int v21; // [sp+18h] [bp-101Ch]
  int v22; // [sp+1Ch] [bp-1018h]
  int v23; // [sp+20h] [bp-1014h]
  int v25; // [sp+30h] [bp-1004h] BYREF
  int v26; // [sp+34h] [bp-1000h]
  int v27; // [sp+38h] [bp-FFCh]
  int v28; // [sp+3Ch] [bp-FF8h]

  v7 = -2147422207;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v25, 0x1000u, 0, "%s core_id %02x", "serdes_phy_bist", a2);
  LOWORD(v8) = -4094;
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "serdes_phy_bist",
    15,
    10898,
    60,
    &v25);
  v9 = a3 == 8;
  LOWORD(v10) = -4068;
  if ( a3 != 8 )
    v7 = -2147483647;
  HIWORD(v10) = 0x8000;
  HIWORD(v8) = 0x8000;
  LOWORD(v11) = -4069;
  if ( a3 != 8 )
    v8 = -2147483646;
  HIWORD(v11) = 0x8000;
  if ( a3 != 8 )
    v11 = -2147483621;
  v22 = v11;
  v12 = v10;
  v21 = a3;
  v13 = -2147422103;
  LOWORD(v14) = -4090;
  if ( a3 != 8 )
    v13 = -2147483543;
  LOWORD(v15) = -4093;
  LOWORD(v16) = 60;
  if ( a3 != 8 )
    v12 = -2147483620;
  HIWORD(v15) = 0x8000;
  HIWORD(v14) = 0x8000;
  if ( a3 != 8 )
  {
    v15 = -2147483645;
    v14 = -2147483642;
  }
  HIWORD(v16) = 0x8000;
  v17 = -2147422148;
  v20 = v15;
  v23 = v12;
  if ( !v9 )
    v17 = v16;
  sub_70324(a1, (unsigned __int8)a2, 144, -241);
  sub_70324(a1, (unsigned __int8)a2, 145, v7);
  sub_70324(a1, (unsigned __int8)a2, 144, 80);
  sub_70324(a1, (unsigned __int8)a2, 145, v14);
  serdes_apb_write_1_chip(a1, 1, 2, 4102, 0x40u);
  sub_70324(a1, (unsigned __int8)a2, 144, -13);
  sub_70324(a1, (unsigned __int8)a2, 145, v7);
  sub_70324(a1, (unsigned __int8)a2, 144, 8);
  sub_70324(a1, (unsigned __int8)a2, 145, v13);
  sub_70324(a1, (unsigned __int8)a2, 144, -4);
  sub_70324(a1, (unsigned __int8)a2, 145, v7);
  sub_70324(a1, (unsigned __int8)a2, 144, 2);
  sub_70324(a1, (unsigned __int8)a2, 145, v8);
  sub_70324(a1, (unsigned __int8)a2, 144, -4);
  sub_70324(a1, (unsigned __int8)a2, 145, v7);
  sub_70324(a1, (unsigned __int8)a2, 144, 0);
  sub_70324(a1, (unsigned __int8)a2, 145, v20);
  sub_70324(a1, (unsigned __int8)a2, 144, 0x7FFFFFFF);
  sub_70324(a1, (unsigned __int8)a2, 145, v7);
  sub_70324(a1, (unsigned __int8)a2, 144, 0);
  sub_70324(a1, (unsigned __int8)a2, 145, v22);
  sub_70324(a1, (unsigned __int8)a2, 144, -2);
  sub_70324(a1, (unsigned __int8)a2, 145, v7);
  sub_70324(a1, (unsigned __int8)a2, 144, 0);
  sub_70324(a1, (unsigned __int8)a2, 145, v23);
  sub_70324(a1, (unsigned __int8)a2, 144, -2);
  sub_70324(a1, (unsigned __int8)a2, 145, v7);
  sub_70324(a1, (unsigned __int8)a2, 144, 100663296);
  sub_70324(a1, (unsigned __int8)a2, 145, v17);
  sub_70324(a1, (unsigned __int8)a2, 144, 0);
  sub_70324(a1, (unsigned __int8)a2, 145, v7);
  v28 = 255;
  v27 = 5242881;
  v25 = (int)&loc_1FFFE;
  v26 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v25);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep(0x2710u);
  sub_70324(a1, (unsigned __int8)a2, 112, 0);
  sub_70324(a1, (unsigned __int8)a2, 113, 0);
  sub_70324(a1, (unsigned __int8)a2, 114, 0);
  sub_70324(a1, (unsigned __int8)a2, 115, 0);
  sub_70324(a1, (unsigned __int8)a2, 116, 0);
  sub_70324(a1, (unsigned __int8)a2, 117, 0);
  check_tx_rx_status((_DWORD *)a1, 0, (int)a2);
  if ( check_ref_clock_ready_ext((_DWORD *)a1, 0, a2, v21, a4) && (++dword_3B5478, dword_3B5478 <= 2) )
  {
    V_LOCK();
    logfmt_raw((char *)&v25, 0x1000u, 0, "check_ref_clock_ready_ext failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
      71,
      "serdes_phy_bist",
      15,
      11089,
      60,
      &v25);
    return -1;
  }
  else
  {
    sub_70324(a1, (unsigned __int8)a2, 87, 255);
    usleep(0x2710u);
    serdes_phy_bist_external_all_phy((_DWORD *)a1, 0, v21, 119);
    v27 = 1;
    v28 = 255;
    v25 = 2;
    v26 = 0;
    v18 = *(void (__fastcall **)(int, int *))(a1 + 144);
    HIWORD(v27) = 158;
    v18(a1, &v25);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    check_mac_done((_DWORD *)a1, 0, a2, 0);
    return 0;
  }
}
