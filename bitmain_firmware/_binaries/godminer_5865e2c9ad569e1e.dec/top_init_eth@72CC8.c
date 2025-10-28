int __fastcall top_init_eth(int a1)
{
  char *v2; // r1
  int v3; // r4
  int v4; // r1
  int v5; // r2
  int v6; // r3
  void (__fastcall *v7)(int, int); // r3
  int v8; // r1
  char *v9; // r1
  int v10; // r1
  int v11; // r0
  int v12; // r3
  int result; // r0
  int v14; // r2
  char *v15; // r1
  int v16; // r5
  int v17; // r1
  _DWORD v18[7]; // [sp+28h] [bp-1064h] BYREF
  int v19; // [sp+44h] [bp-1048h]
  int v20; // [sp+48h] [bp-1044h] BYREF
  int v21; // [sp+4Ch] [bp-1040h]
  int v22; // [sp+50h] [bp-103Ch]
  int v23; // [sp+54h] [bp-1038h]
  int v24; // [sp+58h] [bp-1034h]
  int v25; // [sp+5Ch] [bp-1030h]
  int v26; // [sp+60h] [bp-102Ch]
  int v27; // [sp+64h] [bp-1028h]
  _DWORD v28[7]; // [sp+68h] [bp-1024h] BYREF
  int v29; // [sp+84h] [bp-1008h]
  char v30[4100]; // [sp+88h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = 620;
  HIWORD(v2) = (unsigned int)" %lld" >> 16;
  V_INT((int)v18, v2, *(int *)(a1 + 232));
  LOWORD(v3) = -12352;
  HIWORD(v3) = (unsigned int)"" >> 16;
  logfmt_raw(v30, 0x1000u, 0, v19, v18[0], v18[1], v18[2], v18[3], v18[4], v18[5], v18[6], v19, v3, "top_init_eth");
  V_UNLOCK();
  LOWORD(v4) = -12340;
  HIWORD(v4) = (unsigned int)"atus] asic %02x, reg %02x state %08x" >> 16;
  zlog(g_zc, v4, 170, "top_init_eth", 12, 1773, 60, v30);
  if ( sub_71394((int *)a1) )
  {
    V_LOCK();
    v14 = *(_DWORD *)(a1 + 232);
    LOWORD(v15) = 620;
    HIWORD(v15) = (unsigned int)" %lld" >> 16;
    LOWORD(v16) = -11784;
    V_INT((int)&v20, v15, v14);
    HIWORD(v16) = (unsigned int)"get membist0 lost cnt failed, resp_num: %d\n" >> 16;
    logfmt_raw(v30, 0x1000u, 0, v27, v20, v21, v22, v23, v24, v25, v26, v27, v16, "top_init_eth");
    V_UNLOCK();
    LOWORD(v17) = -12340;
    HIWORD(v17) = (unsigned int)"atus] asic %02x, reg %02x state %08x" >> 16;
    zlog(g_zc, v17, 170, "top_init_eth", 12, 1777, 100, v30);
    return 12;
  }
  else
  {
    setup_clk(a1);
    v5 = 0;
    v6 = *(_DWORD *)(a1 + 464) - 1;
    do
      *(_BYTE *)++v6 = v5++;
    while ( v5 != 8 );
    v7 = *(void (__fastcall **)(int, int))(a1 + 240);
    v8 = *(_DWORD *)(a1 + 464);
    *(_DWORD *)(a1 + 404) = 1;
    v7(a1, v8);
    sub_71394((int *)a1);
    set_debug_ctrl(a1, 19);
    v22 = 4718593;
    v23 = 0;
    v21 = 0;
    v20 = 3;
    V_LOCK();
    LOWORD(v9) = 620;
    HIWORD(v9) = (unsigned int)" %lld" >> 16;
    V_INT((int)v28, v9, *(int *)(a1 + 232));
    logfmt_raw(
      v30,
      0x1000u,
      0,
      v29,
      v28[0],
      v28[1],
      v28[2],
      v28[3],
      v28[4],
      v28[5],
      v28[6],
      v29,
      "set analog value %08x",
      v20);
    V_UNLOCK();
    LOWORD(v10) = -21416;
    HIWORD(v10) = (unsigned int)"_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c" >> 16;
    zlog(g_zc, v10, 149, "ChipSetting_analog_mux_ETH", 26, 883, 40, v30);
    (*(void (__fastcall **)(int, int *))(a1 + 248))(a1, &v20);
    v11 = sub_6FB74(a1);
    v12 = *(unsigned __int8 *)(a1 + 436);
    if ( !v11 )
      *(_DWORD *)(a1 + 488) = 1;
    result = 0;
    if ( !v12 )
      *(_DWORD *)(a1 + 440) = (int)*(float *)(a1 + 940);
  }
  return result;
}
