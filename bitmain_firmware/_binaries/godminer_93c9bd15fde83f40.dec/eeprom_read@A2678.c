int __fastcall eeprom_read(unsigned int a1, int a2, _BYTE *a3, int a4)
{
  _DWORD *v6; // r9
  int v8; // r0
  int v9; // r5
  _BYTE *v10; // r10
  int v11; // r5
  int v12; // r6
  int v13; // r5
  _DWORD *v14; // r9
  int v15; // r7
  size_t v16; // r11
  void *v17; // r0
  void *v18; // r4
  int v19; // r11
  _DWORD *v20; // r3
  int v21; // r12
  int v22; // r1
  int v23; // r0
  int v25; // r4
  _DWORD *v26; // r0
  _DWORD *v27; // r9
  int v28; // r6
  unsigned int v29; // r5
  int v30; // r11
  int v31; // r5
  int v32; // r3
  int v33; // r5
  int v34; // r3
  int v35; // r0
  int v36; // r12
  size_t n; // [sp+14h] [bp-1828h]
  _BYTE *v38; // [sp+20h] [bp-181Ch]
  int v40; // [sp+34h] [bp-1808h] BYREF
  char s[2040]; // [sp+38h] [bp-1804h] BYREF
  unsigned int v42; // [sp+838h] [bp-1004h] BYREF
  __int16 v43; // [sp+83Ch] [bp-1000h]
  char v44; // [sp+83Eh] [bp-FFEh]
  char v45; // [sp+83Fh] [bp-FFDh]

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_read", a1);
    V_LOCK();
    logfmt_raw((char *)&v42, 0x1000u, 0, s);
    V_UNLOCK();
    v9 = -2147483391;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_read",
      11,
      131,
      100,
      &v42);
    return v9;
  }
  v6 = &dword_1A8A90[2 * a1];
  if ( !v6[1] )
  {
    v45 = a1;
    v42 = a1;
    v43 = 0;
    v44 = 10;
    v8 = iic_init((int)&v42);
    v9 = v8;
    if ( v8 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed\n", "eeprom_read", a1);
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw((char *)&v42, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      v21 = 136;
      v23 = g_zc;
      LOWORD(v22) = 5008;
LABEL_20:
      HIWORD(v22) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/re"
                                  "lease/build/godminer-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c" >> 16;
      zlog(v23, v22, 163, "eeprom_read", 11, v21, 100, &v42);
      return v9;
    }
    v6[1] = 1;
    dword_1A8A90[2 * a1] = v8;
  }
  puts("no use at24c512c!");
  if ( a4 )
  {
    v10 = a3;
    v38 = &a3[a4];
LABEL_7:
    v11 = dword_1A8A90[2 * a1];
    if ( pthread_mutex_lock(&stru_1A8A58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw((char *)&v42, 0x1000u, 0, s);
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
        &v42);
    }
    else
    {
      v40 = v11;
      if ( pthread_mutex_lock(&stru_1A8A70) )
      {
        strcpy(s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)&v42, 0x1000u, 0, s);
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
          &v42);
        pthread_mutex_unlock(&stru_1A8A58);
      }
      else
      {
        if ( dword_1A8A88 )
        {
          v12 = *(_DWORD *)dword_1A8A88;
          v13 = *(_DWORD *)dword_1A8A88 + 4;
          v14 = **(_DWORD ***)dword_1A8A88;
          while ( v14 != (_DWORD *)v13 )
          {
            v15 = v14[4];
            v16 = *(_DWORD *)(v15 + 4);
            v17 = malloc(v16);
            v18 = v17;
            if ( v17 )
              memcpy(v17, *(const void **)v15, v16);
            v19 = (*(int (__fastcall **)(int *, void *))(v12 + 36))(&v40, v18);
            free(v18);
            if ( !v19 )
            {
              v25 = v14[5];
              n = *(_DWORD *)(v25 + 4);
              v26 = malloc(n);
              v27 = v26;
              if ( !v26 )
                __und(0);
              memcpy(v26, *(const void **)v25, n);
              v28 = *v27;
              v29 = v27[1];
              snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v27, v29);
              pthread_mutex_lock(&stru_1A8A24);
              logfmt_raw((char *)&v42, 0x1000u, 0, s);
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
                &v42);
              v30 = 601;
              v31 = (a2 << 8) | 0x3000000 | (v28 << 26) | (v29 >> 4 << 20) | (v29 << 15) & 0x70000;
              while ( 1 )
              {
                v32 = dword_1A8A8C;
                if ( *(int *)(dword_1A8A8C + 48) < 0 )
                  break;
                usleep(0x1388u);
                if ( !--v30 )
                {
                  strcpy(s, "iic not ready 4 read1\n");
                  pthread_mutex_lock(&stru_1A8A24);
                  logfmt_raw((char *)&v42, 0x1000u, 0, s);
                  pthread_mutex_unlock(&stru_1A8A24);
                  v35 = g_zc;
                  v36 = 243;
LABEL_34:
                  zlog(
                    v35,
                    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/go"
                    "dminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
                    164,
                    "i2c_read_reg",
                    12,
                    v36,
                    100,
                    &v42);
                  free(v27);
                  goto LABEL_18;
                }
              }
              *(_DWORD *)(dword_1A8A8C + 48) = v31;
              v33 = 601;
              while ( 1 )
              {
                v34 = *(_DWORD *)(v32 + 48);
                if ( v34 < 0 )
                  break;
                usleep(0x1388u);
                if ( !--v33 )
                {
                  strcpy(s, "iic failed to read data\n");
                  pthread_mutex_lock(&stru_1A8A24);
                  logfmt_raw((char *)&v42, 0x1000u, 0, s);
                  pthread_mutex_unlock(&stru_1A8A24);
                  v35 = g_zc;
                  v36 = 254;
                  goto LABEL_34;
                }
                v32 = dword_1A8A8C;
              }
              *v10++ = v34;
              free(v27);
              pthread_mutex_unlock(&stru_1A8A70);
              a2 = (unsigned __int8)(a2 + 1);
              pthread_mutex_unlock(&stru_1A8A58);
              if ( v38 != v10 )
                goto LABEL_7;
              goto LABEL_31;
            }
            v20 = (_DWORD *)*v14;
            v14 = (_DWORD *)v14[1];
            if ( v19 < 0 )
              v14 = v20;
          }
        }
        snprintf(s, 0x800u, "ctx %d not inited\n", v40);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)&v42, 0x1000u, 0, s);
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
          &v42);
LABEL_18:
        pthread_mutex_unlock(&stru_1A8A70);
        pthread_mutex_unlock(&stru_1A8A58);
      }
    }
    snprintf(s, 0x800u, "fail to read eeprom by iic, chain: %d, addr: %d\n", a1, a2);
    v9 = -2147483392;
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw((char *)&v42, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    v21 = 158;
    LOWORD(v22) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/"
                                    "release/build/godminer-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c";
    v23 = g_zc;
    goto LABEL_20;
  }
LABEL_31:
  usleep((__useconds_t)&loc_7A120);
  return 0;
}
