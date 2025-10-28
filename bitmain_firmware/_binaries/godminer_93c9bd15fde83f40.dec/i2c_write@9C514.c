int __fastcall i2c_write(int a1, int a2, int a3)
{
  int v3; // r7
  int v4; // r6
  _DWORD *v5; // r9
  int v6; // r5
  size_t v7; // r8
  void *v8; // r0
  void *v9; // r4
  int v10; // r5
  _DWORD *v11; // r3
  int v13; // r4
  size_t v14; // r6
  _DWORD *v15; // r0
  _DWORD *v16; // r7
  int v17; // r8
  unsigned int v18; // r4
  int v19; // r3
  int v20; // r8
  int v21; // r7
  int v22; // t1
  int v23; // r4
  int v24; // r6
  void *ptr; // [sp+14h] [bp-1818h]
  int v28; // [sp+24h] [bp-1808h] BYREF
  char s[2040]; // [sp+28h] [bp-1804h] BYREF
  char v30[4100]; // [sp+828h] [bp-1004h] BYREF

  v28 = a1;
  if ( pthread_mutex_lock(&stru_1A8A70) )
  {
    strcpy(s, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_i2c.c",
      164,
      "i2c_write",
      9,
      180,
      100,
      v30);
    return -1;
  }
  else
  {
    if ( dword_1A8A88 )
    {
      v3 = *(_DWORD *)dword_1A8A88;
      v4 = *(_DWORD *)dword_1A8A88 + 4;
      v5 = **(_DWORD ***)dword_1A8A88;
      while ( (_DWORD *)v4 != v5 )
      {
        v6 = v5[4];
        v7 = *(_DWORD *)(v6 + 4);
        v8 = malloc(v7);
        v9 = v8;
        if ( v8 )
          memcpy(v8, *(const void **)v6, v7);
        v10 = (*(int (__fastcall **)(int *, void *))(v3 + 36))(&v28, v9);
        free(v9);
        if ( !v10 )
        {
          v13 = v5[5];
          v14 = *(_DWORD *)(v13 + 4);
          v15 = malloc(v14);
          v16 = v15;
          ptr = v15;
          if ( !v15 )
            __und(0);
          memcpy(v15, *(const void **)v13, v14);
          v17 = *v16;
          v18 = v16[1];
          snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v16, v18);
          pthread_mutex_lock(&stru_1A8A24);
          logfmt_raw(v30, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/7007/7007_i2c.c",
            164,
            "i2c_write",
            9,
            187,
            20,
            v30);
          if ( a3 )
          {
            v19 = dword_1A8A8C;
            v20 = (v17 << 26) | (v18 >> 4 << 20) | (v18 << 15) & 0x70000;
            v21 = a2 - 1;
            while ( 2 )
            {
              v22 = *(unsigned __int8 *)++v21;
              v23 = 601;
              v24 = v22 | v20;
              while ( *(int *)(v19 + 48) >= 0 )
              {
                usleep(0x1388u);
                if ( !--v23 )
                {
                  free(ptr);
                  strcpy(s, "iic not ready 4 write\n");
                  pthread_mutex_lock(&stru_1A8A24);
                  logfmt_raw(v30, 0x1000u, 0, s);
                  pthread_mutex_unlock(&stru_1A8A24);
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/go"
                    "dminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
                    164,
                    "i2c_write",
                    9,
                    194,
                    100,
                    v30);
                  goto LABEL_11;
                }
                v19 = dword_1A8A8C;
              }
              *(_DWORD *)(v19 + 48) = v24;
              if ( v21 != a2 + a3 - 1 )
                continue;
              break;
            }
          }
          free(ptr);
          pthread_mutex_unlock(&stru_1A8A70);
          return a3;
        }
        v11 = (_DWORD *)*v5;
        v5 = (_DWORD *)v5[1];
        if ( v10 < 0 )
          v5 = v11;
      }
    }
    snprintf(s, 0x800u, "ctx %d not inited\n", v28);
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_i2c.c",
      164,
      "i2c_write",
      9,
      203,
      100,
      v30);
LABEL_11:
    pthread_mutex_unlock(&stru_1A8A70);
    return -2;
  }
}
