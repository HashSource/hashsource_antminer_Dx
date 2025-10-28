int __fastcall iic_uninit(int a1)
{
  if ( pthread_mutex_lock(&stru_197C58) )
    return sub_AFBB8();
  i2c_uninit(a1);
  return pthread_mutex_unlock(&stru_197C58);
}
