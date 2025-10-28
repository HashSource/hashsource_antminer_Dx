int __fastcall iic_read(int a1, int a2, int a3)
{
  int v6; // r4

  if ( pthread_mutex_lock(&stru_1A8A58) )
    return sub_9BEEC();
  v6 = i2c_read(a1, a2, a3);
  pthread_mutex_unlock(&stru_1A8A58);
  return v6;
}
