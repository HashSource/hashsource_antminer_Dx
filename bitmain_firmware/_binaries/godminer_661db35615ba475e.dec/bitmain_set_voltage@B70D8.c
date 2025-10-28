int bitmain_set_voltage()
{
  double v0; // d0
  unsigned int v1; // r3
  int v2; // r5
  int v4; // [sp+10h] [bp-1810h] BYREF
  __int16 v5; // [sp+14h] [bp-180Ch]
  __int16 v6; // [sp+16h] [bp-180Ah]
  int v7; // [sp+18h] [bp-1808h] BYREF
  int v8; // [sp+1Ch] [bp-1804h]
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  char v10[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( dword_195CB0 || (v2 = sub_B6B8C(), v2 >= 0) )
  {
    switch ( dword_195CB4 )
    {
      case 'A':
      case 'B':
        v1 = (int)(765.411764 - v0 * 35.833333);
        goto LABEL_4;
      case 'C':
        v1 = (int)(933.240365 - v0 * 59.806034);
        goto LABEL_4;
      case 'a':
        v1 = (int)(1144.50226 - v0 * 52.243589);
        goto LABEL_4;
      case 'q':
      case 'r':
        v1 = (int)(1190.93534 - v0 * 78.742588);
        goto LABEL_4;
      case 's':
        v1 = (int)(1280.57782 - v0 * 73.979365);
LABEL_4:
        if ( v1 > 0xFF )
          goto LABEL_15;
        v4 = -2096715179;
        v8 = 0;
        v6 = v1 + 137;
        v7 = 0;
        v5 = (unsigned __int8)v1;
        if ( sub_AFE88(dword_195CAC[0], (unsigned __int8 *)&v4, 8u, (unsigned __int8 *)&v7, 8u) )
        {
          v2 = -2147482880;
          strcpy(s, "set DA conversion N failed\n");
          V_LOCK();
          logfmt_raw(v10, 0x1000u, 0, s);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/power/bitmain_power_APW9.c",
            166,
            "_bitmain_set_DA_conversion_N",
            28,
            314,
            100,
            v10);
        }
        else
        {
          v2 = (unsigned __int16)v8;
        }
        break;
      default:
LABEL_15:
        v2 = -2147482879;
        break;
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_voltage");
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v10, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/power/bitmain_power_APW9.c",
      166,
      "bitmain_set_voltage",
      19,
      422,
      100,
      v10);
  }
  return v2;
}
