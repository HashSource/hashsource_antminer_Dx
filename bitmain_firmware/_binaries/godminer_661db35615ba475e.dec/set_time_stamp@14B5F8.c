int __fastcall set_time_stamp(int result)
{
  *(_DWORD *)(dword_197C8C + 308) = result;
  return result;
}
