int log_init()
{
  int v0; // r5
  int v1; // r5
  char *v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0

  v0 = opt_zlog_conf_file;
  if ( !opt_zlog_conf_file )
  {
    v3 = (char *)malloc(0xFu);
    v0 = (int)v3;
    if ( v3 )
      strcpy(v3, "/etc/zlog.conf");
    opt_zlog_conf_file = (int)v3;
  }
  v1 = zlog_init(v0);
  if ( v1 )
  {
    v1 = -1;
    puts("zlog init failed");
  }
  else
  {
    g_zc = zlog_get_category("miner_zc");
    if ( g_zc )
    {
      g_temp_zc = zlog_get_category("miner_temp_zc");
      if ( g_temp_zc )
      {
        g_fan_zc = zlog_get_category("miner_fan_zc");
        if ( g_fan_zc )
        {
          g_hash_zc = zlog_get_category("miner_hash_zc");
          if ( g_hash_zc )
          {
            puts("zlog init OK!");
          }
          else
          {
            v1 = -4;
            v7 = puts("zlog get miner_hash_zc category fail");
            zlog_fini(v7);
          }
        }
        else
        {
          v1 = -3;
          v6 = puts("zlog get miner_fan_zc category fail");
          zlog_fini(v6);
        }
      }
      else
      {
        v1 = -3;
        v4 = puts("zlog get miner_temp_zc category fail");
        zlog_fini(v4);
      }
    }
    else
    {
      v1 = -2;
      v5 = puts("zlog get miner_zc category fail");
      zlog_fini(v5);
    }
  }
  return v1;
}
