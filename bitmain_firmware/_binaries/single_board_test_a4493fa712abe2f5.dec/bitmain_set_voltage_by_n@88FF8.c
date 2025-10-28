int __fastcall bitmain_set_voltage_by_n(__int16 a1)
{
  int v2; // r6
  int v3; // r0
  int v5; // [sp+10h] [bp-1810h] BYREF
  __int16 v6; // [sp+14h] [bp-180Ch]
  __int16 v7; // [sp+16h] [bp-180Ah]
  int v8; // [sp+18h] [bp-1808h] BYREF
  int v9; // [sp+1Ch] [bp-1804h]
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  char v11[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( dword_12B72C || (v2 = sub_882E8(), v2 >= 0) )
  {
    v5 = -2096715179;
    v7 = a1 + 137;
    v8 = 0;
    v6 = (unsigned __int8)a1;
    v9 = 0;
    v3 = sub_D1B24(dword_12B728[0], (unsigned __int8 *)&v5, 8u, (unsigned __int8 *)&v8);
    v2 = (unsigned __int16)v9;
    if ( v3 )
    {
      v2 = -2147482880;
      strcpy(s, "set DA conversion N failed\n");
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/power/bitmain_power_APW9.c",
        83,
        "_bitmain_set_DA_conversion_N",
        28,
        314,
        100,
        v11);
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_voltage_by_n");
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v11, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/power/bitmain_power_APW9.c",
      83,
      "bitmain_set_voltage_by_n",
      24,
      436,
      100,
      v11);
  }
  return v2;
}
