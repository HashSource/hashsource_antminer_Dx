int __fastcall set_voltage(int a1, int a2)
{
  unsigned int v3; // r0
  int v4; // r7
  int v6; // r0
  const char *v7; // r3
  int v8; // r12
  int v9; // r2
  int v10; // r1
  int v11; // [sp+10h] [bp-1814h] BYREF
  __int16 v12; // [sp+14h] [bp-1810h]
  __int16 v13; // [sp+16h] [bp-180Eh]
  _DWORD v14[2]; // [sp+18h] [bp-180Ch] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v16[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( !a2 )
    return -1;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v16, 0x1000u, 0, "%s to %d.", "set_voltage", a1);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/power_api.c",
    143,
    "set_voltage",
    11,
    230,
    60,
    v16);
  if ( !dword_1AA5F4 && sub_117000() < 0 )
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_voltage");
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v16, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    v6 = g_zc;
    v7 = "bitmain_set_voltage";
    v8 = 479;
    v9 = 19;
    LOWORD(v10) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/"
                                    "release/build/godminer-origin_master/backend/device/hal/power/bitmain_power_APW9.c";
LABEL_9:
    HIWORD(v10) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/backend/device/hal/power/bitmain_power_APW9.c" >> 16;
    zlog(v6, v10, 166, v7, v9, v8, 100, v16);
    goto LABEL_10;
  }
  v3 = bitmain_convert_V_to_N();
  if ( v3 > 0xFF )
  {
LABEL_10:
    V_LOCK();
    v4 = -1;
    logfmt_raw(v16, 0x1000u, 0, "bitmain_set_voltage failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/power_api.c",
      143,
      "set_voltage_without_feedback",
      28,
      96,
      100,
      v16);
    return v4;
  }
  v13 = v3 + 137;
  v12 = (unsigned __int8)v3;
  v14[0] = 0;
  v14[1] = 0;
  v11 = -2096715179;
  v4 = sub_BF930(dword_1AA5F0, (unsigned __int8 *)&v11, 8u, (unsigned __int8 *)v14);
  if ( v4 )
  {
    strcpy(s, "set DA conversion N failed\n");
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, s);
    V_UNLOCK();
    v7 = "_bitmain_set_DA_conversion_N";
    v6 = g_zc;
    v8 = 357;
    v9 = 28;
    LOWORD(v10) = 31128;
    goto LABEL_9;
  }
  usleep(0x7A120u);
  dword_1A4618 = a1;
  dword_1A461C = a1;
  return v4;
}
