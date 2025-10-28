void __fastcall parse_config(_DWORD *a1)
{
  char *v1; // r10
  char *v2; // r4
  size_t v4; // r0
  int v5; // r7
  int v6; // r11
  int v7; // r3
  int v8; // r6
  int v9; // r11
  int *v10; // r6
  int v11; // r3
  char *v12; // r1
  char *v13; // r6
  _DWORD *v14; // r3
  int v15; // r11
  char s[4100]; // [sp+18h] [bp-1004h] BYREF

  v1 = "algo";
  v2 = (char *)&off_16F21C;
  do
  {
    if ( a1 )
    {
      if ( !*a1 )
      {
        v4 = strlen(v1);
        v5 = sub_12D418((unsigned __int16 *)v1, v4, hashtable_seed);
        v6 = a1[3];
        v7 = v5 & ~(-1 << a1[4]);
        v8 = *(_DWORD *)(v6 + 8 * v7);
        v9 = v6 + 8 * v7;
        if ( (_DWORD *)v8 != a1 + 5 || v8 != *(_DWORD *)(v9 + 4) )
        {
          while ( v5 != *(_DWORD *)(v8 + 16) || strcmp((const char *)(v8 + 24), v1) )
          {
            if ( v8 == *(_DWORD *)(v9 + 4) )
              goto LABEL_17;
            v8 = *(_DWORD *)(v8 + 4);
          }
          v10 = *(int **)(v8 + 20);
          if ( v10 )
          {
            v11 = *v10;
            if ( *((_DWORD *)v2 - 7) )
            {
              switch ( v11 )
              {
                case 2:
                  v13 = _strdup((const char *)v10[2]);
                  if ( !v13 )
                    return;
                  parse_arg(*((_DWORD *)v2 - 5), v13);
                  free(v13);
                  break;
                case 3:
                  sprintf(s, "%d", v10[2]);
                  parse_arg(*((_DWORD *)v2 - 5), s);
                  break;
                case 4:
                  sprintf(s, "%f", v10[2], v10[3]);
                  parse_arg(*((_DWORD *)v2 - 5), s);
                  break;
                case 1:
                  if ( v10[3] )
                  {
                    v14 = *(_DWORD **)v10[4];
                    if ( v14 )
                    {
                      v15 = 0;
                      do
                      {
                        if ( *v14 )
                        {
                          pthread_mutex_lock(&stru_1A8A24);
                          logfmt_raw(s, 0x1000u, 0, 1509956, *((_DWORD *)v2 - 8));
                          pthread_mutex_unlock(&stru_1A8A24);
                          zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/"
                            "build/godminer-origin_master/god-miner.c",
                            132,
                            "parse_config",
                            12,
                            574,
                            100,
                            s);
                        }
                        else
                        {
                          parse_config(v14);
                        }
                        if ( *v10 != 1 )
                          break;
                        if ( ++v15 >= (unsigned int)v10[3] )
                          break;
                        v14 = *(_DWORD **)(v10[4] + 4 * v15);
                      }
                      while ( v14 );
                    }
                  }
                  break;
                default:
                  pthread_mutex_lock(&stru_1A8A24);
                  logfmt_raw(s, 0x1000u, 0, 1509984, v1);
                  pthread_mutex_unlock(&stru_1A8A24);
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/go"
                    "dminer-origin_master/god-miner.c",
                    132,
                    "parse_config",
                    12,
                    582,
                    100,
                    s);
                  break;
              }
            }
            else if ( v11 == 5 )
            {
              LOWORD(v12) = 18132;
              HIWORD(v12) = (unsigned int)"n parse_notify" >> 16;
              parse_arg(*((_DWORD *)v2 - 5), v12);
            }
          }
        }
      }
    }
LABEL_17:
    if ( "parse_cmdline" == v2 )
      break;
    __pld(v2);
    v2 += 16;
    v1 = (char *)*((_DWORD *)v2 - 8);
  }
  while ( v1 );
}
