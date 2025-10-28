int __fastcall chip_setting_check_bist_ltc(int a1, int a2, int a3, int a4, int *a5)
{
  size_t v5; // r8
  int v7; // r3
  size_t v8; // r9
  char *v9; // r11
  int v10; // lr
  char v11; // r0
  int v12; // r9
  unsigned __int16 *v13; // r3
  int v14; // r1
  int v15; // r2
  int v16; // r7
  int v18; // r0
  unsigned __int16 *v19; // r6
  int v20; // r8
  int v21; // r1
  int v22; // r9
  unsigned int v23; // r0
  int v24; // r8
  int *v25; // r5
  int *v26; // r6
  int v28; // r8
  int *v29; // r6
  int v31; // [sp+0h] [bp-1084h]
  int v32; // [sp+4h] [bp-1080h]
  int v33; // [sp+34h] [bp-1050h]
  int v37; // [sp+44h] [bp-1040h]
  int v38; // [sp+4Ch] [bp-1038h] BYREF
  _DWORD v39[2]; // [sp+50h] [bp-1034h] BYREF
  int v40; // [sp+58h] [bp-102Ch]
  int v41; // [sp+5Ch] [bp-1028h]
  const char *v42; // [sp+60h] [bp-1024h]
  int v43; // [sp+64h] [bp-1020h]
  int v44; // [sp+68h] [bp-101Ch]
  int v45; // [sp+6Ch] [bp-1018h]
  __int64 v46; // [sp+70h] [bp-1014h]
  int v47; // [sp+78h] [bp-100Ch]
  int v48; // [sp+7Ch] [bp-1008h]
  char v49[4096]; // [sp+80h] [bp-1004h] BYREF

  if ( a2 )
    v7 = *(_DWORD *)(a1 + 192);
  else
    v7 = 1;
  if ( a2 )
    v33 = v7;
  else
    v5 = 4;
  if ( a2 )
  {
    v8 = 3 * v7;
    v5 = 4 * v7;
  }
  else
  {
    v8 = 12;
  }
  if ( a2 )
    v8 *= 4;
  else
    v33 = v7;
  v38 = 0;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v49, 0x1000u, 0, "check bist result, chip_all %d chip_no %d core %d ", a2, a3, a4);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/chip_setting_ltc.c",
    159,
    "chip_setting_check_bist_ltc",
    27,
    186,
    20,
    v49);
  v9 = (char *)calloc(v8, 1u);
  memset(a5, 0, v5);
  v39[0] = 0;
  v39[1] = 0;
  v41 = 0;
  v40 = (unsigned __int8)a2;
  if ( a2 )
  {
    v18 = *(_DWORD *)(a1 + 196);
    BYTE1(v40) = 0;
    BYTE1(v41) = v18;
    HIBYTE(v41) = a4;
    LOBYTE(v41) = a4;
    HIWORD(v40) = 6;
    (*(void (__fastcall **)(int, _DWORD *, int, char *, int *, int, int, _DWORD))(a1 + 180))(
      a1,
      v39,
      v33,
      v9,
      &v38,
      v32,
      2000,
      0);
    v12 = v38;
    if ( v38 > 0 )
    {
      v37 = v38;
      v19 = (unsigned __int16 *)(v9 + 102);
      v20 = (int)&v9[12 * v38 + 102];
      do
      {
        v21 = *(v19 - 48);
        v22 = 0;
        v23 = *((unsigned __int8 *)v19 - 98);
        __pld(v19);
        v19 += 6;
        if ( v21 == 6 )
          v22 = *((_BYTE *)v19 - 111) & 1;
        a5[v23 / *(_DWORD *)(a1 + 240)] = v22;
      }
      while ( v19 != (unsigned __int16 *)v20 );
      if ( v33 <= v37 )
        goto LABEL_21;
      goto LABEL_29;
    }
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 196);
    v11 = *(_BYTE *)(*(_DWORD *)(a1 + 296) + a3);
    HIBYTE(v41) = a4;
    BYTE1(v40) = v11;
    LOBYTE(v41) = a4;
    HIWORD(v40) = 6;
    BYTE1(v41) = v10;
    (*(void (__fastcall **)(int, _DWORD *, int, char *, int *, int, int, _DWORD))(a1 + 180))(
      a1,
      v39,
      v33,
      v9,
      &v38,
      v32,
      2000,
      0);
    v12 = v38;
    if ( v38 > 0 )
    {
      v13 = (unsigned __int16 *)v9;
      do
      {
        v14 = v13[3];
        v15 = 0;
        v13 += 6;
        if ( v14 == 6 )
          v15 = *((_BYTE *)v13 - 9) & 1;
      }
      while ( v13 != (unsigned __int16 *)&v9[12 * v38] );
      *a5 = v15;
    }
  }
  if ( v33 <= v12 )
  {
LABEL_21:
    v16 = 0;
    goto LABEL_22;
  }
LABEL_29:
  pthread_mutex_lock(&stru_1A8A24);
  v24 = *(_DWORD *)(a1 + 136);
  v42 = "chain";
  v43 = 5;
  v44 = 3;
  v46 = v24;
  v47 = 0;
  ++dword_1A8A20[0];
  logfmt_raw(
    v49,
    0x1000u,
    0,
    v48,
    "chain",
    5,
    3,
    v45,
    (__int64)v24,
    0,
    v48,
    "detected core %d get check bist results less than expect num(%d < %d)",
    a4,
    v38,
    v24);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/chip_setting_ltc.c",
    159,
    "chip_setting_check_bist_ltc",
    27,
    220,
    80,
    v49);
  if ( v33 <= 0 )
    goto LABEL_21;
  v16 = a2;
  v25 = a5;
  if ( a2 )
  {
    v16 = 0;
    v28 = 0;
    v29 = &a5[v33];
    do
    {
      while ( *v25++ )
      {
        ++v28;
        if ( v29 == v25 )
          goto LABEL_22;
      }
      v16 = -1;
      pthread_mutex_lock(&stru_1A8A24);
      v31 = v28++;
      logfmt_raw(v49, 0x1000u, 0, "chip %d core %d check bist failed", v31, a4);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_ltc/chip_setting_ltc.c",
        159,
        "chip_setting_check_bist_ltc",
        27,
        225,
        80,
        v49);
    }
    while ( v29 != v25 );
  }
  else
  {
    v26 = &a5[v33];
    do
    {
      while ( *v25++ )
      {
        if ( v26 == v25 )
          goto LABEL_22;
      }
      v16 = -1;
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v49, 0x1000u, 0, "chip %d core %d check bist failed", a3, a4);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_ltc/chip_setting_ltc.c",
        159,
        "chip_setting_check_bist_ltc",
        27,
        225,
        80,
        v49);
    }
    while ( v26 != v25 );
  }
LABEL_22:
  free(v9);
  return v16;
}
