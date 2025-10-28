int __fastcall share_result(int a1, int a2, char *a3, double *a4)
{
  double v7; // d5
  double v8; // d7
  unsigned int v9; // r2
  __int64 v10; // kr10_8
  unsigned int v11; // r1
  int v12; // r8
  int v13; // r2
  int v14; // r0
  int v15; // r1
  double v17; // d5
  __int64 v18; // r2
  double v19; // d7
  double v20; // d6
  time_t v21; // r0
  __int64 v22; // r2
  int v23; // r8
  int v24; // [sp+34h] [bp-1038h]
  __int64 v25; // [sp+38h] [bp-1034h]
  int v26; // [sp+44h] [bp-1028h]
  int v27; // [sp+54h] [bp-1018h]
  int v28; // [sp+64h] [bp-1008h]
  char v29[4100]; // [sp+68h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_196B70);
  if ( a1 )
  {
    v17 = a4[147];
    LODWORD(v18) = *((_DWORD *)a4 + 324);
    v19 = a4[166] + v17;
    ++total_accepted;
    HIDWORD(v18) = *((_DWORD *)a4 + 325);
    v20 = total_diff_accepted + v17;
    *((_QWORD *)a4 + 162) = v18 + 1;
    a4[166] = v19;
    total_diff_accepted = v20;
    v21 = time(0);
    v22 = *((_QWORD *)a4 + 147);
    *((_DWORD *)a4 + 246) = v21;
    *((_QWORD *)a4 + 124) = v22;
    pthread_mutex_unlock(&stru_196B70);
    return 1;
  }
  else
  {
    v7 = a4[147];
    v8 = total_diff_rejected + v7;
    v9 = total_rejected;
    v10 = *((_QWORD *)a4 + 163) + 1LL;
    a4[167] = a4[167] + v7;
    *((_DWORD *)a4 + 326) = v10;
    v11 = HIDWORD(total_rejected);
    total_diff_rejected = v8;
    *((_DWORD *)a4 + 327) = HIDWORD(v10);
    total_rejected = __PAIR64__(v11, v9) + 1;
    pthread_mutex_unlock(&stru_196B70);
    if ( a3 )
    {
      sub_267D4(a3);
      pthread_mutex_lock(&stru_197BB8);
      v12 = *(_DWORD *)a4;
      v25 = *(int *)a4;
      ++dword_197BD4;
      logfmt_raw(
        v29,
        0x1000u,
        0,
        v26,
        "poolno",
        6,
        3,
        v24,
        (__int64)v12,
        0,
        v26,
        "reject reason: %s",
        a3,
        "poolno",
        6,
        3,
        v24,
        v25,
        0);
      pthread_mutex_unlock(&stru_197BB8);
      v13 = 479;
      v14 = g_zc;
      LOWORD(v15) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tm"
                                      "p/release/build/godminer-origin_master/pool.c";
    }
    else
    {
      sub_267D4("NULL");
      pthread_mutex_lock(&stru_197BB8);
      v23 = *(_DWORD *)a4;
      ++dword_197BD4;
      logfmt_raw(v29, 0x1000u, 0, v28, "poolno", 6, 3, v27, (__int64)v23, 0, v28, "reject reason:: NULL");
      pthread_mutex_unlock(&stru_197BB8);
      v13 = 482;
      v14 = g_zc;
      LOWORD(v15) = -5816;
    }
    HIWORD(v15) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/pool.c" >> 16;
    zlog(v14, v15, 127, "share_result", 12, v13, 80, v29);
    return 1;
  }
}
