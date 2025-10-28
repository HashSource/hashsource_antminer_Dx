int __fastcall serdes_phy_bist(int a1, _DWORD *a2, int a3, _BYTE *a4)
{
  int v7; // r11
  int v8; // r10
  bool v9; // zf
  int v10; // r6
  int v11; // r3
  int v12; // r12
  int v13; // r7
  int v14; // lr
  int v15; // r8
  int v16; // r9
  void (__fastcall *v17)(int, int *); // r3
  void (__fastcall *v18)(int, int *); // r3
  int v20; // [sp+10h] [bp-101Ch]
  int v21; // [sp+14h] [bp-1018h]
  int v22; // [sp+1Ch] [bp-1010h]
  int v24; // [sp+28h] [bp-1004h] BYREF
  int v25; // [sp+2Ch] [bp-1000h]
  int v26; // [sp+30h] [bp-FFCh]
  int v27; // [sp+34h] [bp-FF8h]

  LOWORD(v7) = -3991;
  pthread_mutex_lock(&stru_1A8A24);
  LOWORD(v8) = -4094;
  logfmt_raw((char *)&v24, 0x1000u, 0, "%s core_id %02x", "serdes_phy_bist", a2);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist",
    15,
    10898,
    60,
    &v24);
  v9 = a3 == 8;
  v20 = a3;
  v10 = -2147483543;
  LOWORD(v11) = -4095;
  if ( v9 )
    v10 = -2147422202;
  v12 = -2147422181;
  HIWORD(v11) = 0x8000;
  LOWORD(v13) = -4068;
  LOWORD(v14) = -4036;
  if ( v9 )
  {
    v15 = v11;
  }
  else
  {
    v15 = -2147483647;
    v12 = -2147483621;
  }
  HIWORD(v14) = 0x8000;
  HIWORD(v13) = 0x8000;
  if ( !v9 )
  {
    v14 = -2147483588;
    v13 = -2147483620;
  }
  LOWORD(v16) = -4093;
  v21 = v12;
  v22 = v14;
  HIWORD(v7) = 0x8000;
  HIWORD(v8) = 0x8000;
  if ( !v9 )
  {
    v7 = v10;
    v8 = -2147483646;
    v10 = -2147483642;
  }
  HIWORD(v16) = 0x8000;
  if ( !v9 )
    v16 = -2147483645;
  sub_DAF1C(a1, (unsigned __int8)a2, 144, -241);
  sub_DAF1C(a1, (unsigned __int8)a2, 145, v15);
  sub_DAF1C(a1, (unsigned __int8)a2, 144, 80);
  sub_DAF1C(a1, (unsigned __int8)a2, 145, v10);
  serdes_apb_write_1_chip(a1, 1, 2, 4102, 0x40u);
  sub_DAF1C(a1, (unsigned __int8)a2, 144, -13);
  sub_DAF1C(a1, (unsigned __int8)a2, 145, v15);
  sub_DAF1C(a1, (unsigned __int8)a2, 144, 8);
  sub_DAF1C(a1, (unsigned __int8)a2, 145, v7);
  sub_DAF1C(a1, (unsigned __int8)a2, 144, -4);
  sub_DAF1C(a1, (unsigned __int8)a2, 145, v15);
  sub_DAF1C(a1, (unsigned __int8)a2, 144, 2);
  sub_DAF1C(a1, (unsigned __int8)a2, 145, v8);
  sub_DAF1C(a1, (unsigned __int8)a2, 144, -4);
  sub_DAF1C(a1, (unsigned __int8)a2, 145, v15);
  sub_DAF1C(a1, (unsigned __int8)a2, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a2, 145, v16);
  sub_DAF1C(a1, (unsigned __int8)a2, 144, 0x7FFFFFFF);
  sub_DAF1C(a1, (unsigned __int8)a2, 145, v15);
  sub_DAF1C(a1, (unsigned __int8)a2, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a2, 145, v21);
  sub_DAF1C(a1, (unsigned __int8)a2, 144, -2);
  sub_DAF1C(a1, (unsigned __int8)a2, 145, v15);
  sub_DAF1C(a1, (unsigned __int8)a2, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a2, 145, v13);
  sub_DAF1C(a1, (unsigned __int8)a2, 144, -2);
  sub_DAF1C(a1, (unsigned __int8)a2, 145, v15);
  sub_DAF1C(a1, (unsigned __int8)a2, 144, 100663296);
  sub_DAF1C(a1, (unsigned __int8)a2, 145, v22);
  sub_DAF1C(a1, (unsigned __int8)a2, 144, 0);
  sub_DAF1C(a1, (unsigned __int8)a2, 145, v15);
  v26 = 5242881;
  v27 = 0;
  v24 = (int)&word_1FFFE + 1;
  v25 = 0;
  v17 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v27) = -1;
  v17(a1, &v24);
  usleep((__useconds_t)&stru_18694.st_info);
  usleep(0x2710u);
  sub_DAF1C(a1, (unsigned __int8)a2, 112, 0);
  sub_DAF1C(a1, (unsigned __int8)a2, 113, 0);
  sub_DAF1C(a1, (unsigned __int8)a2, 114, 0);
  sub_DAF1C(a1, (unsigned __int8)a2, 115, 0);
  sub_DAF1C(a1, (unsigned __int8)a2, 116, 0);
  sub_DAF1C(a1, (unsigned __int8)a2, 117, 0);
  check_tx_rx_status(a1, 0, (int)a2);
  if ( check_ref_clock_ready_ext(a1, 0, a2, v20, a4) && (++dword_1A402C, dword_1A402C <= 2) )
  {
    V_LOCK();
    logfmt_raw((char *)&v24, 0x1000u, 0, "check_ref_clock_ready_ext failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "serdes_phy_bist",
      15,
      11089,
      60,
      &v24);
    return -1;
  }
  else
  {
    sub_DAF1C(a1, (unsigned __int8)a2, 87, 255);
    usleep(0x2710u);
    serdes_phy_bist_external_all_phy(a1, 0, v20, 119);
    v26 = 10354688;
    v24 = 2;
    v18 = *(void (__fastcall **)(int, int *))(a1 + 156);
    v27 = 255;
    LOBYTE(v26) = 1;
    v25 = 0;
    v18(a1, &v24);
    usleep((__useconds_t)&stru_18694.st_info);
    check_mac_done(a1, 0, (int)a2, 0);
    return 0;
  }
}
