int gpio_uninit()
{
  void *v0; // r5
  int result; // r0

  if ( dword_195C20 )
  {
    dword_195C48 = 0;
    pthread_join(dword_195C4C, 0);
    pthread_mutex_destroy(&stru_195C50);
    v0 = (void *)dword_195C68;
    if ( dword_195C68 )
    {
      delete_c_rb(*(_DWORD **)dword_195C68);
      free(v0);
    }
    dword_195C20 = 0;
    return pthread_mutex_destroy(&stru_195C6C);
  }
  return result;
}
