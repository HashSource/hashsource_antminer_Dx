int __fastcall eeprom_write(unsigned int a1, int a2, unsigned __int8 *a3, int a4)
{
  _DWORD *v6; // r8
  int v8; // r5
  int v9; // r6
  int v10; // r5
  _DWORD *v11; // r9
  int v12; // r8
  size_t v13; // r11
  void *v14; // r0
  void *v15; // r4
  int v16; // r11
  _DWORD *v17; // r3
  int v18; // r4
  int v20; // r4
  _DWORD *v21; // r0
  _DWORD *v22; // r9
  int v23; // r6
  unsigned int v24; // r5
  int v25; // t1
  int v26; // r11
  int v27; // r5
  int v29; // r0
  size_t n; // [sp+1Ch] [bp-1820h]
  unsigned __int8 *v31; // [sp+20h] [bp-181Ch]
  int v33; // [sp+34h] [bp-1808h] BYREF
  char s[2040]; // [sp+38h] [bp-1804h] BYREF
  unsigned int v35; // [sp+838h] [bp-1004h] BYREF
  __int16 v36; // [sp+83Ch] [bp-1000h]
  char v37; // [sp+83Eh] [bp-FFEh]
  char v38; // [sp+83Fh] [bp-FFDh]

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_write", a1);
    V_LOCK();
    logfmt_raw((char *)&v35, 0x1000u, 0, s);
    V_UNLOCK();
    v18 = -2147483391;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_write",
      12,
      91,
      100,
      &v35);
    return v18;
  }
  v6 = &dword_1A8A90[2 * a1];
  if ( v6[1] )
    goto LABEL_3;
  v38 = a1;
  v35 = a1;
  v36 = 0;
  v37 = 10;
  v29 = iic_init((int)&v35);
  v18 = v29;
  if ( v29 < 0 )
  {
    snprintf(s, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed\n", "eeprom_write", a1);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw((char *)&v35, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_write",
      12,
      96,
      100,
      &v35);
    return v18;
  }
  v6[1] = 1;
  dword_1A8A90[2 * a1] = v29;
LABEL_3:
  if ( a4 )
  {
    v31 = &a3[a4];
LABEL_5:
    v8 = dword_1A8A90[2 * a1];
    if ( pthread_mutex_lock(&stru_1A8A58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw((char *)&v35, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_iic.c",
        164,
        "iic_write_reg",
        13,
        146,
        100,
        &v35);
    }
    else
    {
      v33 = v8;
      if ( pthread_mutex_lock(&stru_1A8A70) )
      {
        strcpy(s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)&v35, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_i2c.c",
          164,
          "i2c_write_reg",
          13,
          288,
          100,
          &v35);
        pthread_mutex_unlock(&stru_1A8A58);
      }
      else
      {
        if ( dword_1A8A88 )
        {
          v9 = *(_DWORD *)dword_1A8A88;
          v10 = *(_DWORD *)dword_1A8A88 + 4;
          v11 = **(_DWORD ***)dword_1A8A88;
          while ( v11 != (_DWORD *)v10 )
          {
            v12 = v11[4];
            v13 = *(_DWORD *)(v12 + 4);
            v14 = malloc(v13);
            v15 = v14;
            if ( v14 )
              memcpy(v14, *(const void **)v12, v13);
            v16 = (*(int (__fastcall **)(int *, void *))(v9 + 36))(&v33, v15);
            free(v15);
            if ( !v16 )
            {
              v20 = v11[5];
              n = *(_DWORD *)(v20 + 4);
              v21 = malloc(n);
              v22 = v21;
              if ( !v21 )
                __und(0);
              memcpy(v21, *(const void **)v20, n);
              v23 = *v22;
              v24 = v22[1];
              snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v22, v24);
              pthread_mutex_lock(&stru_1A8A24);
              logfmt_raw((char *)&v35, 0x1000u, 0, s);
              pthread_mutex_unlock(&stru_1A8A24);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
                164,
                "i2c_write_reg",
                13,
                295,
                20,
                &v35);
              v25 = *a3++;
              v26 = 601;
              v27 = v25 | (a2 << 8) | 0x1000000 | (v23 << 26) | (v24 >> 4 << 20) | (v24 << 15) & 0x70000;
              while ( *(int *)(dword_1A8A8C + 48) >= 0 )
              {
                usleep(0x1388u);
                if ( !--v26 )
                {
                  strcpy(s, "iic not ready 4 write\n");
                  pthread_mutex_lock(&stru_1A8A24);
                  logfmt_raw((char *)&v35, 0x1000u, 0, s);
                  pthread_mutex_unlock(&stru_1A8A24);
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/go"
                    "dminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
                    164,
                    "i2c_write_reg",
                    13,
                    303,
                    100,
                    &v35);
                  free(v22);
                  goto LABEL_16;
                }
              }
              *(_DWORD *)(dword_1A8A8C + 48) = v27;
              free(v22);
              pthread_mutex_unlock(&stru_1A8A70);
              a2 = (unsigned __int8)(a2 + 1);
              pthread_mutex_unlock(&stru_1A8A58);
              if ( a3 != v31 )
                goto LABEL_5;
              goto LABEL_24;
            }
            v17 = (_DWORD *)*v11;
            v11 = (_DWORD *)v11[1];
            if ( v16 < 0 )
              v11 = v17;
          }
        }
        snprintf(s, 0x800u, "ctx %d not inited\n", v33);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)&v35, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_i2c.c",
          164,
          "i2c_write_reg",
          13,
          313,
          100,
          &v35);
LABEL_16:
        pthread_mutex_unlock(&stru_1A8A70);
        pthread_mutex_unlock(&stru_1A8A58);
      }
    }
    snprintf(s, 0x800u, "fail to write eeprom by iic, chain:%d, addr: %d", a1, a2);
    v18 = -2147483392;
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw((char *)&v35, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_write",
      12,
      116,
      100,
      &v35);
    return v18;
  }
LABEL_24:
  sleep(1u);
  return 0;
}
