int __fastcall dump_work(_DWORD *a1)
{
  int v2; // r3
  int v3; // lr
  int v4; // r2
  int v5; // r1
  char *v6; // r4
  int v7; // r12
  char *v8; // r5
  int v9; // t1
  int v11; // [sp+10h] [bp-100Ch]
  int v12; // [sp+14h] [bp-1008h]
  char v13[4100]; // [sp+18h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  LOWORD(v2) = 26084;
  v3 = a1[2];
  HIWORD(v2) = (unsigned int)"UBMIT_FAILURE" >> 16;
  v4 = a1[3];
  v11 = *(_DWORD *)((char *)a1 + 254);
  v5 = *a1;
  v6 = (char *)a1 + 15;
  v12 = *(_DWORD *)((char *)a1 + 258);
  v7 = a1[1];
  v8 = (char *)a1 + 253;
  logfmt_raw(v13, 0x1000u, 0, v2, v5, v7, v3, v4, v11, v12);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_grin29/backend_grin29.c",
    160,
    "dump_work",
    9,
    71,
    60,
    v13);
  do
  {
    v9 = (unsigned __int8)*++v6;
    printf("%02x ", v9);
  }
  while ( v6 != v8 );
  return putchar(10);
}
