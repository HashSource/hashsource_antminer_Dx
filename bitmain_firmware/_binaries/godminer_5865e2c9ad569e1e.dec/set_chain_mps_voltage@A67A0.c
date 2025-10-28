int __fastcall set_chain_mps_voltage(int a1, unsigned int a2)
{
  unsigned int v2; // r4
  int v4; // r7
  int v5; // r3
  int v6; // r1
  int v7; // r3
  int v8; // r1
  int v10; // r4
  int v11; // r3
  int v12; // r1
  unsigned __int16 v13; // [sp+16h] [bp-100Eh] BYREF
  _WORD src[4]; // [sp+18h] [bp-100Ch] BYREF
  char v15[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = a2;
  if ( a2 - 2350 > 0x12C )
  {
    if ( a2 <= 0xA59 )
      v4 = 2350;
    else
      v4 = 2650;
    V_LOCK();
    LOWORD(v5) = 16000;
    HIWORD(v5) = (unsigned int)"all_voltage" >> 16;
    logfmt_raw(v15, 0x1000u, 0, v5, v4, 2350, 2650);
    V_UNLOCK();
    LOWORD(v6) = 15648;
    HIWORD(v6) = (unsigned int)"ltage not equal(%d, %d), fd %d" >> 16;
    v2 = v4;
    zlog(g_zc, v6, 163, "set_chain_mps_voltage", 21, 207, 40, v15);
  }
  get_chain_mps_voltage(a1, &v13);
  if ( v13 == v2 )
  {
    V_LOCK();
    LOWORD(v11) = 16060;
    HIWORD(v11) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c" >> 16;
    logfmt_raw(v15, 0x1000u, 0, v11, v2);
    V_UNLOCK();
    LOWORD(v12) = 15648;
    HIWORD(v12) = (unsigned int)"ltage not equal(%d, %d), fd %d" >> 16;
    zlog(g_zc, v12, 163, "set_chain_mps_voltage", 21, 213, 20, v15);
    return 0;
  }
  else if ( sub_A6550(a1, 0)
         && (v10 = (int)(v2 - 490) / 10, src[0] = v10 & 0x1FF, sub_A64F0(a1, 33, src, 2u))
         && sub_A6550(a1, 2)
         && (src[0] = (32 * v10) & 0x3FE0 | 0xC, sub_A64F0(a1, 13, src, 2u)) )
  {
    return 0;
  }
  else
  {
    V_LOCK();
    LOWORD(v7) = 16096;
    HIWORD(v7) = (unsigned int)"/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c" >> 16;
    logfmt_raw(v15, 0x1000u, 0, v7, a1);
    V_UNLOCK();
    LOWORD(v8) = 15648;
    HIWORD(v8) = (unsigned int)"ltage not equal(%d, %d), fd %d" >> 16;
    zlog(g_zc, v8, 163, "set_chain_mps_voltage", 21, 250, 100, v15);
    return 1;
  }
}
