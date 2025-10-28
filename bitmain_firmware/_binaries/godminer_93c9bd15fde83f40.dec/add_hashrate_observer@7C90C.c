int __fastcall add_hashrate_observer(int result)
{
  int v1; // r3
  int v2; // r2

  v1 = dword_1A45B0;
  v2 = *(_DWORD *)(dword_1A45B0 + 1024);
  *(_DWORD *)(dword_1A45B0 + 4 * v2) = result;
  *(_DWORD *)(v1 + 1024) = v2 + 1;
  return result;
}
