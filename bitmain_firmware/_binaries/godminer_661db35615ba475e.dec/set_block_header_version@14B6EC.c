int __fastcall set_block_header_version(int result)
{
  *(_DWORD *)(dword_197C8C + 304) = result;
  return result;
}
