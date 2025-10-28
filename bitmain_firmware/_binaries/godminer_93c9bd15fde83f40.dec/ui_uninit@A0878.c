int ui_uninit()
{
  void *v0; // r5
  int result; // r0
  void *v2; // r6

  if ( dword_1AA6B4 )
  {
    dword_1AA6BC = 0;
    pthread_join(dword_1AA6C0, 0);
    v0 = (void *)dword_1A8B28;
    if ( dword_1A8B28 )
    {
      delete_c_rb(*(_DWORD **)dword_1A8B28);
      free(v0);
    }
    pthread_mutex_destroy(&stru_1A8B2C);
    gpio_unreg_callback(921, 630436);
    gpio_unreg_callback(943, 630436);
    gpio_unexport(941);
    gpio_unexport(942);
    gpio_unexport(921);
    result = gpio_unexport(943);
    if ( dword_1AA6B8 )
    {
      dword_1AA6C4 = 0;
      pthread_join(dword_1AA6C8, 0);
      pthread_mutex_destroy(&stru_1AA6CC);
      v2 = (void *)dword_1AA6E4;
      if ( dword_1AA6E4 )
      {
        delete_c_rb(*(_DWORD **)dword_1AA6E4);
        free(v2);
      }
      dword_1AA6B8 = 0;
      result = pthread_mutex_destroy(&stru_1AA6E8);
    }
    dword_1AA6B4 = 0;
  }
  return result;
}
