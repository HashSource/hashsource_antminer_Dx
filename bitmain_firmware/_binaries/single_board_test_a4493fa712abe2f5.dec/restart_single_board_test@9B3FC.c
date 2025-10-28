void __noreturn restart_single_board_test()
{
  unsigned int v0; // r4
  char v1; // [sp+7h] [bp-1h] BYREF

  v0 = 0;
  sleep(3u);
  while ( 1 )
  {
    v1 = 1;
    if ( sub_D26E8(&v1) < 0 || (++v0, v1) )
    {
      v0 = 0;
    }
    else if ( v0 > 0x18 )
    {
      system("/etc/init.d/cgminer.sh restart");
    }
    usleep((__useconds_t)&loc_30D40);
  }
}
