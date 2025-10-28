unsigned int __fastcall close_pic(unsigned int result)
{
  unsigned int v1; // r5
  unsigned int v2; // r6
  int v3; // r5

  if ( result > 0xF )
    return sub_509E8(result);
  v1 = result;
  v2 = 2 * result;
  if ( g_bitmain_pic_state[2 * result] || g_bitmain_pic_state[v2 + 1] )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v3 = g_bitmain_pic_state[2 * v1];
    if ( pthread_mutex_lock(&stru_1A8A58) )
    {
      sub_9BF90();
    }
    else
    {
      i2c_uninit(v3);
      pthread_mutex_unlock(&stru_1A8A58);
    }
    g_bitmain_pic_state[v2 + 1] = 0;
    return pthread_mutex_unlock(&i2c_mutex_all);
  }
  return result;
}
