int __fastcall set_time_stamp(int result)
{
  *(_DWORD *)(dword_1A8A8C + 308) = result;
  return result;
}
