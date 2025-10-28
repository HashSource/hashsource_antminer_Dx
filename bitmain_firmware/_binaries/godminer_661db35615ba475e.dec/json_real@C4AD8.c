_QWORD *json_real()
{
  __int64 v0; // d0
  _QWORD *result; // r0

  result = off_190780(0x10u);
  if ( result )
  {
    result[1] = v0;
    *(_DWORD *)result = 4;
    *((_DWORD *)result + 1) = 1;
  }
  return result;
}
