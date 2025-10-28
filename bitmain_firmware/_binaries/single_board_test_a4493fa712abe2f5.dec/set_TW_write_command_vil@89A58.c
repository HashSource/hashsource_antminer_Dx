int __fastcall set_TW_write_command_vil(_DWORD *a1)
{
  int v2; // r3

  pthread_mutex_lock(&tw_cmd_acc_mutex);
  v2 = dword_3B52A4;
  *(_DWORD *)(dword_3B52A4 + 64) = *a1;
  *(_DWORD *)(v2 + 68) = a1[1];
  *(_DWORD *)(v2 + 68) = a1[2];
  *(_DWORD *)(v2 + 68) = a1[3];
  *(_DWORD *)(v2 + 68) = a1[4];
  *(_DWORD *)(v2 + 68) = a1[5];
  *(_DWORD *)(v2 + 68) = a1[6];
  *(_DWORD *)(v2 + 68) = a1[7];
  *(_DWORD *)(v2 + 68) = a1[8];
  *(_DWORD *)(v2 + 68) = a1[9];
  *(_DWORD *)(v2 + 68) = a1[10];
  *(_DWORD *)(v2 + 68) = a1[11];
  *(_DWORD *)(v2 + 68) = a1[12];
  return j_pthread_mutex_unlock(&tw_cmd_acc_mutex);
}
