void *__fastcall sub_10EC00(int a1)
{
  size_t v2; // r5
  void *v3; // r0
  void *v4; // r6

  v2 = *(_DWORD *)(a1 + 4);
  v3 = malloc(v2);
  v4 = v3;
  if ( v3 )
    memcpy(v3, *(const void **)a1, v2);
  return v4;
}
