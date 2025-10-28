int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  char v2; // r3

  if ( !byte_191BD8 )
  {
    dword_191BDC = (unsigned __int8)byte_191BD8;
    dword_191BE0 = (unsigned __int8)byte_191BD8;
    byte_191BE4 = byte_191BD8;
    byte_191BD8 = 1;
  }
  v1 = dword_191BE0;
  v2 = byte_191BE4;
  *(_DWORD *)result = dword_191BDC;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 8) = v2;
  return result;
}
