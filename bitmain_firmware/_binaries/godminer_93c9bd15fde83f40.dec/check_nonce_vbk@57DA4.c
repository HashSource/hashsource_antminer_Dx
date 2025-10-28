int __fastcall check_nonce_vbk(int a1, int a2)
{
  int v2; // r6
  int *v4; // r4
  int v5; // r3
  int *v6; // r12
  unsigned int v7; // r7
  int *v8; // r8
  int v9; // r0
  int v10; // r1
  int *v11; // lr
  int v12; // r2
  int v13; // r3
  int v14; // lr
  int v15; // r1
  int v16; // r2
  unsigned int v17; // r4
  char *v18; // r2
  char v19; // r3
  unsigned int v20; // t1
  unsigned __int8 v21; // r1
  int v22; // r3
  unsigned int v23; // r1
  unsigned int v24; // r2
  unsigned int *v25; // r6
  unsigned int v26; // r3
  unsigned int v27; // r3
  unsigned int v28; // r2
  unsigned int v29; // r3
  unsigned int v30; // r2
  unsigned int v31; // r3
  unsigned int v32; // r2
  unsigned int v33; // r3
  unsigned int v34; // r2
  char v36; // [sp+Fh] [bp-1061h] BYREF
  int v37[8]; // [sp+10h] [bp-1060h] BYREF
  int v38[16]; // [sp+30h] [bp-1040h] BYREF
  char v39[4096]; // [sp+70h] [bp-1000h] BYREF

  v2 = *(_DWORD *)(a1 + 624);
  v4 = v38;
  v5 = *(unsigned __int8 *)(a2 + 29);
  v6 = (int *)(v2 + ((v5 + 64) << 6));
  v7 = *(_DWORD *)(v2 + 4 * (v5 + 5376));
  v8 = v6 + 12;
  do
  {
    v9 = *v6;
    v6 += 4;
    v10 = *(v6 - 3);
    v11 = v4;
    v12 = *(v6 - 2);
    v4 += 4;
    v13 = *(v6 - 1);
    *v11 = v9;
    v11[1] = v10;
    v11[2] = v12;
    v11[3] = v13;
  }
  while ( v6 != v8 );
  v14 = *(_DWORD *)(a2 + 24);
  v15 = v6[1];
  v16 = v6[2];
  *v4 = *v6;
  v4[1] = v15;
  v4[2] = v16;
  v38[15] = HIBYTE(v14)
          | (unsigned __int16)(BYTE2(v14) << 8)
          | (BYTE1(v14) << 16) & 0xFFFFFF
          | ((unsigned __int8)v14 << 24);
  v17 = 0;
  vblake_hash(v37, v38);
  v18 = &v36;
  while ( 1 )
  {
    v20 = (unsigned __int8)*++v18;
    v19 = v20;
    v21 = v17 + 8;
    if ( v20 >> 7 )
      goto LABEL_28;
    if ( (v19 & 0x40) != 0 )
    {
      v17 = (unsigned __int8)(v17 + 1);
      if ( v17 <= 0x1F )
        goto LABEL_29;
      goto LABEL_13;
    }
    if ( (v19 & 0x20) != 0 )
    {
      v17 = (unsigned __int8)(v17 + 2);
      if ( v17 <= 0x1F )
        goto LABEL_29;
      goto LABEL_13;
    }
    if ( (v19 & 0x10) != 0 )
    {
      v17 = (unsigned __int8)(v17 + 3);
      if ( v17 <= 0x1F )
        goto LABEL_29;
      goto LABEL_13;
    }
    if ( (v19 & 8) != 0 )
    {
      v17 = (unsigned __int8)(v17 + 4);
      if ( v17 <= 0x1F )
        goto LABEL_29;
      goto LABEL_13;
    }
    if ( (v19 & 4) != 0 )
    {
      v17 = (unsigned __int8)(v17 + 5);
      if ( v17 <= 0x1F )
        goto LABEL_29;
      goto LABEL_13;
    }
    if ( (v19 & 2) != 0 )
    {
      v17 = (unsigned __int8)(v17 + 6);
      goto LABEL_28;
    }
    if ( (v19 & 1) != 0 )
      break;
    v17 = v21;
    if ( v21 == 64 )
      goto LABEL_13;
  }
  v17 = (unsigned __int8)(v17 + 7);
LABEL_28:
  if ( v17 <= 0x1F )
  {
LABEL_29:
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(
      v39,
      0x1000u,
      0,
      "check_nonce_vbk hw error diff %d %d expected diff %d nonce %x",
      v17,
      *(unsigned __int8 *)(a2 + 28),
      v7,
      *(_DWORD *)(a2 + 24));
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_vbk/backend_vbk.c",
      154,
      "check_nonce_vbk",
      15,
      273,
      20,
      v39);
    return 2;
  }
LABEL_13:
  if ( *(unsigned __int8 *)(a2 + 28) != v17 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(
      v39,
      0x1000u,
      0,
      "nonce %x DIFF not match (%d:%d) not reach pool %d",
      *(_DWORD *)(a2 + 24),
      *(unsigned __int8 *)(a2 + 28),
      v17,
      v7);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_vbk/backend_vbk.c",
      154,
      "check_nonce_vbk",
      15,
      278,
      20,
      v39);
    return 3;
  }
  if ( v7 > v17 )
    return 1;
  v22 = 24 * *(unsigned __int8 *)(a2 + 29) + 22528;
  v23 = bswap32(v37[0]);
  v24 = *(_DWORD *)(v2 + v22);
  v25 = (unsigned int *)(v2 + v22);
  v26 = bswap32(v24);
  if ( v23 > v26 )
    return 1;
  if ( v23 >= v26 )
  {
    v27 = bswap32(v37[1]);
    v28 = bswap32(v25[1]);
    if ( v28 < v27 )
      return 1;
    if ( v28 <= v27 )
    {
      v29 = bswap32(v37[2]);
      v30 = bswap32(v25[2]);
      if ( v30 < v29 )
        return 1;
      if ( v30 <= v29 )
      {
        v31 = bswap32(v37[3]);
        v32 = bswap32(v25[3]);
        if ( v32 < v31 )
          return 1;
        if ( v32 <= v31 )
        {
          v33 = bswap32(v37[4]);
          v34 = bswap32(v25[4]);
          if ( v34 >= v33 )
          {
            if ( v34 <= v33 )
              return bswap32(v37[5]) > bswap32(v25[5]);
            return 0;
          }
          return 1;
        }
      }
    }
  }
  return 0;
}
