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
  int v12; // r12
  int v13; // r0
  int v14; // r1
  int v16; // r4
  size_t v17; // r6
  _DWORD *v18; // r0
  _DWORD *v19; // r7
  int v20; // r8
  unsigned int v21; // r4
  int v22; // r3
  int v23; // r8
  int v24; // r7
  int v25; // t1
  int v26; // r4
  int v27; // r6
  void *ptr; // [sp+14h] [bp-1818h]
  int v31; // [sp+24h] [bp-1808h] BYREF
  char s[2040]; // [sp+28h] [bp-1804h] BYREF
  char v33[4100]; // [sp+828h] [bp-1004h] BYREF

  v31 = a1;
  if ( pthread_mutex_lock(&stru_197C70) )
  {
    strcpy(s, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, s);
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
      v33);
    return -1;
  }
  else
  {
    if ( dword_197C88 )
    {
      v3 = *(_DWORD *)dword_197C88;
      v4 = *(_DWORD *)dword_197C88 + 4;
      v5 = **(_DWORD ***)dword_197C88;
      while ( (_DWORD *)v4 != v5 )
      {
        v6 = v5[4];
        v7 = *(_DWORD *)(v6 + 4);
        v8 = malloc(v7);
        v9 = v8;
        if ( v8 )
          memcpy(v8, *(const void **)v6, v7);
        v10 = (*(int (__fastcall **)(int *, void *))(v3 + 36))(&v31, v9);
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
          v20 = *v19;
          v21 = v19[1];
          snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v19, v21);
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw(v33, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/7007/7007_i2c.c",
            164,
            "i2c_write",
            9,
            187,
            20,
            v33);
          if ( a3 )
          {
            v22 = dword_197C8C;
            v23 = (v20 << 26) | (v21 >> 4 << 20) | (v21 << 15) & 0x70000;
            v24 = a2 - 1;
            while ( 2 )
            {
              v25 = *(unsigned __int8 *)++v24;
              v26 = 601;
              v27 = v25 | v23;
              while ( *(int *)(v22 + 48) >= 0 )
              {
                usleep(0x1388u);
                if ( !--v26 )
                {
                  free(ptr);
                  strcpy(s, "iic not ready 4 write\n");
                  pthread_mutex_lock(&stru_197BB8);
                  logfmt_raw(v33, 0x1000u, 0, s);
                  pthread_mutex_unlock(&stru_197BB8);
                  v12 = 194;
                  LOWORD(v14) = 15016;
                  v13 = g_zc;
                  goto LABEL_11;
                }
                v22 = dword_197C8C;
              }
              *(_DWORD *)(v22 + 48) = v27;
              if ( v24 != a2 + a3 - 1 )
                continue;
              break;
            }
          }
          free(ptr);
          pthread_mutex_unlock(&stru_197C70);
          return a3;
        }
        v11 = (_DWORD *)*v5;
        v5 = (_DWORD *)v5[1];
        if ( v10 < 0 )
          v5 = v11;
      }
    }
    snprintf(s, 0x800u, "ctx %d not inited\n", v31);
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, s);
    V_UNLOCK();
    v12 = 203;
    v13 = g_zc;
    LOWORD(v14) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/"
                                    "release/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c";
LABEL_11:
    HIWORD(v14) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/backend/device/hal/platform/7007/7007_i2c.c" >> 16;
    zlog(v13, v14, 164, "i2c_write", 9, v12, 100, v33);
    pthread_mutex_unlock(&stru_197C70);
    return -2;
  }
}
