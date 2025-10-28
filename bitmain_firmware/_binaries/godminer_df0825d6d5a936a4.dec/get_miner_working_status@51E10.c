int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  char v2; // r3

  if ( !byte_165F8C )
  {
    byte_165F90 = 0;
    byte_165F91 = 0;
    byte_165F92 = 0;
    byte_165F93 = 0;
    byte_165F94 = 0;
    byte_165F95 = 0;
    byte_165F97 = 0;
    byte_165F98 = 0;
    byte_165F8C = 1;
    byte_165F96 = pools_active == 0;
  }
  v1 = *(_DWORD *)&byte_165F94;
  v2 = byte_165F98;
  *(_DWORD *)result = *(_DWORD *)&byte_165F90;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 8) = v2;
  return result;
}
