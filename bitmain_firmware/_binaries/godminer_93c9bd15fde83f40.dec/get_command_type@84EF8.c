int __fastcall get_command_type(_DWORD *a1)
{
  int v1; // r0
  const char *v2; // r4
  const char *v3; // r1
  int result; // r0
  const char *v5; // r1
  const char *v6; // r1
  const char *v7; // r1
  const char *v8; // r1
  const char *v9; // r1
  const char *v10; // r1
  const char *v11; // r1
  const char *v12; // r1
  int v13; // r3
  int v14; // r1
  char v15[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = json_object_get(a1, "command");
  if ( v1 && *(_DWORD *)v1 == 2 && (v2 = *(const char **)(v1 + 8)) != 0 )
  {
    LOWORD(v3) = 31760;
    HIWORD(v3) = (unsigned int)" was received" >> 16;
    result = strcmp(*(const char **)(v1 + 8), v3);
    if ( result )
    {
      LOWORD(v5) = 31776;
      HIWORD(v5) = (unsigned int)"{\"id\": \"0\", \"jsonrpc\": \"2.0\", \"method\": \"login\", \"params\": {\"login\": \""
                                 "%s\", \"pass\": \"%s\", \"agent\": \"%s\"}}" >> 16;
      if ( !strcmp(v2, v5) )
      {
        return 1;
      }
      else
      {
        LOWORD(v6) = 31796;
        HIWORD(v6) = (unsigned int)"\": \"2.0\", \"method\": \"login\", \"params\": {\"login\": \"%s\", \"pass\": \"%s\", \"agent\": \"%s\"}}" >> 16;
        if ( !strcmp(v2, v6) )
        {
          return 2;
        }
        else
        {
          LOWORD(v7) = 31816;
          HIWORD(v7) = (unsigned int)"\"login\", \"params\": {\"login\": \"%s\", \"pass\": \"%s\", \"agent\": \"%s\"}}" >> 16;
          if ( !strcmp(v2, v7) )
          {
            return 3;
          }
          else
          {
            LOWORD(v8) = 31844;
            HIWORD(v8) = (unsigned int)" \"%s\", \"pass\": \"%s\", \"agent\": \"%s\"}}" >> 16;
            if ( !strcmp(v2, v8) )
            {
              return 4;
            }
            else
            {
              LOWORD(v9) = 31872;
              HIWORD(v9) = (unsigned int)": \"%s\"}}" >> 16;
              if ( !strcmp(v2, v9) )
              {
                return 5;
              }
              else
              {
                LOWORD(v10) = 31896;
                HIWORD(v10) = (unsigned int)".0" >> 16;
                if ( !strcmp(v2, v10) )
                {
                  return 6;
                }
                else
                {
                  LOWORD(v11) = 31920;
                  HIWORD(v11) = (unsigned int)"\"mining.authorize\", \"params\": [\"%s\", \"%s\"]}" >> 16;
                  if ( !strcmp(v2, v11) )
                  {
                    return 7;
                  }
                  else
                  {
                    LOWORD(v12) = 31932;
                    HIWORD(v12) = (unsigned int)"orize\", \"params\": [\"%s\", \"%s\"]}" >> 16;
                    if ( !strcmp(v2, v12) )
                      return 8;
                    else
                      return 9;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    pthread_mutex_lock(&stru_1A8A24);
    LOWORD(v13) = 31724;
    HIWORD(v13) = (unsigned int)" difficulty" >> 16;
    logfmt_raw(v15, 0x1000u, 0, v13);
    pthread_mutex_unlock(&stru_1A8A24);
    LOWORD(v14) = 29096;
    HIWORD(v14) = (unsigned int)"}" >> 16;
    zlog(g_zc, v14, 157, "get_command_type", 16, 48, 100, v15);
    return 10;
  }
  return result;
}
