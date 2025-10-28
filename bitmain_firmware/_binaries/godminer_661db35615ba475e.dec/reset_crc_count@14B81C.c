int __fastcall reset_crc_count(int result)
{
  if ( result )
    *(_DWORD *)(dword_197C8C + 248) = 0x80000000;
  else
    *(_DWORD *)(dword_197C8C + 248) = 0;
  return result;
}
