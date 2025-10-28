int __fastcall is_gpio_exist(int a1)
{
  const char *v2; // r2
  const char *v4; // r2
  int v5; // r1
  int v6; // r1
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  char v8[2048]; // [sp+50h] [bp-1800h] BYREF
  char v9[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_1AA6E8) )
  {
    strcpy(v8, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    LOWORD(v6) = -25884;
    HIWORD(v6) = (unsigned int)"k count %d" >> 16;
    zlog(g_zc, v6, 165, "is_gpio_exist", 13, 443, 100, v9);
    return -1;
  }
  else
  {
    LOWORD(v2) = -25716;
    HIWORD(v2) = (unsigned int)"ase/build/godminer-origin_master/backend/backend_ckb2/chip_setting_ckb2.c" >> 16;
    snprintf(s, 0x40u, v2, a1);
    if ( access(s, 0) )
    {
      pthread_mutex_unlock(&stru_1AA6E8);
      return 0;
    }
    else
    {
      LOWORD(v4) = -25692;
      HIWORD(v4) = (unsigned int)"n_master/backend/backend_ckb2/chip_setting_ckb2.c" >> 16;
      snprintf(v8, 0x800u, v4, a1);
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v9, 0x1000u, 0, v8);
      pthread_mutex_unlock(&stru_1A8A24);
      LOWORD(v5) = -25884;
      HIWORD(v5) = (unsigned int)"k count %d" >> 16;
      zlog(g_zc, v5, 165, "is_gpio_exist", 13, 449, 20, v9);
      pthread_mutex_unlock(&stru_1AA6E8);
      return 1;
    }
  }
}
