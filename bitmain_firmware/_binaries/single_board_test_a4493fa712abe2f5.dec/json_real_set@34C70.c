int __fastcall json_real_set(int a1)
{
  __int64 v1; // d0

  if ( !a1 || *(_DWORD *)a1 != 4 )
    return -1;
  *(_QWORD *)(a1 + 8) = v1;
  return 0;
}
