int __fastcall set_cur_seed(_DWORD *a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3

  pthread_mutex_lock(&stru_190DF4);
  memset(&dword_190E0C, 0, 0x20u);
  v2 = a1[1];
  v3 = a1[2];
  v4 = a1[3];
  dword_190E0C = *a1;
  unk_190E10 = v2;
  unk_190E14 = v3;
  unk_190E18 = v4;
  v5 = a1[5];
  v6 = a1[6];
  v7 = a1[7];
  unk_190E1C = a1[4];
  unk_190E20 = v5;
  unk_190E24 = v6;
  unk_190E28 = v7;
  return pthread_mutex_unlock(&stru_190DF4);
}
