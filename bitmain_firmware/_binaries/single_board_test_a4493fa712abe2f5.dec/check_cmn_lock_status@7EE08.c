int __fastcall check_cmn_lock_status(_DWORD *a1, int a2, _BYTE *a3, int a4, int a5)
{
  char *v5; // r4
  int v6; // r6
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  _BYTE *v11; // r3
  int v12; // r0
  int v13; // r4
  _BYTE *v14; // r10
  int v15; // r3
  char v16; // r1
  int v19; // [sp+0h] [bp-88h]
  int v20; // [sp+14h] [bp-74h]
  int v21; // [sp+18h] [bp-70h]
  int v22; // [sp+1Ch] [bp-6Ch]
  int v25; // [sp+30h] [bp-58h]
  _BYTE v26[16]; // [sp+38h] [bp-50h] BYREF
  _BYTE v27[64]; // [sp+48h] [bp-40h] BYREF
  char _88[4120]; // [sp+88h] [bp+0h] BYREF

  v5 = "check_cmn_lock_status";
  v6 = (int)a3;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(_88, 0x1000u, 0, "%s...", "check_cmn_lock_status");
  pthread_mutex_unlock(&stru_3B526C);
  v7 = zlog(
         g_zc,
         "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
         71,
         "check_cmn_lock_status",
         21,
         8745,
         60,
         _88);
  if ( v6 == 255 )
  {
    v25 = 14;
    v7 = 100991489;
    v8 = 235735561;
    v9 = 134677248;
    v10 = 3851;
    v5 = v26;
  }
  else
  {
    v10 = 1;
  }
  if ( v6 == 255 )
  {
    *(_DWORD *)v5 = v7;
    *((_DWORD *)v5 + 1) = v8;
    *((_DWORD *)v5 + 2) = v9;
    *((_WORD *)v5 + 6) = v10;
  }
  else
  {
    v25 = v10;
  }
  v21 = 0;
  v22 = 0;
  do
  {
    v11 = a3;
    if ( a3 == (_BYTE *)255 )
      v11 = v26;
    else
      v6 = (int)a3;
    if ( a3 == (_BYTE *)255 )
      v6 = (unsigned __int8)v11[v22];
    if ( v6 != 3 )
    {
      v12 = sub_D47F8(a1, v6, 0x801Du, (int)v27);
      if ( v12 > 0 )
      {
        v13 = 0;
        v20 = 8 * v12;
        do
        {
          while ( 1 )
          {
            v14 = &v27[v13];
            v15 = *(_DWORD *)&v27[v13 + 4];
            __pld(&v27[v13 + 20]);
            if ( (v15 & 0x20000000) != 0 )
              break;
            ++v21;
            if ( a5 )
            {
              __pld((void *)(a5 + 32 + v6 + 2 * v13));
              *(_BYTE *)(a5 + v6 + 2 * v13) = 1;
            }
            pthread_mutex_lock(&stru_3B526C);
            logfmt_raw(
              _88,
              0x1000u,
              0,
              "chip_id %02x core_id %02x %08x cmn lock failed!",
              (unsigned __int8)v27[v13],
              (unsigned __int8)v14[1],
              *((_DWORD *)v14 + 1));
            pthread_mutex_unlock(&stru_3B526C);
            zlog(
              g_zc,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "check_cmn_lock_status",
              21,
              8776,
              100,
              _88);
            v16 = v27[v13];
            v13 += 8;
            ajust_retry_param((int)a1, v16, v6);
            if ( v13 == v20 )
              goto LABEL_23;
          }
          if ( a5 )
            *(_BYTE *)(a5 + v6 + 2 * v13) = 0;
          pthread_mutex_lock(&stru_3B526C);
          v19 = (unsigned __int8)v27[v13];
          v13 += 8;
          logfmt_raw(_88, 0x1000u, 0, "chip_id %02x core_id %02x cmn locked", v19, (unsigned __int8)v14[1]);
          pthread_mutex_unlock(&stru_3B526C);
          zlog(
            g_zc,
            "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
            71,
            "check_cmn_lock_status",
            21,
            8770,
            60,
            _88);
        }
        while ( v13 != v20 );
      }
    }
LABEL_23:
    ;
  }
  while ( v25 != ++v22 );
  if ( byte_129788 )
    byte_129788 = 0;
  return v21;
}
