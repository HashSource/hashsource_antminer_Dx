int __fastcall workio_submit_work(int a1, unsigned __int8 *a2)
{
  int v4; // r7
  int v5; // r5
  int v6; // r6
  int v8; // r1
  __int64 v9; // r2
  _DWORD v10[7]; // [sp+38h] [bp-1C24h] BYREF
  int v11; // [sp+54h] [bp-1C08h]
  _DWORD v12[7]; // [sp+58h] [bp-1C04h] BYREF
  int v13; // [sp+74h] [bp-1BE8h]
  char v14[4100]; // [sp+C58h] [bp-1004h] BYREF

  v4 = frontend_runtime_instance();
  v5 = pool_tget((int)a2, a2 + 1896);
  if ( v5 )
  {
    V_LOCK();
    V_INT((int)v12, "poolno", *(int *)a2);
    logfmt_raw(v14, 0x1000u, 0, v13, v12[0], v12[1], v12[2], v12[3], v12[4], v12[5], v12[6], v13, 1198760);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/god-miner.c",
      138,
      "workio_submit_work",
      18,
      142,
      20,
      v14);
    return 0;
  }
  else
  {
    update_pool_diff1_of_all_runtimes((int *)a2);
    (*(void (__fastcall **)(int, unsigned __int8 *, _DWORD *))(v4 + 32))(a1, a2, v12);
    while ( 1 )
    {
      v6 = (*(int (__fastcall **)(unsigned __int8 *, _DWORD *))(v4 + 12))(a2, v12);
      if ( v6 )
        break;
      v8 = dword_164E90;
      v9 = 3518437209LL * (unsigned int)dword_164E90;
      LODWORD(v9) = *((_DWORD *)a2 + 486);
      ++total_ro;
      ++dword_164E90;
      *((_DWORD *)a2 + 486) = v9 + 1;
      if ( v8 == 10000 * (HIDWORD(v9) >> 13) )
      {
        V_LOCK();
        V_INT((int)v10, "poolno", *(int *)a2);
        logfmt_raw(v14, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, 1198788, 0, v5);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/god-miner.c",
          138,
          "workio_submit_work",
          18,
          156,
          100,
          v14);
        if ( v5 == 3 )
          return v6;
      }
      else if ( v5 == 3 )
      {
        return v6;
      }
      ++v5;
    }
    return v6;
  }
}
