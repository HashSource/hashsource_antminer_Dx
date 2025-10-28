int __fastcall check_bist_rx_running(int a1, int a2, unsigned int a3, unsigned __int16 a4)
{
  pthread_mutex_t *v6; // r5
  int v7; // r11
  int v8; // r7
  int v9; // r3
  unsigned int v10; // r3
  int v11; // r7
  int v12; // r0
  _QWORD *v13; // r4
  _QWORD *v14; // r8
  int v15; // r0
  int v16; // r12
  int v17; // r2
  int v18; // r3
  int v20; // [sp+14h] [bp-1060h]
  int v21; // [sp+18h] [bp-105Ch]
  int v22; // [sp+1Ch] [bp-1058h]
  unsigned int v23; // [sp+20h] [bp-1054h]
  unsigned int v25; // [sp+28h] [bp-104Ch]
  _BYTE v27[20]; // [sp+30h] [bp-1044h] BYREF
  _QWORD v28[5]; // [sp+44h] [bp-1030h] BYREF
  char v29[4100]; // [sp+70h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v29, 0x1000u, 0, 1560772, "check_bist_rx_running");
  v23 = a4;
  pthread_mutex_unlock(&stru_1A8A24);
  LOWORD(v6) = -30172;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "check_bist_rx_running",
    21,
    8946,
    60,
    v29);
  LOWORD(v7) = 6236;
  LOWORD(v8) = -24584;
  if ( a3 == 255 )
    v9 = 16;
  else
    v9 = 1;
  HIWORD(v6) = 26;
  HIWORD(v7) = 23;
  v25 = v9;
  HIWORD(v8) = 24;
  v10 = 0;
  v20 = v8;
  do
  {
    if ( a3 != 255 )
      v10 = a3;
    v22 = v10;
    if ( v23 )
    {
      v11 = 0;
      do
      {
        v12 = sub_C20C4(a1, v22, (unsigned __int16)((_WORD)v11 << 12) | 0x11, (int)v27);
        if ( v12 > 0 )
        {
          v13 = v28;
          v14 = &v28[v12];
          do
          {
            v18 = *((_DWORD *)v13 - 4);
            __pld(v13);
            if ( (v18 & 0x400) != 0 || (v18 & 0x8000000) == 0 )
            {
              pthread_mutex_lock(v6);
              logfmt_raw(v29, 0x1000u, 0, v20, v11, *((unsigned __int8 *)v13 - 20), *((unsigned __int8 *)v13 - 19), v27);
              pthread_mutex_unlock(v6);
              v15 = g_zc;
              v16 = 100;
              v17 = 8963;
            }
            else
            {
              v21 = *(_DWORD *)(v13 - 2) & 0x400;
              pthread_mutex_lock(v6);
              logfmt_raw(
                v29,
                0x1000u,
                v21,
                1613696,
                v11,
                *((unsigned __int8 *)v13 - 20),
                *((unsigned __int8 *)v13 - 19));
              pthread_mutex_unlock(v6);
              v15 = g_zc;
              v16 = 60;
              v17 = 8960;
            }
            ++v13;
            zlog(v15, v7, 154, "check_bist_rx_running", 21, v17, v16, v29);
          }
          while ( v14 != v13 );
        }
        ++v11;
      }
      while ( v23 > (unsigned __int16)v11 );
    }
    v10 = (unsigned __int8)(v22 + 1);
  }
  while ( v25 > v10 );
  return 0;
}
