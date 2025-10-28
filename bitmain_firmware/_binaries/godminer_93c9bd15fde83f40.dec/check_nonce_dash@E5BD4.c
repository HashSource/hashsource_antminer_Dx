int __fastcall check_nonce_dash(int a1, int a2)
{
  int v4; // r9
  int v5; // r4
  unsigned int v6; // r8
  int v7; // r3
  char *v8; // r2
  char *v9; // r3
  char v10; // r1
  unsigned int v11; // r4
  unsigned int *v12; // r2
  char v13; // r3
  unsigned int v14; // t1
  int v15; // r2
  _DWORD *v16; // r3
  unsigned int v17; // r0
  unsigned int v18; // r0
  unsigned int v19; // r0
  unsigned int v20; // r1
  unsigned int v21; // r0
  unsigned int v22; // r1
  unsigned int v23; // r3
  unsigned int v24; // r3
  int v26; // r3
  int v27; // [sp+24h] [bp-10A0h]
  int v28; // [sp+28h] [bp-109Ch]
  int v29; // [sp+2Ch] [bp-1098h]
  int v30; // [sp+3Ch] [bp-1088h]
  __int64 v31; // [sp+40h] [bp-1084h]
  int v32; // [sp+4Ch] [bp-1078h]
  unsigned int v33; // [sp+50h] [bp-1074h] BYREF
  unsigned int v34; // [sp+54h] [bp-1070h]
  unsigned int v35; // [sp+58h] [bp-106Ch]
  unsigned int v36; // [sp+5Ch] [bp-1068h]
  unsigned int v37; // [sp+60h] [bp-1064h]
  unsigned int v38; // [sp+64h] [bp-1060h]
  unsigned int v39; // [sp+68h] [bp-105Ch]
  unsigned int v40; // [sp+6Ch] [bp-1058h]
  _DWORD v41[20]; // [sp+70h] [bp-1054h] BYREF
  char v42[4100]; // [sp+C0h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  v31 = *(int *)(a1 + 136);
  v28 = *(unsigned __int8 *)(a2 + 53);
  v27 = *(_DWORD *)(a2 + 48);
  ++dword_1A8A20[0];
  logfmt_raw(
    v42,
    0x1000u,
    0,
    v32,
    "chain",
    5,
    3,
    v30,
    v31,
    0,
    v32,
    "nonce %llx back wc %d",
    v27,
    v28,
    v29,
    "chain",
    5,
    3,
    v30,
    v31,
    0);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "check_nonce_dash",
    16,
    617,
    20,
    v42);
  v4 = *(_DWORD *)(a1 + 624);
  v5 = *(unsigned __int8 *)(a2 + 53);
  v6 = *(_DWORD *)(v4 + 4 * (v5 + 3840));
  v7 = *(_DWORD *)(v4 + 12 * v5 + 19972);
  *(_DWORD *)(a2 + 54) = *(_DWORD *)(v4 + 12 * v5 + 19968);
  *(_DWORD *)(a2 + 58) = v7;
  memcpy(v41, (const void *)(v4 + 80 * v5 + 5120), sizeof(v41));
  v8 = (char *)v41;
  v9 = (char *)(v4 + 80 * v5 + 5120);
  do
  {
    v10 = *v9;
    v9 += 4;
    v8[3] = v10;
    v8[2] = *(v9 - 3);
    v8[1] = *(v9 - 2);
    *v8 = *(v9 - 1);
    v8 += 4;
  }
  while ( v8 != v42 );
  v11 = 0;
  v41[19] = *(_DWORD *)(a2 + 48);
  Xhash(&v33, v41);
  v12 = v41;
  do
  {
    v14 = *((unsigned __int8 *)v12 - 1);
    v12 = (unsigned int *)((char *)v12 - 1);
    v13 = v14;
    if ( v14 >> 7 )
      break;
    if ( (v13 & 0x40) != 0 )
    {
      v11 = (unsigned __int8)(v11 + 1);
      break;
    }
    if ( (v13 & 0x20) != 0 )
    {
      v11 = (unsigned __int8)(v11 + 2);
      break;
    }
    if ( (v13 & 0x10) != 0 )
    {
      v11 = (unsigned __int8)(v11 + 3);
      break;
    }
    if ( (v13 & 8) != 0 )
    {
      v11 = (unsigned __int8)(v11 + 4);
      break;
    }
    if ( (v13 & 4) != 0 )
    {
      v11 = (unsigned __int8)(v11 + 5);
      break;
    }
    if ( (v13 & 2) != 0 )
    {
      v11 = (unsigned __int8)(v11 + 6);
      break;
    }
    if ( (v13 & 1) != 0 )
    {
      v11 = (unsigned __int8)(v11 + 7);
      break;
    }
    v11 = (unsigned __int8)(v11 + 8);
  }
  while ( &v33 != v12 );
  if ( v11 <= 0x22 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(
      v42,
      0x1000u,
      0,
      "hw error calculate diff %d ans diff %d TICKET_MASK_DASH %d",
      v11,
      *(unsigned __int8 *)(a2 + 52),
      35);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dash/backend_dash.c",
      156,
      "check_nonce_dash",
      16,
      638,
      20,
      v42);
    v26 = (unsigned __int8)(*(_BYTE *)(a1 + 308) + 1);
    *(_BYTE *)(a1 + 308) = v26;
    if ( v26 )
      return 6;
    else
      return 2;
  }
  else if ( *(unsigned __int8 *)(a2 + 52) == v11 )
  {
    if ( v6 > v11 )
      goto LABEL_37;
    v15 = *(unsigned __int8 *)(a2 + 53) + 496;
    v16 = (_DWORD *)(v4 + 32 * v15);
    v17 = v16[7];
    if ( v17 > v40 )
      return 0;
    if ( v17 < v40
      || (v18 = v16[6], v18 <= v39)
      && (v18 < v39
       || (v19 = v16[5], v19 <= v38)
       && (v19 < v38
        || (v20 = v16[4], v37 >= v20)
        && (v37 > v20
         || (v21 = v16[3], v21 <= v36)
         && (v21 < v36
          || (v22 = v16[2], v35 >= v22)
          && (v35 > v22
           || (v23 = v16[1], v34 >= v23) && (v34 > v23 || (v24 = *(_DWORD *)(v4 + 32 * v15), v33 >= v24) && v33 > v24)))))) )
    {
LABEL_37:
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v42, 0x1000u, 0, "hw diff (%d<%d) not reach pool", *(unsigned __int8 *)(a2 + 52), v6);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_dash/backend_dash.c",
        156,
        "check_nonce_dash",
        16,
        661,
        20,
        v42);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v42, 0x1000u, 0, "diff not match (%d!=%d) expected diff %d", v11, *(unsigned __int8 *)(a2 + 52), v6);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dash/backend_dash.c",
      156,
      "check_nonce_dash",
      16,
      647,
      20,
      v42);
    return 3;
  }
}
