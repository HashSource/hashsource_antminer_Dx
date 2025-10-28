int __fastcall check_bist_done(_DWORD *a1, int a2, pthread_mutex_t *a3, unsigned __int16 a4)
{
  int v6; // r4
  int v7; // r0
  int v8; // r1
  int v9; // r2
  bool v10; // zf
  pthread_mutex_t *v11; // r6
  int v12; // r3
  int v13; // r3
  int v14; // r5
  unsigned int i; // r2
  int v17; // r0
  unsigned __int8 *v18; // r4
  unsigned __int8 *v19; // r7
  int v20; // r3
  __int16 v22; // [sp+14h] [bp-1078h]
  unsigned int v23; // [sp+20h] [bp-106Ch]
  int v24; // [sp+28h] [bp-1064h]
  int v25; // [sp+2Ch] [bp-1060h]
  int v27; // [sp+34h] [bp-1058h]
  _BYTE v28[16]; // [sp+38h] [bp-1054h] BYREF
  _QWORD v29[8]; // [sp+48h] [bp-1044h] BYREF
  char v30[4100]; // [sp+88h] [bp-1004h] BYREF

  v11 = a3;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v30, 0x1000u, 0, "%s...", "check_bist_done");
  v6 = 8992;
  pthread_mutex_unlock(&stru_3B526C);
  v7 = zlog(
         g_zc,
         "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
         71,
         "check_bist_done",
         15,
         8992,
         60,
         v30);
  v10 = v11 == (pthread_mutex_t *)255;
  LOWORD(v11) = (unsigned __int16)&stru_3B526C;
  if ( v10 )
  {
    v27 = 14;
    v7 = 100991489;
    v8 = 235735561;
    v9 = 134677248;
    v12 = 3851;
    v6 = (int)v28;
  }
  else
  {
    v12 = 1;
  }
  HIWORD(v11) = (unsigned int)&stru_3B526C >> 16;
  if ( v10 )
  {
    *(_DWORD *)v6 = v7;
    *(_DWORD *)(v6 + 4) = v8;
    *(_DWORD *)(v6 + 8) = v9;
    v6 += 12;
  }
  else
  {
    v27 = v12;
  }
  if ( v10 )
    *(_WORD *)v6 = v12;
  v23 = a4;
  v25 = 0;
  do
  {
    v13 = (int)a3;
    if ( a3 == (pthread_mutex_t *)255 )
      v13 = (unsigned __int8)v28[v25];
    v24 = v13;
    if ( v23 )
    {
      v14 = 0;
      for ( i = 0; i < v23; i = (unsigned __int16)(v22 + 1) )
      {
        while ( 1 )
        {
          if ( i > 3 || v24 != 3 )
          {
            v17 = sub_D47F8(a1, v24, (unsigned __int16)((_WORD)i << 12) | 0x11, (int)v29);
            if ( v17 > 0 )
              break;
          }
          i = (unsigned __int16)++v14;
          if ( v23 <= (unsigned __int16)v14 )
            goto LABEL_26;
        }
        v18 = (unsigned __int8 *)v29;
        v22 = v14;
        v19 = (unsigned __int8 *)&v29[v17];
        do
        {
          v20 = *((_DWORD *)v18 + 1);
          if ( (v20 & 0x20000) != 0 || (v20 & 0x400) == 0 )
          {
            pthread_mutex_lock(v11);
            logfmt_raw(
              v30,
              0x1000u,
              0,
              "chain %d channel %1x, chip_id %02x core_id %02x bist error",
              a1[30],
              v14,
              *v18,
              v18[1]);
            pthread_mutex_unlock(v11);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "check_bist_done",
              15,
              9014,
              100,
              v30);
          }
          v18 += 8;
        }
        while ( v19 != v18 );
        ++v14;
      }
    }
LABEL_26:
    v10 = v27 == ++v25;
  }
  while ( !v10 );
  return 0;
}
