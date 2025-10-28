int __fastcall format_hashrate_string(int a1, char *a2)
{
  double v2; // d0
  double v4; // d8
  int v6; // r1
  int v7; // r3
  double v8; // d8
  double v10; // d0
  char v11[4096]; // [sp+10h] [bp-1000h] BYREF

  v4 = v2;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v11, 0x1000u, 0, 1617600, v2, a1);
  pthread_mutex_unlock(&stru_1A8A24);
  LOWORD(v6) = -14688;
  HIWORD(v6) = (unsigned int)"%x cmn status %x" >> 16;
  zlog(g_zc, v6, 127, "format_hashrate_string", 22, 63, 20, v11);
  if ( v2 < 10000.0 )
    return sprintf(a2, "%.2f %s/s", v2, a1);
  if ( v2 >= 10000000.0 )
  {
    if ( v2 >= 1.0e10 )
    {
      if ( v2 >= 1.0e13 )
        v7 = 84;
      else
        v7 = 71;
      if ( v2 >= 1.0e13 )
        v10 = 1.0e-12;
      else
        v10 = 0.000000001;
      v8 = v4 * v10;
    }
    else
    {
      v7 = 77;
      v8 = v2 * 0.000001;
    }
  }
  else
  {
    v7 = 75;
    v8 = v2 * 0.001;
  }
  return sprintf(a2, "%.2f %c%s/s", v8, v7, a1);
}
