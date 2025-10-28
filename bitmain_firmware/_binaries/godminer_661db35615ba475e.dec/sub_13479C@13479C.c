int __fastcall sub_13479C(unsigned int a1, int a2, _BYTE *a3)
{
  unsigned int v3; // r6
  char *v4; // r9
  int v5; // r4
  int v6; // r7
  _DWORD *v7; // r9
  int v8; // r6
  size_t v9; // r11
  void *v10; // r0
  void *v11; // r4
  int v12; // r11
  _DWORD *v13; // r3
  int v14; // r4
  int v15; // r0
  int v16; // r2
  int v18; // r4
  _DWORD *v19; // r0
  _DWORD *v20; // r7
  const void *v21; // r1
  int v22; // r4
  int v23; // r9
  unsigned int v24; // r6
  int v25; // r6
  int v26; // r3
  int v27; // r4
  int v28; // r3
  int v29; // r0
  int v30; // r2
  int v31; // r0
  size_t n; // [sp+14h] [bp-1820h]
  size_t na; // [sp+14h] [bp-1820h]
  int v37; // [sp+2Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+30h] [bp-1804h] BYREF
  unsigned int v39; // [sp+830h] [bp-1004h] BYREF
  __int16 v40; // [sp+834h] [bp-1000h]
  char v41; // [sp+836h] [bp-FFEh]
  char v42; // [sp+837h] [bp-FFDh]

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_read", a1);
    V_LOCK();
    logfmt_raw((char *)&v39, 0x1000u, 0, s);
    V_UNLOCK();
    v14 = -2147483391;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_read",
      11,
      117,
      100,
      &v39);
    return v14;
  }
  v3 = 8 * a1;
  v4 = (char *)&stru_197BB8 + 8 * a1;
  if ( *((_DWORD *)v4 + 9) )
    goto LABEL_4;
  v42 = a1;
  v39 = a1;
  v40 = 0;
  v41 = 10;
  v31 = iic_init((int)&v39);
  v14 = v31;
  if ( v31 >= 0 )
  {
    *((_DWORD *)v4 + 8) = v31;
    *((_DWORD *)v4 + 9) = 1;
LABEL_4:
    v5 = *(_DWORD *)((char *)&stru_197BB8 + v3 + 32);
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw((char *)&v39, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_iic.c",
        164,
        "iic_read_reg",
        12,
        124,
        100,
        &v39);
    }
    else
    {
      v37 = v5;
      if ( pthread_mutex_lock(&stru_197C70) )
      {
        strcpy(s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw((char *)&v39, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_i2c.c",
          164,
          "i2c_read_reg",
          12,
          229,
          100,
          &v39);
        pthread_mutex_unlock(&stru_197C58);
      }
      else
      {
        if ( dword_197C88 )
        {
          v6 = *(_DWORD *)dword_197C88;
          v7 = **(_DWORD ***)dword_197C88;
          n = *(_DWORD *)dword_197C88 + 4;
          while ( (_DWORD *)n != v7 )
          {
            v8 = v7[4];
            v9 = *(_DWORD *)(v8 + 4);
            v10 = malloc(v9);
            v11 = v10;
            if ( v10 )
              memcpy(v10, *(const void **)v8, v9);
            v12 = (*(int (__fastcall **)(int *, void *))(v6 + 36))(&v37, v11);
            free(v11);
            if ( !v12 )
            {
              v18 = v7[5];
              na = *(_DWORD *)(v18 + 4);
              v19 = malloc(na);
              v20 = v19;
              if ( !v19 )
                __und(0);
              v21 = *(const void **)v18;
              v22 = 601;
              memcpy(v19, v21, na);
              v23 = *v20;
              v24 = v20[1];
              snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v20, v24);
              pthread_mutex_lock(&stru_197BB8);
              logfmt_raw((char *)&v39, 0x1000u, 0, s);
              pthread_mutex_unlock(&stru_197BB8);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
                164,
                "i2c_read_reg",
                12,
                236,
                20,
                &v39);
              v25 = (a2 << 8) | 0x3000000 | (v23 << 26) | (v24 >> 4 << 20) | (v24 << 15) & 0x70000;
              while ( 1 )
              {
                v26 = dword_197C8C;
                if ( *(int *)(dword_197C8C + 48) < 0 )
                  break;
                usleep(0x1388u);
                if ( !--v22 )
                {
                  strcpy(s, "iic not ready 4 read1\n");
                  pthread_mutex_lock(&stru_197BB8);
                  logfmt_raw((char *)&v39, 0x1000u, 0, s);
                  pthread_mutex_unlock(&stru_197BB8);
                  v29 = g_zc;
                  v30 = 243;
                  goto LABEL_29;
                }
              }
              *(_DWORD *)(dword_197C8C + 48) = v25;
              v27 = 601;
              while ( 1 )
              {
                v28 = *(_DWORD *)(v26 + 48);
                if ( v28 < 0 )
                {
                  *a3 = v28;
                  free(v20);
                  pthread_mutex_unlock(&stru_197C70);
                  pthread_mutex_unlock(&stru_197C58);
                  usleep(0x7A120u);
                  return 0;
                }
                usleep(0x1388u);
                if ( !--v27 )
                  break;
                v26 = dword_197C8C;
              }
              strcpy(s, "iic failed to read data\n");
              pthread_mutex_lock(&stru_197BB8);
              logfmt_raw((char *)&v39, 0x1000u, 0, s);
              pthread_mutex_unlock(&stru_197BB8);
              v29 = g_zc;
              v30 = 254;
LABEL_29:
              zlog(
                v29,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
                164,
                "i2c_read_reg",
                12,
                v30,
                100,
                &v39);
              free(v20);
              pthread_mutex_unlock(&stru_197C70);
              pthread_mutex_unlock(&stru_197C58);
              goto LABEL_15;
            }
            v13 = (_DWORD *)*v7;
            v7 = (_DWORD *)v7[1];
            if ( v12 < 0 )
              v7 = v13;
          }
        }
        snprintf(s, 0x800u, "ctx %d not inited\n", v37);
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw((char *)&v39, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_i2c.c",
          164,
          "i2c_read_reg",
          12,
          262,
          100,
          &v39);
        pthread_mutex_unlock(&stru_197C70);
        pthread_mutex_unlock(&stru_197C58);
      }
    }
LABEL_15:
    v14 = -2147483392;
    snprintf(s, 0x800u, "fail to read eeprom by iic, chain: %d, addr: %d\n", a1, a2);
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw((char *)&v39, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    v15 = g_zc;
    v16 = 132;
    goto LABEL_16;
  }
  snprintf(s, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed\n", "eeprom_read", a1);
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)&v39, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_197BB8);
  v15 = g_zc;
  v16 = 122;
LABEL_16:
  zlog(
    v15,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_read",
    11,
    v16,
    100,
    &v39);
  return v14;
}
