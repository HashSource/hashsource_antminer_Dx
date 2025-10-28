int __fastcall sub_267D4(char *s2)
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

  v1 = dword_190B4C;
  if ( (unsigned int)dword_190B4C <= 0x13 )
  {
    if ( dword_190B4C )
    {
      v3 = (unsigned __int8)*s2;
      v1 = dword_197F38;
      if ( !*s2 )
      {
        v4 = 5381;
        goto LABEL_7;
      }
    }
    else
    {
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v10, 0x1000u, 0, "reject reason init %d", dword_190B4C);
      pthread_mutex_unlock(&stru_197BB8);
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
      dword_197F38 = 0;
      dword_197F3C = 0;
      dword_197F40 = 0;
      dword_197F44 = 0;
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
        dword_197F40 = (int)v9;
        if ( v9 )
        {
          ++*v9;
          return result;
        }
        goto LABEL_17;
      }
    }
LABEL_16:
    dword_197F40 = 0;
LABEL_17:
    dword_197F44 = 1;
    ++dword_190B4C;
    return map_set_((void **)&reject_reason_map, s2, &dword_197F44, 4u);
  }
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v10, 0x1000u, 0, "only support %d reject reasons", dword_190B4C);
  pthread_mutex_unlock(&stru_197BB8);
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
