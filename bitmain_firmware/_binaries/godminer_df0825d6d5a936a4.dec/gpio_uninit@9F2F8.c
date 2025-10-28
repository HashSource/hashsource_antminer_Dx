int gpio_uninit()
{
  int result; // r0

  if ( dword_176FD4 )
  {
    dword_17700C = 0;
    pthread_join(dword_177010, 0);
    pthread_mutex_destroy(&stru_176FD8);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_176FF0);
    dword_176FD4 = 0;
    return pthread_mutex_destroy(&stru_176FF4);
  }
  return result;
}
