void *app_config_init()
{
  if ( g_config_info[0] )
    puts("app_config_init already done");
  memset(&unk_12C1DC, 0, 0x78u);
  if ( read_config_ini(&unk_12C1DC) )
  {
    if ( proofread_config((int *)&unk_12C1DC) )
    {
      g_config_info[0] = (int)&unk_12C1DC;
      return &unk_12C1DC;
    }
    else
    {
      printf("proofread config failed!");
      config_free((char **)&unk_12C1DC);
      return 0;
    }
  }
  else
  {
    printf("read config err!");
    config_free((char **)&unk_12C1DC);
    return 0;
  }
}
