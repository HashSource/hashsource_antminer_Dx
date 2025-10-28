int __fastcall eeprom_read(unsigned int a1, int a2, _BYTE *a3, int a4)
{
  _DWORD *v6; // r6
  _BYTE *v8; // r10
  int v9; // r5
  int v10; // r6
  int v11; // r5
  _DWORD *v12; // r9
  int v13; // r7
  size_t v14; // r11
  void *v15; // r0
  void *v16; // r4
  int v17; // r11
  _DWORD *v18; // r3
  int v19; // r4
  int v20; // r12
  int v21; // r1
  int v22; // r0
  int v24; // r4
  _DWORD *v25; // r0
  _DWORD *v26; // r9
  int v27; // r6
  unsigned int v28; // r5
  int v29; // r11
  int v30; // r5
  int v31; // r3
  int v32; // r5
  int v33; // r3
  int v34; // r0
  int v35; // r12
  int v37; // r0
  size_t n; // [sp+14h] [bp-1828h]
  _BYTE *v39; // [sp+20h] [bp-181Ch]
  int v41; // [sp+34h] [bp-1808h] BYREF
  char s[2040]; // [sp+38h] [bp-1804h] BYREF
  unsigned int v43; // [sp+838h] [bp-1004h] BYREF
  __int16 v44; // [sp+83Ch] [bp-1000h]
  char v45; // [sp+83Eh] [bp-FFEh]
  char v46; // [sp+83Fh] [bp-FFDh]

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_read", a1);
    V_LOCK();
    logfmt_raw((char *)&v43, 0x1000u, 0, s);
    V_UNLOCK();
    v19 = -2147483391;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "eeprom_read",
      11,
      117,
      100,
      &v43);
    return v19;
  }
  v6 = &dword_197BD8[2 * a1];
  if ( !v6[1] )
  {
    v46 = a1;
    v43 = a1;
    v44 = 0;
    v45 = 10;
    v37 = iic_init((int)&v43);
    v19 = v37;
    if ( v37 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed\n", "eeprom_read", a1);
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw((char *)&v43, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_197BB8);
      v20 = 122;
      v22 = g_zc;
      LOWORD(v21) = 1264;
LABEL_18:
      HIWORD(v21) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/re"
                                  "lease/build/godminer-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c" >> 16;
      zlog(v22, v21, 163, "eeprom_read", 11, v20, 100, &v43);
      return v19;
    }
    v6[1] = 1;
    dword_197BD8[2 * a1] = v37;
  }
  if ( a4 )
  {
    v8 = a3;
    v39 = &a3[a4];
LABEL_5:
    v9 = dword_197BD8[2 * a1];
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      strcpy(s, "failed to i2c lock\n");
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw((char *)&v43, 0x1000u, 0, s);
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
        &v43);
    }
    else
    {
      v41 = v9;
      if ( pthread_mutex_lock(&stru_197C70) )
      {
        strcpy(s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw((char *)&v43, 0x1000u, 0, s);
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
          &v43);
        pthread_mutex_unlock(&stru_197C58);
      }
      else
      {
        if ( dword_197C88 )
        {
          v10 = *(_DWORD *)dword_197C88;
          v11 = *(_DWORD *)dword_197C88 + 4;
          v12 = **(_DWORD ***)dword_197C88;
          while ( v12 != (_DWORD *)v11 )
          {
            v13 = v12[4];
            v14 = *(_DWORD *)(v13 + 4);
            v15 = malloc(v14);
            v16 = v15;
            if ( v15 )
              memcpy(v15, *(const void **)v13, v14);
            v17 = (*(int (__fastcall **)(int *, void *))(v10 + 36))(&v41, v16);
            free(v16);
            if ( !v17 )
            {
              v24 = v12[5];
              n = *(_DWORD *)(v24 + 4);
              v25 = malloc(n);
              v26 = v25;
              if ( !v25 )
                __und(0);
              memcpy(v25, *(const void **)v24, n);
              v27 = *v26;
              v28 = v26[1];
              snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v26, v28);
              pthread_mutex_lock(&stru_197BB8);
              logfmt_raw((char *)&v43, 0x1000u, 0, s);
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
                &v43);
              v29 = 601;
              v30 = (a2 << 8) | 0x3000000 | (v27 << 26) | (v28 >> 4 << 20) | (v28 << 15) & 0x70000;
              while ( 1 )
              {
                v31 = dword_197C8C;
                if ( *(int *)(dword_197C8C + 48) < 0 )
                  break;
                usleep(0x1388u);
                if ( !--v29 )
                {
                  strcpy(s, "iic not ready 4 read1\n");
                  pthread_mutex_lock(&stru_197BB8);
                  logfmt_raw((char *)&v43, 0x1000u, 0, s);
                  pthread_mutex_unlock(&stru_197BB8);
                  v34 = g_zc;
                  v35 = 243;
LABEL_32:
                  zlog(
                    v34,
                    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/go"
                    "dminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
                    164,
                    "i2c_read_reg",
                    12,
                    v35,
                    100,
                    &v43);
                  free(v26);
                  goto LABEL_16;
                }
              }
              *(_DWORD *)(dword_197C8C + 48) = v30;
              v32 = 601;
              while ( 1 )
              {
                v33 = *(_DWORD *)(v31 + 48);
                if ( v33 < 0 )
                  break;
                usleep(0x1388u);
                if ( !--v32 )
                {
                  strcpy(s, "iic failed to read data\n");
                  pthread_mutex_lock(&stru_197BB8);
                  logfmt_raw((char *)&v43, 0x1000u, 0, s);
                  pthread_mutex_unlock(&stru_197BB8);
                  v34 = g_zc;
                  v35 = 254;
                  goto LABEL_32;
                }
                v31 = dword_197C8C;
              }
              *v8++ = v33;
              free(v26);
              pthread_mutex_unlock(&stru_197C70);
              a2 = (unsigned __int8)(a2 + 1);
              pthread_mutex_unlock(&stru_197C58);
              if ( v39 != v8 )
                goto LABEL_5;
              goto LABEL_29;
            }
            v18 = (_DWORD *)*v12;
            v12 = (_DWORD *)v12[1];
            if ( v17 < 0 )
              v12 = v18;
          }
        }
        snprintf(s, 0x800u, "ctx %d not inited\n", v41);
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw((char *)&v43, 0x1000u, 0, s);
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
          &v43);
LABEL_16:
        pthread_mutex_unlock(&stru_197C70);
        pthread_mutex_unlock(&stru_197C58);
      }
    }
    snprintf(s, 0x800u, "fail to read eeprom by iic, chain: %d, addr: %d\n", a1, a2);
    v19 = -2147483392;
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw((char *)&v43, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    v20 = 132;
    LOWORD(v21) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/"
                                    "release/build/godminer-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c";
    v22 = g_zc;
    goto LABEL_18;
  }
LABEL_29:
  usleep((__useconds_t)&loc_7A120);
  return 0;
}
