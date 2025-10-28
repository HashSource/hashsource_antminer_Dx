_QWORD *__fastcall json_integer(__int64 a1)
{
  _QWORD *result; // r0

  result = off_190780(0x10u);
  if ( result )
  {
    result[1] = a1;
    *(_DWORD *)result = 3;
    *((_DWORD *)result + 1) = 1;
  }
  return result;
}
