int dev_exit_hal()
{
  void *v1; // r5
  void *v2; // r5
  void *v3; // r5

  if ( dword_1AA6B0 )
    sub_9E404();
  if ( !platform_inited )
    return 0;
  if ( dword_1AA6B0 )
    sub_9E404();
  if ( dword_1AA6B4 )
  {
    dword_1AA6BC = 0;
    pthread_join(dword_1AA6C0, 0);
    v2 = (void *)dword_1A8B28;
    if ( dword_1A8B28 )
    {
      delete_c_rb(*(_DWORD **)dword_1A8B28);
      free(v2);
    }
    pthread_mutex_destroy(&stru_1A8B2C);
    gpio_unreg_callback(921, (int)sub_99EA4);
    gpio_unreg_callback(943, (int)sub_99EA4);
    gpio_unexport(941);
    gpio_unexport(942);
    gpio_unexport(921);
    gpio_unexport(943);
    if ( dword_1AA6B8 )
    {
      dword_1AA6C4 = 0;
      pthread_join(dword_1AA6C8, 0);
      pthread_mutex_destroy(&stru_1AA6CC);
      v3 = (void *)dword_1AA6E4;
      if ( dword_1AA6E4 )
      {
        delete_c_rb(*(_DWORD **)dword_1AA6E4);
        free(v3);
      }
      dword_1AA6B8 = 0;
      pthread_mutex_destroy(&stru_1AA6E8);
      dword_1AA6B4 = 0;
    }
    else
    {
      dword_1AA6B4 = 0;
    }
  }
  else if ( dword_1AA6B8 )
  {
    dword_1AA6C4 = 0;
    pthread_join(dword_1AA6C8, (void **)dword_1AA6B4);
    pthread_mutex_destroy(&stru_1AA6CC);
    v1 = (void *)dword_1AA6E4;
    if ( dword_1AA6E4 )
    {
      delete_c_rb(*(_DWORD **)dword_1AA6E4);
      free(v1);
    }
    dword_1AA6B8 = 0;
    pthread_mutex_destroy(&stru_1AA6E8);
  }
  platform_inited = 0;
  return 0;
}
