int __fastcall sub_C2720(unsigned int a1, int a2, _BYTE *a3)
{
  unsigned int v3; // r6
  int *v4; // r9
  int v5; // r0
  int v6; // r4
  int v7; // r4
  int v8; // r7
  _DWORD *v9; // r9
  int v10; // r6
  size_t v11; // r11
  void *v12; // r0
  void *v13; // r4
  int v14; // r11
  _DWORD *v15; // r3
  int v16; // r0
  int v17; // r2
  int v19; // r4
  _DWORD *v20; // r0
  _DWORD *v21; // r7
  const void *v22; // r1
  int v23; // r4
  int v24; // r9
  unsigned int v25; // r6
  int v26; // r6
  int v27; // r3
  int v28; // r4
  int v29; // r3
  int v30; // r0
  int v31; // r2
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
    v6 = -2147483391;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_read",
      11,
      131,
      100,
      &v39);
    return v6;
  }
  v3 = 2 * a1;
  v4 = &dword_1A8A20[2 * a1];
  if ( v4[29] )
    goto LABEL_5;
  v42 = a1;
  v39 = a1;
  v40 = 0;
  v41 = 10;
  v5 = iic_init((int)&v39);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v4[28] = v5;
    v4[29] = 1;
LABEL_5:
    puts("no use at24c512c!");
    v7 = dword_1A8A20[v3 + 28];
    if ( pthread_mutex_lock(&stru_1A8A58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw((char *)&v39, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
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
      v37 = v7;
      if ( pthread_mutex_lock(&stru_1A8A70) )
      {
        strcpy(s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)&v39, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_1A8A24);
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
        pthread_mutex_unlock(&stru_1A8A58);
      }
      else
      {
        if ( dword_1A8A88 )
        {
          v8 = *(_DWORD *)dword_1A8A88;
          v9 = **(_DWORD ***)dword_1A8A88;
          n = *(_DWORD *)dword_1A8A88 + 4;
          while ( v9 != (_DWORD *)n )
          {
            v10 = v9[4];
            v11 = *(_DWORD *)(v10 + 4);
            v12 = malloc(v11);
            v13 = v12;
            if ( v12 )
              memcpy(v12, *(const void **)v10, v11);
            v14 = (*(int (__fastcall **)(int *, void *))(v8 + 36))(&v37, v13);
            free(v13);
            if ( !v14 )
            {
              v19 = v9[5];
              na = *(_DWORD *)(v19 + 4);
              v20 = malloc(na);
              v21 = v20;
              if ( !v20 )
                __und(0);
              v22 = *(const void **)v19;
              v23 = 601;
              memcpy(v20, v22, na);
              v24 = *v21;
              v25 = v21[1];
              snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v21, v25);
              pthread_mutex_lock(&stru_1A8A24);
              logfmt_raw((char *)&v39, 0x1000u, 0, s);
              pthread_mutex_unlock(&stru_1A8A24);
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
              v26 = (a2 << 8) | 0x3000000 | (v24 << 26) | (v25 >> 4 << 20) | (v25 << 15) & 0x70000;
              while ( 1 )
              {
                v27 = dword_1A8A8C;
                if ( *(int *)(dword_1A8A8C + 48) < 0 )
                  break;
                usleep(0x1388u);
                if ( !--v23 )
                {
                  strcpy(s, "iic not ready 4 read1\n");
                  pthread_mutex_lock(&stru_1A8A24);
                  logfmt_raw((char *)&v39, 0x1000u, 0, s);
                  pthread_mutex_unlock(&stru_1A8A24);
                  v30 = g_zc;
                  v31 = 243;
                  goto LABEL_30;
                }
              }
              *(_DWORD *)(dword_1A8A8C + 48) = v26;
              v28 = 601;
              while ( 1 )
              {
                v29 = *(_DWORD *)(v27 + 48);
                if ( v29 < 0 )
                {
                  *a3 = v29;
                  free(v21);
                  pthread_mutex_unlock(&stru_1A8A70);
                  pthread_mutex_unlock(&stru_1A8A58);
                  usleep(0x7A120u);
                  return 0;
                }
                usleep(0x1388u);
                if ( !--v28 )
                  break;
                v27 = dword_1A8A8C;
              }
              strcpy(s, "iic failed to read data\n");
              pthread_mutex_lock(&stru_1A8A24);
              logfmt_raw((char *)&v39, 0x1000u, 0, s);
              pthread_mutex_unlock(&stru_1A8A24);
              v30 = g_zc;
              v31 = 254;
LABEL_30:
              zlog(
                v30,
                "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
                164,
                "i2c_read_reg",
                12,
                v31,
                100,
                &v39);
              free(v21);
              pthread_mutex_unlock(&stru_1A8A70);
              pthread_mutex_unlock(&stru_1A8A58);
              goto LABEL_16;
            }
            v15 = (_DWORD *)*v9;
            v9 = (_DWORD *)v9[1];
            if ( v14 < 0 )
              v9 = v15;
          }
        }
        snprintf(s, 0x800u, "ctx %d not inited\n", v37);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)&v39, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_1A8A24);
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
        pthread_mutex_unlock(&stru_1A8A70);
        pthread_mutex_unlock(&stru_1A8A58);
      }
    }
LABEL_16:
    v6 = -2147483392;
    snprintf(s, 0x800u, "fail to read eeprom by iic, chain: %d, addr: %d\n", a1, a2);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw((char *)&v39, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    v16 = g_zc;
    v17 = 158;
    goto LABEL_17;
  }
  snprintf(s, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed\n", "eeprom_read", a1);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)&v39, 0x1000u, 0, s);
  pthread_mutex_unlock(&stru_1A8A24);
  v16 = g_zc;
  v17 = 136;
LABEL_17:
  zlog(
    v16,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_read",
    11,
    v17,
    100,
    &v39);
  return v6;
}
