int __fastcall dev_config_one_chain_baud(int a1, int a2)
{
  char v4; // r6
  int v5; // r2
  int v6; // r5
  int v8; // [sp+0h] [bp-8h] BYREF
  int v9; // [sp+4h] [bp-4h] BYREF

  uart_get_config(0, 0, &v9, (int)&v8);
  printf("%s: get zynq bt8d %08x\n", "dev_config_one_chain_baud", v9);
  v4 = 8 * a1;
  if ( (_UNKNOWN *)a2 == &unk_2DC6C0 )
    goto LABEL_22;
  if ( a2 <= (int)&unk_2DC6C0 )
  {
    if ( a2 == 921600 )
    {
      v5 = 2;
      v6 = 2 << v4;
      goto LABEL_13;
    }
    if ( a2 > 921600 )
    {
      if ( (char *)a2 == byte_16E360 || (char *)a2 == byte_17D784 )
      {
        v5 = 1;
        v6 = 1 << v4;
        goto LABEL_13;
      }
    }
    else if ( a2 == 460800 )
    {
      v5 = 6;
      v6 = 6 << v4;
      goto LABEL_13;
    }
LABEL_19:
    v5 = 26;
    v6 = 26 << v4;
    goto LABEL_13;
  }
  if ( a2 == 6250000 )
  {
    v5 = 3;
    v6 = 3 << v4;
    goto LABEL_13;
  }
  if ( a2 <= 6250000 )
  {
    if ( (char *)a2 != byte_2FAF08 )
      goto LABEL_19;
LABEL_22:
    v6 = 0;
    v5 = 0;
    goto LABEL_13;
  }
  if ( a2 == 12500000 )
  {
    v5 = 4;
    v6 = 4 << v4;
    goto LABEL_13;
  }
  if ( a2 != 25000000 )
    goto LABEL_19;
  v5 = 5;
  v6 = 5 << v4;
LABEL_13:
  printf("%s: set zynq bt8d %d\n", "dev_config_one_chain_baud", v5);
  v9 = v9 & ~(63 << v4) | v6;
  sub_82294(a1, 0, &v9);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  uart_get_config(0, 0, &v9, (int)&v8);
  printf("%s: after set baud, get zynq bt8d %08x\n", "dev_config_one_chain_baud", v9);
  return 0;
}
