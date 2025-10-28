int __fastcall sub_59A50(int a1, int a2)
{
  _DWORD *v2; // r4
  int v5; // r5
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r3

  v2 = (_DWORD *)(a2 + 736);
  if ( !strncasecmp((const char *)(a1 + 296), (const char *)(a2 + 736), 0x20u) )
  {
    if ( !strncasecmp((const char *)(a1 + 8), (const char *)(a2 + 448), 0x20u) )
      v5 = 0;
    else
      v5 = 2;
  }
  else
  {
    v5 = 2;
  }
  pthread_mutex_lock(&stru_1A3F84);
  v6 = v2[1];
  v7 = v2[2];
  v8 = v2[3];
  dword_1A3F9C = *v2;
  unk_1A3FA0 = v6;
  unk_1A3FA4 = v7;
  unk_1A3FA8 = v8;
  v9 = v2[5];
  v10 = v2[6];
  v11 = v2[7];
  unk_1A3FAC = v2[4];
  unk_1A3FB0 = v9;
  unk_1A3FB4 = v10;
  unk_1A3FB8 = v11;
  pthread_mutex_unlock(&stru_1A3F84);
  return v5;
}
