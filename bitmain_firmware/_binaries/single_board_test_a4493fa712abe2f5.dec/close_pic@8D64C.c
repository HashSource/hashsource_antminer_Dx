unsigned int __fastcall close_pic(unsigned int result)
{
  unsigned int v1; // r5
  unsigned int v2; // r6
  int v3; // r5

  if ( result > 0xF )
    return sub_8B218(result);
  v1 = result;
  v2 = 2 * result;
  if ( g_bitmain_pic_state[2 * result] || g_bitmain_pic_state[v2 + 1] )
  {
    pthread_mutex_lock(&i2c_mutex_all);
    v3 = g_bitmain_pic_state[2 * v1];
    if ( pthread_mutex_lock(&stru_3B5254) )
    {
      sub_81474();
    }
    else
    {
      i2c_uninit(v3);
      pthread_mutex_unlock(&stru_3B5254);
    }
    g_bitmain_pic_state[v2 + 1] = 0;
    return j_pthread_mutex_unlock(&i2c_mutex_all);
  }
  return result;
}
