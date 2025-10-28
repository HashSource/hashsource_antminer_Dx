int __fastcall high_speed_uart_set_config(int a1, int a2, _DWORD *a3)
{
  if ( a3 )
    return sub_B30B4(a1, a2, a3);
  else
    return -3;
}
