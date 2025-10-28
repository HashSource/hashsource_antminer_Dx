int __fastcall set_QN_write_data_command(int result)
{
  *(_DWORD *)(dword_197C8C + 128) = result;
  return result;
}
