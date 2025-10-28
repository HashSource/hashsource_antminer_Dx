int __fastcall set_baud_ckb_0(int a1, char *a2)
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
  v9 = 28;
  if ( a2 == byte_16E360 )
    goto LABEL_21;
  if ( (int)a2 > (int)byte_16E360 )
  {
    if ( a2 == byte_2FAF08 )
      goto LABEL_20;
    if ( (int)a2 > (int)byte_2FAF08 )
    {
      if ( a2 != (char *)6250000 && a2 != (char *)12500000 )
        goto LABEL_14;
      goto LABEL_20;
    }
    if ( a2 != byte_17D784 )
    {
      if ( a2 != (char *)&unk_2DC6C0 )
        goto LABEL_14;
LABEL_20:
      v4 = 24673;
      goto LABEL_9;
    }
LABEL_21:
    v4 = 24929;
    goto LABEL_9;
  }
  if ( a2 != (char *)&loc_70800 )
  {
    if ( (int)a2 > 460800 )
    {
      if ( a2 == (_BYTE *)&loc_E0FFE + 2 || a2 == byte_FE502 )
      {
        v4 = 25185;
        goto LABEL_9;
      }
    }
    else if ( a2 == (char *)38400 )
    {
      v4 = (int)&loc_2705E + 3;
      goto LABEL_9;
    }
LABEL_14:
    v4 = 31329;
    goto LABEL_9;
  }
  v4 = 26209;
LABEL_9:
  v6[0] = v4;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v11, 0x1000u, 0, "set_misc value %08x/%d", v6[0], a2);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/chip_setting.c",
    60,
    "ChipSetting_misc_CKB",
    20,
    204,
    60,
    v11);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 140))(a1, v6);
}
