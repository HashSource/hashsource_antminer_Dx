void **__fastcall visited_clear(void **result)
{
  if ( *result )
    return (void **)j_memset(*result, 0, 4 * (_DWORD)result[1]);
  return result;
}
