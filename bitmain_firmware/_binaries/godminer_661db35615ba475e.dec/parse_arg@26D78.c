int __fastcall parse_arg(int result, char *s)
{
  int v3; // lr
  _DWORD *file; // r0
  _DWORD *v5; // r5
  int v6; // r2
  int v7; // r3
  char **v8; // r7
  size_t v9; // r6
  int v10; // r5
  const char *v11; // t1
  int v12; // r2
  int v13; // r0
  int v14; // r1
  int v15; // r5
  int v16; // r5
  int v17; // r3
  char *v18; // r4
  unsigned int *v19; // r3
  unsigned int v20; // r2
  unsigned int v21; // r2
  int v22[23]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v23[160]; // [sp+70h] [bp-10A4h] BYREF
  char v24[4100]; // [sp+110h] [bp-1004h] BYREF

  if ( result == 117 )
  {
    result = set_user(s);
    v15 = result;
    if ( !result )
      return result;
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "%s", v15);
    V_UNLOCK();
    v12 = 470;
    v13 = g_zc;
    LOWORD(v14) = -5248;
    goto LABEL_48;
  }
  if ( result <= 117 )
  {
    if ( result == 99 )
    {
      file = json_load_file(s, 0, (int)v22);
      v5 = file;
      if ( file && !*file )
      {
        parse_config(file);
        if ( v5[1] != -1 )
        {
          v19 = v5 + 1;
          __dmb(0xBu);
          do
          {
            v20 = __ldrex(v19);
            v21 = v20 - 1;
          }
          while ( __strex(v21, v19) );
          if ( !v21 )
            json_delete(v5);
        }
      }
      else
      {
        if ( v22[0] < 0 )
        {
          V_LOCK();
          logfmt_raw(v24, 0x1000u, 0, "%s", v23);
          V_UNLOCK();
          v6 = 438;
        }
        else
        {
          V_LOCK();
          logfmt_raw(v24, 0x1000u, 0, "%s:%d: %s", s, v22[0], v23);
          V_UNLOCK();
          v6 = 440;
        }
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "parse_arg",
          9,
          v6,
          100,
          v24);
      }
      if ( default_config )
      {
        free((void *)default_config);
        default_config = 0;
      }
      result = (int)_strdup(s);
      default_config = result;
      return result;
    }
    if ( result <= 99 )
    {
      switch ( result )
      {
        case 'P':
          opt_protocol = 1;
          break;
        case 'a':
          v8 = off_17435C;
          v9 = 6;
          v10 = 0;
          while ( 1 )
          {
            if ( v9 )
            {
              result = strncasecmp(s, *v8, v9);
              if ( !result && !s[v9] )
                break;
            }
            if ( ++v10 == 8 )
            {
              V_LOCK();
              logfmt_raw(v24, 0x1000u, 0, "Unknown algo parameter '%s'", s);
              V_UNLOCK();
              v12 = 421;
              v13 = g_zc;
              LOWORD(v14) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buil"
                                              "droot/tmp/release/build/godminer-origin_master/god-miner.c";
              goto LABEL_48;
            }
            v11 = v8[1];
            ++v8;
            v9 = strlen(v11);
          }
          opt_algo = v10;
          break;
        case 'F':
          fan_pwm_fixed = 1;
          break;
        default:
LABEL_8:
          V_LOCK();
          logfmt_raw(v24, 0x1000u, 0, "unknow config parameter!");
          V_UNLOCK();
          v3 = 536;
          goto LABEL_9;
      }
      return result;
    }
    if ( result == 111 )
    {
      v7 = ++dword_196B90;
      if ( dword_196B90 > total_pools )
      {
        add_pool();
        v7 = dword_196B90;
      }
      return sub_108804(
               (void **)(*(_DWORD *)(pools + 4 * (v7 + 0x3FFFFFFF)) + 8),
               (_BYTE *)(*(_DWORD *)(pools + 4 * (v7 + 0x3FFFFFFF)) + 24),
               s);
    }
    if ( result != 112 )
    {
      if ( result == 104 )
      {
        V_LOCK();
        logfmt_raw(
          v24,
          0x1000u,
          0,
          "Usage: GODMINER [OPTIONS]\n"
          "Options:\n"
          "  -a, --algo=ALGO       specify the algorithm to use\n"
          "                          beam         Equihash(150,5)\n"
          "                          grin29       Cuckaroo29\n"
          "                          vbk          VBlake2\n"
          "  -o, --url=URL         URL of mining server\n"
          "  -u, --user=USERNAME   username for mining server\n"
          "  -p, --pass=PASSWORD   password for mining server\n"
          "  -P, --protocol        verbose dump of protocol-level activities\n"
          "      --api-remote      Allow remote control\n"
          "  -c, --config=FILE     load a JSON-format configuration file\n"
          "  -v, --version         display version information and exit\n"
          "  -F, --bitmain-fan-ctrl  set if fixed fan's pwm\n"
          "      --bitmain-fan-pwm=N set pwm value when fan pwm fixed\n"
          "      --bitmain-freq=N  set working freq\n"
          "      --bitmain-voltage=N  set working power voltage\n"
          "  -z, --zlog=FILE       load a zlog configuration file\n"
          "  -h, --help            display this help text and exit\n");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "parse_arg",
          9,
          523,
          40,
          v24);
        exit(0);
      }
      goto LABEL_8;
    }
    result = set_pass(s);
    v16 = result;
    if ( !result )
    {
      if ( *s )
      {
        v17 = (unsigned __int8)s[1];
        *s = 120;
        v18 = s + 1;
        if ( v17 )
        {
          do
            *v18++ = 0;
          while ( *v18 );
        }
      }
      return result;
    }
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "%s", v16);
    V_UNLOCK();
    v12 = 457;
    v13 = g_zc;
    LOWORD(v14) = -5248;
LABEL_48:
    HIWORD(v14) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/god-miner.c" >> 16;
    return zlog(v13, v14, 132, "parse_arg", 9, v12, 100, v24);
  }
  if ( result > 1033 )
  {
    if ( result == 1034 )
    {
      result = strtol(s, 0, 10);
      if ( (unsigned int)result > 0x64 )
      {
        V_LOCK();
        logfmt_raw(v24, 0x1000u, 0, "fan_pwm value error!");
        V_UNLOCK();
        v3 = 513;
LABEL_9:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "parse_arg",
          9,
          v3,
          100,
          v24);
        exit(1);
      }
      fan_pwm = result;
    }
    else if ( result > 1036 )
    {
      goto LABEL_8;
    }
  }
  else if ( result < 1032 )
  {
    switch ( result )
    {
      case 122:
        if ( opt_zlog_conf_file )
          free((void *)opt_zlog_conf_file);
        result = (int)_strdup(s);
        opt_zlog_conf_file = result;
        break;
      case 1030:
        opt_api_remote = 1;
        break;
      case 118:
        opt_version_path = (int)s;
        break;
      default:
        goto LABEL_8;
    }
  }
  return result;
}
