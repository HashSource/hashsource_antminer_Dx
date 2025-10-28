int gpio_uninit()
{
  void *v0; // r5
  int result; // r0

  if ( dword_1AA6B8 )
  {
    dword_1AA6C4 = 0;
    pthread_join(dword_1AA6C8, 0);
    pthread_mutex_destroy(&stru_1AA6CC);
    v0 = (void *)dword_1AA6E4;
    if ( dword_1AA6E4 )
    {
      delete_c_rb(*(_DWORD **)dword_1AA6E4);
      free(v0);
    }
    dword_1AA6B8 = 0;
    return pthread_mutex_destroy(&stru_1AA6E8);
  }
  return result;
}
