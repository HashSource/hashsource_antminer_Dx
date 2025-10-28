int __fastcall sub_4D49C(int a1, pthread_mutex_t *a2, int a3)
{
  size_t *v3; // r4
  pthread_mutex_t *v4; // r8
  int *p_nusers; // r2
  int nusers; // r3
  int spins; // r0
  char v11; // r1
  char v12; // lr
  unsigned __int64 v13; // kr00_8
  int v14; // r12
  int lock; // r0
  int count; // r1
  int owner; // lr
  int kind; // r12
  int v19; // r1
  void *v20; // r0
  char *v21; // r0
  int v22; // r2
  char v24[4100]; // [sp+18h] [bp-1004h] BYREF

  v3 = *(size_t **)(a1 + 1132);
  if ( v3 )
  {
    v4 = a2 + 66;
    pthread_mutex_lock(a2 + 66);
    if ( a3 )
    {
      v11 = 0;
      v12 = 0;
      nusers = 0;
      spins = 0;
      p_nusers = (int *)&a2[12].__nusers;
      v13 = 1;
    }
    else
    {
      p_nusers = (int *)&a2[12].__nusers;
      nusers = a2[12].__nusers;
      spins = a2[12].__spins;
      v11 = BYTE1(nusers);
      v12 = nusers;
      v13 = __PAIR64__(spins, nusers) + 1;
    }
    *v3 = 2;
    *(_QWORD *)p_nusers = v13;
    *((_BYTE *)v3 + 16) = v12;
    v3[2] = nusers;
    v3[3] = spins;
    *((_BYTE *)v3 + 17) = v11;
    V_LOCK();
    logfmt_raw(
      v24,
      0x1000u,
      0,
      "num2bin[%d] %02x%02x%02x%02x",
      *v3,
      *((unsigned __int8 *)v3 + 16),
      *((unsigned __int8 *)v3 + 17),
      *((unsigned __int8 *)v3 + 18),
      *((unsigned __int8 *)v3 + 19));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/dhash_content/zec/zec_1746/zec_1746_content.c",
      172,
      "pre_push_work_zec_1746",
      22,
      36,
      20,
      v24);
    memset((void *)(a1 + 8), 0, 0x400u);
    memcpy((void *)(a1 + 8), &a2[6].__align + 4, 0x80u);
    memcpy((void *)(a1 + 116), (const void *)a2[3].__count, a2[3].__lock);
    memcpy((void *)(a1 + 8 + 128 - *v3), v3 + 4, *v3);
    v14 = a2[61].__spins;
    lock = a2[62].__lock;
    count = a2[62].__count;
    *(_DWORD *)(a1 + 1032) = a2[61].__nusers;
    *(_DWORD *)(a1 + 1036) = v14;
    *(_DWORD *)(a1 + 1040) = lock;
    *(_DWORD *)(a1 + 1044) = count;
    owner = a2[62].__owner;
    kind = a2[62].__kind;
    v19 = a2[62].__spins;
    *(_DWORD *)(a1 + 1056) = a2[62].__nusers;
    v20 = *(void **)(a1 + 1124);
    *(_DWORD *)(a1 + 1048) = owner;
    *(_DWORD *)(a1 + 1052) = kind;
    *(_DWORD *)(a1 + 1060) = v19;
    if ( v20 )
    {
      free(v20);
      *(_DWORD *)(a1 + 1124) = 0;
    }
    v21 = _strdup((const char *)a2[65].__kind);
    v22 = a2->__lock;
    *(_DWORD *)(a1 + 1124) = v21;
    *(_QWORD *)a1 = v22;
    pthread_mutex_unlock(v4);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
