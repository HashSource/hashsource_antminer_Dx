int __fastcall iic_write_reg(int a1, unsigned __int8 *a2, int a3, int a4, int a5)
{
  int v9; // r4

  if ( pthread_mutex_lock(&stru_197C58) )
    return sub_AFD70();
  v9 = i2c_write_reg(a1, a2, a3, a4, a5);
  pthread_mutex_unlock(&stru_197C58);
  return v9;
}
