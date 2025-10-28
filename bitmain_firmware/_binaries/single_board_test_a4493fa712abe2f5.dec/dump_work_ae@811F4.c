int __fastcall dump_work_ae(_DWORD *a1)
{
  char *v2; // r4
  char *v3; // r5
  int v4; // t1
  int v6; // [sp+Ch] [bp-1010h]
  char v7[4100]; // [sp+18h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(
    v7,
    0x1000u,
    0,
    "ae dump work poolid %lld jobid %s start_nonce %llx",
    *a1,
    a1[1],
    a1 + 2,
    v6,
    a1[31],
    a1[32]);
  v2 = (char *)a1 + 39;
  pthread_mutex_unlock(&stru_3B526C);
  v3 = (char *)a1 + 119;
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_ae/backend_ae.c",
    69,
    "dump_work_ae",
    12,
    83,
    60,
    v7);
  do
  {
    v4 = (unsigned __int8)*++v2;
    printf("%02x ", v4);
  }
  while ( v2 != v3 );
  return putchar(10);
}
