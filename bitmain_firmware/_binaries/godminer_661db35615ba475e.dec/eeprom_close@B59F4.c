unsigned int __fastcall eeprom_close(unsigned int result)
{
  unsigned int v1; // r4
  unsigned int v2; // r6
  int v3; // r7

  if ( result > 0xF )
    return sub_B132C(result);
  v1 = result;
  v2 = 2 * result;
  v3 = dword_197BD8[2 * result];
  if ( v3 || dword_197BD8[v2 + 1] )
  {
    if ( pthread_mutex_lock(&stru_197C58) )
    {
      result = sub_AFBB8();
    }
    else
    {
      i2c_uninit(v3);
      result = pthread_mutex_unlock(&stru_197C58);
    }
    dword_197BD8[v2 + 1] = 0;
    dword_197BD8[2 * v1] = 0;
  }
  return result;
}
