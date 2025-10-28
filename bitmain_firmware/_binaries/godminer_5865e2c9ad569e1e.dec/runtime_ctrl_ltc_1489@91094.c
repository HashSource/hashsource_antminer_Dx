void *runtime_ctrl_ltc_1489()
{
  int *v0; // r10
  int v1; // r3
  int v2; // r5
  _DWORD *v3; // r8
  int v4; // r0
  int v5; // r1
  unsigned int v6; // r11
  void *v7; // r0
  unsigned int v8; // lr
  unsigned int v9; // r12
  unsigned int v10; // r3
  unsigned int v11; // r7
  unsigned int v12; // r9
  int v13; // r3
  void *v15; // [sp+14h] [bp-13E0h]
  _QWORD v16[123]; // [sp+18h] [bp-13DCh] BYREF
  char v17[4100]; // [sp+3F0h] [bp-1004h] BYREF

  LOWORD(v0) = -316;
  HIWORD(v0) = (unsigned int)"ChipSetting_pll_sel_LTC_1489" >> 16;
  V_LOCK();
  LOWORD(v1) = 1440;
  HIWORD(v1) = (unsigned int)".c" >> 16;
  LOWORD(v2) = 572;
  v3 = v0 + 214;
  logfmt_raw(v17, 0x1000u, 0, v1);
  HIWORD(v2) = (unsigned int)"ildroot/tmp/release/build/godminer-origin_godminer-new/./backend/chip_setting.c" >> 16;
  V_UNLOCK();
  zlog(g_zc, v2, 170, v0 + 214, 21, 957, 40, v17);
  v0 += 220;
  memset(v16, 0, sizeof(v16));
  v4 = *v0;
  v5 = v0[1];
  LODWORD(v16[35]) = 14156;
  LOWORD(v6) = 30588;
  HIDWORD(v16[43]) = v4;
  LODWORD(v16[44]) = v5;
  LODWORD(v16[37]) = 6517868;
  HIDWORD(v16[45]) = sensor_info_ltc_1489;
  v16[46] = qword_172A6C;
  v16[47] = qword_172A74;
  v16[48] = qword_172A7C;
  v7 = calloc(1u, 0x3D8u);
  LOWORD(v8) = 31256;
  HIWORD(v8) = (unsigned int)&loc_B7B20 >> 16;
  LODWORD(v16[2]) = v8;
  LOWORD(v9) = 31272;
  LOWORD(v10) = 31308;
  LOWORD(v11) = 29480;
  LOWORD(v12) = 29888;
  LOWORD(v8) = 29864;
  HIWORD(v9) = (unsigned int)&loc_B7B30 >> 16;
  HIWORD(v10) = (unsigned int)&loc_B7B54 >> 16;
  HIWORD(v11) = (unsigned int)&loc_B7430 >> 16;
  HIWORD(v12) = (unsigned int)&loc_B75C8 >> 16;
  HIWORD(v8) = (unsigned int)&loc_B75B0 >> 16;
  HIDWORD(v16[2]) = v9;
  v16[3] = __PAIR64__(v11, v10);
  LOWORD(v9) = 30544;
  LOWORD(v10) = 30572;
  v16[4] = __PAIR64__(v8, v12);
  LOWORD(v11) = 80;
  LOWORD(v12) = -1180;
  LOWORD(v8) = -11580;
  HIWORD(v9) = (unsigned int)&loc_B7858 >> 16;
  HIWORD(v10) = (unsigned int)&loc_B7874 >> 16;
  HIWORD(v11) = (unsigned int)&loc_90158 >> 16;
  HIWORD(v12) = (unsigned int)&loc_8FC6C >> 16;
  HIWORD(v8) = (unsigned int)&loc_8D3CC >> 16;
  v16[5] = __PAIR64__(v10, v9);
  LOWORD(v9) = 592;
  LOWORD(v10) = -552;
  v16[7] = __PAIR64__(v12, v11);
  LOWORD(v11) = -11648;
  LOWORD(v12) = -11600;
  LODWORD(v16[8]) = v8;
  LOWORD(v8) = -556;
  HIWORD(v9) = (unsigned int)&loc_90358 >> 16;
  HIWORD(v10) = (unsigned int)&loc_8FEE0 >> 16;
  HIWORD(v11) = (unsigned int)&loc_8D388 >> 16;
  HIWORD(v12) = (unsigned int)&loc_8D3B8 >> 16;
  HIWORD(v8) = (unsigned int)&loc_8FEDC >> 16;
  HIDWORD(v16[8]) = v9;
  v16[9] = __PAIR64__(v11, v10);
  LOWORD(v9) = -2656;
  LOWORD(v10) = -2940;
  v16[10] = __PAIR64__(v8, v12);
  LOWORD(v11) = -10376;
  LOWORD(v12) = -11800;
  LOWORD(v8) = -11792;
  HIWORD(v9) = (unsigned int)&loc_8F6A8 >> 16;
  HIWORD(v10) = (unsigned int)&loc_8F58C >> 16;
  HIWORD(v11) = (unsigned int)&loc_8D880 >> 16;
  HIWORD(v12) = (unsigned int)&loc_8D2F0 >> 16;
  HIWORD(v8) = (unsigned int)&loc_8D2F8 >> 16;
  v16[11] = __PAIR64__(v10, v9);
  LOWORD(v9) = -3664;
  LOWORD(v10) = -6804;
  v16[12] = __PAIR64__(v12, v11);
  LOWORD(v11) = -4644;
  LOWORD(v12) = -4684;
  LODWORD(v16[13]) = v8;
  LOWORD(v8) = -11784;
  HIWORD(v9) = (unsigned int)&loc_8F2B8 >> 16;
  HIWORD(v10) = (unsigned int)&loc_8E674 >> 16;
  HIWORD(v11) = (unsigned int)&loc_8EEE4 >> 16;
  HIWORD(v12) = (unsigned int)&loc_8EEBC >> 16;
  HIWORD(v8) = (unsigned int)&loc_8D300 >> 16;
  HIDWORD(v16[13]) = v9;
  v16[14] = __PAIR64__(v11, v10);
  LOWORD(v9) = -11776;
  LOWORD(v10) = -11676;
  LODWORD(v16[15]) = v12;
  LOWORD(v11) = 2568;
  LODWORD(v16[16]) = v8;
  LOWORD(v12) = -11668;
  LOWORD(v8) = -6780;
  HIWORD(v9) = (unsigned int)&loc_8D308 >> 16;
  HIWORD(v10) = (unsigned int)&loc_8D36C >> 16;
  HIWORD(v11) = (unsigned int)&loc_90B10 >> 16;
  HIWORD(v12) = (unsigned int)&loc_8D374 >> 16;
  HIWORD(v8) = (unsigned int)&loc_8E68C >> 16;
  v15 = v7;
  HIWORD(v6) = (unsigned int)&loc_B7884 >> 16;
  v16[0] = __PAIR64__(reset_base, v6);
  HIDWORD(v16[16]) = v9;
  LOWORD(v9) = 3080;
  v16[17] = __PAIR64__(v11, v10);
  HIWORD(v9) = (unsigned int)&loc_90D10 >> 16;
  LOWORD(v10) = 2852;
  v16[18] = __PAIR64__(v8, v12);
  HIWORD(v10) = (unsigned int)&loc_90C2C >> 16;
  v16[19] = __PAIR64__(v10, v9);
  LOWORD(v9) = -11656;
  LOWORD(v8) = 96;
  HIWORD(v9) = (unsigned int)&loc_8D380 >> 16;
  HIWORD(v8) = (unsigned int)&loc_90168 >> 16;
  LOWORD(v10) = 4236;
  HIDWORD(v16[21]) = v9;
  LODWORD(v16[23]) = v8;
  HIWORD(v10) = (unsigned int)&loc_91194 >> 16;
  LOWORD(v9) = -10352;
  LOWORD(v8) = 3780;
  LODWORD(v16[21]) = v10;
  HIWORD(v9) = (unsigned int)&loc_8D898 >> 16;
  HIWORD(v8) = (unsigned int)&loc_90FCC >> 16;
  LOWORD(v10) = -5656;
  HIDWORD(v16[26]) = v9;
  HIWORD(v10) = (unsigned int)&loc_8EAF0 >> 16;
  LODWORD(v16[27]) = v8;
  LOWORD(v11) = 412;
  LOWORD(v9) = 31824;
  LOWORD(v8) = 5700;
  HIDWORD(v16[23]) = v10;
  HIWORD(v11) = (unsigned int)&loc_902A4 >> 16;
  HIWORD(v9) = (unsigned int)&loc_B7D58 >> 16;
  HIWORD(v8) = (unsigned int)&loc_9174C >> 16;
  LOWORD(v10) = 3556;
  v16[20] = __PAIR64__(overclock_update_ltc, v11);
  HIDWORD(v16[30]) = v9;
  HIWORD(v10) = (unsigned int)&loc_90EEC >> 16;
  LODWORD(v16[31]) = v8;
  LOWORD(v11) = -1244;
  LOWORD(v9) = 6264;
  LOWORD(v8) = 6776;
  LODWORD(v16[28]) = v10;
  HIWORD(v11) = (unsigned int)&loc_8FC2C >> 16;
  HIWORD(v9) = (unsigned int)&loc_91980 >> 16;
  HIWORD(v8) = (unsigned int)&loc_91B80 >> 16;
  LOWORD(v10) = 7572;
  HIDWORD(v16[25]) = v11;
  HIWORD(v10) = (unsigned int)&off_91E9C >> 16;
  HIDWORD(v16[34]) = v8;
  LOWORD(v11) = 31616;
  HIDWORD(v16[32]) = v10;
  HIWORD(v11) = (unsigned int)&loc_B7C88 >> 16;
  v16[38] = 0x100001489LL;
  LOWORD(v10) = 6500;
  v16[39] = 0x7500000078LL;
  LODWORD(v16[30]) = v11;
  HIWORD(v10) = (unsigned int)&locret_91A6C >> 16;
  v16[40] = 0x8000003A8LL;
  LOWORD(v11) = 6240;
  LODWORD(v16[51]) = 27;
  HIWORD(v11) = (unsigned int)&loc_91968 >> 16;
  HIDWORD(v16[100]) = 216;
  HIDWORD(v16[31]) = v10;
  LODWORD(v16[32]) = v10;
  HIDWORD(v16[41]) = 2;
  HIDWORD(v16[50]) = 2;
  v16[33] = __PAIR64__(v9, v11);
  HIDWORD(v16[62]) = 2;
  v16[101] = 0x400000070LL;
  LODWORD(v16[121]) = 1;
  v16[120] = 949793;
  v16[102] = 0x900000056LL;
  LODWORD(v16[103]) = 8;
  v16[117] = 0x44D1600042480000LL;
  LODWORD(v16[118]) = 1500;
  memcpy(v7, v16, 0x3D8u);
  V_LOCK();
  LOWORD(v13) = 1464;
  HIWORD(v13) = (unsigned int)" core_id:%d" >> 16;
  logfmt_raw(v17, 0x1000u, 0, v13);
  V_UNLOCK();
  zlog(g_zc, v2, 170, v3, 21, 1060, 40, v17);
  return v15;
}
