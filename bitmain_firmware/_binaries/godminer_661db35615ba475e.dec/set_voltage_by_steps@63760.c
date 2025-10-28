int __fastcall set_voltage_by_steps(int a1, int a2)
{
  double v3; // d8
  unsigned int v4; // r3
  int v5; // r7
  int v7; // r0
  const char *v8; // r3
  int v9; // r12
  int v10; // r2
  int v11; // r1
  int v12; // [sp+10h] [bp-1814h] BYREF
  __int16 v13; // [sp+14h] [bp-1810h]
  __int16 v14; // [sp+16h] [bp-180Eh]
  _DWORD v15[2]; // [sp+18h] [bp-180Ch] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v17[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( !a2 )
    return -1;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v17, 0x1000u, 0, "%s to %d.", "set_voltage_by_steps", a1);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/power_api.c",
    143,
    "set_voltage_by_steps",
    20,
    221,
    60,
    v17);
  v3 = (double)a1 * 0.01;
  if ( !dword_195CB0 && sub_B6B8C() < 0 )
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_voltage");
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v17, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    v7 = g_zc;
    v8 = "bitmain_set_voltage";
    v9 = 422;
    v10 = 19;
    LOWORD(v11) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/"
                                    "release/build/godminer-origin_master/backend/device/hal/power/bitmain_power_APW9.c";
LABEL_12:
    HIWORD(v11) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/backend/device/hal/power/bitmain_power_APW9.c" >> 16;
    zlog(v7, v11, 166, v8, v10, v9, 100, v17);
LABEL_13:
    V_LOCK();
    v5 = -1;
    logfmt_raw(v17, 0x1000u, 0, "bitmain_set_voltage failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/power_api.c",
      143,
      "set_voltage_without_feedback",
      28,
      97,
      100,
      v17);
    return v5;
  }
  switch ( dword_195CB4 )
  {
    case 'A':
    case 'B':
      v4 = (int)(765.411764 - v3 * 35.833333);
      break;
    case 'C':
      v4 = (int)(933.240365 - v3 * 59.806034);
      break;
    case 'a':
      v4 = (int)(1144.50226 - v3 * 52.243589);
      break;
    case 'q':
    case 'r':
      v4 = (int)(1190.93534 - v3 * 78.742588);
      break;
    case 's':
      v4 = (int)(1280.57782 - v3 * 73.979365);
      break;
    default:
      goto LABEL_13;
  }
  if ( v4 > 0xFF )
    goto LABEL_13;
  v12 = -2096715179;
  v14 = v4 + 137;
  v15[1] = 0;
  v15[0] = 0;
  v13 = (unsigned __int8)v4;
  v5 = sub_AFE88(dword_195CAC[0], (unsigned __int8 *)&v12, 8u, (unsigned __int8 *)v15, 8u);
  if ( v5 )
  {
    strcpy(s, "set DA conversion N failed\n");
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, s);
    V_UNLOCK();
    v8 = "_bitmain_set_DA_conversion_N";
    v7 = g_zc;
    v9 = 314;
    v10 = 28;
    LOWORD(v11) = 10888;
    goto LABEL_12;
  }
  usleep(0x7A120u);
  dword_195CA4 = a1;
  dword_195CA8 = a1;
  return v5;
}
