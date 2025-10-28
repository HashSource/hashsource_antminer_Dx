int __fastcall iic_read_reg(int a1, unsigned __int8 *a2, int a3, int a4, int a5)
{
  int reg; // r4

  if ( pthread_mutex_lock(&stru_197C58) )
    return sub_AFC5C();
  reg = i2c_read_reg(a1, a2, a3, a4, a5);
  pthread_mutex_unlock(&stru_197C58);
  return reg;
}
