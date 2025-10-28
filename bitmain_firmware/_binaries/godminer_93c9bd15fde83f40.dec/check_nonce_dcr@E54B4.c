int __fastcall check_nonce_dcr(int a1, int a2)
{
  int v2; // r4
  int v4; // r5
  unsigned int v5; // r3
  unsigned int v6; // r9
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int *v11; // r4
  int *v12; // r2
  char v13; // r3
  unsigned int v14; // t1
  unsigned __int8 *v15; // r5
  int v16; // r12
  int v17; // t1
  int v18; // t1
  unsigned int v19; // r2
  unsigned int v20; // r3
  unsigned int v22; // [sp+14h] [bp-10E0h]
  int v23[5]; // [sp+1Ch] [bp-10D8h] BYREF
  _DWORD s[45]; // [sp+3Ch] [bp-10B8h] BYREF
  char v25[4100]; // [sp+F0h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 65);
  v4 = *(_DWORD *)(a1 + 624);
  v5 = *(_DWORD *)(v4 + 4 * (v2 + 7040));
  v6 = 0;
  v2 *= 180;
  v22 = v5;
  memset(s, 0, sizeof(s));
  memcpy(s, (const void *)(v4 + v2 + 5120), 0x8Cu);
  v7 = *(_DWORD *)(a2 + 52);
  v8 = *(_DWORD *)(a2 + 56);
  v9 = *(_DWORD *)(a2 + 60);
  s[35] = *(_DWORD *)(a2 + 48);
  s[36] = v7;
  s[37] = v8;
  s[38] = v9;
  v10 = *(_DWORD *)(v4 + v2 + 5291);
  v11 = s;
  s[44] = v10;
  decred_hash(v23, (char *)s);
  v12 = s;
  do
  {
    v14 = *((unsigned __int8 *)v12 - 1);
    v12 = (int *)((char *)v12 - 1);
    v13 = v14;
    if ( v14 >> 7 )
      break;
    if ( (v13 & 0x40) != 0 )
    {
      v6 = (unsigned __int8)(v6 + 1);
      break;
    }
    if ( (v13 & 0x20) != 0 )
    {
      v6 = (unsigned __int8)(v6 + 2);
      break;
    }
    if ( (v13 & 0x10) != 0 )
    {
      v6 = (unsigned __int8)(v6 + 3);
      break;
    }
    if ( (v13 & 8) != 0 )
    {
      v6 = (unsigned __int8)(v6 + 4);
      break;
    }
    if ( (v13 & 4) != 0 )
    {
      v6 = (unsigned __int8)(v6 + 5);
      break;
    }
    if ( (v13 & 2) != 0 )
    {
      v6 = (unsigned __int8)(v6 + 6);
      break;
    }
    if ( (v13 & 1) != 0 )
    {
      v6 = (unsigned __int8)(v6 + 7);
      break;
    }
    v6 = (unsigned __int8)(v6 + 8);
  }
  while ( v12 != v23 );
  if ( v6 <= 0x1F )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(
      v25,
      0x1000u,
      0,
      "hw error calculate diff %d ans diff %d TICKET_MASK_DCR %d",
      v6,
      *(unsigned __int8 *)(a2 + 64),
      32);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dcr/backend_dcr.c",
      154,
      "check_nonce_dcr",
      15,
      357,
      20,
      v25);
    return 2;
  }
  else if ( *(unsigned __int8 *)(a2 + 64) == v6 )
  {
    if ( v22 > v6 )
    {
LABEL_19:
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v25, 0x1000u, 0, "hw diff (%d<%d) not reach pool", *(unsigned __int8 *)(a2 + 64), v22);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_dcr/backend_dcr.c",
        154,
        "check_nonce_dcr",
        15,
        367,
        20,
        v25);
      return 1;
    }
    else
    {
      v15 = (unsigned __int8 *)(v4 + 32 * *(unsigned __int8 *)(a2 + 65) + 28704);
      do
      {
        pthread_mutex_lock(&stru_1A8A24);
        v17 = *((unsigned __int8 *)v11 - 1);
        v11 = (int *)((char *)v11 - 1);
        v16 = v17;
        v18 = *--v15;
        logfmt_raw(v25, 0x1000u, 0, "%02x Vs %02x", v16, v18);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_dcr/backend_dcr.c",
          154,
          "fulltest_dcr",
          12,
          306,
          60,
          v25);
        v19 = *(unsigned __int8 *)v11;
        v20 = *v15;
        if ( v19 < v20 )
          break;
        if ( v19 > v20 )
          goto LABEL_19;
      }
      while ( v11 != v23 );
      return 0;
    }
  }
  else
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v25, 0x1000u, 0, "diff not match (%d!=%d) expected diff %d", v6, *(unsigned __int8 *)(a2 + 64), v22);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dcr/backend_dcr.c",
      154,
      "check_nonce_dcr",
      15,
      362,
      20,
      v25);
    return 3;
  }
}
