int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  char v2; // r3

  if ( !byte_1A45C0 )
  {
    dword_1A45C4 = (unsigned __int8)byte_1A45C0;
    dword_1A45C8 = (unsigned __int8)byte_1A45C0;
    byte_1A45CC = byte_1A45C0;
    byte_1A45C0 = 1;
  }
  v1 = dword_1A45C8;
  v2 = byte_1A45CC;
  *(_DWORD *)result = dword_1A45C4;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 8) = v2;
  return result;
}
