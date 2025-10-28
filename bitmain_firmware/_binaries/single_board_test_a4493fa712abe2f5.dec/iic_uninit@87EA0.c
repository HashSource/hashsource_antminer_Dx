int __fastcall iic_uninit(int a1)
{
  if ( pthread_mutex_lock(&stru_3B5254) )
    return sub_81474();
  i2c_uninit(a1);
  return j_pthread_mutex_unlock(&stru_3B5254);
}
