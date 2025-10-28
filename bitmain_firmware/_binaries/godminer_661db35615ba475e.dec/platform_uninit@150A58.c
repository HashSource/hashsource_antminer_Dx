int platform_uninit()
{
  int result; // r0
  int v1; // r3
  void *v2; // r6
  void *v3; // r5
  void *v4; // r7

  if ( platform_inited )
  {
    if ( dword_195C18 )
      result = sub_14E70C();
    if ( dword_195C1C )
    {
      dword_195C24 = 0;
      pthread_join(dword_195C28, 0);
      v3 = (void *)dword_195C2C;
      if ( dword_195C2C )
      {
        delete_c_rb(*(_DWORD **)dword_195C2C);
        free(v3);
      }
      pthread_mutex_destroy(&stru_195C30);
      gpio_unreg_callback(921, (int)sub_B2CD4);
      gpio_unreg_callback(943, (int)sub_B2CD4);
      gpio_unexport(941);
      gpio_unexport(942);
      gpio_unexport(921);
      result = gpio_unexport(943);
      if ( !dword_195C20 )
      {
        dword_195C1C = 0;
LABEL_10:
        platform_inited = 0;
        return result;
      }
      dword_195C48 = 0;
      pthread_join(dword_195C4C, 0);
      pthread_mutex_destroy(&stru_195C50);
      v4 = (void *)dword_195C68;
      if ( dword_195C68 )
      {
        delete_c_rb(*(_DWORD **)dword_195C68);
        free(v4);
      }
      dword_195C20 = 0;
      result = pthread_mutex_destroy(&stru_195C6C);
      v1 = dword_195C20;
      dword_195C1C = 0;
    }
    else
    {
      v1 = dword_195C20;
    }
    if ( v1 )
    {
      dword_195C48 = 0;
      pthread_join(dword_195C4C, 0);
      pthread_mutex_destroy(&stru_195C50);
      v2 = (void *)dword_195C68;
      if ( dword_195C68 )
      {
        delete_c_rb(*(_DWORD **)dword_195C68);
        free(v2);
      }
      dword_195C20 = 0;
      result = pthread_mutex_destroy(&stru_195C6C);
    }
    goto LABEL_10;
  }
  return result;
}
