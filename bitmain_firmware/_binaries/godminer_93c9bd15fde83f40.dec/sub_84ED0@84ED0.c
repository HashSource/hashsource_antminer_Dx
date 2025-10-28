void __fastcall sub_84ED0(_DWORD *a1)
{
  unsigned int *v1; // r3
  unsigned int v2; // r2
  unsigned int v3; // r2

  v1 = a1 + 1;
  __dmb(0xBu);
  do
  {
    v2 = __ldrex(v1);
    v3 = v2 - 1;
  }
  while ( __strex(v3, v1) );
  if ( !v3 )
    json_delete(a1);
}
