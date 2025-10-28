int __fastcall iic_write(int a1, int a2, int a3)
{
  int v6; // r4

  if ( pthread_mutex_lock(&stru_3B5254) )
    return sub_80DA8();
  v6 = i2c_write(a1, a2, a3);
  pthread_mutex_unlock(&stru_3B5254);
  return v6;
}
