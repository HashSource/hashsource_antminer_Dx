int __fastcall set_baud(char *a1)
{
  int v2; // r7
  _DWORD *v3; // r4
  int v4; // r6
  int v5; // r0
  int *v6; // r4
  int v7; // t1

  pthread_mutex_lock(&stru_1A9B48);
  v2 = dword_1A9B60;
  pthread_mutex_unlock(&stru_1A9B48);
  if ( v2 > 0 )
  {
    if ( v2 <= 8 )
    {
      v4 = 0;
    }
    else
    {
      v3 = &unk_1A9B7C;
      v4 = 0;
      do
      {
        v5 = *(v3 - 6);
        __pld(v3);
        v4 += 8;
        v3 += 8;
        (*(void (**)(void))(v5 + 76))();
        usleep(0x2710u);
        (*(void (**)(void))(*(v3 - 13) + 76))();
        usleep(0x2710u);
        (*(void (**)(void))(*(v3 - 12) + 76))();
        usleep(0x2710u);
        (*(void (**)(void))(*(v3 - 11) + 76))();
        usleep(0x2710u);
        (*(void (**)(void))(*(v3 - 10) + 76))();
        usleep(0x2710u);
        (*(void (**)(void))(*(v3 - 9) + 76))();
        usleep(0x2710u);
        (*(void (**)(void))(*(v3 - 8) + 76))();
        usleep(0x2710u);
        (*(void (**)(void))(*(v3 - 7) + 76))();
        usleep(0x2710u);
      }
      while ( v4 != ((v2 - 9) & 0xFFFFFFF8) + 8 );
    }
    v6 = &dword_1A9B64[v4];
    do
    {
      v7 = *v6++;
      ++v4;
      (*(void (**)(void))(v7 + 76))();
      usleep(0x2710u);
    }
    while ( v4 < v2 );
  }
  off_1A2B7C(a1);
  return usleep(0x2710u);
}
