int dev_exit_hal()
{
  void *v1; // r5
  void *v2; // r5
  void *v3; // r5

  if ( dword_195C18 )
    sub_14E70C();
  if ( !platform_inited )
    return 0;
  if ( dword_195C18 )
    sub_14E70C();
  if ( dword_195C1C )
  {
    dword_195C24 = 0;
    pthread_join(dword_195C28, 0);
    v2 = (void *)dword_195C2C;
    if ( dword_195C2C )
    {
      delete_c_rb(*(_DWORD **)dword_195C2C);
      free(v2);
    }
    pthread_mutex_destroy(&stru_195C30);
    gpio_unreg_callback(921, (int)sub_B2CD4);
    gpio_unreg_callback(943, (int)sub_B2CD4);
    gpio_unexport(941);
    gpio_unexport(942);
    gpio_unexport(921);
    gpio_unexport(943);
    if ( dword_195C20 )
    {
      dword_195C48 = 0;
      pthread_join(dword_195C4C, 0);
      pthread_mutex_destroy(&stru_195C50);
      v3 = (void *)dword_195C68;
      if ( dword_195C68 )
      {
        delete_c_rb(*(_DWORD **)dword_195C68);
        free(v3);
      }
      dword_195C20 = 0;
      pthread_mutex_destroy(&stru_195C6C);
      dword_195C1C = 0;
    }
    else
    {
      dword_195C1C = 0;
    }
  }
  else if ( dword_195C20 )
  {
    dword_195C48 = 0;
    pthread_join(dword_195C4C, (void **)dword_195C1C);
    pthread_mutex_destroy(&stru_195C50);
    v1 = (void *)dword_195C68;
    if ( dword_195C68 )
    {
      delete_c_rb(*(_DWORD **)dword_195C68);
      free(v1);
    }
    dword_195C20 = 0;
    pthread_mutex_destroy(&stru_195C6C);
  }
  platform_inited = 0;
  return 0;
}
