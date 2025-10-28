int __fastcall set_cur_seed(_DWORD *a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3

  pthread_mutex_lock(&stru_1A3F84);
  memset(&dword_1A3F9C, 0, 0x20u);
  v2 = a1[1];
  v3 = a1[2];
  v4 = a1[3];
  dword_1A3F9C = *a1;
  unk_1A3FA0 = v2;
  unk_1A3FA4 = v3;
  unk_1A3FA8 = v4;
  v5 = a1[5];
  v6 = a1[6];
  v7 = a1[7];
  unk_1A3FAC = a1[4];
  unk_1A3FB0 = v5;
  unk_1A3FB4 = v6;
  unk_1A3FB8 = v7;
  return pthread_mutex_unlock(&stru_1A3F84);
}
