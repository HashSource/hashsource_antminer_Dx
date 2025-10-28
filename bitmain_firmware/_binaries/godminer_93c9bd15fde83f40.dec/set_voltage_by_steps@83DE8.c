int __fastcall set_voltage_by_steps(int a1, int a2)
{
  __int64 v2; // d8
  __int64 v3; // d9
  int v5; // r4
  int v6; // r5
  int v7; // r9
  unsigned int v8; // r0
  int v10; // r0
  const char *v11; // r3
  int v12; // r12
  int v13; // r2
  int v14; // r1
  int v16; // [sp+18h] [bp-1848h] BYREF
  __int16 v17; // [sp+1Ch] [bp-1844h]
  __int16 v18; // [sp+1Eh] [bp-1842h]
  _DWORD v19[2]; // [sp+20h] [bp-1840h] BYREF
  char s[2040]; // [sp+28h] [bp-1838h] BYREF
  char v21[4100]; // [sp+828h] [bp-1038h] BYREF
  __int64 v22; // [sp+182Ch] [bp-34h]
  __int64 v23; // [sp+1834h] [bp-2Ch]

  if ( !a2 )
    return -1;
  v22 = v2;
  v23 = v3;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v21, 0x1000u, 0, "%s to %d.", "set_voltage_by_steps", a1);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/power_api.c",
    143,
    "set_voltage_by_steps",
    20,
    240,
    60,
    v21);
  if ( byte_1A45FC )
    v5 = dword_1A4618;
  else
    v5 = -1;
  v6 = a1 - v5;
  if ( a1 == v5 )
    return 0;
  if ( a1 - v5 < 0 )
    v7 = -10;
  else
    v7 = 10;
  while ( (int)abs32(v6) > 10 )
  {
    v5 += v7;
    v6 -= v7;
    if ( dword_1AA5F4 || sub_117000() >= 0 )
    {
      v8 = bitmain_convert_V_to_N();
      if ( v8 > 0xFF )
        goto LABEL_22;
      v16 = -2096715179;
      v18 = v8 + 137;
      v19[0] = 0;
      v17 = (unsigned __int8)v8;
      v19[1] = 0;
      if ( sub_BF930(dword_1AA5F0, (unsigned __int8 *)&v16, 8u, (unsigned __int8 *)v19) )
      {
        strcpy(s, "set DA conversion N failed\n");
        V_LOCK();
        logfmt_raw(v21, 0x1000u, 0, s);
        V_UNLOCK();
        v11 = "_bitmain_set_DA_conversion_N";
        v10 = g_zc;
        v12 = 357;
        v13 = 28;
        LOWORD(v14) = 31128;
        goto LABEL_21;
      }
      usleep(0x7A120u);
      dword_1A4618 = v5;
      dword_1A461C = v5;
    }
    else
    {
      snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_voltage");
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v21, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      v10 = g_zc;
      v11 = "bitmain_set_voltage";
      v12 = 479;
      v13 = 19;
      LOWORD(v14) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tm"
                                      "p/release/build/godminer-origin_master/backend/device/hal/power/bitmain_power_APW9.c";
LABEL_21:
      HIWORD(v14) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/re"
                                  "lease/build/godminer-origin_master/backend/device/hal/power/bitmain_power_APW9.c" >> 16;
      zlog(v10, v14, 166, v11, v13, v12, 100, v21);
LABEL_22:
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v21, 0x1000u, 0, "bitmain_set_voltage failed");
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/power_api.c",
        143,
        "set_voltage_without_feedback",
        28,
        96,
        100,
        v21);
    }
  }
  if ( v5 != a1 )
  {
    if ( bitmain_set_voltage() >= 0 )
    {
      usleep(0x7A120u);
      dword_1A4618 = a1;
      dword_1A461C = a1;
      return 0;
    }
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, "bitmain_set_voltage failed");
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
      v21);
  }
  return 0;
}
