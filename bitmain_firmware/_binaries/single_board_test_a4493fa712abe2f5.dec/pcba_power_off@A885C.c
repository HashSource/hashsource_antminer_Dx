unsigned int __fastcall pcba_power_off(int a1)
{
  unsigned __int16 *v1; // r3
  int v2; // r4

  v1 = &all_algo_system_info[34 * a1];
  v2 = *((unsigned __int8 *)v1 + 4);
  if ( *((_BYTE *)v1 + 4) )
  {
    if ( !is_gpio_exist(907) )
    {
      gpio_export(907);
      gpio_direction(907, 1);
    }
    gpio_write(907, 1);
    return j_sleep(1u);
  }
  else
  {
    printf("%s, algo %s donot use adjustable power!", "pcba_power_off", off_103FE0[a1]);
    return v2;
  }
}
