int __fastcall set_time_out_control(int result)
{
  *(_DWORD *)(dword_1A8A8C + 136) = result;
  return result;
}
