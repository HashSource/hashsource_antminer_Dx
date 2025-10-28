int ui_uninit()
{
  void *v0; // r5
  int result; // r0
  void *v2; // r6

  if ( dword_195C1C )
  {
    dword_195C24 = 0;
    pthread_join(dword_195C28, 0);
    v0 = (void *)dword_195C2C;
    if ( dword_195C2C )
    {
      delete_c_rb(*(_DWORD **)dword_195C2C);
      free(v0);
    }
    pthread_mutex_destroy(&stru_195C30);
    gpio_unreg_callback(921, (int)sub_B2CD4);
    gpio_unreg_callback(943, (int)sub_B2CD4);
    gpio_unexport(941);
    gpio_unexport(942);
    gpio_unexport(921);
    result = gpio_unexport(943);
    if ( dword_195C20 )
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
    dword_195C1C = 0;
  }
  return result;
}
