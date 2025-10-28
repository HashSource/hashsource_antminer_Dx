int __fastcall stratum_handle_response_vbk(int a1, char arg, int a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  int command_type; // r0
  int v8; // r5
  char *v9; // r7
  unsigned int *v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r2
  int v14; // r1
  char *v15; // r1
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  int v18; // r3
  int v19; // r1
  const char *v20; // r1
  int v21; // r3
  int v22; // r1
  _DWORD v23[23]; // [sp+1Ch] [bp-1100h] BYREF
  _BYTE v24[160]; // [sp+78h] [bp-10A4h] BYREF
  char v25[4100]; // [sp+118h] [bp-1004h] BYREF

  v5 = sub_C479C(arg, 0, (int)v23);
  v6 = v5;
  if ( v5 )
  {
    command_type = get_command_type(v5);
    if ( command_type == 6 )
    {
      v8 = 1;
      v9 = 0;
    }
    else if ( command_type == 5 )
    {
      LOWORD(v15) = 32204;
      HIWORD(v15) = (unsigned int)"nge, %s, %s" >> 16;
      v16 = (_DWORD *)json_object_get(v6, v15);
      v17 = (_DWORD *)json_object_get(v16, "data");
      if ( v17 && *v17 == 2 )
        v9 = (char *)v17[2];
      else
        v9 = 0;
      pthread_mutex_lock(&stru_1A8A24);
      LOWORD(v18) = -31716;
      HIWORD(v18) = (unsigned int)"er_bin in parse_notify" >> 16;
      logfmt_raw(v25, 0x1000u, 0, v18, "stratum_handle_response_vbk", v9);
      pthread_mutex_unlock(&stru_1A8A24);
      LOWORD(v19) = 29096;
      HIWORD(v19) = (unsigned int)"}" >> 16;
      zlog(g_zc, v19, 157, "stratum_handle_response_vbk", 27, 484, 20, v25);
      LOWORD(v20) = -31656;
      HIWORD(v20) = (unsigned int)"1: %s" >> 16;
      v8 = strcmp(v9, v20);
      if ( v8 )
      {
        v8 = 0;
      }
      else
      {
        (*(void (__fastcall **)(int))(a1 + 8))(a3);
        pthread_mutex_lock((pthread_mutex_t *)(a3 + 1192));
        *(_BYTE *)(a3 + 1284) = 0;
        pthread_mutex_unlock((pthread_mutex_t *)(a3 + 1192));
        pthread_mutex_lock(&stru_1A8A24);
        LOWORD(v21) = -31640;
        HIWORD(v21) = (unsigned int)"2: %s" >> 16;
        logfmt_raw(v25, 0x1000u, 0, v21);
        pthread_mutex_unlock(&stru_1A8A24);
        LOWORD(v22) = 29096;
        HIWORD(v22) = (unsigned int)"}" >> 16;
        zlog(g_zc, v22, 157, "stratum_handle_response_vbk", 27, 488, 20, v25);
      }
    }
    else
    {
      v8 = 0;
      v9 = 0;
    }
    share_result(v8, 0, v9, (double *)a3);
    if ( v6[1] != -1 )
    {
      v10 = v6 + 1;
      __dmb(0xBu);
      do
      {
        v11 = __ldrex(v10);
        v12 = v11 - 1;
      }
      while ( __strex(v12, v10) );
      if ( !v12 )
        json_delete(v6);
    }
    return 1;
  }
  else
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v25, 0x1000u, 0, 1525596, v23[0], v24);
    pthread_mutex_unlock(&stru_1A8A24);
    LOWORD(v14) = 29096;
    HIWORD(v14) = (unsigned int)"}" >> 16;
    zlog(g_zc, v14, 157, "stratum_handle_response_vbk", 27, 474, 100, v25);
    return 0;
  }
}
