int platform_uninit()
{
  int result; // r0
  int *v1; // r5
  int v2; // r3
  void *v3; // r6
  void *v4; // r5
  void *v5; // r7

  if ( platform_inited )
  {
    if ( dword_1AA6B0 )
      result = sub_9E404();
    if ( dword_1AA6B4 )
    {
      dword_1AA6BC = 0;
      pthread_join(dword_1AA6C0, 0);
      v4 = (void *)dword_1A8B28;
      if ( dword_1A8B28 )
      {
        delete_c_rb(*(_DWORD **)dword_1A8B28);
        free(v4);
      }
      v1 = &dword_1AA6B8;
      pthread_mutex_destroy(&stru_1A8B2C);
      gpio_unreg_callback(921, 630436);
      gpio_unreg_callback(943, 630436);
      gpio_unexport(941);
      gpio_unexport(942);
      gpio_unexport(921);
      result = gpio_unexport(943);
      if ( !dword_1AA6B8 )
      {
        dword_1AA6B4 = 0;
LABEL_10:
        platform_inited = 0;
        return result;
      }
      dword_1AA6C4 = 0;
      pthread_join(dword_1AA6C8, 0);
      pthread_mutex_destroy(&stru_1AA6CC);
      v5 = (void *)dword_1AA6E4;
      if ( dword_1AA6E4 )
      {
        delete_c_rb(*(_DWORD **)dword_1AA6E4);
        free(v5);
      }
      dword_1AA6B8 = 0;
      result = pthread_mutex_destroy(&stru_1AA6E8);
      v2 = dword_1AA6B8;
      dword_1AA6B4 = 0;
    }
    else
    {
      v1 = &dword_1AA6B8;
      v2 = dword_1AA6B8;
    }
    if ( v2 )
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
      *v1 = 0;
      result = pthread_mutex_destroy(&stru_1AA6E8);
    }
    goto LABEL_10;
  }
  return result;
}
