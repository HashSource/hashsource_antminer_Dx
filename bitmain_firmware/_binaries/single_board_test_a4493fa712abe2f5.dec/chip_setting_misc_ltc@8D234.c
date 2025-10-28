int __fastcall chip_setting_misc_ltc(int a1, char *a2)
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
  v9 = 24;
  if ( a2 == byte_16E360 )
    goto LABEL_21;
  if ( (int)a2 > (int)byte_16E360 )
  {
    if ( a2 == byte_2FAF08 )
      goto LABEL_19;
    if ( (int)a2 > (int)byte_2FAF08 )
    {
      if ( a2 != (char *)6250000 && a2 != (char *)12500000 )
        goto LABEL_13;
      goto LABEL_19;
    }
    if ( a2 != byte_17D784 )
    {
      if ( a2 != (char *)&unk_2DC6C0 )
        goto LABEL_13;
LABEL_19:
      v4 = 117465313;
      goto LABEL_8;
    }
LABEL_21:
    v4 = 117465569;
    goto LABEL_8;
  }
  if ( a2 == (char *)&loc_70800 )
  {
    v4 = 117466849;
    goto LABEL_8;
  }
  if ( (int)a2 > 460800 )
  {
    if ( a2 == (_BYTE *)&loc_E0FFE + 2 || a2 == byte_FE502 )
    {
      v4 = 117465825;
      goto LABEL_8;
    }
    goto LABEL_13;
  }
  if ( a2 != (char *)38400 )
  {
LABEL_13:
    v4 = 117471969;
    goto LABEL_8;
  }
  v4 = 117469409;
LABEL_8:
  v6[0] = v4;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v11, 0x1000u, 0, "set_misc value %08x/%d", v6[0], a2);
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_ltc/chip_setting_ltc.c",
    76,
    "chip_setting_misc_ltc",
    21,
    97,
    60,
    v11);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 140))(a1, v6);
}
