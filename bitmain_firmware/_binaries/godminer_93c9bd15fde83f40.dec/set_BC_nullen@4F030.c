int __fastcall set_BC_nullen(int a1, int a2)
{
  int v4; // r3
  signed int v5; // r0
  int v6; // r4

  pthread_mutex_lock(&bc_cmd_acc_mutex);
  v4 = dword_1A8A8C;
  if ( a2 )
    v5 = *(_DWORD *)(dword_1A8A8C + 192) & 0xFFF0FFFF | (a1 << 16) | 0xC00000;
  else
    v5 = *(_DWORD *)(dword_1A8A8C + 192) & 0xFFB0FFFF | (a1 << 16) & 0xFFBFFFFF;
  if ( !a2 )
    v5 |= 0x800000u;
  *(_DWORD *)(dword_1A8A8C + 192) = v5;
  if ( v5 >= 0 )
    return pthread_mutex_unlock(&bc_cmd_acc_mutex);
  v6 = 3001;
  while ( *(int *)(v4 + 192) < 0 )
  {
    usleep(0x3E8u);
    if ( !--v6 )
    {
      sub_9F6D8();
      return pthread_mutex_unlock(&bc_cmd_acc_mutex);
    }
    v4 = dword_1A8A8C;
  }
  return pthread_mutex_unlock(&bc_cmd_acc_mutex);
}
