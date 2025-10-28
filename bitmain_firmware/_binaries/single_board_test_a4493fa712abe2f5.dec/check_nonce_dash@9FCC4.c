int __fastcall check_nonce_dash(int a1, int a2)
{
  int v4; // r4
  __int64 v5; // r10
  int v6; // r7
  int v7; // r4
  int v8; // r4
  unsigned int v9; // r7
  int v10; // r3
  char *v11; // r5
  char *v12; // r3
  char v13; // r2
  unsigned int v14; // r11
  unsigned int *v15; // r2
  char v16; // r3
  unsigned int v17; // t1
  int v18; // r0
  _DWORD *v19; // r3
  unsigned int v20; // r2
  unsigned int v21; // r1
  unsigned int v22; // r1
  unsigned int v23; // r2
  unsigned int v24; // r1
  unsigned int v25; // r2
  unsigned int v26; // r2
  unsigned int v27; // r3
  int v29; // r3
  _DWORD v30[18]; // [sp+0h] [bp-10CCh] BYREF
  __int64 v31; // [sp+48h] [bp-1084h]
  int v32; // [sp+50h] [bp-107Ch]
  int v33; // [sp+54h] [bp-1078h]
  unsigned int v34; // [sp+58h] [bp-1074h] BYREF
  unsigned int v35; // [sp+5Ch] [bp-1070h]
  unsigned int v36; // [sp+60h] [bp-106Ch]
  unsigned int v37; // [sp+64h] [bp-1068h]
  unsigned int v38; // [sp+68h] [bp-1064h]
  unsigned int v39; // [sp+6Ch] [bp-1060h]
  unsigned int v40; // [sp+70h] [bp-105Ch]
  unsigned int v41; // [sp+74h] [bp-1058h]
  _DWORD dest[20]; // [sp+78h] [bp-1054h] BYREF
  char v43[4100]; // [sp+C8h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  v4 = *(_DWORD *)(a1 + 124);
  v30[14] = "chain";
  v30[15] = 5;
  v30[16] = 3;
  v5 = v4;
  v30[8] = "nonce %llx back wc %d";
  v6 = *(unsigned __int8 *)(a2 + 53);
  v7 = *(_DWORD *)(a2 + 48);
  v32 = 0;
  v31 = v5;
  v30[13] = v30;
  ++dword_3B52A8;
  logfmt_raw(v43, 0x1000u, 0, v33, "chain", 5, 3, v30[17], v5, 0, v33, "nonce %llx back wc %d", v7, v6);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
    73,
    "check_nonce_dash",
    16,
    622,
    20,
    v43);
  v8 = *(_DWORD *)(a1 + 600);
  HIDWORD(v5) = *(unsigned __int8 *)(a2 + 53);
  v9 = *(_DWORD *)(v8 + 4 * (HIDWORD(v5) + 3840));
  v10 = *(_DWORD *)(v8 + 12 * HIDWORD(v5) + 19972);
  *(_DWORD *)(a2 + 54) = *(_DWORD *)(v8 + 12 * HIDWORD(v5) + 19968);
  *(_DWORD *)(a2 + 58) = v10;
  memcpy(dest, (const void *)(v8 + 80 * HIDWORD(v5) + 5120), sizeof(dest));
  v11 = (char *)(v8 + 80 * HIDWORD(v5) + 5120);
  v12 = (char *)dest;
  do
  {
    v13 = *v11;
    v11 += 4;
    v12[3] = v13;
    v12[2] = *(v11 - 3);
    v12[1] = *(v11 - 2);
    *v12 = *(v11 - 1);
    v12 += 4;
  }
  while ( v12 != v43 );
  v14 = 0;
  dest[19] = *(_DWORD *)(a2 + 48);
  Xhash((int)&v34, dest);
  v15 = dest;
  do
  {
    v17 = *((unsigned __int8 *)v15 - 1);
    v15 = (unsigned int *)((char *)v15 - 1);
    v16 = v17;
    if ( v17 >> 7 )
      break;
    if ( (v16 & 0x40) != 0 )
    {
      v14 = (unsigned __int8)(v14 + 1);
      break;
    }
    if ( (v16 & 0x20) != 0 )
    {
      v14 = (unsigned __int8)(v14 + 2);
      break;
    }
    if ( (v16 & 0x10) != 0 )
    {
      v14 = (unsigned __int8)(v14 + 3);
      break;
    }
    if ( (v16 & 8) != 0 )
    {
      v14 = (unsigned __int8)(v14 + 4);
      break;
    }
    if ( (v16 & 4) != 0 )
    {
      v14 = (unsigned __int8)(v14 + 5);
      break;
    }
    if ( (v16 & 2) != 0 )
    {
      v14 = (unsigned __int8)(v14 + 6);
      break;
    }
    if ( (v16 & 1) != 0 )
    {
      v14 = (unsigned __int8)(v14 + 7);
      break;
    }
    v14 = (unsigned __int8)(v14 + 8);
  }
  while ( &v34 != v15 );
  if ( v14 <= 0x22 )
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(
      v43,
      0x1000u,
      0,
      "hw error calculate diff %d ans diff %d TICKET_MASK_DASH %d",
      v14,
      *(unsigned __int8 *)(a2 + 52),
      35);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
      73,
      "check_nonce_dash",
      16,
      643,
      20,
      v43);
    v29 = (unsigned __int8)(*(_BYTE *)(a1 + 292) + 1);
    *(_BYTE *)(a1 + 292) = v29;
    if ( v29 )
      return 6;
    else
      return 2;
  }
  else if ( *(unsigned __int8 *)(a2 + 52) == v14 )
  {
    if ( v9 > v14 )
      goto LABEL_37;
    v18 = 32 * (*(unsigned __int8 *)(a2 + 53) + 496);
    v19 = (_DWORD *)(v8 + v18);
    v20 = *(_DWORD *)(v8 + v18 + 28);
    if ( v20 > v41 )
      return 0;
    if ( v20 < v41
      || (v21 = v19[6], v21 <= v40)
      && (v21 < v40
       || (v22 = v19[5], v22 <= v39)
       && (v22 < v39
        || (v23 = v19[4], v38 >= v23)
        && (v38 > v23
         || (v24 = v19[3], v24 <= v37)
         && (v24 < v37
          || (v25 = v19[2], v36 >= v25)
          && (v36 > v25
           || (v26 = v19[1], v35 >= v26) && (v35 > v26 || (v27 = *(_DWORD *)(v8 + v18), v34 >= v27) && v34 > v27)))))) )
    {
LABEL_37:
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v43, 0x1000u, 0, "hw diff (%d<%d) not reach pool", *(unsigned __int8 *)(a2 + 52), v9);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
        73,
        "check_nonce_dash",
        16,
        666,
        20,
        v43);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v43, 0x1000u, 0, "diff not match (%d!=%d) expected diff %d", v14, *(unsigned __int8 *)(a2 + 52), v9);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
      73,
      "check_nonce_dash",
      16,
      652,
      20,
      v43);
    return 3;
  }
}
