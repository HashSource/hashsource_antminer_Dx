int get_power_voltage_calibration_data()
{
  char *v0; // r4
  int v1; // r1
  int v2; // r2
  char *v3; // r5
  int v4; // lr
  int v5; // t1
  int v6; // r3
  double *v7; // r6
  unsigned __int8 *v8; // r7
  char v9; // r1
  unsigned int v10; // r3
  int v11; // r2
  double v12; // d7
  int v14; // r2
  _DWORD v15[2]; // [sp+14h] [bp-1840h] BYREF
  unsigned __int8 v16[52]; // [sp+1Ch] [bp-1838h] BYREF
  char s[28]; // [sp+50h] [bp-1804h] BYREF
  int v18; // [sp+6Ch] [bp-17E8h] BYREF
  char v19[4100]; // [sp+850h] [bp-1004h] BYREF

  memset(v16, 0, 0x32u);
  v15[0] = 101100117;
  v15[1] = 7086144;
  if ( !dword_1AA5F4 && sub_117000() < 0 )
  {
    v0 = s;
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_read");
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v19, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    v14 = 639;
LABEL_16:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/power/bitmain_power_APW9.c",
      166,
      "bitmain_power_read",
      18,
      v14,
      100,
      v19);
    goto LABEL_5;
  }
  v0 = s;
  if ( sub_112BC4(dword_1AA5F0, (unsigned __int8 *)v15, 8u, v16, 0x27u) )
  {
    strcpy(s, "set DA conversion N failed\n");
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, s);
    V_UNLOCK();
    v14 = 649;
    goto LABEL_16;
  }
  *(_DWORD *)s = *(_DWORD *)&v16[5];
  *(_DWORD *)&s[4] = *(_DWORD *)&v16[9];
  *(_DWORD *)&s[8] = *(_DWORD *)&v16[13];
  *(_DWORD *)&s[12] = *(_DWORD *)&v16[17];
  *(_DWORD *)&s[16] = *(_DWORD *)&v16[21];
  *(_DWORD *)&s[20] = *(_DWORD *)&v16[25];
  *(_DWORD *)&s[24] = *(_DWORD *)&v16[29];
  v18 = *(_DWORD *)&v16[33];
LABEL_5:
  v1 = 255;
  v2 = 255;
  v3 = s;
  v4 = (unsigned __int16)(HIBYTE(HIWORD(v18)) | (HIWORD(v18) << 8));
  HIWORD(v18) = HIBYTE(HIWORD(v18)) | (HIWORD(v18) << 8);
  do
  {
    v5 = (unsigned __int8)*v3++;
    v6 = v5 ^ v2;
    v2 = chCRCHTalbe[v5 ^ v2] ^ v1;
    v1 = chCRCLTalbe[v6];
  }
  while ( v3 != (char *)&v18 + 2 );
  if ( v4 == (v2 | (v1 << 8)) )
  {
    v7 = &dbl_1AA610;
    v8 = &algn_1AA5FC[3];
    dword_1AA660 = 0;
    do
    {
      v9 = *v0;
      v10 = (unsigned __int8)v0[1];
      v11 = (unsigned __int8)v0[2];
      if ( !*v0 && !v0[1] && !v0[2] )
        break;
      v0 += 3;
      *v7 = (double)(v10 >> 2) + (double)(v11 | ((unsigned __int8)(v10 & 3) << 8)) * 0.001;
      *++v8 = v9;
      ++dword_1AA660;
      pthread_mutex_lock(&stru_1A8A24);
      v12 = *v7++;
      logfmt_raw(v19, 0x1000u, 0, "vol %f N %d", v12, *v8);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/power/bitmain_power_APW9.c",
        166,
        "get_power_voltage_calibration_data",
        34,
        697,
        60,
        v19);
    }
    while ( v0 != v3 );
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, "%s error!", "get_power_voltage_calibration_data");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/power/bitmain_power_APW9.c",
      166,
      "get_power_voltage_calibration_data",
      34,
      680,
      100,
      v19);
    return -1;
  }
}
