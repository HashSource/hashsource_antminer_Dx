int __fastcall set_QN_write_data_command(int result)
{
  *(_DWORD *)(dword_1A8A8C + 128) = result;
  return result;
}
