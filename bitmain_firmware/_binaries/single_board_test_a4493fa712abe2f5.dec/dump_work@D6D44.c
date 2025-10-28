int __fastcall dump_work(_DWORD *a1)
{
  char *v2; // r4
  char *v3; // r5
  int v4; // t1
  char v6[4100]; // [sp+18h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(
    v6,
    0x1000u,
    0,
    "grin29 dump work poolid %ld jobid %lu start_nonce %lu",
    *a1,
    a1[1],
    a1[2],
    a1[3],
    *(_DWORD *)((char *)a1 + 254),
    *(_DWORD *)((char *)a1 + 258));
  v2 = (char *)a1 + 15;
  pthread_mutex_unlock(&stru_3B526C);
  v3 = (char *)a1 + 253;
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_grin29/backend_grin29.c",
    77,
    "dump_work",
    9,
    71,
    60,
    v6);
  do
  {
    v4 = (unsigned __int8)*++v2;
    printf("%02x ", v4);
  }
  while ( v2 != v3 );
  return putchar(10);
}
