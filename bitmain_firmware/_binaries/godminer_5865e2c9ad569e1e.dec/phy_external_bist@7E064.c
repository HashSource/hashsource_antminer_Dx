int __fastcall phy_external_bist(int a1, int a2, int a3, int a4)
{
  int v8; // r6
  char *v9; // r1
  int v10; // r1
  char *v11; // r2
  int v12; // r1
  unsigned __int8 *v13; // r6
  unsigned __int8 *v14; // r5
  unsigned __int16 v15; // t1
  int v16; // r1
  unsigned __int8 *v17; // r5
  unsigned __int8 v18; // t1
  char *v20; // [sp+2Ch] [bp-1090h]
  int v21; // [sp+30h] [bp-108Ch]
  _DWORD v22[7]; // [sp+38h] [bp-1084h] BYREF
  int v23; // [sp+54h] [bp-1068h]
  _DWORD v24[7]; // [sp+58h] [bp-1064h] BYREF
  int v25; // [sp+74h] [bp-1048h]
  _BYTE s[64]; // [sp+78h] [bp-1044h] BYREF
  char v27[4100]; // [sp+B8h] [bp-1004h] BYREF

  LOWORD(v8) = -12352;
  V_LOCK();
  LOWORD(v9) = 620;
  HIWORD(v9) = (unsigned int)" %lld" >> 16;
  V_INT((int)v22, v9, *(int *)(a1 + 232));
  HIWORD(v8) = (unsigned int)"" >> 16;
  logfmt_raw(v27, 0x1000u, 0, v23, v22[0], v22[1], v22[2], v22[3], v22[4], v22[5], v22[6], v23, v8, "phy_external_bist");
  V_UNLOCK();
  LOWORD(v10) = -9688;
  HIWORD(v10) = (unsigned int)"%02x sram ext load done" >> 16;
  zlog(g_zc, v10, 173, "phy_external_bist", 17, 1158, 60, v27);
  memset(s, 0, sizeof(s));
  if ( a4 )
  {
    LOWORD(v11) = 620;
    LOWORD(v12) = -6260;
    HIWORD(v11) = (unsigned int)" %lld" >> 16;
    HIWORD(v12) = (unsigned int)" PHY core %02x macro1 rx is invalid!" >> 16;
    v13 = (unsigned __int8 *)(a3 - 1);
    v20 = v11;
    v21 = v12;
    v14 = (unsigned __int8 *)(a3 + (unsigned __int8)(a4 - 1));
    do
    {
      while ( 1 )
      {
        v15 = *++v13;
        if ( check_core_reg_with_expect_data_eth(a1, a2, v15, 64, 0xFF000100) )
          break;
        if ( v13 == v14 )
          goto LABEL_6;
      }
      V_LOCK();
      V_INT((int)v24, v20, *(int *)(a1 + 232));
      logfmt_raw(
        v27,
        0x1000u,
        0,
        v25,
        v24[0],
        v24[1],
        v24[2],
        v24[3],
        v24[4],
        v24[5],
        v24[6],
        v25,
        v21,
        "phy_external_bist");
      V_UNLOCK();
      LOWORD(v16) = -9688;
      HIWORD(v16) = (unsigned int)"%02x sram ext load done" >> 16;
      zlog(g_zc, v16, 173, "phy_external_bist", 17, 1298, 100, v27);
    }
    while ( v13 != v14 );
LABEL_6:
    v17 = (unsigned __int8 *)(a3 - 1);
    do
    {
      v18 = *++v17;
      sub_7660C(a1, v18, 133, 0xFFFF);
      sub_7660C(a1, *v17, 134, 1342177279);
    }
    while ( v17 != v13 );
  }
  sub_765C8(a1, 132, -2147483647);
  sleep(0xAu);
  return 0;
}
