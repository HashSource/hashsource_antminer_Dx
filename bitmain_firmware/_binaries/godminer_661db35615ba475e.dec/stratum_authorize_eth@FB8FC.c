int __fastcall stratum_authorize_eth(int a1, _DWORD *a2)
{
  _DWORD *v4; // r8
  char *v5; // r11
  const char *v6; // r10
  size_t v7; // r6
  size_t v8; // r0
  char *v9; // r9
  int v10; // r10
  int v12; // r11
  void *v13; // r6
  int v14; // r0
  _DWORD *v15; // r5
  _DWORD *v16; // r6
  _DWORD *v17; // r0
  unsigned int *v18; // r3
  unsigned int v19; // r2
  unsigned int v20; // r2
  const char *v21; // [sp+14h] [bp-104h]
  _DWORD *v22; // [sp+14h] [bp-104h]
  char s[4]; // [sp+1Ch] [bp-FCh] BYREF
  int v24; // [sp+20h] [bp-F8h]
  int v25; // [sp+24h] [bp-F4h]
  int v26; // [sp+28h] [bp-F0h]
  int v27; // [sp+2Ch] [bp-ECh]
  int v28; // [sp+30h] [bp-E8h]
  int v29; // [sp+34h] [bp-E4h]
  int v30; // [sp+38h] [bp-E0h]
  _BYTE v31[160]; // [sp+78h] [bp-A0h] BYREF
  time_t v32[4]; // [sp+118h] [bp+0h] BYREF
  unsigned __int8 v33; // [sp+12Ah] [bp+12h]
  unsigned __int8 v34; // [sp+12Bh] [bp+13h]
  unsigned __int8 v35; // [sp+12Ch] [bp+14h]
  unsigned __int8 v36; // [sp+12Dh] [bp+15h]
  unsigned __int8 v37; // [sp+12Eh] [bp+16h]
  unsigned __int8 v38; // [sp+12Fh] [bp+17h]

  LOWORD(v4) = (unsigned __int16)&g_zc;
  if ( a2[5] )
  {
    pthread_mutex_lock(&stru_197BB8);
    HIWORD(v4) = (unsigned int)&g_zc >> 16;
    logfmt_raw((char *)v32, 0x1000u, 0, "Will Use Worker Name!->'%s'\r\n", a2[5]);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      *v4,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_eth/frontend_eth.c",
      157,
      "stratum_authorize_eth",
      21,
      173,
      60,
      v32);
    v5 = (char *)a2[5];
    goto LABEL_3;
  }
  pthread_mutex_lock(&stru_197BB8);
  HIWORD(v4) = (unsigned int)&g_zc >> 16;
  logfmt_raw((char *)v32, 0x1000u, 0, "Didn't Set Worker Name, Will Use MacAddr!\r\n");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    *v4,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_eth/frontend_eth.c",
    157,
    "stratum_authorize_eth",
    21,
    155,
    20,
    v32);
  *(_DWORD *)s = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v14 = socket(2, 1, 0);
  if ( v14 < 0 )
  {
    perror("socket");
  }
  else
  {
    strcpy((char *)v32, "eth0");
    if ( ioctl(v14, 0x8927u, v32) >= 0 )
    {
      sprintf(s, "%02X%02X%02X%02X%02X%02X", v33, v34, v35, v36, v37, v38);
      v5 = _strdup(s);
      a2[5] = v5;
      goto LABEL_3;
    }
    perror("ioctl");
  }
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v32, 0x1000u, 0, &unk_17557C);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    *v4,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_eth/frontend_eth.c",
    157,
    "stratum_authorize_eth",
    21,
    164,
    20,
    v32);
  time(v32);
  sprintf(s, "%d", v32[0]);
  v5 = _strdup(s);
  a2[5] = v5;
LABEL_3:
  v6 = (const char *)a2[3];
  v7 = strlen(v6);
  v21 = (const char *)a2[4];
  v8 = strlen(v21);
  v9 = (char *)malloc(v7 + v8 + 128);
  sprintf(
    v9,
    "{\"worker\": \"%s\", \"jsonrpc\": \"2.0\", \"params\": [\"%s\", \"%s\"], \"id\": %d, \"method\": \"eth_submitLogin\"}",
    v5,
    v6,
    v21,
    2);
  v10 = (*(int (__fastcall **)(_DWORD *, char *))(a1 + 16))(a2, v9);
  if ( !v10 )
  {
LABEL_4:
    free(v9);
    return v10;
  }
  while ( 1 )
  {
    v13 = (void *)(*(int (__fastcall **)(_DWORD *))(a1 + 12))(a2);
    if ( !v13 )
    {
      free(v9);
      return 0;
    }
    v12 = (*(int (**)(void))(a1 + 24))();
    if ( !v12 )
      break;
    free(v13);
  }
  v15 = json_loads((int)v13, 0, (int)s);
  free(v13);
  if ( !v15 )
  {
    V_LOCK();
    v10 = 0;
    logfmt_raw((char *)v32, 0x1000u, 0, "JSON decode failed(%d): %s", *(_DWORD *)s, v31);
    V_UNLOCK();
    zlog(
      *v4,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_eth/frontend_eth.c",
      157,
      "stratum_authorize_eth",
      21,
      199,
      100,
      v32);
    goto LABEL_4;
  }
  v16 = (_DWORD *)json_object_get(v15, "result");
  v22 = (_DWORD *)json_object_get(v15, "error");
  v17 = (_DWORD *)json_object_get(v15, "id");
  if ( v17 )
  {
    if ( *v17 == 3 )
      v12 = v17[2];
  }
  else
  {
    v12 = 0;
  }
  if ( v16 && *v16 != 6 && (!v22 || *v22 == 7) )
  {
    a2[322] = 40;
  }
  else
  {
    v10 = 0;
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw((char *)v32, 0x1000u, 0, "Stratum authentication failed, req_id=%d", v12);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      *v4,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_eth/frontend_eth.c",
      157,
      "stratum_authorize_eth",
      21,
      209,
      100,
      v32);
  }
  free(v9);
  if ( v15[1] == -1 )
    return v10;
  v18 = v15 + 1;
  __dmb(0xBu);
  do
  {
    v19 = __ldrex(v18);
    v20 = v19 - 1;
  }
  while ( __strex(v20, v18) );
  if ( v20 )
    return v10;
  json_delete(v15);
  return v10;
}
