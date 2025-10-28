void *__fastcall diff_to_target_dcr(char *a1)
{
  double v1; // d0
  int v3; // r4
  unsigned __int64 v5; // r6
  void *result; // r0

  if ( v1 > 1.0 )
  {
    v3 = 6;
    while ( --v3 > 0 && v1 * 2.32830644e-10 > 1.0 )
      v1 = v1 * 2.32830644e-10;
    v5 = (unsigned __int64)(1.84464626e19 / v1);
    goto LABEL_9;
  }
  v5 = (unsigned __int64)(4294901760.0 / v1);
  if ( v5 )
  {
    v3 = 6;
LABEL_9:
    result = memset(a1, 0, 0x20u);
    *(_QWORD *)&a1[4 * v3] = v5;
    return result;
  }
  return memset(a1, 255, 0x20u);
}
