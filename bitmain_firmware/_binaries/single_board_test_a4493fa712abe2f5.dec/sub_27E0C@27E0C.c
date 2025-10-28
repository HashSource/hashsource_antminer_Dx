int sub_27E0C()
{
  _DWORD *v0; // r6
  int v1; // r9
  int v2; // r3
  int v3; // r4
  int v4; // r5
  void *v5; // r10
  int v6; // r2
  int v7; // r1
  int v8; // r0
  _DWORD *v9; // r9
  int result; // r0
  int v11; // r10
  int v12; // r4
  int v13; // r3
  int v14; // r6
  void *v15; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v17[4096]; // [sp+810h] [bp-1000h] BYREF

  v0 = (_DWORD *)dword_12C0EC;
  if ( dword_12C0EC || (v0 = calloc(1u, 0x54u), (dword_12C0EC = (int)v0) != 0) )
  {
    v1 = dword_12A41C;
    if ( dword_12A41C <= 0 )
      return 0;
    v2 = 0;
    LOBYTE(v3) = 0;
    while ( 1 )
    {
      v4 = *(_DWORD *)&byte_12A418[4 * v2 + 8];
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
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v17, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_3B526C);
    v6 = 189;
    LOWORD(v7) = (unsigned __int16)"/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c";
    v8 = g_zc;
  }
  else
  {
    strcpy(s, "No memory for configuraion.\n");
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, s);
    V_UNLOCK();
    v6 = 176;
    LOWORD(v7) = -31776;
    v8 = g_zc;
  }
  HIWORD(v7) = (unsigned int)"/home/xingfei.wang/work/1764/godminer/backend/device/hal/eeprom/bitmain_eeprom.c" >> 16;
  zlog(v8, v7, 80, "_alloc_memory", 13, v6, 100, v17);
  v9 = (_DWORD *)dword_12C0EC;
  result = -1;
  if ( dword_12C0EC )
  {
    v11 = dword_12A41C;
    if ( dword_12A41C > 0 )
    {
      LOBYTE(v12) = 0;
      v13 = 0;
      do
      {
        v14 = *(_DWORD *)&byte_12A418[4 * v13 + 8];
        v15 = (void *)v9[v14];
        if ( v15 )
        {
          free(v15);
          v9[v14] = 0;
        }
        v12 = (unsigned __int8)(v12 + 1);
        v13 = v12;
      }
      while ( v11 > v12 );
    }
    free(v9);
    dword_12C0EC = 0;
    return -1;
  }
  return result;
}
