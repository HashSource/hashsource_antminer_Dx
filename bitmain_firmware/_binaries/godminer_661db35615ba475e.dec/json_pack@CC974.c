double *json_pack(_BYTE *a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  return (double *)json_vpack_ex(0, 0, a1, (size_t *)varg_r1);
}
