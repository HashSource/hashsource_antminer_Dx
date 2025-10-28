int __fastcall set_baud_eth_0(int a1, char *a2)
{
  int v4; // r3
  _DWORD v6[2]; // [sp+10h] [bp-1010h] BYREF
  char v7; // [sp+18h] [bp-1008h]
  char v8; // [sp+19h] [bp-1007h]
  __int16 v9; // [sp+1Ah] [bp-1006h]
  int v10; // [sp+1Ch] [bp-1004h]
  char v11[4096]; // [sp+20h] [bp-1000h] BYREF

  v8 = 0;
  v10 = 0;
  v6[1] = 0;
  v7 = 1;
  v9 = 48;
  if ( a2 == byte_FE502 )
    goto LABEL_17;
  if ( (int)a2 > (int)byte_FE502 )
  {
    if ( a2 == byte_17D784 )
      goto LABEL_18;
    if ( (int)a2 > (int)byte_17D784 )
    {
      if ( a2 == (char *)&unk_2DC6C0 || a2 == byte_2FAF08 )
      {
        v4 = -65536;
        goto LABEL_8;
      }
      goto LABEL_10;
    }
    if ( a2 == byte_16E360 )
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
  if ( a2 == (_BYTE *)&loc_E0FFE + 2 )
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
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v11, 0x1000u, 0, "set_misc_eth value %08x/%d", v6[0], a2);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
    60,
    "ChipSetting_misc_eth_ETH",
    24,
    252,
    60,
    v11);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 140))(a1, v6);
}
