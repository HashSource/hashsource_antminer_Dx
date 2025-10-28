int __fastcall stratum_handle_response_base(int a1, int a2, int a3)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  _DWORD *v6; // r4
  _DWORD *v7; // r9
  int v8; // r0
  int v9; // r8
  bool v10; // zf
  int v11; // r6
  int v12; // r4
  char *v13; // r2
  unsigned int *v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r2
  char *v18; // r2
  _DWORD *v19; // r0
  int v20; // r3
  _DWORD v21[23]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v22[160]; // [sp+70h] [bp-10A4h] BYREF
  char v23[4100]; // [sp+110h] [bp-1004h] BYREF

  v4 = sub_C479C(a2, 0, (int)v21);
  v5 = v4;
  if ( !v4 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v23, 0x1000u, 0, "JSON decode failed(%d): %s", v21[0], v22);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_base.c",
      145,
      "stratum_handle_response_base",
      28,
      262,
      40,
      v23);
    return 0;
  }
  v6 = (_DWORD *)json_object_get(v4, "result");
  v7 = (_DWORD *)json_object_get(v5, "error");
  v8 = json_object_get(v5, "id");
  if ( v6 )
  {
    v10 = *v6 == 7;
    if ( *v6 != 7 )
      v10 = v6 == dword_1A24E4;
    if ( !v10 && *v6 == 2 )
    {
      v9 = v6[2];
      if ( !v9 )
      {
LABEL_9:
        if ( v6 == dword_1A24DC )
        {
          if ( v7 )
          {
            if ( *v7 == 7 )
              v9 = 1;
          }
          else
          {
            v9 = 1;
          }
        }
        goto LABEL_14;
      }
      if ( *(_BYTE *)v9 == 111 && *(_BYTE *)(v9 + 1) == 107 )
      {
        v20 = *(unsigned __int8 *)(v9 + 2);
        v9 = (int)v7;
        if ( v7 )
          v9 = 1;
        if ( v20 )
          v9 = 0;
        if ( v9 )
          v9 = *v7 == 7;
        goto LABEL_9;
      }
    }
    v9 = 0;
    goto LABEL_9;
  }
  v9 = 0;
LABEL_14:
  if ( !v8 || *(_DWORD *)v8 == 7 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v23, 0x1000u, 0, "%s json id is null!", "stratum_handle_response_base");
    v11 = 0;
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_base.c",
      145,
      "stratum_handle_response_base",
      28,
      286,
      20,
      v23);
  }
  else
  {
    v11 = *(unsigned __int8 *)(a3 + 1024);
    v12 = v6 == 0;
    if ( *(_BYTE *)(a3 + 1024) )
    {
      if ( v7 )
        v12 = 0;
      if ( v12 )
      {
        v11 = 0;
      }
      else
      {
        if ( v7 )
          v13 = (char *)json_string_value(v7);
        else
          v13 = 0;
        share_result(v9, 0, v13, (double *)a3);
      }
    }
    else
    {
      if ( *(_DWORD *)v8 != 3 )
        v12 |= 1u;
      if ( !v12 && *(__int64 *)(v8 + 8) >= 4 )
      {
        if ( v7 )
        {
          v19 = json_array_get(v7, 1u);
          v18 = (char *)json_string_value(v19);
        }
        else
        {
          v18 = 0;
        }
        v11 = 1;
        share_result(v9, 0, v18, (double *)a3);
      }
    }
  }
  if ( v5[1] != -1 )
  {
    v14 = v5 + 1;
    __dmb(0xBu);
    do
    {
      v15 = __ldrex(v14);
      v16 = v15 - 1;
    }
    while ( __strex(v16, v14) );
    if ( !v16 )
      json_delete(v5);
  }
  return v11;
}
