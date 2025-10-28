int __fastcall get_command_type(_DWORD *a1)
{
  int v1; // r0
  const char *v2; // r4
  int result; // r0
  char v4[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = json_object_get(a1, "command");
  if ( v1 && *(_DWORD *)v1 == 2 && (v2 = *(const char **)(v1 + 8)) != 0 )
  {
    result = strcmp(*(const char **)(v1 + 8), "CAPABILITIES");
    if ( result )
    {
      if ( !strcmp(v2, "MINING_AUTH_FAILURE") )
      {
        return 1;
      }
      else if ( !strcmp(v2, "MINING_AUTH_SUCCESS") )
      {
        return 2;
      }
      else if ( !strcmp(v2, "MINING_SUBSCRIBE_FAILURE") )
      {
        return 3;
      }
      else if ( !strcmp(v2, "MINING_SUBSCRIBE_SUCCESS") )
      {
        return 4;
      }
      else if ( !strcmp(v2, "MINING_SUBMIT_FAILURE") )
      {
        return 5;
      }
      else if ( !strcmp(v2, "MINING_SUBMIT_SUCCESS") )
      {
        return 6;
      }
      else if ( !strcmp(v2, "MINING_JOB") )
      {
        return 7;
      }
      else if ( !strcmp(v2, "MINING_MEMPOOL_UPDATE") )
      {
        return 8;
      }
      else
      {
        return 9;
      }
    }
  }
  else
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v4, 0x1000u, 0, "JSON does not have 'command' object");
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "get_command_type",
      16,
      48,
      100,
      v4);
    return 10;
  }
  return result;
}
