int __fastcall iic_read_reg(int a1, unsigned __int8 *a2, int a3, int a4, int a5)
{
  int reg; // r4

  if ( pthread_mutex_lock(&stru_1A8A58) )
    return sub_98984();
  reg = i2c_read_reg(a1, a2, a3, a4, a5);
  pthread_mutex_unlock(&stru_1A8A58);
  return reg;
}
