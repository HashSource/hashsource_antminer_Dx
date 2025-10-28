unsigned int __fastcall eeprom_close(unsigned int result)
{
  unsigned int v1; // r4
  unsigned int v2; // r6
  int v3; // r7

  if ( result > 0xF )
    return sub_113CB8(result);
  v1 = result;
  v2 = 2 * result;
  v3 = dword_1A8A90[2 * result];
  if ( v3 || dword_1A8A90[v2 + 1] )
  {
    if ( pthread_mutex_lock(&stru_1A8A58) )
    {
      result = sub_9BF90();
    }
    else
    {
      i2c_uninit(v3);
      result = pthread_mutex_unlock(&stru_1A8A58);
    }
    dword_1A8A90[v2 + 1] = 0;
    dword_1A8A90[2 * v1] = 0;
  }
  return result;
}
