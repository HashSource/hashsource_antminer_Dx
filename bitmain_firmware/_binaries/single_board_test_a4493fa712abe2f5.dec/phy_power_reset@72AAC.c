int __fastcall phy_power_reset(int a1)
{
  int v2; // r11
  void (__fastcall *v3)(int, int *); // r3
  char v4; // r8
  void (__fastcall *v5)(int, int *); // r3
  void (__fastcall *v6)(int, int *); // r3
  int v8; // [sp+10h] [bp-1004h] BYREF
  int v9; // [sp+14h] [bp-1000h]
  int v10; // [sp+18h] [bp-FFCh]
  int v11; // [sp+1Ch] [bp-FF8h]

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw((char *)&v8, 0x1000u, 0, "%s...", "phy_power_reset");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "phy_power_reset",
    15,
    675,
    60,
    &v8);
  v10 = 1;
  v11 = 255;
  v9 = 0;
  v2 = 0;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v8 = 0;
  HIWORD(v10) = 80;
  v3(a1, &v8);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  do
  {
    v4 = v2;
    v10 = 0;
    v11 = 1;
    v9 = 0;
    ++v2;
    v5 = *(void (__fastcall **)(int, int *))(a1 + 144);
    HIWORD(v10) = 80;
    BYTE1(v10) = v4;
    v8 = 0x10000;
    v5(a1, &v8);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v8 = 0x10000;
    LOBYTE(v10) = 0;
    BYTE1(v10) = v4;
    v11 = 2;
    v9 = 0;
    HIWORD(v10) = 80;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v8);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v8 = 0x10000;
    LOBYTE(v10) = 0;
    BYTE1(v10) = v4;
    v11 = 5;
    v9 = 0;
    HIWORD(v10) = 80;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v8);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v8 = 0x10000;
    LOBYTE(v10) = 0;
    BYTE1(v10) = v4;
    v11 = 6;
    v9 = 0;
    HIWORD(v10) = 80;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v8);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v8 = 0x10000;
    LOBYTE(v10) = 0;
    BYTE1(v10) = v4;
    v11 = 9;
    v9 = 0;
    HIWORD(v10) = 80;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v8);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v8 = 0x10000;
    LOBYTE(v10) = 0;
    BYTE1(v10) = v4;
    v11 = 10;
    v9 = 0;
    HIWORD(v10) = 80;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v8);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v8 = 0x10000;
    LOBYTE(v10) = 0;
    BYTE1(v10) = v4;
    v11 = 13;
    v9 = 0;
    HIWORD(v10) = 80;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v8);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v8 = 0x10000;
    LOBYTE(v10) = 0;
    BYTE1(v10) = v4;
    v11 = 14;
    v9 = 0;
    HIWORD(v10) = 80;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v8);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v8 = 0x10000;
    v6 = *(void (__fastcall **)(int, int *))(a1 + 144);
    LOBYTE(v10) = 0;
    BYTE1(v10) = v4;
    v9 = 0;
    v11 = 0;
    HIWORD(v10) = 80;
    v6(a1, &v8);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v8 = 0x10000;
    LOBYTE(v10) = 0;
    BYTE1(v10) = v4;
    v11 = 3;
    v9 = 0;
    HIWORD(v10) = 80;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v8);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v8 = 0x10000;
    LOBYTE(v10) = 0;
    BYTE1(v10) = v4;
    v11 = 7;
    v9 = 0;
    HIWORD(v10) = 80;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v8);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v8 = 0x10000;
    LOBYTE(v10) = 0;
    BYTE1(v10) = v4;
    v11 = 8;
    v9 = 0;
    HIWORD(v10) = 80;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v8);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    v8 = 0x10000;
    LOBYTE(v10) = 0;
    BYTE1(v10) = v4;
    v11 = 11;
    v9 = 0;
    HIWORD(v10) = 80;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v8);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    LOBYTE(v10) = 0;
    v8 = 0x10000;
    BYTE1(v10) = v4;
    v11 = 15;
    v9 = 0;
    HIWORD(v10) = 80;
    (*(void (__fastcall **)(int, int *))(a1 + 144))(a1, &v8);
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
    usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  }
  while ( v2 != 8 );
  return 0;
}
