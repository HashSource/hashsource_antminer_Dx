_BYTE *__fastcall json_dumps(_DWORD *a1, int a2)
{
  _BYTE *v4; // r0
  _BYTE *v5; // r4
  const void *v7; // r8
  size_t v8; // r6
  _BYTE *v9; // r0
  void *ptr[3]; // [sp+4h] [bp-Ch] BYREF

  ptr[2] = (void *)16;
  ptr[1] = 0;
  v4 = off_190780(0x10u);
  v5 = v4;
  ptr[0] = v4;
  if ( v4 )
  {
    *v4 = 0;
    if ( json_dump_callback(a1, (int (__fastcall *)(char *, int, int))sub_100970, (unsigned int)ptr, a2) )
    {
      v5 = 0;
    }
    else
    {
      v7 = ptr[0];
      v8 = strlen((const char *)ptr[0]);
      v9 = off_190780(v8 + 1);
      v5 = v9;
      if ( v9 )
      {
        memcpy(v9, v7, v8);
        v5[v8] = 0;
      }
    }
    if ( ptr[0] )
      off_190550(ptr[0]);
  }
  return v5;
}
