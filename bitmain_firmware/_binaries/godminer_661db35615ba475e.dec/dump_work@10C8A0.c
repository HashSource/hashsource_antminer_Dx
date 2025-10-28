int __fastcall dump_work(_DWORD *a1)
{
  int v2; // lr
  int v3; // r2
  int v4; // r1
  char *v5; // r4
  int v6; // r12
  char *v7; // r5
  int v8; // t1
  int v10; // [sp+10h] [bp-100Ch]
  int v11; // [sp+14h] [bp-1008h]
  char v12[4100]; // [sp+18h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_197BB8);
  v2 = a1[2];
  v3 = a1[3];
  v10 = *(_DWORD *)((char *)a1 + 254);
  v4 = *a1;
  v5 = (char *)a1 + 15;
  v11 = *(_DWORD *)((char *)a1 + 258);
  v6 = a1[1];
  v7 = (char *)a1 + 253;
  logfmt_raw(v12, 0x1000u, 0, "grin29 dump work poolid %ld jobid %lu start_nonce %lu", v4, v6, v2, v3, v10, v11);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_grin29/backend_grin29.c",
    160,
    "dump_work",
    9,
    71,
    60,
    v12);
  do
  {
    v8 = (unsigned __int8)*++v5;
    printf("%02x ", v8);
  }
  while ( v5 != v7 );
  return putchar(10);
}
