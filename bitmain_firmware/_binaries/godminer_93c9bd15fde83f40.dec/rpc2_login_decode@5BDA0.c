int __fastcall rpc2_login_decode(_DWORD *a1, int a2)
{
  _DWORD *v4; // r0
  _BYTE *v5; // r7
  char *v6; // r1
  _DWORD *v7; // r0
  int v8; // r5
  int *v9; // r3
  int v10; // r1
  int v11; // r4
  int v12; // lr
  int v13; // r12
  int v14; // r0
  int v15; // r3
  int v16; // r1
  int v18; // r3
  int v19; // r0
  int v20; // r2
  int v21; // r1
  int v22; // r3
  int v23; // r1
  int v24; // r3
  int v25; // r3
  int v26; // r3
  int v27; // r3
  char v28[4100]; // [sp+10h] [bp-1004h] BYREF

  v4 = (_DWORD *)json_object_get(a1, "result");
  if ( !v4 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    LOWORD(v18) = 17856;
    HIWORD(v18) = (unsigned int)" \"%s\"]}" >> 16;
    logfmt_raw(v28, 0x1000u, 0, v18);
    pthread_mutex_unlock(&stru_1A8A24);
    v19 = g_zc;
    v20 = 96;
    goto LABEL_14;
  }
  if ( *v4 == 2 )
  {
    v5 = (_BYTE *)v4[2];
    if ( v5 )
    {
      if ( *v5 == 111 && v5[1] == 107 && !v5[2] )
        goto LABEL_7;
      pthread_mutex_lock(&stru_1A8A24);
      LOWORD(v24) = 17904;
      HIWORD(v24) = (unsigned int)"\"getjobtemplate\", \"params\": null}" >> 16;
      logfmt_raw(v28, 0x1000u, 0, v24, v5);
      pthread_mutex_unlock(&stru_1A8A24);
      v19 = g_zc;
      v20 = 107;
LABEL_14:
      LOWORD(v21) = 17324;
      HIWORD(v21) = (unsigned int)"nonce" >> 16;
      zlog(v19, v21, 163, "rpc2_login_decode", 17, v20, 100, v28);
      pthread_mutex_lock(&stru_1A8A24);
      LOWORD(v22) = 17984;
      HIWORD(v22) = (unsigned int)", \"method\": \"mining.extranonce.subscribe\", \"params\": []}" >> 16;
      logfmt_raw(v28, 0x1000u, 0, v22, "rpc2_login_decode");
      pthread_mutex_unlock(&stru_1A8A24);
      LOWORD(v23) = 17324;
      HIWORD(v23) = (unsigned int)"nonce" >> 16;
      zlog(g_zc, v23, 163, "rpc2_login_decode", 17, 148, 80, v28);
      return 0;
    }
  }
  if ( v4 != dword_1A24DC )
  {
    V_LOCK();
    LOWORD(v26) = 17876;
    HIWORD(v26) = (unsigned int)"\"jsonrpc\": \"2.0\", \"method\": \"getjobtemplate\", \"params\": null}" >> 16;
    logfmt_raw(v28, 0x1000u, 0, v26);
    V_UNLOCK();
    v19 = g_zc;
    v20 = 102;
    goto LABEL_14;
  }
LABEL_7:
  LOWORD(v6) = 19068;
  HIWORD(v6) = (unsigned int)"xnonce1" >> 16;
  v7 = (_DWORD *)json_object_get(a1, v6);
  if ( !v7 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    LOWORD(v25) = 17932;
    HIWORD(v25) = (unsigned int)"null}" >> 16;
    logfmt_raw(v28, 0x1000u, 0, v25);
    pthread_mutex_unlock(&stru_1A8A24);
    v19 = g_zc;
    v20 = 115;
    goto LABEL_14;
  }
  if ( *v7 != 2 || (v8 = v7[2]) == 0 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    LOWORD(v27) = 17948;
    HIWORD(v27) = (unsigned int)"authentication failed" >> 16;
    logfmt_raw(v28, 0x1000u, 0, v27);
    pthread_mutex_unlock(&stru_1A8A24);
    v19 = g_zc;
    v20 = 120;
    goto LABEL_14;
  }
  v9 = (int *)v7[2];
  v10 = a2 + 1052;
  do
  {
    v11 = *v9;
    v9 += 4;
    v12 = *(v9 - 3);
    v10 += 16;
    v13 = *(v9 - 2);
    v14 = *(v9 - 1);
    *(_DWORD *)(v10 - 16) = v11;
    *(_DWORD *)(v10 - 12) = v12;
    *(_DWORD *)(v10 - 8) = v13;
    *(_DWORD *)(v10 - 4) = v14;
  }
  while ( v9 != (int *)(v8 + 64) );
  pthread_mutex_lock(&stru_1A8A24);
  LOWORD(v15) = 17972;
  HIWORD(v15) = (unsigned int)"job" >> 16;
  logfmt_raw(v28, 0x1000u, 0, v15, v8);
  pthread_mutex_unlock(&stru_1A8A24);
  LOWORD(v16) = 17324;
  HIWORD(v16) = (unsigned int)"nonce" >> 16;
  zlog(g_zc, v16, 163, "rpc2_login_decode", 17, 126, 20, v28);
  return 1;
}
