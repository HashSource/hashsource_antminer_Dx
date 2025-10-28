int __fastcall set_QN_write_data_command(int result)
{
  *(_DWORD *)(dword_3B52A4 + 128) = result;
  return result;
}
