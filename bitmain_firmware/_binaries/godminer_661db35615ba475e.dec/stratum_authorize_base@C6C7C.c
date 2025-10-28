int __fastcall stratum_authorize_base(int a1, _DWORD *a2)
{
  const char *v2; // r7
  const char *v5; // r9
  size_t v6; // r6
  size_t v7; // r0
  char *v8; // r0
  int v9; // r2
  char *v10; // r8
  int v11; // r9
  int v13; // r7
  void *v14; // r6
  _DWORD *v15; // r5
  _DWORD *v16; // r10
  _DWORD *v17; // r6
  _DWORD *v18; // r0
  _BOOL4 v19; // r3
  unsigned int *v20; // r3
  unsigned int v21; // r2
  unsigned int v22; // r2
  _DWORD v23[23]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v24[160]; // [sp+70h] [bp-10A0h] BYREF
  char v25[4096]; // [sp+110h] [bp-1000h] BYREF

  v2 = (const char *)a2[3];
  v5 = (const char *)a2[4];
  v6 = strlen(v2);
  v7 = strlen(v5);
  v8 = (char *)malloc(v6 + v7 + 80);
  v9 = a2[322];
  v10 = v8;
  a2[322] = v9 + 1;
  sprintf(v8, "{\"id\":%d,\"method\":\"mining.authorize\",\"params\":[\"%s\",\"%s\"]}", v9, v2, v5);
  v11 = (*(int (__fastcall **)(_DWORD *, char *))(a1 + 16))(a2, v10);
  if ( !v11 )
    goto LABEL_2;
  while ( 1 )
  {
    v14 = (void *)(*(int (__fastcall **)(_DWORD *))(a1 + 12))(a2);
    if ( !v14 )
    {
      free(v10);
      return 0;
    }
    v13 = (*(int (**)(void))(a1 + 24))();
    if ( !v13 )
      break;
    free(v14);
  }
  v15 = json_loads((int)v14, 0, (int)v23);
  free(v14);
  if ( !v15 )
  {
    v11 = 0;
    V_LOCK();
    logfmt_raw(v25, 0x1000u, 0, "JSON decode failed(%d): %s", v23[0], v24);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_base.c",
      145,
      "stratum_authorize_base",
      22,
      224,
      100,
      v25);
LABEL_2:
    free(v10);
    return v11;
  }
  v16 = (_DWORD *)json_object_get(v15, "result");
  v17 = (_DWORD *)json_object_get(v15, "error");
  v18 = (_DWORD *)json_object_get(v15, "id");
  if ( v18 )
  {
    if ( *v18 == 3 )
      v13 = v18[2];
  }
  else
  {
    v13 = 0;
  }
  v19 = v16 == 0;
  if ( a2[322] - 1 != v13 )
    v19 = 1;
  if ( v19 || *v16 == 6 || v17 && *v17 != 7 )
  {
    v11 = 0;
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v25, 0x1000u, 0, "Stratum authentication failed, req_id=%d", v13);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_base.c",
      145,
      "stratum_authorize_base",
      22,
      234,
      100,
      v25);
  }
  free(v10);
  if ( v15[1] == -1 )
    return v11;
  v20 = v15 + 1;
  __dmb(0xBu);
  do
  {
    v21 = __ldrex(v20);
    v22 = v21 - 1;
  }
  while ( __strex(v22, v20) );
  if ( v22 )
    return v11;
  json_delete(v15);
  return v11;
}
