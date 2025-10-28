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
  void *ptr; // [sp+14h] [bp-1818h]
  int v30; // [sp+24h] [bp-1808h] BYREF
  char v31[2040]; // [sp+28h] [bp-1804h] BYREF
  char _828[4120]; // [sp+828h] [bp-1004h] BYREF

  v30 = a1;
  if ( a3 == 1 )
  {
    if ( pthread_mutex_lock(&stru_197C70) )
    {
      strcpy(v31, "failed to i2c lock\n");
      V_LOCK();
      logfmt_raw(_828, 0x1000u, 0, v31);
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
      if ( dword_197C88 )
      {
        v6 = *(_DWORD *)dword_197C88;
        v7 = *(_DWORD *)dword_197C88 + 4;
        v8 = **(_DWORD ***)dword_197C88;
        while ( v8 != (_DWORD *)v7 )
        {
          v9 = v8[4];
          v10 = *(_DWORD *)(v9 + 4);
          v11 = malloc(v10);
          v12 = v11;
          if ( v11 )
            memcpy(v11, *(const void **)v9, v10);
          v13 = (*(int (__fastcall **)(int *, void *))(v6 + 36))(&v30, v12);
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
            snprintf(v31, 0x800u, "i2c read master = %d, slave = %d\n", *v19, v21);
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw(_828, 0x1000u, 0, v31);
            pthread_mutex_unlock(&stru_197BB8);
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
              v22 = dword_197C8C;
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
                    strcpy(v31, "iic not ready 4 write\n");
                    pthread_mutex_lock(&stru_197BB8);
                    logfmt_raw(_828, 0x1000u, 0, v31);
                    pthread_mutex_unlock(&stru_197BB8);
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
                    pthread_mutex_unlock(&stru_197C70);
                    return -2;
                  }
                  v22 = dword_197C8C;
                }
                ++v13;
                *(_DWORD *)(v22 + 48) = v27;
                if ( a5 != v13 )
                  continue;
                break;
              }
            }
            free(ptr);
            pthread_mutex_unlock(&stru_197C70);
            return a5;
          }
          v14 = (_DWORD *)*v8;
          v8 = (_DWORD *)v8[1];
          if ( v13 < 0 )
            v8 = v14;
        }
      }
      snprintf(v31, 0x800u, "ctx %d not inited\n", v30);
      V_LOCK();
      logfmt_raw(_828, 0x1000u, 0, v31);
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
      pthread_mutex_unlock(&stru_197C70);
      return -2;
    }
  }
  else
  {
    strcpy(v31, "more than one byte reg address is not supported\n");
    V_LOCK();
    logfmt_raw(_828, 0x1000u, 0, v31);
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
