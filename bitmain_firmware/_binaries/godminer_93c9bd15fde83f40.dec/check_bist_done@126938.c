int __fastcall check_bist_done(int a1, int a2, int a3, unsigned __int16 a4)
{
  int v7; // r0
  int v8; // r1
  int v9; // r2
  _BYTE *v10; // r12
  pthread_mutex_t *v11; // r6
  int v12; // r3
  int v13; // r3
  int v14; // r5
  unsigned int v15; // r2
  int v17; // r0
  unsigned __int8 *v18; // r4
  unsigned __int8 *v19; // r7
  int v20; // r3
  unsigned int v23; // [sp+18h] [bp-106Ch]
  int v24; // [sp+20h] [bp-1064h]
  int v25; // [sp+24h] [bp-1060h]
  int v27; // [sp+2Ch] [bp-1058h]
  _BYTE v28[16]; // [sp+30h] [bp-1054h] BYREF
  _QWORD v29[8]; // [sp+40h] [bp-1044h] BYREF
  char v30[4100]; // [sp+80h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v30, 0x1000u, 0, "%s...", "check_bist_done");
  pthread_mutex_unlock(&stru_1A8A24);
  v7 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
         "in_master/backend/backend_eth/backend_eth.c",
         154,
         "check_bist_done",
         15,
         8992,
         60,
         v30);
  LOWORD(v11) = (unsigned __int16)&stru_1A8A24;
  if ( a3 == 255 )
  {
    v27 = 14;
    v7 = 100991489;
    v8 = 235735561;
    v9 = 134677248;
    v12 = 3851;
    v10 = v28;
  }
  else
  {
    v12 = 1;
  }
  if ( a3 != 255 )
    v27 = v12;
  HIWORD(v11) = (unsigned int)&stru_1A8A24 >> 16;
  if ( a3 == 255 )
  {
    *(_DWORD *)v10 = v7;
    *((_DWORD *)v10 + 1) = v8;
    *((_DWORD *)v10 + 2) = v9;
    *((_WORD *)v10 + 6) = v12;
  }
  v23 = a4;
  v25 = 0;
  do
  {
    v13 = a3;
    if ( a3 == 255 )
      v13 = (unsigned __int8)v28[v25];
    v24 = v13;
    if ( v23 )
    {
      v14 = 0;
      v15 = 0;
      do
      {
        if ( v15 > 3 || v24 != 3 )
        {
          v17 = sub_C20C4(a1, v24, (unsigned __int16)((_WORD)v15 << 12) | 0x11, (int)v29);
          if ( v17 > 0 )
          {
            v18 = (unsigned __int8 *)v29;
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
                  *(_DWORD *)(a1 + 132),
                  v14,
                  *v18,
                  v18[1]);
                pthread_mutex_unlock(v11);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/backend_eth/backend_eth.c",
                  154,
                  "check_bist_done",
                  15,
                  9014,
                  100,
                  v30);
              }
              v18 += 8;
            }
            while ( v19 != v18 );
          }
        }
        v15 = (unsigned __int16)++v14;
      }
      while ( v23 > (unsigned __int16)v14 );
    }
  }
  while ( v27 != ++v25 );
  return 0;
}
