int __fastcall set_baud(int a1)
{
  int v2; // r7
  _DWORD *v3; // r4
  int v4; // r6
  int v5; // r0
  int *v6; // r4
  int v7; // t1

  pthread_mutex_lock(&stru_190E30);
  v2 = dword_190E48;
  pthread_mutex_unlock(&stru_190E30);
  if ( v2 > 0 )
  {
    if ( v2 <= 8 )
    {
      v4 = 0;
    }
    else
    {
      v3 = &unk_190E64;
      v4 = 0;
      do
      {
        v5 = *(v3 - 6);
        __pld(v3);
        v4 += 8;
        v3 += 8;
        (*(void (**)(void))(v5 + 64))();
        usleep(0x2710u);
        (*(void (**)(void))(*(v3 - 13) + 64))();
        usleep(0x2710u);
        (*(void (**)(void))(*(v3 - 12) + 64))();
        usleep(0x2710u);
        (*(void (**)(void))(*(v3 - 11) + 64))();
        usleep(0x2710u);
        (*(void (**)(void))(*(v3 - 10) + 64))();
        usleep(0x2710u);
        (*(void (**)(void))(*(v3 - 9) + 64))();
        usleep(0x2710u);
        (*(void (**)(void))(*(v3 - 8) + 64))();
        usleep(0x2710u);
        (*(void (**)(void))(*(v3 - 7) + 64))();
        usleep(0x2710u);
      }
      while ( v4 != ((v2 - 9) & 0xFFFFFFF8) + 8 );
    }
    v6 = &dword_190E4C[v4];
    do
    {
      v7 = *v6++;
      ++v4;
      (*(void (**)(void))(v7 + 64))();
      usleep(0x2710u);
    }
    while ( v4 < v2 );
  }
  off_18F4D0(a1);
  return usleep(0x2710u);
}
