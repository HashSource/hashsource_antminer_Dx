int __fastcall uart_set_config(int a1, int a2, _DWORD *a3)
{
  if ( a3 )
    return sub_82294(a1, a2, a3);
  else
    return -3;
}
