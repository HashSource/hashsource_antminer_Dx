int __fastcall sub_1097E0(int *a1)
{
  int v2; // r8
  int v3; // r2
  _DWORD *v4; // r3
  int v5; // r0
  int v6; // r10
  int v7; // r9
  int v8; // r7
  int v9; // lr
  int v10; // r6
  int v11; // r12
  int v12; // r5
  int v13; // r4
  int *v14; // r1
  int v15; // t1
  int *v16; // r5
  __int64 v18; // [sp+10h] [bp-1064h]
  int v20; // [sp+3Ch] [bp-1038h]
  int v21; // [sp+4Ch] [bp-1028h]
  int v22; // [sp+5Ch] [bp-1018h]
  int v23; // [sp+6Ch] [bp-1008h]
  char v24[4100]; // [sp+70h] [bp-1004h] BYREF

  gettimeofday((struct timeval *)(a1 + 319), 0);
  pthread_mutex_lock(&stru_190E30);
  v2 = dword_190E48;
  pthread_mutex_unlock(&stru_190E30);
  if ( v2 > 0 )
  {
    v3 = *a1;
    if ( v2 <= 8 )
    {
      v5 = 0;
    }
    else
    {
      v4 = &unk_190EC0;
      v5 = 0;
      do
      {
        v5 += 8;
        v6 = *(v4 - 29) + v3;
        v7 = *(v4 - 28) + v3;
        v8 = *(v4 - 27) + v3;
        v9 = *(v4 - 23);
        v10 = *(v4 - 26) + v3;
        v11 = *(v4 - 22);
        v12 = *(v4 - 25) + v3;
        v13 = *(v4 - 24) + v3;
        __pld(v4);
        *(_BYTE *)(v6 + 312) = 1;
        *(_BYTE *)(v7 + 312) = 1;
        v4 += 8;
        *(_BYTE *)(v8 + 312) = 1;
        *(_BYTE *)(v10 + 312) = 1;
        *(_BYTE *)(v12 + 312) = 1;
        *(_BYTE *)(v13 + 312) = 1;
        *(_BYTE *)(v9 + v3 + 312) = 1;
        *(_BYTE *)(v11 + v3 + 312) = 1;
      }
      while ( v5 != ((v2 - 9) & 0xFFFFFFF8) + 8 );
    }
    v14 = &dword_190E4C[v5];
    do
    {
      v15 = *v14++;
      ++v5;
      *(_BYTE *)(v15 + v3 + 312) = 1;
    }
    while ( v2 > v5 );
  }
  pthread_mutex_lock(&stru_196218);
  v16 = (int *)dword_196230;
  pthread_mutex_unlock(&stru_196218);
  pthread_mutex_lock(&stru_197BB8);
  v18 = *a1;
  ++dword_197BD4;
  if ( a1 == v16 )
  {
    logfmt_raw(v24, 0x1000u, 0, v23, "poolno", 6, 3, v22, v18, 0, v23, "not responding!");
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
      127,
      "pool_died",
      9,
      399,
      80,
      v24);
    return switch_pools();
  }
  else
  {
    logfmt_raw(v24, 0x1000u, 0, v21, "poolno", 6, 3, v20, v18, 0, v21, "failed to return work");
    pthread_mutex_unlock(&stru_197BB8);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/pool.c",
             127,
             "pool_died",
             9,
             402,
             20,
             v24);
  }
}
