int __fastcall i2c_write_reg(int a1, unsigned __int8 *a2, int a3, int a4, int a5)
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
  int v16; // r4
  size_t v17; // r5
  _DWORD *v18; // r0
  _DWORD *v19; // r6
  int v20; // r8
  unsigned int v21; // r5
  int v22; // r3
  int v23; // r9
  int v24; // r8
  int v25; // r4
  int v26; // t1
  int v27; // r6
  int *v28; // r12
  int v29; // r0
  int v30; // r1
  int v31; // r2
  int v32; // r3
  int v33; // r0
  int v34; // r1
  int v35; // r2
  int v36; // r3
  int v37; // r0
  int v38; // r1
  int v39; // r2
  int v40; // r3
  int v41; // r12
  void *ptr; // [sp+14h] [bp-1818h]
  int v44; // [sp+24h] [bp-1808h] BYREF
  _DWORD v45[12]; // [sp+28h] [bp-1804h] BYREF
  char v46; // [sp+58h] [bp-17D4h]
  char _828[4120]; // [sp+828h] [bp-1004h] BYREF

  v44 = a1;
  if ( a3 == 1 )
  {
    if ( pthread_mutex_lock(&stru_1A8A70) )
    {
      strcpy((char *)v45, "failed to i2c lock\n");
      V_LOCK();
      logfmt_raw(_828, 0x1000u, 0, v45);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        "i2c_write_reg",
        13,
        288,
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
          v13 = (*(int (__fastcall **)(int *, void *))(v6 + 36))(&v44, v12);
          free(v12);
          if ( !v13 )
          {
            v16 = v8[5];
            v17 = *(_DWORD *)(v16 + 4);
            v18 = malloc(v17);
            v19 = v18;
            ptr = v18;
            if ( !v18 )
              __und(0);
            memcpy(v18, *(const void **)v16, v17);
            v20 = *v19;
            v21 = v19[1];
            snprintf((char *)v45, 0x800u, "i2c read master = %d, slave = %d\n", *v19, v21);
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw(_828, 0x1000u, 0, v45);
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
              164,
              "i2c_write_reg",
              13,
              295,
              20,
              _828);
            if ( a5 )
            {
              v22 = dword_1A8A8C;
              v23 = a4 - 1;
              v24 = (v20 << 26) | 0x1000000 | (v21 >> 4 << 20) | (v21 << 15) & 0x70000;
              while ( 2 )
              {
                v25 = 601;
                v26 = *(unsigned __int8 *)++v23;
                v27 = v24 | ((*a2 + v13) << 8) | v26;
                while ( *(int *)(v22 + 48) >= 0 )
                {
                  usleep(0x1388u);
                  if ( !--v25 )
                  {
                    strcpy((char *)v45, "iic not ready 4 write\n");
                    pthread_mutex_lock(&stru_1A8A24);
                    logfmt_raw(_828, 0x1000u, 0, v45);
                    pthread_mutex_unlock(&stru_1A8A24);
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/"
                      "godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
                      164,
                      "i2c_write_reg",
                      13,
                      303,
                      100,
                      _828);
                    free(ptr);
                    pthread_mutex_unlock(&stru_1A8A70);
                    return -2;
                  }
                  v22 = dword_1A8A8C;
                }
                ++v13;
                *(_DWORD *)(v22 + 48) = v27;
                if ( a5 != v13 )
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
      snprintf((char *)v45, 0x800u, "ctx %d not inited\n", v44);
      V_LOCK();
      logfmt_raw(_828, 0x1000u, 0, v45);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        "i2c_write_reg",
        13,
        313,
        100,
        _828);
      pthread_mutex_unlock(&stru_1A8A70);
      return -2;
    }
  }
  else
  {
    LOWORD(v28) = -27616;
    HIWORD(v28) = (unsigned int)"/backend/backend_dash/backend_dash.c" >> 16;
    v29 = *v28;
    v30 = v28[1];
    v31 = v28[2];
    v32 = v28[3];
    v28 += 4;
    v45[0] = v29;
    v45[1] = v30;
    v45[2] = v31;
    v45[3] = v32;
    v33 = *v28;
    v34 = v28[1];
    v35 = v28[2];
    v36 = v28[3];
    v28 += 4;
    v45[4] = v33;
    v45[5] = v34;
    v45[6] = v35;
    v45[7] = v36;
    v37 = *v28;
    v38 = v28[1];
    v39 = v28[2];
    v40 = v28[3];
    v41 = v28[4];
    v45[8] = v37;
    v45[9] = v38;
    v45[10] = v39;
    v45[11] = v40;
    v46 = v41;
    V_LOCK();
    logfmt_raw(_828, 0x1000u, 0, v45);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_i2c.c",
      164,
      "i2c_write_reg",
      13,
      284,
      100,
      _828);
    return -3;
  }
}
