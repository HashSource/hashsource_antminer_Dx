int __fastcall gpio_unexport(int a1)
{
  const char *v2; // r2
  int v3; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r6
  size_t v7; // r0
  const char *v8; // r2
  int v9; // r1
  const char *v11; // r2
  int v12; // r1
  int v13; // r1
  int *v14; // r12
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int v24; // r1
  const char *v25; // r2
  int v26; // r1
  char s[64]; // [sp+10h] [bp-1840h] BYREF
  _DWORD v28[9]; // [sp+50h] [bp-1800h] BYREF
  __int16 v29; // [sp+74h] [bp-17DCh]
  char v30[4096]; // [sp+850h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_1AA6E8) )
  {
    v4 = -1;
    strcpy((char *)v28, "failed to api lock\n");
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, v28);
    V_UNLOCK();
    LOWORD(v13) = -25884;
    HIWORD(v13) = (unsigned int)"k count %d" >> 16;
    zlog(g_zc, v13, 165, "gpio_unexport", 13, 273, 100, v30);
    return v4;
  }
  LOWORD(v2) = -25716;
  HIWORD(v2) = (unsigned int)"ase/build/godminer-origin_master/backend/backend_ckb2/chip_setting_ckb2.c" >> 16;
  snprintf(s, 0x40u, v2, a1);
  v3 = access(s, 0);
  v4 = v3;
  if ( !v3 )
  {
    LOWORD(v5) = -25300;
    HIWORD(v5) = (unsigned int)"_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/backend_ckb/backend_ckb.c" >> 16;
    v6 = open64(v5);
    if ( v6 < 0 )
    {
      LOWORD(v14) = -25272;
      HIWORD(v14) = (unsigned int)"oot/tmp/release/build/godminer-origin_master/backend/backend_ckb/backend_ckb.c" >> 16;
      v15 = *v14;
      v16 = v14[1];
      v17 = v14[2];
      v18 = v14[3];
      v14 += 4;
      v28[0] = v15;
      v28[1] = v16;
      v28[2] = v17;
      v28[3] = v18;
      v19 = *v14;
      v20 = v14[1];
      v21 = v14[2];
      v22 = v14[3];
      v14 += 4;
      v28[4] = v19;
      v28[5] = v20;
      v28[6] = v21;
      v28[7] = v22;
      v23 = v14[1];
      v28[8] = *v14;
      v29 = v23;
      V_LOCK();
      logfmt_raw(v30, 0x1000u, 0, v28);
      V_UNLOCK();
      LOWORD(v24) = -25884;
      HIWORD(v24) = (unsigned int)"k count %d" >> 16;
      v4 = -2;
      zlog(g_zc, v24, 165, "gpio_unexport", 13, 290, 100, v30);
      pthread_mutex_unlock(&stru_1AA6E8);
    }
    else
    {
      v7 = snprintf(s, 0x40u, "%d", a1);
      if ( write(v6, s, v7) < 0 )
      {
        LOWORD(v25) = -25232;
        HIWORD(v25) = (unsigned int)"ster/backend/backend_ckb/backend_ckb.c" >> 16;
        snprintf((char *)v28, 0x800u, v25, a1);
        V_LOCK();
        logfmt_raw(v30, 0x1000u, 0, v28);
        V_UNLOCK();
        LOWORD(v26) = -25884;
        HIWORD(v26) = (unsigned int)"k count %d" >> 16;
        v4 = -2;
        zlog(g_zc, v26, 165, "gpio_unexport", 13, 298, 100, v30);
      }
      else
      {
        LOWORD(v8) = -25204;
        HIWORD(v8) = (unsigned int)"kend_ckb.c" >> 16;
        snprintf((char *)v28, 0x800u, v8, a1);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(v30, 0x1000u, 0, v28);
        pthread_mutex_unlock(&stru_1A8A24);
        LOWORD(v9) = -25884;
        HIWORD(v9) = (unsigned int)"k count %d" >> 16;
        zlog(g_zc, v9, 165, "gpio_unexport", 13, 304, 20, v30);
      }
      close(v6);
      pthread_mutex_unlock(&stru_1AA6E8);
    }
    return v4;
  }
  LOWORD(v11) = -25340;
  HIWORD(v11) = (unsigned int)"ce/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/backend_ckb/backend_ckb.c" >> 16;
  snprintf((char *)v28, 0x800u, v11, a1, v3);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v30, 0x1000u, 0, v28);
  pthread_mutex_unlock(&stru_1A8A24);
  LOWORD(v12) = -25884;
  HIWORD(v12) = (unsigned int)"k count %d" >> 16;
  zlog(g_zc, v12, 165, "gpio_unexport", 13, 281, 80, v30);
  pthread_mutex_unlock(&stru_1AA6E8);
  return 0;
}
