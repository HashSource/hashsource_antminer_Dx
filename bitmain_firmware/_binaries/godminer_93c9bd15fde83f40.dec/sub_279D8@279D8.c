int __fastcall sub_279D8(char *s2)
{
  int v1; // r4
  int v3; // r3
  int v4; // r5
  char *v5; // r2
  int v6; // t1
  int v7; // r4
  int result; // r0
  _DWORD *v9; // r3
  char v10[4096]; // [sp+10h] [bp-1000h] BYREF

  v1 = dword_1A3E5C;
  if ( (unsigned int)dword_1A3E5C <= 0x13 )
  {
    if ( dword_1A3E5C )
    {
      v3 = (unsigned __int8)*s2;
      v1 = dword_1AB33C;
      if ( !*s2 )
      {
        v4 = 5381;
        goto LABEL_7;
      }
    }
    else
    {
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v10, 0x1000u, 0, "reject reason init %d", dword_1A3E5C);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
        127,
        "reject_reason_history_update",
        28,
        44,
        60,
        v10);
      reject_reason_map = 0;
      dword_1AB33C = 0;
      dword_1AB340 = 0;
      dword_1AB344 = 0;
      dword_1AB348 = 0;
      v3 = (unsigned __int8)*s2;
      if ( !*s2 )
        goto LABEL_16;
    }
    v5 = s2;
    v4 = 5381;
    do
    {
      v4 = (33 * v4) ^ v3;
      v6 = (unsigned __int8)*++v5;
      v3 = v6;
    }
    while ( v6 );
LABEL_7:
    if ( v1 )
    {
      v7 = *(_DWORD *)(reject_reason_map + 4 * ((v1 - 1) & v4));
      if ( v7 )
      {
        while ( 1 )
        {
          if ( v4 == *(_DWORD *)v7 )
          {
            result = strcmp((const char *)(v7 + 12), s2);
            if ( !result )
              break;
          }
          v7 = *(_DWORD *)(v7 + 8);
          if ( !v7 )
            goto LABEL_16;
        }
        v9 = *(_DWORD **)(v7 + 4);
        dword_1AB344 = (int)v9;
        if ( v9 )
        {
          ++*v9;
          return result;
        }
        goto LABEL_17;
      }
    }
LABEL_16:
    dword_1AB344 = 0;
LABEL_17:
    dword_1AB348 = 1;
    ++dword_1A3E5C;
    return map_set_((void **)&reject_reason_map, s2, &dword_1AB348, 4u);
  }
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v10, 0x1000u, 0, "only support %d reject reasons", dword_1A3E5C);
  pthread_mutex_unlock(&stru_1A8A24);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/pool.c",
           127,
           "reject_reason_history_update",
           28,
           39,
           20,
           v10);
}
