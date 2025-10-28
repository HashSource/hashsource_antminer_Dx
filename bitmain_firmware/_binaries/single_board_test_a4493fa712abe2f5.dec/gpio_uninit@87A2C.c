int gpio_uninit()
{
  void *v0; // r5
  int result; // r0

  if ( dword_12B6F4 )
  {
    dword_12B700 = 0;
    pthread_join(dword_12B704, 0);
    pthread_mutex_destroy(&stru_12B708);
    v0 = (void *)dword_12B720;
    if ( dword_12B720 )
    {
      delete_c_rb(*(_DWORD **)dword_12B720);
      free(v0);
    }
    dword_12B6F4 = 0;
    return j_pthread_mutex_destroy(&stru_3B52AC);
  }
  return result;
}
