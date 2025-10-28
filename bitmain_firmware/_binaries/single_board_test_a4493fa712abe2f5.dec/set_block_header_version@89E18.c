int __fastcall set_block_header_version(int result)
{
  *(_DWORD *)(dword_3B52A4 + 304) = result;
  return result;
}
