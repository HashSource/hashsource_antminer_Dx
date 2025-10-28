bool __fastcall hex2bin(int a1, unsigned __int8 *a2, int a3)
{
  int v3; // r3
  int v4; // r5
  unsigned __int8 v5; // r12
  unsigned __int8 *v6; // r4
  int v7; // r6
  char v8; // r0
  char *v9; // r3
  int v10; // r2
  int v11; // r1
  char v13[4]; // [sp+10h] [bp-1008h] BYREF
  char *endptr; // [sp+14h] [bp-1004h] BYREF
  char v15[4096]; // [sp+18h] [bp-1000h] BYREF

  v3 = *a2;
  v4 = a3;
  v13[2] = 0;
  if ( !v3 )
    return v4 == 0;
  if ( !a3 )
    return 1;
  v5 = a2[1];
  if ( v5 )
  {
    v6 = a2;
    v7 = a1 - 1;
    while ( 1 )
    {
      v13[0] = v3;
      v13[1] = v5;
      --v4;
      v8 = strtol(v13, &endptr, 16);
      v9 = endptr;
      *(_BYTE *)++v7 = v8;
      if ( *v9 )
        break;
      v3 = v6[2];
      v6 += 2;
      if ( !v3 )
        return v4 == 0;
      if ( !v4 )
        return 1;
      v5 = v6[1];
      if ( !v5 )
        goto LABEL_14;
    }
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v15, 0x1000u, 0, "hex2bin failed on '%s'", v13);
    pthread_mutex_unlock(&stru_1A8A24);
    v10 = 161;
  }
  else
  {
LABEL_14:
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v15, 0x1000u, 0, 1617504);
    pthread_mutex_unlock(&stru_1A8A24);
    v10 = 154;
  }
  LOWORD(v11) = -14688;
  HIWORD(v11) = (unsigned int)"%x cmn status %x" >> 16;
  zlog(g_zc, v11, 127, "hex2bin", 7, v10, 100, v15);
  return 0;
}
