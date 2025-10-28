int __fastcall check_bist_rx_running(_DWORD *a1, int a2, unsigned int a3, unsigned __int16 a4)
{
  pthread_mutex_t *v6; // r5
  int v7; // r3
  unsigned int i; // r3
  int v9; // r7
  int v10; // r0
  _QWORD *v11; // r4
  _QWORD *v12; // r8
  int v13; // r0
  int v14; // r12
  int v15; // r2
  int v16; // r3
  int v18; // [sp+1Ch] [bp-1058h]
  unsigned int v19; // [sp+20h] [bp-1054h]
  unsigned int v21; // [sp+28h] [bp-104Ch]
  _BYTE v23[20]; // [sp+30h] [bp-1044h] BYREF
  _QWORD v24[5]; // [sp+44h] [bp-1030h] BYREF
  char v25[4100]; // [sp+70h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v25, 0x1000u, 0, "%s...", "check_bist_rx_running");
  v19 = a4;
  pthread_mutex_unlock(&stru_3B526C);
  LOWORD(v6) = (unsigned __int16)&stru_3B526C;
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "check_bist_rx_running",
    21,
    8946,
    60,
    v25);
  if ( a3 == 255 )
    v7 = 16;
  else
    v7 = 1;
  HIWORD(v6) = (unsigned int)&stru_3B526C >> 16;
  v21 = v7;
  for ( i = 0; i < v21; i = (unsigned __int8)(v18 + 1) )
  {
    if ( a3 != 255 )
      i = a3;
    v18 = i;
    if ( v19 )
    {
      v9 = 0;
      do
      {
        v10 = sub_D47F8(a1, v18, (v9 << 12) & 0xF000 | 0x11, (int)v23);
        if ( v10 > 0 )
        {
          v11 = v24;
          v12 = &v24[v10];
          do
          {
            v16 = *((_DWORD *)v11 - 4);
            __pld(v11);
            if ( (v16 & 0x400) != 0 || (v16 & 0x8000000) == 0 )
            {
              pthread_mutex_lock(v6);
              logfmt_raw(
                v25,
                0x1000u,
                0,
                "channel %1x, chip_id %02x core_id %02x %08x rx bist run failed",
                v9,
                *((unsigned __int8 *)v11 - 20),
                *((unsigned __int8 *)v11 - 19),
                v23);
              pthread_mutex_unlock(v6);
              v13 = g_zc;
              v14 = 100;
              v15 = 8963;
            }
            else
            {
              pthread_mutex_lock(v6);
              logfmt_raw(
                v25,
                0x1000u,
                0,
                "channel %1x, chip_id %02x core_id %02x rx bist is running",
                v9,
                *((unsigned __int8 *)v11 - 20),
                *((unsigned __int8 *)v11 - 19));
              pthread_mutex_unlock(v6);
              v13 = g_zc;
              v14 = 60;
              v15 = 8960;
            }
            ++v11;
            zlog(
              v13,
              "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
              71,
              "check_bist_rx_running",
              21,
              v15,
              v14,
              v25);
          }
          while ( v12 != v11 );
        }
        ++v9;
      }
      while ( v19 > (unsigned __int16)v9 );
    }
  }
  return 0;
}
