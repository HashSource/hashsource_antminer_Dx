int __fastcall set_baud_eth_0(int a1, char *a2)
{
  int v4; // r3
  _DWORD v6[2]; // [sp+10h] [bp-1014h] BYREF
  char v7; // [sp+18h] [bp-100Ch]
  char v8; // [sp+19h] [bp-100Bh]
  __int16 v9; // [sp+1Ah] [bp-100Ah]
  int v10; // [sp+1Ch] [bp-1008h]
  char v11[4100]; // [sp+20h] [bp-1004h] BYREF

  v8 = 0;
  v10 = 0;
  v6[1] = 0;
  v7 = 1;
  v9 = 48;
  if ( a2 == (char *)&loc_FE500 + 2 )
    goto LABEL_17;
  if ( (int)a2 > (int)((char *)&loc_FE500 + 2) )
  {
    if ( a2 == "ing_freq_DASH" )
      goto LABEL_18;
    if ( (int)a2 > (int)"ing_freq_DASH" )
    {
      if ( a2 == (char *)3000000 || a2 == (char *)3125000 )
      {
        v4 = -65536;
        goto LABEL_8;
      }
      goto LABEL_10;
    }
    if ( a2 == (_BYTE *)&loc_16E35E + 2 )
    {
LABEL_18:
      v4 = -65535;
      goto LABEL_8;
    }
LABEL_10:
    v4 = -65510;
    goto LABEL_8;
  }
  if ( a2 == (char *)&loc_70800 )
  {
    v4 = -65530;
    goto LABEL_8;
  }
  if ( a2 == (char *)&loc_E1000 )
  {
LABEL_17:
    v4 = -65534;
    goto LABEL_8;
  }
  if ( a2 != (char *)38400 )
    goto LABEL_10;
  v4 = -65456;
LABEL_8:
  v6[0] = v4;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v11, 0x1000u, 0, "set_misc_eth value %08x/%d", v6[0], a2);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_misc_eth_ETH",
    24,
    252,
    60,
    v11);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 152))(a1, v6);
}
