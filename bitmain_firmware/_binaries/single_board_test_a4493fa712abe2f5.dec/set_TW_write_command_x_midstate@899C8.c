int __fastcall set_TW_write_command_x_midstate(_DWORD *a1, int a2)
{
  int v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r3
  int v7; // r0

  pthread_mutex_lock(&tw_cmd_acc_mutex);
  v4 = dword_3B52A4;
  v5 = (unsigned int)(32 * a2 + 20) >> 2;
  v6 = 0;
  do
  {
    if ( !v6 )
    {
      v6 = 1;
      *(_DWORD *)(v4 + 64) = *a1;
      if ( v5 <= 1 )
        break;
    }
    v7 = a1[v6++];
    *(_DWORD *)(v4 + 68) = v7;
  }
  while ( v6 < v5 );
  return j_pthread_mutex_unlock(&tw_cmd_acc_mutex);
}
