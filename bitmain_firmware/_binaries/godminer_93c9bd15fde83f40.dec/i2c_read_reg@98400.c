int __fastcall i2c_read_reg(int a1, unsigned __int8 *a2, int a3, int a4, int a5)
{
  int v6; // r6
  int v7; // r5
  _DWORD *v8; // r9
  int v9; // r7
  size_t v10; // r8
  void *v11; // r0
  void *v12; // r4
  int v13; // r7
  _DWORD *v14; // r3
  int v15; // r3
  int v17; // r4
  size_t v18; // r5
  _DWORD *v19; // r0
  _DWORD *v20; // r6
  int v21; // r8
  unsigned int v22; // r5
  int v23; // r3
  int v24; // r8
  int v25; // r9
  int v26; // r4
  int v27; // r6
  int v28; // r3
  int v29; // r6
  int v30; // r3
  int v31; // r3
  int v32; // r3
  int *v33; // r12
  int v34; // r0
  int v35; // r1
  int v36; // r2
  int v37; // r3
  int v38; // r0
  int v39; // r1
  int v40; // r2
  int v41; // r3
  int v42; // r0
  int v43; // r1
  int v44; // r2
  int v45; // r3
  int v46; // r12
  int v47; // r3
  int v48; // r3
  void *ptr; // [sp+14h] [bp-1818h]
  int v51; // [sp+24h] [bp-1808h] BYREF
  _DWORD v52[12]; // [sp+28h] [bp-1804h] BYREF
  char v53; // [sp+58h] [bp-17D4h]
  char _828[4120]; // [sp+828h] [bp-1004h] BYREF

  v51 = a1;
  if ( a3 == 1 )
  {
    if ( pthread_mutex_lock(&stru_1A8A70) )
    {
      strcpy((char *)v52, "failed to i2c lock\n");
      V_LOCK();
      logfmt_raw(_828, 0x1000u, 0, v52);
      V_UNLOCK();
      LOWORD(v48) = -16168;
      HIWORD(v48) = (unsigned int)"" >> 16;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        v48,
        12,
        229,
        100,
        _828);
      return -1;
    }
    else
    {
      if ( dword_1A8A88 )
      {
        v6 = *(_DWORD *)dword_1A8A88;
        v7 = *(_DWORD *)dword_1A8A88 + 4;
        v8 = **(_DWORD ***)dword_1A8A88;
        while ( v8 != (_DWORD *)v7 )
        {
          v9 = v8[4];
          v10 = *(_DWORD *)(v9 + 4);
          v11 = malloc(v10);
          v12 = v11;
          if ( v11 )
            memcpy(v11, *(const void **)v9, v10);
          v13 = (*(int (__fastcall **)(int *, void *))(v6 + 36))(&v51, v12);
          free(v12);
          if ( !v13 )
          {
            v17 = v8[5];
            v18 = *(_DWORD *)(v17 + 4);
            v19 = malloc(v18);
            v20 = v19;
            ptr = v19;
            if ( !v19 )
              __und(0);
            memcpy(v19, *(const void **)v17, v18);
            v21 = *v20;
            v22 = v20[1];
            snprintf((char *)v52, 0x800u, "i2c read master = %d, slave = %d\n", *v20, v22);
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw(_828, 0x1000u, 0, v52);
            pthread_mutex_unlock(&stru_1A8A24);
            LOWORD(v23) = -16168;
            HIWORD(v23) = (unsigned int)"" >> 16;
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
              164,
              v23,
              12,
              236,
              20,
              _828);
            if ( a5 )
            {
              v24 = (v21 << 26) | 0x3000000 | (v22 >> 4 << 20) | (v22 << 15) & 0x70000;
              v25 = a4 - 1;
              while ( 2 )
              {
                v26 = 601;
                v27 = v24 | ((*a2 + v13) << 8);
                while ( 1 )
                {
                  v28 = dword_1A8A8C;
                  if ( *(int *)(dword_1A8A8C + 48) < 0 )
                    break;
                  usleep(0x1388u);
                  if ( !--v26 )
                  {
                    strcpy((char *)v52, "iic not ready 4 read1\n");
                    pthread_mutex_lock(&stru_1A8A24);
                    logfmt_raw(_828, 0x1000u, 0, v52);
                    pthread_mutex_unlock(&stru_1A8A24);
                    LOWORD(v31) = -16168;
                    HIWORD(v31) = (unsigned int)"" >> 16;
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/"
                      "godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
                      164,
                      v31,
                      12,
                      243,
                      100,
                      _828);
                    free(ptr);
                    pthread_mutex_unlock(&stru_1A8A70);
                    return -2;
                  }
                }
                *(_DWORD *)(dword_1A8A8C + 48) = v27;
                v29 = 601;
                while ( 1 )
                {
                  v30 = *(_DWORD *)(v28 + 48);
                  if ( v30 < 0 )
                    break;
                  usleep(0x1388u);
                  if ( !--v29 )
                  {
                    strcpy((char *)v52, "iic failed to read data\n");
                    pthread_mutex_lock(&stru_1A8A24);
                    logfmt_raw(_828, 0x1000u, 0, v52);
                    pthread_mutex_unlock(&stru_1A8A24);
                    LOWORD(v32) = -16168;
                    HIWORD(v32) = (unsigned int)"" >> 16;
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/"
                      "godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
                      164,
                      v32,
                      12,
                      254,
                      100,
                      _828);
                    free(ptr);
                    pthread_mutex_unlock(&stru_1A8A70);
                    return -3;
                  }
                  v28 = dword_1A8A8C;
                }
                *(_BYTE *)++v25 = v30;
                if ( a5 != ++v13 )
                  continue;
                break;
              }
            }
            free(ptr);
            pthread_mutex_unlock(&stru_1A8A70);
            return a5;
          }
          v14 = (_DWORD *)*v8;
          v8 = (_DWORD *)v8[1];
          if ( v13 < 0 )
            v8 = v14;
        }
      }
      snprintf((char *)v52, 0x800u, "ctx %d not inited\n", v51);
      V_LOCK();
      logfmt_raw(_828, 0x1000u, 0, v52);
      V_UNLOCK();
      LOWORD(v15) = -16168;
      HIWORD(v15) = (unsigned int)"" >> 16;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        v15,
        12,
        262,
        100,
        _828);
      pthread_mutex_unlock(&stru_1A8A70);
      return -2;
    }
  }
  else
  {
    LOWORD(v33) = -27616;
    HIWORD(v33) = (unsigned int)"/backend/backend_dash/backend_dash.c" >> 16;
    v34 = *v33;
    v35 = v33[1];
    v36 = v33[2];
    v37 = v33[3];
    v33 += 4;
    v52[0] = v34;
    v52[1] = v35;
    v52[2] = v36;
    v52[3] = v37;
    v38 = *v33;
    v39 = v33[1];
    v40 = v33[2];
    v41 = v33[3];
    v33 += 4;
    v52[4] = v38;
    v52[5] = v39;
    v52[6] = v40;
    v52[7] = v41;
    v42 = *v33;
    v43 = v33[1];
    v44 = v33[2];
    v45 = v33[3];
    v46 = v33[4];
    v52[8] = v42;
    v52[9] = v43;
    v52[10] = v44;
    v52[11] = v45;
    v53 = v46;
    V_LOCK();
    logfmt_raw(_828, 0x1000u, 0, v52);
    V_UNLOCK();
    LOWORD(v47) = -16168;
    HIWORD(v47) = (unsigned int)"" >> 16;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_i2c.c",
      164,
      v47,
      12,
      225,
      100,
      _828);
    return -3;
  }
}
