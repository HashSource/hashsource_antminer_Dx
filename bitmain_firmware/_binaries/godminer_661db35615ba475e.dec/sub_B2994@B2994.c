int sub_B2994()
{
  _DWORD *v0; // r7
  int v1; // r8
  int v2; // r3
  int v3; // r4
  int v4; // r5
  void *v5; // r9
  int v6; // r2
  _DWORD *v7; // r8
  int v9; // r9
  int v10; // r4
  int v11; // r3
  int v12; // r5
  void *v13; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v15[4100]; // [sp+810h] [bp-1004h] BYREF

  v0 = (_DWORD *)dword_195D14;
  if ( dword_195D14 || (v0 = calloc(1u, 0x54u), (dword_195D14 = (int)v0) != 0) )
  {
    v1 = dword_195CB8;
    if ( dword_195CB8 <= 0 )
      return 0;
    v2 = 0;
    LOBYTE(v3) = 0;
    while ( 1 )
    {
      v4 = dword_195CAC[v2 + 4];
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
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v15, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_197BB8);
    v6 = 189;
  }
  else
  {
    strcpy(s, "No memory for configuraion.\n");
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, s);
    V_UNLOCK();
    v6 = 176;
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
  v7 = (_DWORD *)dword_195D14;
  if ( !dword_195D14 )
    return -1;
  v9 = dword_195CB8;
  if ( dword_195CB8 > 0 )
  {
    LOBYTE(v10) = 0;
    v11 = 0;
    do
    {
      v12 = dword_195CAC[v11 + 4];
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
  dword_195D14 = 0;
  return -1;
}
