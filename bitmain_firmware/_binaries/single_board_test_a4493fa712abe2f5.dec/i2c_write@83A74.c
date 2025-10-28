int __fastcall i2c_write(int a1, int a2, int a3)
{
  int v4; // r9
  __int64 *v5; // r4
  int v6; // r8
  int v7; // r6
  size_t v8; // r11
  void *v9; // r0
  void *v10; // r5
  int v11; // r6
  __int64 v12; // kr00_8
  int v14; // r4
  size_t v15; // r5
  _DWORD *v16; // r0
  _DWORD *v17; // r10
  int v18; // r5
  unsigned int v19; // r4
  int v20; // r3
  int v21; // r9
  int v22; // r8
  int v23; // r7
  int v24; // t1
  int v25; // r4
  int v26; // r6
  int v28; // [sp+14h] [bp-1808h] BYREF
  char s[2048]; // [sp+18h] [bp-1804h] BYREF
  char v30[4100]; // [sp+818h] [bp-1004h] BYREF

  v28 = a1;
  if ( pthread_mutex_lock(&stru_3B5288) )
  {
    strcpy(s, "failed to i2c lock\n");
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
      81,
      "i2c_write",
      9,
      180,
      100,
      v30);
    return -1;
  }
  else
  {
    if ( dword_3B52A0 )
    {
      v4 = *(_DWORD *)dword_3B52A0;
      v6 = *(_DWORD *)dword_3B52A0 + 4;
      v5 = **(__int64 ***)dword_3B52A0;
      while ( (__int64 *)v6 != v5 )
      {
        v7 = *((_DWORD *)v5 + 4);
        v8 = *(_DWORD *)(v7 + 4);
        v9 = malloc(v8);
        v10 = v9;
        if ( v9 )
          memcpy(v9, *(const void **)v7, v8);
        v11 = (*(int (__fastcall **)(int *, void *))(v4 + 36))(&v28, v10);
        free(v10);
        if ( !v11 )
        {
          v14 = *((_DWORD *)v5 + 5);
          v15 = *(_DWORD *)(v14 + 4);
          v16 = malloc(v15);
          v17 = v16;
          if ( !v16 )
            __und(0xFFu);
          memcpy(v16, *(const void **)v14, v15);
          v18 = *v17;
          v19 = v17[1];
          snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v17, v19);
          pthread_mutex_lock(&stru_3B526C);
          logfmt_raw(v30, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
            81,
            "i2c_write",
            9,
            187,
            20,
            v30);
          if ( a3 )
          {
            v20 = dword_3B52A4;
            v21 = a2 + a3 - 1;
            v22 = (v18 << 26) | (v19 >> 4 << 20) | (v19 << 15) & 0x70000;
            v23 = a2 - 1;
            while ( 2 )
            {
              v24 = *(unsigned __int8 *)++v23;
              v25 = 601;
              v26 = v24 | v22;
              while ( *(int *)(v20 + 48) >= 0 )
              {
                usleep(0x1388u);
                if ( !--v25 )
                {
                  free(v17);
                  strcpy(s, "iic not ready 4 write\n");
                  pthread_mutex_lock(&stru_3B526C);
                  logfmt_raw(v30, 0x1000u, 0, s);
                  pthread_mutex_unlock(&stru_3B526C);
                  zlog(
                    g_zc,
                    "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
                    81,
                    "i2c_write",
                    9,
                    194,
                    100,
                    v30);
                  goto LABEL_11;
                }
                v20 = dword_3B52A4;
              }
              *(_DWORD *)(v20 + 48) = v26;
              if ( v23 != v21 )
                continue;
              break;
            }
          }
          free(v17);
          pthread_mutex_unlock(&stru_3B5288);
          return a3;
        }
        v12 = *v5;
        v5 = (__int64 *)*((_DWORD *)v5 + 1);
        if ( v11 < 0 )
          v5 = (__int64 *)v12;
      }
    }
    snprintf(s, 0x800u, "ctx %d not inited\n", v28);
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
      81,
      "i2c_write",
      9,
      203,
      100,
      v30);
LABEL_11:
    pthread_mutex_unlock(&stru_3B5288);
    return -2;
  }
}
