int __fastcall set_hardware_version(int result)
{
  *(_DWORD *)dword_1A8A8C = result;
  return result;
}
