unsigned int *json_pack_ex(int a1, int a2, _BYTE *a3, ...)
{
  va_list varg_r3; // [sp+14h] [bp+Ch] BYREF

  va_start(varg_r3, a3);
  return json_vpack_ex(a1, a2, a3, (size_t *)varg_r3);
}
