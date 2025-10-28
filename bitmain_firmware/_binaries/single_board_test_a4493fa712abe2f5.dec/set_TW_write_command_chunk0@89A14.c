int __fastcall set_TW_write_command_chunk0(_DWORD *a1)
{
  int v2; // r3
  int v3; // r1

  pthread_mutex_lock(&tw_cmd_acc_mutex);
  v2 = 0;
  v3 = dword_3B52A4;
LABEL_4:
  *(_DWORD *)(v3 + 64) = *a1;
  do
  {
    if ( !++v2 )
      goto LABEL_4;
    *(_DWORD *)(v3 + 68) = a1[v2];
  }
  while ( v2 != 20 );
  return j_pthread_mutex_unlock(&tw_cmd_acc_mutex);
}
