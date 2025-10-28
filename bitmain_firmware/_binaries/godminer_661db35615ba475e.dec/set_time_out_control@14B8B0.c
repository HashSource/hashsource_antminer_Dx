int __fastcall set_time_out_control(int result)
{
  *(_DWORD *)(dword_197C8C + 136) = result;
  return result;
}
