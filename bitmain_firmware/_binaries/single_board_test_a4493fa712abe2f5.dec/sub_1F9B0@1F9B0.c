int __fastcall sub_1F9B0(_DWORD *a1, _DWORD *a2)
{
  unsigned int *v3; // r3
  unsigned int v4; // r1

  if ( a2 && a2[1] != -1 )
  {
    v3 = a2 + 1;
    do
      v4 = __ldrex(v3);
    while ( __strex(v4 + 1, v3) );
    __dmb(0xBu);
  }
  return json_object_set_new(a1, "result", a2);
}
