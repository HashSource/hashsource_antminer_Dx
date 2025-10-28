int __fastcall read_sensor_temp_remote_vbk(int a1, _DWORD *a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8)
{
  if ( a5 )
  {
    if ( a5 == 1 )
      sub_D630C(a1, a2, a3, *(unsigned __int8 *)(*(_DWORD *)(a1 + 280) + a8));
    return 0;
  }
  else
  {
    sub_8ED9C((char *)(a1 + 124), a2, a3, a8);
    return 0;
  }
}
