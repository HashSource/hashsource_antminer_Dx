unsigned int __fastcall eeprom_close(unsigned int result)
{
  unsigned int v1; // r4
  unsigned int v2; // r6
  int v3; // r7

  if ( result > 0xF )
    return sub_26D60(result);
  v1 = result;
  v2 = 2 * result;
  v3 = dword_12C11C[2 * result];
  if ( v3 || dword_12C11C[v2 + 1] )
  {
    if ( pthread_mutex_lock(&stru_3B5254) )
    {
      result = sub_81474();
    }
    else
    {
      i2c_uninit(v3);
      result = pthread_mutex_unlock(&stru_3B5254);
    }
    dword_12C11C[v2 + 1] = 0;
    dword_12C11C[2 * v1] = 0;
  }
  return result;
}
