int __fastcall i2c_read_reg(int a1, unsigned __int8 *a2, int a3, int a4, int a5)
{
  int v6; // r6
  int v7; // r5
  __int64 *v8; // r10
  int v9; // r7
  size_t v10; // r9
  void *v11; // r0
  void *v12; // r4
  int v13; // r7
  __int64 v14; // kr00_8
  int v16; // r4
  size_t v17; // r5
  _DWORD *v18; // r0
  _DWORD *v19; // r6
  int v20; // r4
  unsigned int v21; // r5
  int v22; // r9
  int v23; // r10
  int v24; // r6
  int v25; // r3
  int v26; // r6
  int v27; // r3
  void *ptr; // [sp+14h] [bp-1810h]
  int v30; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char var1004[4128]; // [sp+820h] [bp-1004h] BYREF

  v30 = a1;
  if ( a3 == 1 )
  {
    if ( pthread_mutex_lock(&stru_3B5288) )
    {
      strcpy(s, "failed to i2c lock\n");
      V_LOCK();
      logfmt_raw(var1004, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
        81,
        "i2c_read_reg",
        12,
        229,
        100,
        var1004);
      return -1;
    }
    else
    {
      if ( dword_3B52A0 )
      {
        v6 = *(_DWORD *)dword_3B52A0;
        v7 = *(_DWORD *)dword_3B52A0 + 4;
        v8 = **(__int64 ***)dword_3B52A0;
        while ( v8 != (__int64 *)v7 )
        {
          v9 = *((_DWORD *)v8 + 4);
          v10 = *(_DWORD *)(v9 + 4);
          v11 = malloc(v10);
          v12 = v11;
          if ( v11 )
            memcpy(v11, *(const void **)v9, v10);
          v13 = (*(int (__fastcall **)(int *, void *))(v6 + 36))(&v30, v12);
          free(v12);
          if ( !v13 )
          {
            v16 = *((_DWORD *)v8 + 5);
            v17 = *(_DWORD *)(v16 + 4);
            v18 = malloc(v17);
            v19 = v18;
            ptr = v18;
            if ( !v18 )
              __und(0xFFu);
            memcpy(v18, *(const void **)v16, v17);
            v20 = *v19;
            v21 = v19[1];
            snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v19, v21);
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(var1004, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
              81,
              "i2c_read_reg",
              12,
              236,
              20,
              var1004);
            if ( a5 )
            {
              v22 = a4 - 1;
              while ( 2 )
              {
                v23 = 601;
                v24 = (v20 << 26) | 0x3000000 | (v21 >> 4 << 20) | (v21 << 15) & 0x70000 | ((*a2 + v13) << 8);
                while ( 1 )
                {
                  v25 = dword_3B52A4;
                  if ( *(int *)(dword_3B52A4 + 48) < 0 )
                    break;
                  usleep(0x1388u);
                  if ( !--v23 )
                  {
                    strcpy(s, "iic not ready 4 read1\n");
                    pthread_mutex_lock(&stru_3B526C);
                    logfmt_raw(var1004, 0x1000u, 0, s);
                    pthread_mutex_unlock(&stru_3B526C);
                    zlog(
                      g_zc,
                      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
                      81,
                      "i2c_read_reg",
                      12,
                      243,
                      100,
                      var1004);
                    free(ptr);
                    pthread_mutex_unlock(&stru_3B5288);
                    return -2;
                  }
                }
                *(_DWORD *)(dword_3B52A4 + 48) = v24;
                v26 = 601;
                while ( 1 )
                {
                  v27 = *(_DWORD *)(v25 + 48);
                  if ( v27 < 0 )
                    break;
                  usleep(0x1388u);
                  if ( !--v26 )
                  {
                    strcpy(s, "iic failed to read data\n");
                    pthread_mutex_lock(&stru_3B526C);
                    logfmt_raw(var1004, 0x1000u, 0, s);
                    pthread_mutex_unlock(&stru_3B526C);
                    zlog(
                      g_zc,
                      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
                      81,
                      "i2c_read_reg",
                      12,
                      254,
                      100,
                      var1004);
                    free(ptr);
                    pthread_mutex_unlock(&stru_3B5288);
                    return -3;
                  }
                  v25 = dword_3B52A4;
                }
                ++v13;
                *(_BYTE *)++v22 = v27;
                if ( a5 != v13 )
                  continue;
                break;
              }
            }
            free(ptr);
            pthread_mutex_unlock(&stru_3B5288);
            return a5;
          }
          v14 = *v8;
          v8 = (__int64 *)*((_DWORD *)v8 + 1);
          if ( v13 < 0 )
            v8 = (__int64 *)v14;
        }
      }
      snprintf(s, 0x800u, "ctx %d not inited\n", v30);
      V_LOCK();
      logfmt_raw(var1004, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
        81,
        "i2c_read_reg",
        12,
        262,
        100,
        var1004);
      pthread_mutex_unlock(&stru_3B5288);
      return -2;
    }
  }
  else
  {
    strcpy(s, "more than one byte reg address is not supported\n");
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_i2c.c",
      81,
      "i2c_read_reg",
      12,
      225,
      100,
      var1004);
    return -3;
  }
}
