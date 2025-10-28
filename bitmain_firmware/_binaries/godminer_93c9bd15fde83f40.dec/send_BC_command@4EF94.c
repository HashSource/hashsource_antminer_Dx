int __fastcall send_BC_command(_DWORD *a1, int a2)
{
  int v4; // r4
  _DWORD *v5; // r3

  v4 = 3001;
  pthread_mutex_lock(&bc_cmd_acc_mutex);
  v5 = (_DWORD *)dword_1A8A8C;
  *(_DWORD *)(dword_1A8A8C + 196) = *a1;
  v5[50] = a1[1];
  v5[51] = a1[2];
  v5[48] = v5[48] & 0x7F70FFFF | 0x80800000 | (a2 << 16);
  while ( (int)v5[48] < 0 )
  {
    usleep(0x3E8u);
    if ( !--v4 )
    {
      sub_9F6D8();
      return pthread_mutex_unlock(&bc_cmd_acc_mutex);
    }
    v5 = (_DWORD *)dword_1A8A8C;
  }
  return pthread_mutex_unlock(&bc_cmd_acc_mutex);
}
