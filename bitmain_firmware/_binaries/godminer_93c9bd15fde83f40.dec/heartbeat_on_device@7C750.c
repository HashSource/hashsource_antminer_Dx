int __fastcall heartbeat_on_device(int a1, int a2, int a3)
{
  bool v4; // zf
  int result; // r0

  v4 = ((int (__fastcall *)(int))off_1A2BB4[0])(*(_DWORD *)(a1 + 132)) == 0;
  result = a3 + 64;
  if ( v4 )
    *(_DWORD *)(a3 + 64) |= 1u;
  return result;
}
