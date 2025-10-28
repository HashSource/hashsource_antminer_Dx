int ui_uninit()
{
  void *v0; // r5
  int result; // r0
  void *v2; // r6

  if ( dword_12B6F0 )
  {
    dword_12B6F8 = 0;
    pthread_join(dword_12B6FC, 0);
    v0 = (void *)dword_3B545C;
    if ( dword_3B545C )
    {
      delete_c_rb(*(_DWORD **)dword_3B545C);
      free(v0);
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
      v2 = (void *)dword_12B720;
      if ( dword_12B720 )
      {
        delete_c_rb(*(_DWORD **)dword_12B720);
        free(v2);
      }
      dword_12B6F4 = 0;
      result = pthread_mutex_destroy(&stru_3B52AC);
    }
    dword_12B6F0 = 0;
  }
  return result;
}
