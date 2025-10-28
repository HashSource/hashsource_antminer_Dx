int ui_uninit()
{
  int result; // r0

  if ( dword_177370 )
  {
    dword_17733C[0] = 0;
    pthread_join(dword_177374, 0);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_177358);
    pthread_mutex_destroy(&stru_177340);
    gpio_unreg_callback(921, 666904);
    gpio_unreg_callback(943, 666904);
    gpio_unexport(941);
    gpio_unexport(942);
    gpio_unexport(921);
    gpio_unexport(943);
    result = gpio_uninit();
    dword_177370 = 0;
  }
  return result;
}
