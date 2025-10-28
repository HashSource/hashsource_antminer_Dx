void *__fastcall get_system_capability(void *result)
{
  if ( result )
    return j_memcpy(result, &unk_12B760, 0x124u);
  return result;
}
