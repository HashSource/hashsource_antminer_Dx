int __fastcall i2c_read(int a1, int a2, int a3)
{
  int v3; // r7
  int v4; // r6
  _DWORD *v5; // r11
  int v6; // r5
  size_t v7; // r9
  void *v8; // r0
  void *v9; // r4
  int v10; // r5
  _DWORD *v11; // r3
  int v12; // r12
  int v13; // r0
  int v14; // r1
  int v16; // r4
  size_t v17; // r6
  _DWORD *v18; // r0
  _DWORD *v19; // r7
  _DWORD *v20; // r3
  int v21; // r7
  unsigned int v22; // r4
  int v23; // r7
  int v24; // r6
  int v25; // r4
  int v26; // r3
  int v27; // r4
  int v28; // r3
  void *ptr; // [sp+10h] [bp-1814h]
  int v32; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v34[4100]; // [sp+820h] [bp-1004h] BYREF

  v32 = a1;
  if ( pthread_mutex_lock(&stru_1A8A70) )
  {
    strcpy(s, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v34, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_i2c.c",
      164,
      "i2c_read",
      8,
      127,
      100,
      v34);
    return -1;
  }
  else
  {
    if ( dword_1A8A88 )
    {
      v3 = *(_DWORD *)dword_1A8A88;
      v4 = *(_DWORD *)dword_1A8A88 + 4;
      v5 = **(_DWORD ***)dword_1A8A88;
      while ( v5 != (_DWORD *)v4 )
      {
        v6 = v5[4];
        v7 = *(_DWORD *)(v6 + 4);
        v8 = malloc(v7);
        v9 = v8;
        if ( v8 )
          memcpy(v8, *(const void **)v6, v7);
        v10 = (*(int (__fastcall **)(int *, void *))(v3 + 36))(&v32, v9);
        free(v9);
        if ( !v10 )
        {
          v16 = v5[5];
          v17 = *(_DWORD *)(v16 + 4);
          v18 = malloc(v17);
          v19 = v18;
          ptr = v18;
          if ( !v18 )
            __und(0);
          memcpy(v18, *(const void **)v16, v17);
          v20 = v19;
          v21 = *v19;
          v22 = v20[1];
          snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", v21, v22);
          pthread_mutex_lock(&stru_1A8A24);
          logfmt_raw(v34, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/7007/7007_i2c.c",
            164,
            "i2c_read",
            8,
            134,
            20,
            v34);
          v23 = (v21 << 26) | 0x2000000 | (v22 >> 4 << 20) | (v22 << 15) & 0x70000;
          if ( a3 )
          {
            v24 = a2 - 1;
            while ( 2 )
            {
              v25 = 601;
              while ( 1 )
              {
                v26 = dword_1A8A8C;
                if ( *(int *)(dword_1A8A8C + 48) < 0 )
                  break;
                usleep(0x1388u);
                if ( !--v25 )
                {
                  free(ptr);
                  strcpy(s, "iic not ready 4 read1\n");
                  pthread_mutex_lock(&stru_1A8A24);
                  logfmt_raw(v34, 0x1000u, 0, s);
                  pthread_mutex_unlock(&stru_1A8A24);
                  v13 = g_zc;
                  v12 = 141;
                  LOWORD(v14) = -27564;
                  goto LABEL_11;
                }
              }
              *(_DWORD *)(dword_1A8A8C + 48) = v23;
              v27 = 601;
              while ( 1 )
              {
                v28 = *(_DWORD *)(v26 + 48);
                if ( v28 < 0 )
                  break;
                usleep(0x1388u);
                if ( !--v27 )
                {
                  free(ptr);
                  strcpy(s, "iic not ready 4 read2\n");
                  pthread_mutex_lock(&stru_1A8A24);
                  logfmt_raw(v34, 0x1000u, 0, s);
                  pthread_mutex_unlock(&stru_1A8A24);
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/go"
                    "dminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
                    164,
                    "i2c_read",
                    8,
                    152,
                    100,
                    v34);
                  pthread_mutex_unlock(&stru_1A8A70);
                  return -3;
                }
                v26 = dword_1A8A8C;
              }
              *(_BYTE *)++v24 = v28;
              if ( v24 != a2 + a3 - 1 )
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
    snprintf(s, 0x800u, "ctx %d not inited\n", v32);
    V_LOCK();
    logfmt_raw(v34, 0x1000u, 0, s);
    V_UNLOCK();
    v12 = 159;
    v13 = g_zc;
    LOWORD(v14) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/"
                                    "release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c";
LABEL_11:
    HIWORD(v14) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
    zlog(v13, v14, 164, "i2c_read", 8, v12, 100, v34);
    pthread_mutex_unlock(&stru_1A8A70);
    return -2;
  }
}
