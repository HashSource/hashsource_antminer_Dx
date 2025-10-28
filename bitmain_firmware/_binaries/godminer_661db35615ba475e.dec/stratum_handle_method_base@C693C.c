const char *__fastcall stratum_handle_method_base(int (__fastcall **a1)(_DWORD, _DWORD, _DWORD), int a2, int arg)
{
  _DWORD *v6; // r0
  _DWORD *v7; // r7
  _DWORD *v8; // r0
  const char *v9; // r4
  int v10; // r9
  pthread_mutex_t *v11; // r0
  unsigned int *v12; // r3
  unsigned int v13; // r2
  unsigned int v14; // r2
  _DWORD v16[23]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v17[160]; // [sp+70h] [bp-10A4h] BYREF
  char v18[4100]; // [sp+110h] [bp-1004h] BYREF

  v6 = json_loads(arg, 0, (int)v16);
  v7 = v6;
  if ( !v6 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v18, 0x1000u, 0, "JSON decode failed(%d): %s", v16[0], v17);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_base.c",
      145,
      "stratum_handle_method_base",
      26,
      62,
      100,
      v18);
    return 0;
  }
  v8 = (_DWORD *)json_object_get(v6, "method");
  if ( v8 && *v8 == 2 )
  {
    v9 = (const char *)v8[2];
    if ( !v9 )
      goto LABEL_10;
    v10 = json_object_get(v7, "params");
    if ( !v10 )
      v10 = json_object_get(v7, "result");
    json_object_get(v7, "id");
    if ( strcasecmp(v9, "mining.notify") )
    {
      if ( !strcasecmp(v9, "mining.set_difficulty") || !strcasecmp(v9, "mining.set_target") )
      {
        v9 = (const char *)a1[17](a1, a2, v10);
      }
      else if ( !strcasecmp(v9, "mining.set_extranonce") )
      {
        v9 = (const char *)a1[16](a1, a2, v10);
        if ( v9 )
        {
          pool_tset(a2, (_BYTE *)(a2 + 1284), 1);
        }
        else
        {
          pthread_mutex_lock((pthread_mutex_t *)(a2 + 1192));
          *(_BYTE *)(a2 + 1284) = 0;
          pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1192));
        }
      }
      else
      {
        V_LOCK();
        v9 = 0;
        logfmt_raw(v18, 0x1000u, 0, "unknown stratum method %s!", arg);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_base.c",
          145,
          "stratum_handle_method_base",
          26,
          102,
          80,
          v18);
      }
LABEL_10:
      if ( v7[1] != -1 )
        goto LABEL_11;
      return v9;
    }
    v9 = (const char *)a1[15](a1, a2, v10);
    v11 = (pthread_mutex_t *)(a2 + 1192);
    if ( v9 )
    {
      pthread_mutex_lock(v11);
      *(_BYTE *)(a2 + 1284) = 1;
      pthread_cond_broadcast((pthread_cond_t *)(a2 + 1224));
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1192));
      goto LABEL_10;
    }
    pthread_mutex_lock(v11);
    *(_BYTE *)(a2 + 1284) = 0;
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1192));
    if ( v7[1] == -1 )
      return v9;
  }
  else
  {
    v9 = 0;
    if ( v7[1] == -1 )
      return v9;
  }
LABEL_11:
  v12 = v7 + 1;
  __dmb(0xBu);
  do
  {
    v13 = __ldrex(v12);
    v14 = v13 - 1;
  }
  while ( __strex(v14, v12) );
  if ( v14 )
    return v9;
  json_delete(v7);
  return v9;
}
