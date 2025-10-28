int __fastcall set_cur_seed(_DWORD *a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3

  pthread_mutex_lock(&stru_12B4CC);
  memset(&dword_12B4E4, 0, 0x20u);
  v2 = a1[1];
  v3 = a1[2];
  v4 = a1[3];
  dword_12B4E4 = *a1;
  unk_12B4E8 = v2;
  unk_12B4EC = v3;
  unk_12B4F0 = v4;
  v5 = a1[5];
  v6 = a1[6];
  v7 = a1[7];
  unk_12B4F4 = a1[4];
  unk_12B4F8 = v5;
  unk_12B4FC = v6;
  unk_12B500 = v7;
  return j_pthread_mutex_unlock(&stru_12B4CC);
}
