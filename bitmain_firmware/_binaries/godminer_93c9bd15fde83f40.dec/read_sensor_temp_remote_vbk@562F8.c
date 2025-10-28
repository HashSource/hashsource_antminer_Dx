int __fastcall read_sensor_temp_remote_vbk(int a1, int *a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8)
{
  if ( a5 )
  {
    if ( a5 == 1 )
      sub_50138(a1, a2, a3, *(unsigned __int8 *)(*(_DWORD *)(a1 + 296) + a8));
    return 0;
  }
  else
  {
    sub_55E5C((char *)(a1 + 136), a2, a3, a8);
    return 0;
  }
}
