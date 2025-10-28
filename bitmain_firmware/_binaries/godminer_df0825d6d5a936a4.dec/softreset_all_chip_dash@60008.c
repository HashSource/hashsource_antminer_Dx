int __fastcall softreset_all_chip_dash(int *a1)
{
  sub_5F8F0((int)a1);
  usleep((__useconds_t)&stru_1869C.st_value);
  sub_5F818((int)a1, 8, 0);
  sub_5F818((int)a1, 1, 4);
  sub_5FA30(a1, 255);
  return 0;
}
