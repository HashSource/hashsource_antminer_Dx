int __fastcall check_d54(_DWORD *a1, int a2, int a3, int a4, unsigned __int8 a5)
{
  char *v7; // r5
  int *v8; // r10
  int v9; // r0
  int v10; // r1
  int v11; // r2
  __int16 v12; // r3
  int v13; // r3
  int *v14; // r9
  int v15; // r5
  int v16; // r8
  unsigned int v17; // r2
  _BOOL4 v18; // r3
  int v19; // r4
  _BYTE *v20; // r10
  int v21; // r3
  unsigned __int8 *v24; // r7
  int v25; // r0
  int v26; // t1
  int v27; // [sp+4h] [bp-9Ch]
  int v28; // [sp+1Ch] [bp-84h]
  int v29; // [sp+1Ch] [bp-84h]
  unsigned int v30; // [sp+28h] [bp-78h]
  int v31; // [sp+2Ch] [bp-74h]
  int v33; // [sp+38h] [bp-68h]
  int v34; // [sp+40h] [bp-60h]
  int v35; // [sp+44h] [bp-5Ch]
  int v37; // [sp+4Ch] [bp-54h]
  _BYTE v38[16]; // [sp+50h] [bp-50h] BYREF
  _BYTE v39[64]; // [sp+60h] [bp-40h] BYREF
  char v40[4096]; // [sp+A0h] [bp+0h] BYREF

  v7 = "check_d54";
  v8 = &g_zc;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v40, 0x1000u, 0, "%s...", "check_d54");
  pthread_mutex_unlock(&stru_3B526C);
  v9 = zlog(
         g_zc,
         "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
         71,
         "check_d54",
         9,
         3422,
         60,
         v40);
  if ( a3 == 255 )
  {
    v37 = 14;
    v9 = 100991489;
    v10 = 235735561;
    v11 = 134677248;
    v12 = 3851;
    v7 = v38;
  }
  else
  {
    v12 = 1;
    v37 = 1;
  }
  if ( a3 == 255 )
  {
    *(_DWORD *)v7 = v9;
    *((_DWORD *)v7 + 1) = v10;
    *((_DWORD *)v7 + 2) = v11;
    *((_WORD *)v7 + 6) = v12;
  }
  v30 = (unsigned __int16)a4;
  v34 = 8 * a4;
  v35 = 0;
  do
  {
    v13 = a3;
    v14 = v8;
    if ( a3 == 255 )
      v13 = (unsigned __int8)v38[v35];
    v31 = v13;
    v33 = 21;
    while ( 1 )
    {
      usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
      if ( !v30 )
        break;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      while ( 1 )
      {
        v18 = v17 <= 3 && v31 == 3;
        v19 = v18;
        if ( !v18 )
          break;
        ++v15;
LABEL_13:
        v17 = (unsigned __int16)v15;
        if ( v30 <= (unsigned __int16)v15 )
          goto LABEL_26;
      }
      v28 = sub_D47F8(a1, v31, (unsigned __int16)((_WORD)v17 << 12) | 0x36, (int)v39);
      if ( v28 > 0 )
      {
        if ( a5 )
        {
          v24 = v39;
          while ( (a5 & ~*((_DWORD *)v24 + 1)) == 0 )
          {
            ++v19;
            pthread_mutex_lock(&stru_3B526C);
            v25 = v24[1];
            v26 = *v24;
            v24 += 8;
            ++v16;
            logfmt_raw(
              v40,
              0x1000u,
              0,
              "channel %1x, chip_id %02x core_id %02x d'54 bit[3] change to %d",
              v15,
              v26,
              v25,
              a5);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              *v14,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "check_d54",
              9,
              3452,
              20,
              v40);
            if ( v28 == v19 )
              goto LABEL_25;
          }
          v21 = 8 * v19;
        }
        else
        {
          v19 = 0;
          while ( 1 )
          {
            v20 = &v39[8 * v19];
            if ( (*((_DWORD *)v20 + 1) & 8) != 0 )
              break;
            pthread_mutex_lock(&stru_3B526C);
            v27 = (unsigned __int8)v39[8 * v19++];
            ++v16;
            logfmt_raw(
              v40,
              0x1000u,
              0,
              "channel %1x, chip_id %02x core_id %02x d'54 bit[3] change to %d",
              v15,
              v27,
              (unsigned __int8)v20[1],
              0);
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              *v14,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "check_d54",
              9,
              3452,
              20,
              v40);
            if ( v19 == v28 )
              goto LABEL_25;
          }
          v21 = 8 * v19;
        }
        v29 = v21;
        pthread_mutex_lock(&stru_3B526C);
        v16 >>= 3;
        logfmt_raw(
          v40,
          0x1000u,
          0,
          "channel %1x, chip_id %02x core_id %02x %08x d'54 bit[3] error status, exp:%02x",
          v15,
          (unsigned __int8)v39[8 * v19],
          (unsigned __int8)v39[v29 + 1],
          bswap32(*(_DWORD *)&v39[v29 + 4]),
          a5);
        pthread_mutex_unlock(&stru_3B526C);
        zlog(
          *v14,
          "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
          71,
          "check_d54",
          9,
          3456,
          100,
          v40);
      }
LABEL_25:
      ++v15;
      if ( v16 >= 8 * v15 )
        goto LABEL_13;
LABEL_26:
      if ( v16 >= v34 )
        break;
      if ( !--v33 )
      {
        v8 = v14;
        goto LABEL_29;
      }
    }
    v8 = v14;
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v40, 0x1000u, 0, "all lanes d'54 bit[3] change to %d", a5);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      *v14,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
      71,
      "check_d54",
      9,
      3465,
      20,
      v40);
LABEL_29:
    ;
  }
  while ( v37 != ++v35 );
  return 0;
}
