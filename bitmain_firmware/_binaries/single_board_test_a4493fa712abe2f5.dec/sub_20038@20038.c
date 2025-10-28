int __fastcall sub_20038(void *src, size_t n, __int64 *a3)
{
  __int64 v4; // kr00_8
  size_t v5; // r3

  v4 = *a3;
  v5 = HIDWORD(v4) + n;
  if ( HIDWORD(v4) + n <= (unsigned int)v4 )
  {
    memcpy((void *)(*((_DWORD *)a3 + 2) + HIDWORD(v4)), src, n);
    v5 = *((_DWORD *)a3 + 1) + n;
  }
  *((_DWORD *)a3 + 1) = v5;
  return 0;
}
