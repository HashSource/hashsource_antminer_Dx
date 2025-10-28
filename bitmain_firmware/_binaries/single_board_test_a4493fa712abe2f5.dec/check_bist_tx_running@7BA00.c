int __fastcall check_bist_tx_running(_DWORD *a1, int a2, int a3, int a4)
{
  _BYTE *v4; // r4
  bool v5; // zf
  unsigned __int16 v6; // r5
  _DWORD *v7; // r9
  int v8; // r10
  pthread_mutex_t *v9; // r6
  int v10; // r3
  int v11; // r5
  unsigned int v12; // r2
  int v14; // r0
  _QWORD *v15; // r4
  _QWORD *v16; // r8
  int v17; // r0
  int v18; // r12
  int v19; // r2
  int v20; // r2
  unsigned int v22; // [sp+18h] [bp-70h]
  int v23; // [sp+24h] [bp-64h]
  int v24; // [sp+28h] [bp-60h]
  _DWORD *v25; // [sp+2Ch] [bp-5Ch]
  int v26; // [sp+30h] [bp-58h]
  int v27; // [sp+34h] [bp-54h]
  _BYTE v28[16]; // [sp+38h] [bp-50h] BYREF
  _BYTE v29[20]; // [sp+48h] [bp-40h] BYREF
  _QWORD v30[5]; // [sp+5Ch] [bp-2Ch] BYREF
  char v31[4100]; // [sp+88h] [bp+0h] BYREF

  v5 = a3 == 255;
  v6 = a4;
  if ( a3 == 255 )
    a4 = (int)&unk_10D2AC;
  v25 = a1;
  v26 = a3;
  if ( a3 == 255 )
  {
    a3 = 14;
    v4 = v28;
    v27 = 14;
  }
  else
  {
    a4 = 1;
  }
  if ( v5 )
  {
    a1 = *(_DWORD **)a4;
    a2 = *(_DWORD *)(a4 + 4);
    a3 = *(_DWORD *)(a4 + 8);
    a4 = *(_DWORD *)(a4 + 12);
  }
  LOWORD(v7) = (unsigned __int16)&g_zc;
  LOWORD(v8) = (unsigned __int16)"check_bist_tx_running";
  if ( !v5 )
    v27 = a4;
  HIWORD(v7) = (unsigned int)&g_zc >> 16;
  LOWORD(v9) = (unsigned __int16)&stru_3B526C;
  HIWORD(v8) = (unsigned int)"check_bist_tx_running" >> 16;
  if ( v5 )
  {
    *(_DWORD *)v4 = a1;
    *((_DWORD *)v4 + 1) = a2;
    *((_DWORD *)v4 + 2) = a3;
    *((_WORD *)v4 + 6) = a4;
  }
  HIWORD(v9) = (unsigned int)&stru_3B526C >> 16;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v31, 0x1000u, 0, "%s phy_num %d...", "check_bist_tx_running", v27);
  v22 = v6;
  pthread_mutex_unlock(&stru_3B526C);
  zlog(*v7, "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c", 71, v8, 21, 8896, 60, v31);
  v24 = 0;
  do
  {
    v10 = v26;
    if ( v26 == 255 )
      v10 = (unsigned __int8)v28[v24];
    v23 = v10;
    if ( v22 )
    {
      v11 = 0;
      v12 = 0;
      do
      {
        if ( v12 > 3 || v23 != 3 )
        {
          v14 = sub_D47F8(v25, v23, (unsigned __int16)((_WORD)v12 << 12) | 0x4A, (int)v29);
          if ( v14 > 0 )
          {
            v15 = v30;
            v16 = &v30[v14];
            do
            {
              v20 = *((_DWORD *)v15 - 4);
              __pld(v15);
              if ( (v20 & 0x200) != 0 )
              {
                pthread_mutex_lock(v9);
                logfmt_raw(
                  v31,
                  0x1000u,
                  0,
                  "channel %1x, chip_id %02x core_id %02x tx bist is running",
                  v11,
                  *((unsigned __int8 *)v15 - 20),
                  *((unsigned __int8 *)v15 - 19));
                pthread_mutex_unlock(v9);
                v17 = *v7;
                v18 = 20;
                v19 = 8914;
              }
              else
              {
                pthread_mutex_lock(v9);
                logfmt_raw(
                  v31,
                  0x1000u,
                  0,
                  "channel %1x, chip_id %02x core_id %02x %08x tx bist run failed",
                  v11,
                  *((unsigned __int8 *)v15 - 20),
                  *((unsigned __int8 *)v15 - 19),
                  *((_DWORD *)v15 - 4));
                pthread_mutex_unlock(v9);
                v17 = *v7;
                v18 = 100;
                v19 = 8917;
              }
              ++v15;
              zlog(
                v17,
                "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
                71,
                v8,
                21,
                v19,
                v18,
                v31);
            }
            while ( v16 != v15 );
          }
        }
        v12 = (unsigned __int16)++v11;
      }
      while ( v22 > (unsigned __int16)v11 );
    }
    v5 = v27 == ++v24;
  }
  while ( !v5 );
  return 0;
}
