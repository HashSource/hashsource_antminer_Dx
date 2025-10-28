int __fastcall set_TW_write_command_chunk0(_DWORD *a1)
{
  int v2; // r3
  int v3; // r1

  pthread_mutex_lock(&tw_cmd_acc_mutex);
  v2 = 0;
  v3 = dword_197C8C;
  while ( 1 )
  {
    if ( !v2 )
    {
      *(_DWORD *)(v3 + 64) = *a1;
      goto LABEL_2;
    }
    *(_DWORD *)(v3 + 68) = a1[v2];
    if ( v2 == 20 )
      return pthread_mutex_unlock(&tw_cmd_acc_mutex);
LABEL_2:
    ++v2;
  }
}
