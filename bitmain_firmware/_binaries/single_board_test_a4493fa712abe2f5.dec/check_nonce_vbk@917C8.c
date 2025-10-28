int __fastcall check_nonce_vbk(int a1, int a2)
{
  int v2; // r8
  int *v4; // r6
  int v5; // r3
  int *v6; // r4
  unsigned int v7; // r9
  int *v8; // r12
  int v9; // r0
  int v10; // r1
  int *v11; // r5
  int v12; // r2
  int v13; // r3
  int v14; // r5
  int v15; // r0
  int v16; // r1
  int v17; // r2
  unsigned int v18; // r4
  char *v19; // r2
  char v20; // r3
  unsigned int v21; // t1
  unsigned __int8 v22; // r1
  int v23; // r3
  unsigned int v24; // r1
  unsigned int v25; // r2
  unsigned int *v26; // r8
  unsigned int v27; // r3
  unsigned int v28; // r3
  unsigned int v29; // r2
  unsigned int v30; // r3
  unsigned int v31; // r2
  unsigned int v32; // r3
  unsigned int v33; // r2
  unsigned int v34; // r3
  unsigned int v35; // r2
  char v37; // [sp+Fh] [bp-1065h] BYREF
  unsigned int v38[8]; // [sp+10h] [bp-1064h] BYREF
  int v39[16]; // [sp+30h] [bp-1044h] BYREF
  char v40[4100]; // [sp+70h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 600);
  v4 = v39;
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
  v15 = *v6;
  v16 = v6[1];
  v17 = v6[2];
  v18 = 0;
  *v4 = v15;
  v4[1] = v16;
  v4[2] = v17;
  v39[15] = HIBYTE(v14)
          | (unsigned __int16)(BYTE2(v14) << 8)
          | (BYTE1(v14) << 16) & 0xFFFFFF
          | ((unsigned __int8)v14 << 24);
  vblake_hash(v38, v39);
  v19 = &v37;
  while ( 1 )
  {
    v21 = (unsigned __int8)*++v19;
    v20 = v21;
    v22 = v18 + 8;
    if ( v21 >> 7 )
      goto LABEL_28;
    if ( (v20 & 0x40) != 0 )
    {
      v18 = (unsigned __int8)(v18 + 1);
      if ( v18 <= 0x1F )
        goto LABEL_29;
      goto LABEL_13;
    }
    if ( (v20 & 0x20) != 0 )
    {
      v18 = (unsigned __int8)(v18 + 2);
      if ( v18 <= 0x1F )
        goto LABEL_29;
      goto LABEL_13;
    }
    if ( (v20 & 0x10) != 0 )
    {
      v18 = (unsigned __int8)(v18 + 3);
      if ( v18 <= 0x1F )
        goto LABEL_29;
      goto LABEL_13;
    }
    if ( (v20 & 8) != 0 )
    {
      v18 = (unsigned __int8)(v18 + 4);
      if ( v18 <= 0x1F )
        goto LABEL_29;
      goto LABEL_13;
    }
    if ( (v20 & 4) != 0 )
    {
      v18 = (unsigned __int8)(v18 + 5);
      if ( v18 <= 0x1F )
        goto LABEL_29;
      goto LABEL_13;
    }
    if ( (v20 & 2) != 0 )
    {
      v18 = (unsigned __int8)(v18 + 6);
      goto LABEL_28;
    }
    if ( (v20 & 1) != 0 )
      break;
    v18 = v22;
    if ( v22 == 64 )
      goto LABEL_13;
  }
  v18 = (unsigned __int8)(v18 + 7);
LABEL_28:
  if ( v18 <= 0x1F )
  {
LABEL_29:
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(
      v40,
      0x1000u,
      0,
      "check_nonce_vbk hw error diff %d %d expected diff %d nonce %x",
      v18,
      *(unsigned __int8 *)(a2 + 28),
      v7,
      *(_DWORD *)(a2 + 24));
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_vbk/backend_vbk.c",
      71,
      "check_nonce_vbk",
      15,
      273,
      20,
      v40);
    return 2;
  }
LABEL_13:
  if ( *(unsigned __int8 *)(a2 + 28) != v18 )
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(
      v40,
      0x1000u,
      0,
      "nonce %x DIFF not match (%d:%d) not reach pool %d",
      *(_DWORD *)(a2 + 24),
      *(unsigned __int8 *)(a2 + 28),
      v18,
      v7);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_vbk/backend_vbk.c",
      71,
      "check_nonce_vbk",
      15,
      278,
      20,
      v40);
    return 3;
  }
  if ( v7 > v18 )
    return 1;
  v23 = 24 * *(unsigned __int8 *)(a2 + 29) + 22528;
  v24 = bswap32(v38[0]);
  v25 = *(_DWORD *)(v2 + v23);
  v26 = (unsigned int *)(v2 + v23);
  v27 = bswap32(v25);
  if ( v24 > v27 )
    return 1;
  if ( v24 >= v27 )
  {
    v28 = bswap32(v38[1]);
    v29 = bswap32(v26[1]);
    if ( v29 < v28 )
      return 1;
    if ( v29 <= v28 )
    {
      v30 = bswap32(v38[2]);
      v31 = bswap32(v26[2]);
      if ( v31 < v30 )
        return 1;
      if ( v31 <= v30 )
      {
        v32 = bswap32(v38[3]);
        v33 = bswap32(v26[3]);
        if ( v33 < v32 )
          return 1;
        if ( v33 <= v32 )
        {
          v34 = bswap32(v38[4]);
          v35 = bswap32(v26[4]);
          if ( v35 >= v34 )
          {
            if ( v35 <= v34 )
              return bswap32(v38[5]) > bswap32(v26[5]);
            return 0;
          }
          return 1;
        }
      }
    }
  }
  return 0;
}
