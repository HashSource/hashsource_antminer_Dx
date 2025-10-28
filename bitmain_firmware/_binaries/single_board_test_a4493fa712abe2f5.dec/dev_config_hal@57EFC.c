int __fastcall dev_config_hal(int a1)
{
  int v1; // r4
  int v2; // r2
  int v4; // [sp+4h] [bp-4h] BYREF

  if ( (_UNKNOWN *)a1 == &unk_2DC6C0 )
    goto LABEL_21;
  if ( a1 <= (int)&unk_2DC6C0 )
  {
    if ( a1 == 921600 )
    {
      v1 = 33686018;
      v2 = 2;
      goto LABEL_9;
    }
    if ( a1 > 921600 )
    {
      if ( (char *)a1 == byte_16E360 || (char *)a1 == byte_17D784 )
      {
        v1 = 16843009;
        v2 = 1;
        goto LABEL_9;
      }
    }
    else if ( a1 == 460800 )
    {
      v1 = 101058054;
      v2 = 6;
      goto LABEL_9;
    }
    goto LABEL_14;
  }
  if ( a1 == 6250000 )
  {
    v1 = 50529027;
    v2 = 3;
    goto LABEL_9;
  }
  if ( a1 <= 6250000 )
  {
    if ( (char *)a1 != byte_2FAF08 )
      goto LABEL_14;
LABEL_21:
    v1 = 0;
    v2 = 0;
    goto LABEL_9;
  }
  if ( a1 != 12500000 )
  {
    if ( a1 == 25000000 )
    {
      v1 = 84215045;
      v2 = 5;
      goto LABEL_9;
    }
LABEL_14:
    v1 = 437918234;
    v2 = 26;
    goto LABEL_9;
  }
  v1 = 67372036;
  v2 = 4;
LABEL_9:
  printf("%s: set zynq bt8d %d\n", "dev_config_hal", v2);
  v4 = v1;
  sub_82294(0, 0, &v4);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  return 0;
}
