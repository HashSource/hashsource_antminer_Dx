int __fastcall chip_setting_check_bist_ltc(int a1, int a2, int a3, int a4, int *a5)
{
  int v6; // r4
  int v7; // r5
  size_t v8; // r7
  size_t v9; // r9
  char *v10; // r10
  char v11; // r1
  int v12; // r9
  unsigned __int16 *v13; // r3
  int v14; // r1
  int v15; // r2
  int v17; // r1
  unsigned __int16 *v18; // r4
  int v19; // r7
  int v20; // r1
  int v21; // r5
  unsigned int v22; // r0
  int v23; // r8
  int *v24; // r11
  int *v25; // r5
  int *v27; // r5
  int v28; // r7
  int v30; // [sp+4h] [bp-1078h]
  int v33; // [sp+38h] [bp-1044h]
  int v34; // [sp+3Ch] [bp-1040h]
  int v35; // [sp+44h] [bp-1038h] BYREF
  _DWORD v36[2]; // [sp+48h] [bp-1034h] BYREF
  int v37; // [sp+50h] [bp-102Ch]
  int v38; // [sp+54h] [bp-1028h]
  const char *v39; // [sp+58h] [bp-1024h]
  int v40; // [sp+5Ch] [bp-1020h]
  int v41; // [sp+60h] [bp-101Ch]
  int v42; // [sp+64h] [bp-1018h]
  int v43; // [sp+68h] [bp-1014h]
  int v44; // [sp+6Ch] [bp-1010h]
  int v45; // [sp+70h] [bp-100Ch]
  int v46; // [sp+74h] [bp-1008h]
  char v47[4100]; // [sp+78h] [bp-1004h] BYREF

  v35 = 0;
  v6 = a2;
  if ( a2 )
  {
    v7 = *(_DWORD *)(a1 + 180);
    v8 = 4 * v7;
    v9 = 12 * v7;
  }
  else
  {
    v8 = 4;
    v9 = 12;
    v7 = 1;
  }
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v47, 0x1000u, 0, "check bist result, chip_all %d chip_no %d core %d ", v6, a3, a4);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_ltc/chip_setting_ltc.c",
    76,
    "chip_setting_check_bist_ltc",
    27,
    184,
    60,
    v47);
  v10 = (char *)calloc(v9, 1u);
  memset(a5, 0, v8);
  v36[0] = 0;
  v36[1] = 0;
  v38 = 0;
  v37 = (unsigned __int8)v6;
  if ( v6 )
  {
    v17 = *(_DWORD *)(a1 + 184);
    BYTE1(v37) = 0;
    HIBYTE(v38) = a4;
    BYTE1(v38) = v17;
    LOBYTE(v38) = a4;
    HIWORD(v37) = 6;
    (*(void (__fastcall **)(int, _DWORD *, int, char *, int *, int, int, _DWORD))(a1 + 168))(
      a1,
      v36,
      v7,
      v10,
      &v35,
      v30,
      2000,
      0);
    v12 = v35;
    if ( v35 > 0 )
    {
      v33 = v7;
      v34 = v6;
      v18 = (unsigned __int16 *)(v10 + 102);
      v19 = (int)&v10[12 * v35 + 102];
      do
      {
        v20 = *(v18 - 48);
        v21 = 0;
        v22 = *((unsigned __int8 *)v18 - 98);
        __pld(v18);
        v18 += 6;
        if ( v20 == 6 )
          v21 = *((_BYTE *)v18 - 111) & 1;
        a5[v22 / *(_DWORD *)(a1 + 224)] = v21;
      }
      while ( v18 != (unsigned __int16 *)v19 );
      v7 = v33;
      v6 = v34;
      if ( v33 <= v12 )
        goto LABEL_11;
      goto LABEL_19;
    }
  }
  else
  {
    v11 = *(_BYTE *)(*(_DWORD *)(a1 + 280) + a3);
    BYTE1(v38) = *(_DWORD *)(a1 + 184);
    HIBYTE(v38) = a4;
    BYTE1(v37) = v11;
    LOBYTE(v38) = a4;
    HIWORD(v37) = 6;
    (*(void (__fastcall **)(int, _DWORD *, int, char *, int *, int, int, _DWORD))(a1 + 168))(
      a1,
      v36,
      v7,
      v10,
      &v35,
      v30,
      2000,
      0);
    v12 = v35;
    if ( v35 > 0 )
    {
      v13 = (unsigned __int16 *)v10;
      do
      {
        v14 = v13[3];
        v15 = 0;
        v13 += 6;
        if ( v14 == 6 )
          v15 = *((_BYTE *)v13 - 9) & 1;
      }
      while ( v13 != (unsigned __int16 *)&v10[12 * v35] );
      *a5 = v15;
    }
  }
  if ( v7 <= v12 )
  {
LABEL_11:
    v6 = 0;
    goto LABEL_12;
  }
LABEL_19:
  pthread_mutex_lock(&stru_3B526C);
  v23 = *(_DWORD *)(a1 + 124);
  v39 = "chain";
  v40 = 5;
  v41 = 3;
  v45 = 0;
  v43 = v23;
  v44 = v23 >> 31;
  ++dword_3B52A8;
  logfmt_raw(
    v47,
    0x1000u,
    0,
    v46,
    "chain",
    5,
    3,
    v42,
    (__int64)v23,
    0,
    v46,
    "detected core %d get check bist results less than expect num(%d < %d)",
    a4,
    v35,
    v7);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_ltc/chip_setting_ltc.c",
    76,
    "chip_setting_check_bist_ltc",
    27,
    218,
    80,
    v47);
  if ( v7 <= 0 )
    goto LABEL_11;
  v24 = a5;
  if ( v6 )
  {
    v6 = 0;
    v27 = &a5[v7];
    v28 = 0;
    do
    {
      if ( !*v24++ )
      {
        pthread_mutex_lock(&stru_3B526C);
        v6 = -1;
        logfmt_raw(v47, 0x1000u, 0, "chip %d core %d check bist failed", v28, a4);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/backend_ltc/chip_setting_ltc.c",
          76,
          "chip_setting_check_bist_ltc",
          27,
          223,
          80,
          v47);
      }
      ++v28;
    }
    while ( v27 != v24 );
  }
  else
  {
    v25 = &a5[v7];
    do
    {
      if ( !*v24++ )
      {
        pthread_mutex_lock(&stru_3B526C);
        v6 = -1;
        logfmt_raw(v47, 0x1000u, 0, "chip %d core %d check bist failed", a3, a4);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          g_zc,
          "/home/xingfei.wang/work/1764/godminer/backend/backend_ltc/chip_setting_ltc.c",
          76,
          "chip_setting_check_bist_ltc",
          27,
          223,
          80,
          v47);
      }
    }
    while ( v25 != v24 );
  }
LABEL_12:
  free(v10);
  return v6;
}
