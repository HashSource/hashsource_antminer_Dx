int __fastcall set_baud_zec_1746(int a1, char *a2)
{
  int v4; // r9
  int v5; // r3
  int v6; // r1
  char *v7; // r1
  int v8; // r1
  int v9; // r4
  _DWORD v11[4]; // [sp+28h] [bp-1034h] BYREF
  _DWORD v12[7]; // [sp+38h] [bp-1024h] BYREF
  int v13; // [sp+54h] [bp-1008h]
  char v14[4100]; // [sp+58h] [bp-1004h] BYREF

  if ( a2 != (char *)1500000 )
  {
    if ( (int)a2 <= 1500000 )
    {
      if ( a2 == (char *)&loc_70800 )
      {
        v4 = 26212;
        goto LABEL_9;
      }
      if ( (int)a2 <= 460800 )
      {
        if ( a2 == (char *)38400 )
        {
          v4 = 28772;
          goto LABEL_9;
        }
        goto LABEL_16;
      }
      if ( a2 == (char *)&loc_E1000 || a2 == (_BYTE *)&loc_FE500 + 2 )
      {
        v4 = 25188;
        goto LABEL_9;
      }
LABEL_16:
      v4 = 31332;
      goto LABEL_9;
    }
    if ( a2 == (char *)3125000 )
      goto LABEL_22;
    if ( (int)a2 > 3125000 )
    {
      if ( a2 != (char *)6250000 && a2 != (char *)12500000 )
        goto LABEL_16;
LABEL_22:
      v4 = 24676;
      goto LABEL_9;
    }
    if ( a2 != byte_17D784 )
    {
      if ( a2 != (char *)3000000 )
        goto LABEL_16;
      goto LABEL_22;
    }
  }
  v4 = 24932;
LABEL_9:
  V_LOCK();
  LOWORD(v5) = 2260;
  HIWORD(v5) = (unsigned int)"" >> 16;
  logfmt_raw(v14, 0x1000u, 0, v5, v4, a2);
  V_UNLOCK();
  LOWORD(v6) = 14720;
  HIWORD(v6) = (unsigned int)"ailed after retry %d times" >> 16;
  zlog(g_zc, v6, 170, "set_baud_zec_1746", 17, 776, 60, v14);
  v11[2] = 1835009;
  v11[0] = v4;
  v11[3] = 0;
  v11[1] = 0;
  V_LOCK();
  LOWORD(v7) = 620;
  HIWORD(v7) = (unsigned int)" %lld" >> 16;
  V_INT((int)v12, v7, *(int *)(a1 + 232));
  logfmt_raw(
    v14,
    0x1000u,
    0,
    v13,
    v12[0],
    v12[1],
    v12[2],
    v12[3],
    v12[4],
    v12[5],
    v12[6],
    v13,
    "set misc ctrl %08x",
    v4);
  V_UNLOCK();
  LOWORD(v8) = -21416;
  HIWORD(v8) = (unsigned int)"_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c" >> 16;
  zlog(g_zc, v8, 149, "ChipSetting_misc_ctrl_ZEC_1746", 30, 218, 40, v14);
  v9 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 248))(a1, v11);
  usleep(0x2710u);
  if ( v9 )
    return 36;
  else
    return 0;
}
