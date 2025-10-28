int __fastcall gpio_export(int a1)
{
  const char *v2; // r2
  int v3; // r0
  int v4; // r6
  size_t v5; // r0
  const char *v6; // r2
  int v7; // r1
  const char *v9; // r2
  int v10; // r1
  int v11; // r1
  int *v12; // r12
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r12
  int v22; // r1
  const char *v23; // r2
  int v24; // r1
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  _DWORD v26[512]; // [sp+50h] [bp-1800h] BYREF
  char v27[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_1AA6E8) )
  {
    strcpy((char *)v26, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v27, 0x1000u, 0, v26);
    V_UNLOCK();
    LOWORD(v11) = -25884;
    HIWORD(v11) = (unsigned int)"k count %d" >> 16;
    zlog(g_zc, v11, 165, "gpio_export", 11, 221, 100, v27);
    return -1;
  }
  else
  {
    LOWORD(v2) = -25716;
    HIWORD(v2) = (unsigned int)"ase/build/godminer-origin_master/backend/backend_ckb2/chip_setting_ckb2.c" >> 16;
    snprintf(s, 0x40u, v2, a1);
    if ( access(s, 0) )
    {
      LOWORD(v3) = -25176;
      HIWORD(v3) = (unsigned int)"d voltage %d" >> 16;
      v4 = open64(v3);
      if ( v4 < 0 )
      {
        LOWORD(v12) = -25152;
        HIWORD(v12) = (unsigned int)" error" >> 16;
        v13 = *v12;
        v14 = v12[1];
        v15 = v12[2];
        v16 = v12[3];
        v12 += 4;
        v26[0] = v13;
        v26[1] = v14;
        v26[2] = v15;
        v26[3] = v16;
        v17 = *v12;
        v18 = v12[1];
        v19 = v12[2];
        v20 = v12[3];
        v21 = v12[4];
        v26[4] = v17;
        v26[5] = v18;
        v26[6] = v19;
        v26[7] = v20;
        v26[8] = v21;
        V_LOCK();
        logfmt_raw(v27, 0x1000u, 0, v26);
        V_UNLOCK();
        LOWORD(v22) = -25884;
        HIWORD(v22) = (unsigned int)"k count %d" >> 16;
        zlog(g_zc, v22, 165, "gpio_export", 11, 238, 100, v27);
        pthread_mutex_unlock(&stru_1AA6E8);
        return -2;
      }
      else
      {
        v5 = snprintf(s, 0x40u, "%d", a1);
        if ( write(v4, s, v5) < 0 )
        {
          LOWORD(v23) = -25116;
          HIWORD(v23) = (unsigned int)"voltage %d rate%d.%d" >> 16;
          snprintf((char *)v26, 0x800u, v23, a1);
          V_LOCK();
          logfmt_raw(v27, 0x1000u, 0, v26);
          V_UNLOCK();
          LOWORD(v24) = -25884;
          HIWORD(v24) = (unsigned int)"k count %d" >> 16;
          zlog(g_zc, v24, 165, "gpio_export", 11, 246, 100, v27);
          close(v4);
          pthread_mutex_unlock(&stru_1AA6E8);
          return -3;
        }
        else
        {
          LOWORD(v6) = -25088;
          HIWORD(v6) = (unsigned int)"p_all_chip_ckb" >> 16;
          snprintf((char *)v26, 0x800u, v6, a1);
          pthread_mutex_lock(&stru_1A8A24);
          logfmt_raw(v27, 0x1000u, 0, v26);
          pthread_mutex_unlock(&stru_1A8A24);
          LOWORD(v7) = -25884;
          HIWORD(v7) = (unsigned int)"k count %d" >> 16;
          zlog(g_zc, v7, 165, "gpio_export", 11, 251, 20, v27);
          close(v4);
          pthread_mutex_unlock(&stru_1AA6E8);
          return 0;
        }
      }
    }
    else
    {
      LOWORD(v9) = -25692;
      HIWORD(v9) = (unsigned int)"n_master/backend/backend_ckb2/chip_setting_ckb2.c" >> 16;
      snprintf((char *)v26, 0x800u, v9, a1);
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v27, 0x1000u, 0, v26);
      pthread_mutex_unlock(&stru_1A8A24);
      LOWORD(v10) = -25884;
      HIWORD(v10) = (unsigned int)"k count %d" >> 16;
      zlog(g_zc, v10, 165, "gpio_export", 11, 229, 80, v27);
      pthread_mutex_unlock(&stru_1AA6E8);
      return 0;
    }
  }
}
