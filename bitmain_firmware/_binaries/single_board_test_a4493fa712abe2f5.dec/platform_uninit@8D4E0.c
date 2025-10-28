int platform_uninit()
{
  int result; // r0
  void *v1; // r6
  void *v2; // r5
  void *v3; // r7

  if ( platform_inited )
  {
    if ( dword_12B6EC )
      result = sub_851C4();
    if ( dword_12B6F0 )
    {
      dword_12B6F8 = 0;
      pthread_join(dword_12B6FC, 0);
      v2 = (void *)dword_3B545C;
      if ( dword_3B545C )
      {
        delete_c_rb(*(_DWORD **)dword_3B545C);
        free(v2);
      }
      pthread_mutex_destroy(&stru_3B5460);
      gpio_unreg_callback(921, (int)sub_81F18);
      gpio_unreg_callback(943, (int)sub_81F18);
      gpio_unexport(941);
      gpio_unexport(942);
      gpio_unexport(921);
      result = gpio_unexport(943);
      if ( dword_12B6F4 )
      {
        dword_12B700 = 0;
        pthread_join(dword_12B704, 0);
        pthread_mutex_destroy(&stru_12B708);
        v3 = (void *)dword_12B720;
        if ( dword_12B720 )
        {
          delete_c_rb(*(_DWORD **)dword_12B720);
          free(v3);
        }
        dword_12B6F4 = 0;
        result = pthread_mutex_destroy(&stru_3B52AC);
        dword_12B6F0 = 0;
        if ( !dword_12B6F4 )
          goto LABEL_9;
        goto LABEL_6;
      }
      dword_12B6F0 = 0;
    }
    else if ( dword_12B6F4 )
    {
LABEL_6:
      dword_12B700 = 0;
      pthread_join(dword_12B704, 0);
      pthread_mutex_destroy(&stru_12B708);
      v1 = (void *)dword_12B720;
      if ( dword_12B720 )
      {
        delete_c_rb(*(_DWORD **)dword_12B720);
        free(v1);
      }
      dword_12B6F4 = 0;
      result = pthread_mutex_destroy(&stru_3B52AC);
    }
LABEL_9:
    platform_inited = 0;
  }
  return result;
}
