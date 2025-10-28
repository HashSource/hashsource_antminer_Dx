int __fastcall sub_9757C(int a1, unsigned int a2)
{
  int v4; // r2
  int v6; // r7
  unsigned int v7; // r0
  float v8; // s14
  __int64 v9; // [sp+10h] [bp-1060h]
  __int64 v10; // [sp+10h] [bp-1060h]
  int v11; // [sp+24h] [bp-104Ch]
  int v12; // [sp+28h] [bp-1048h]
  int v13; // [sp+3Ch] [bp-1034h]
  int v14; // [sp+4Ch] [bp-1024h]
  int v15; // [sp+5Ch] [bp-1014h]
  int v16; // [sp+6Ch] [bp-1004h]
  char v17[4096]; // [sp+70h] [bp-1000h] BYREF

  if ( a2 == 700 )
  {
    v6 = 820;
LABEL_6:
    v7 = *(_DWORD *)(a1 + 744) / a2;
    v8 = *(float *)(a1 + 732);
    *(_DWORD *)(a1 + 736) = v6;
    *(float *)(a1 + 732) = (float)(int)a2;
    *(_DWORD *)(a1 + 744) = (int)v8 * v7;
    pthread_mutex_lock(&stru_197BB8);
    v12 = *(_DWORD *)(a1 + 736);
    v11 = (int)*(float *)(a1 + 732);
    v10 = *(int *)(a1 + 124);
    ++dword_197BD4;
    logfmt_raw(v17, 0x1000u, 0, v16, "chain", 5, 3, v15, v10, 0, v16, "overclock freq %d voltage %d", v11, v12);
    pthread_mutex_unlock(&stru_197BB8);
    v4 = 460;
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/backend/backend_ckb/backend_ckb.c",
             154,
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
  pthread_mutex_lock(&stru_197BB8);
  v9 = *(int *)(a1 + 124);
  ++dword_197BD4;
  logfmt_raw(v17, 0x1000u, 0, v14, "chain", 5, 3, v13, v9, 0, v14, "cannot overclock with freq %d", a2);
  pthread_mutex_unlock(&stru_197BB8);
  v4 = 462;
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/backend/backend_ckb/backend_ckb.c",
           154,
           "overclock_update_ckb",
           20,
           v4,
           60,
           v17);
}
