int __fastcall add_fanspeed_observer(int result)
{
  int v1; // r3
  int v2; // r2

  v1 = dword_1A45B4;
  v2 = *(_DWORD *)(dword_1A45B4 + 1024);
  *(_DWORD *)(dword_1A45B4 + 4 * v2) = result;
  *(_DWORD *)(v1 + 1024) = v2 + 1;
  return result;
}
