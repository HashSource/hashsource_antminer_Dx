int __fastcall check_nonce_ltc(int a1, int a2)
{
  int v3; // r1
  int v4; // r8
  unsigned int v5; // r6
  unsigned int *v6; // r2
  _DWORD *v7; // r1
  unsigned int v8; // t1
  unsigned int v9; // r6
  int v10; // r10
  unsigned int v11; // r11
  int v12; // r3
  int v13; // r2
  int v14; // r3
  int v15; // r2
  _DWORD *v16; // r3
  unsigned int v17; // r1
  unsigned int v18; // r1
  unsigned int v19; // r1
  unsigned int v20; // r1
  unsigned int v21; // r1
  unsigned int v22; // r1
  unsigned int v23; // r3
  int v25; // r2
  unsigned int v26; // [sp+10h] [bp-202E4h]
  unsigned int v27; // [sp+14h] [bp-202E0h]
  unsigned int v28; // [sp+18h] [bp-202DCh]
  unsigned int v29; // [sp+1Ch] [bp-202D8h]
  unsigned int v30; // [sp+20h] [bp-202D4h]
  unsigned int v31; // [sp+24h] [bp-202D0h]
  unsigned int v32; // [sp+28h] [bp-202CCh]
  unsigned int v33; // [sp+2Ch] [bp-202C8h]
  unsigned int v34; // [sp+30h] [bp-202C4h] BYREF
  unsigned int v35; // [sp+34h] [bp-202C0h]
  unsigned int v36; // [sp+38h] [bp-202BCh]
  unsigned int v37; // [sp+3Ch] [bp-202B8h]
  unsigned int v38; // [sp+40h] [bp-202B4h]
  unsigned int v39; // [sp+44h] [bp-202B0h]
  unsigned int v40; // [sp+48h] [bp-202ACh]
  unsigned int v41; // [sp+4Ch] [bp-202A8h] BYREF
  _DWORD dest[20]; // [sp+50h] [bp-202A4h] BYREF
  _DWORD v43[20]; // [sp+A0h] [bp-20254h] BYREF
  _DWORD v44[128]; // [sp+F0h] [bp-20204h] BYREF

  v3 = *(unsigned __int8 *)(a2 + 85);
  v4 = *(_DWORD *)(a1 + 600);
  v27 = *(_DWORD *)(v4 + 4 * (v3 + 4864));
  memcpy(dest, (const void *)(v4 + 80 * v3 + 9216), sizeof(dest));
  v5 = *(_DWORD *)(a2 + 80);
  v44[0] = 0;
  dest[19] = bswap32(v5);
  memset(&v44[1], 0, (size_t)&loc_201FC);
  v6 = &v41;
  v7 = &dest[19];
  do
  {
    v8 = v6[1];
    ++v6;
    v7[1] = bswap32(v8);
    ++v7;
  }
  while ( v6 != &dest[18] );
  v43[19] = v5;
  sub_D484C(v43, (int)v44, &v34);
  v9 = 0;
  v10 = 24;
  v26 = bswap32(v36);
  v11 = bswap32(v37);
  v33 = bswap32(v34);
  v34 = v33;
  v32 = bswap32(v35);
  v31 = bswap32(v38);
  v30 = bswap32(v39);
  v29 = bswap32(v40);
  v35 = v32;
  v28 = bswap32(v41);
  v36 = v26;
  v37 = v11;
  v38 = v31;
  v39 = v30;
  v40 = v29;
  v41 = v28;
LABEL_4:
  v12 = 63;
  while ( 1 )
  {
    v13 = *(_QWORD *)((char *)&v34 + v10) >> v12--;
    if ( (v13 & 1) != 0 )
      break;
    v9 = (unsigned __int8)(v9 + 1);
    if ( v12 == -1 )
    {
      v10 -= 8;
      if ( v10 == -8 )
        break;
      goto LABEL_4;
    }
  }
  if ( v9 <= 0x1E )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(
      (char *)v44,
      0x1000u,
      0,
      "hw error calculate diff %02x ans diff %02x TICKET_MASK_ZERO_COUNT_LTC %02x",
      v9,
      *(unsigned __int8 *)(a2 + 84),
      31);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ltc/backend_ltc.c",
      154,
      "check_nonce_ltc",
      15,
      435,
      20,
      v44);
    return 2;
  }
  v14 = *(unsigned __int8 *)(a2 + 84);
  if ( (v14 & 0x20) != 0 )
  {
    if ( v9 > 0x2F )
      goto LABEL_10;
    V_LOCK();
    logfmt_raw(
      (char *)v44,
      0x1000u,
      0,
      "calculate diff %02x, but ans diff %02x (bit5 is 1)",
      v9,
      *(unsigned __int8 *)(a2 + 84));
    V_UNLOCK();
    v25 = 441;
LABEL_29:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ltc/backend_ltc.c",
      154,
      "check_nonce_ltc",
      15,
      v25,
      20,
      v44);
    return 3;
  }
  if ( v9 != v14 + 16 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(
      (char *)v44,
      0x1000u,
      0,
      "diff not match, calculate %02x ans diff %02x",
      v9,
      *(unsigned __int8 *)(a2 + 84));
    pthread_mutex_unlock(&stru_197BB8);
    v25 = 446;
    goto LABEL_29;
  }
LABEL_10:
  if ( v27 > v9 )
    goto LABEL_30;
  v15 = *(unsigned __int8 *)(a2 + 85) + 624;
  v16 = (_DWORD *)(v4 + 32 * v15);
  v17 = v16[7];
  if ( v17 >= v28 )
  {
    if ( v17 > v28 )
      return 0;
    v18 = v16[6];
    if ( v18 >= v29 )
    {
      if ( v18 > v29 )
        return 0;
      v19 = v16[5];
      if ( v19 >= v30 )
      {
        if ( v19 > v30 )
          return 0;
        v20 = v16[4];
        if ( v20 >= v31 )
        {
          if ( v20 > v31 )
            return 0;
          v21 = v16[3];
          if ( v21 >= v11 )
          {
            if ( v21 > v11 )
              return 0;
            v22 = v16[2];
            if ( v22 >= v26 )
            {
              if ( v22 > v26 )
                return 0;
              v23 = v16[1];
              if ( v23 >= v32 && (v23 > v32 || *(_DWORD *)(v4 + 32 * v15) >= v33) )
                return 0;
            }
          }
        }
      }
    }
  }
LABEL_30:
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw((char *)v44, 0x1000u, 0, "hw diff (%d<%d) not reach pool", v9, v27);
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/backend_ltc.c",
    154,
    "check_nonce_ltc",
    15,
    452,
    20,
    v44);
  return 1;
}
