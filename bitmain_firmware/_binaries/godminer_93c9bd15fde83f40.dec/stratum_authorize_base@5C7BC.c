int __fastcall stratum_authorize_base(int a1, int a2)
{
  const char *v4; // r9
  size_t v5; // r6
  size_t v6; // r0
  char *v7; // r8
  int v8; // r9
  int v10; // r7
  void *v11; // r6
  _DWORD *v12; // r5
  _DWORD *v13; // r10
  int v14; // r0
  char *v15; // r1
  _DWORD *v16; // r6
  _DWORD *v17; // r0
  _BOOL4 v18; // r3
  unsigned int *v19; // r3
  unsigned int v20; // r2
  unsigned int v21; // r2
  _DWORD v22[23]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v23[160]; // [sp+70h] [bp-10A0h] BYREF
  char v24[4096]; // [sp+110h] [bp-1000h] BYREF

  v4 = *(const char **)(a2 + 16);
  v5 = strlen(*(const char **)(a2 + 12));
  v6 = strlen(v4);
  v7 = (char *)malloc(v5 + v6 + 80);
  ++*(_DWORD *)(a2 + 1288);
  sprintf(v7, "{\"id\":%d,\"method\":\"mining.authorize\",\"params\":[\"%s\",\"%s\"]}");
  v8 = (*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v7);
  if ( !v8 )
    goto LABEL_2;
  while ( 1 )
  {
    v11 = (void *)(*(int (__fastcall **)(int))(a1 + 12))(a2);
    if ( !v11 )
    {
      free(v7);
      return 0;
    }
    v10 = (*(int (**)(void))(a1 + 24))();
    if ( !v10 )
      break;
    free(v11);
  }
  v12 = sub_C479C((int)v11, 0, (int)v22);
  free(v11);
  if ( !v12 )
  {
    v8 = 0;
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, 1525596, v22[0], v23);
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
      v24);
LABEL_2:
    free(v7);
    return v8;
  }
  v13 = (_DWORD *)json_object_get(v12, "result");
  v14 = json_object_get(v12, "error");
  LOWORD(v15) = 19068;
  v16 = (_DWORD *)v14;
  HIWORD(v15) = (unsigned int)"xnonce1" >> 16;
  v17 = (_DWORD *)json_object_get(v12, v15);
  if ( v17 )
  {
    if ( *v17 == 3 )
      v10 = v17[2];
  }
  else
  {
    v10 = 0;
  }
  v18 = v13 == 0;
  if ( *(_DWORD *)(a2 + 1288) - 1 != v10 )
    v18 = 1;
  if ( v18 || *v13 == 6 || v16 && *v16 != 7 )
  {
    v8 = 0;
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v24, 0x1000u, 0, 1525624, v10);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_base.c",
      145,
      "stratum_authorize_base",
      22,
      234,
      100,
      v24);
  }
  free(v7);
  if ( v12[1] == -1 )
    return v8;
  v19 = v12 + 1;
  __dmb(0xBu);
  do
  {
    v20 = __ldrex(v19);
    v21 = v20 - 1;
  }
  while ( __strex(v21, v19) );
  if ( v21 )
    return v8;
  json_delete(v12);
  return v8;
}
