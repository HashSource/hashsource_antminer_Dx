int __fastcall set_BC_baud(char a1)
{
  int v2; // r3
  signed int v3; // r0
  int v4; // r4

  pthread_mutex_lock(&bc_cmd_acc_mutex);
  usleep(0xC350u);
  v2 = dword_197C8C;
  v3 = *(_DWORD *)(dword_197C8C + 192) & 0xFFFFFFC0 | a1 & 0x3F;
  *(_DWORD *)(dword_197C8C + 192) = v3;
  if ( v3 >= 0 )
    return pthread_mutex_unlock(&bc_cmd_acc_mutex);
  v4 = 3001;
  while ( *(int *)(v2 + 192) < 0 )
  {
    usleep(0x3E8u);
    if ( !--v4 )
    {
      sub_14FCA4();
      return pthread_mutex_unlock(&bc_cmd_acc_mutex);
    }
    v2 = dword_197C8C;
  }
  return pthread_mutex_unlock(&bc_cmd_acc_mutex);
}
