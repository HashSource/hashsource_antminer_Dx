int __fastcall iic_uninit(int a1)
{
  if ( pthread_mutex_lock(&stru_1A8A58) )
    return sub_9BF90();
  i2c_uninit(a1);
  return pthread_mutex_unlock(&stru_1A8A58);
}
