int __fastcall sub_76100(int a1, unsigned int a2)
{
  int v4; // r2
  int v6; // r5
  unsigned int v7; // r0
  float v8; // s14
  int v9; // [sp+24h] [bp-1050h]
  int v10; // [sp+28h] [bp-104Ch]
  int v11; // [sp+3Ch] [bp-1038h]
  int v12; // [sp+40h] [bp-1034h]
  int v13; // [sp+4Ch] [bp-1028h]
  int v14; // [sp+5Ch] [bp-1018h]
  int v15; // [sp+60h] [bp-1014h]
  int v16; // [sp+6Ch] [bp-1008h]
  char v17[4100]; // [sp+70h] [bp-1004h] BYREF

  if ( a2 == 700 )
  {
    v6 = 820;
LABEL_6:
    v7 = *(_DWORD *)(a1 + 744) / a2;
    v8 = *(float *)(a1 + 732);
    *(_DWORD *)(a1 + 736) = v6;
    *(float *)(a1 + 732) = (float)(int)a2;
    *(_DWORD *)(a1 + 744) = (int)v8 * v7;
    pthread_mutex_lock(&stru_3B526C);
    v10 = *(_DWORD *)(a1 + 736);
    v9 = (int)*(float *)(a1 + 732);
    v15 = *(_DWORD *)(a1 + 124);
    ++dword_3B52A8;
    logfmt_raw(v17, 0x1000u, 0, v16, "chain", 5, 3, v14, (__int64)v15, 0, v16, "overclock freq %d voltage %d", v9, v10);
    pthread_mutex_unlock(&stru_3B526C);
    v4 = 460;
    return zlog(
             g_zc,
             "/home/xingfei.wang/work/1764/godminer/backend/backend_ckb/backend_ckb.c",
             71,
             "overclock_update_ckb",
             20,
             v4,
             60,
             v17);
  }
  if ( a2 == 750 )
  {
    v6 = 830;
    goto LABEL_6;
  }
  pthread_mutex_lock(&stru_3B526C);
  v12 = *(_DWORD *)(a1 + 124);
  ++dword_3B52A8;
  logfmt_raw(v17, 0x1000u, 0, v13, "chain", 5, 3, v11, (__int64)v12, 0, v13, "cannot overclock with freq %d", a2);
  pthread_mutex_unlock(&stru_3B526C);
  v4 = 462;
  return zlog(
           g_zc,
           "/home/xingfei.wang/work/1764/godminer/backend/backend_ckb/backend_ckb.c",
           71,
           "overclock_update_ckb",
           20,
           v4,
           60,
           v17);
}
