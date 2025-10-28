int __fastcall set_hardware_version(int result)
{
  *(_DWORD *)dword_197C8C = result;
  return result;
}
