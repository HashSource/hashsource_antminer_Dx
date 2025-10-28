int sub_9957C()
{
  _DWORD *v0; // r6
  int v1; // r9
  int v2; // r3
  int v3; // r4
  int v4; // r5
  void *v5; // r10
  int v6; // r2
  _DWORD *v7; // r6
  int v9; // r10
  int v10; // r4
  int v11; // r3
  int v12; // r5
  void *v13; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v15[4096]; // [sp+810h] [bp-1000h] BYREF

  v0 = (_DWORD *)dword_1AA6AC;
  if ( dword_1AA6AC || (v0 = calloc(1u, 0x54u), (dword_1AA6AC = (int)v0) != 0) )
  {
    v1 = dword_1A88C8[0];
    if ( dword_1A88C8[0] <= 0 )
      return 0;
    v2 = 0;
    LOBYTE(v3) = 0;
    while ( 1 )
    {
      v4 = dword_1AA668[v2];
      if ( !v0[v4] )
      {
        v5 = calloc(1u, 0x3Fu);
        v0[v4] = v5;
        if ( !v5 )
          break;
      }
      v3 = (unsigned __int8)(v3 + 1);
      v2 = v3;
      if ( v3 >= v1 )
        return 0;
    }
    snprintf(s, 0x800u, "No memory for configuraion for chain %d.\n", v4);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v15, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    v6 = 215;
  }
  else
  {
    strcpy(s, "No memory for configuraion.\n");
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, s);
    V_UNLOCK();
    v6 = 202;
  }
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "_alloc_memory",
    13,
    v6,
    100,
    v15);
  v7 = (_DWORD *)dword_1AA6AC;
  if ( !dword_1AA6AC )
    return -1;
  v9 = dword_1A88C8[0];
  if ( dword_1A88C8[0] > 0 )
  {
    LOBYTE(v10) = 0;
    v11 = 0;
    do
    {
      v12 = dword_1AA668[v11];
      v13 = (void *)v7[v12];
      if ( v13 )
      {
        free(v13);
        v7[v12] = 0;
      }
      v10 = (unsigned __int8)(v10 + 1);
      v11 = v10;
    }
    while ( v9 > v10 );
  }
  free(v7);
  dword_1AA6AC = 0;
  return -1;
}
