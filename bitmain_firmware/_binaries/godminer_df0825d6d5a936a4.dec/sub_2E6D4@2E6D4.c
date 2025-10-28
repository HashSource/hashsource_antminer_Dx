_DWORD *__fastcall sub_2E6D4(char *s2)
{
  _DWORD *result; // r0
  char v3[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( dword_164F78[0] > 0x13u )
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "only support %d reject reasons", dword_164F78[0]);
    V_UNLOCK();
    return (_DWORD *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build"
                       "/godminer-origin_godminer-new/pool.c",
                       133,
                       "reject_reason_history_update",
                       28,
                       40,
                       20,
                       v3);
  }
  else
  {
    if ( !dword_164F78[0] )
    {
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "reject reason init %d", dword_164F78[0]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/pool.c",
        133,
        "reject_reason_history_update",
        28,
        45,
        40,
        v3);
      reject_reason_map = 0;
      dword_1786D4 = 0;
      dword_1786D8 = 0;
      dword_1786DC = 0;
      dword_1786E0 = 0;
    }
    result = (_DWORD *)map_get_(&reject_reason_map, s2);
    dword_1786DC = (int)result;
    if ( result )
    {
      ++*result;
    }
    else
    {
      dword_1786E0 = 1;
      ++dword_164F78[0];
      return (_DWORD *)map_set_((void **)&reject_reason_map, s2, &dword_1786E0, 4u);
    }
  }
  return result;
}
