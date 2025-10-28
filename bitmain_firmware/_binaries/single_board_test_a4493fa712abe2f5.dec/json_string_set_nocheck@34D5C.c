int __fastcall json_string_set_nocheck(_DWORD *a1, char *s)
{
  size_t v4; // r0
  __int64 v5; // r6
  void *v6; // r0
  void *v7; // r0

  if ( !s )
    return -1;
  v4 = strlen(s);
  HIDWORD(v5) = v4;
  if ( !a1 )
    return -1;
  if ( *a1 != 2 )
    return -1;
  v6 = off_12A258(v4 + 1);
  LODWORD(v5) = v6;
  if ( !v6 )
    return -1;
  memcpy(v6, s, HIDWORD(v5));
  *(_BYTE *)(v5 + HIDWORD(v5)) = 0;
  v7 = (void *)a1[2];
  if ( v7 )
    off_12A254(v7);
  *((_QWORD *)a1 + 1) = v5;
  return 0;
}
