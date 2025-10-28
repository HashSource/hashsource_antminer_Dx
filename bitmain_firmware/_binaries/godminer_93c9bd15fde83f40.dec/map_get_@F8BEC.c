int __fastcall map_get_(_DWORD *a1, char *s2)
{
  int v2; // r3
  int v3; // r5
  char *v4; // r2
  int v5; // t1
  int v6; // r4

  v2 = (unsigned __int8)*s2;
  if ( *s2 )
  {
    v4 = s2;
    v3 = 5381;
    do
    {
      v3 = (33 * v3) ^ v2;
      v5 = (unsigned __int8)*++v4;
      v2 = v5;
    }
    while ( v5 );
  }
  else
  {
    v3 = 5381;
  }
  v6 = a1[1];
  if ( !v6 )
    return v6;
  v6 = *(_DWORD *)(*a1 + 4 * ((v6 - 1) & v3));
  if ( !v6 )
    return v6;
  while ( *(_DWORD *)v6 != v3 || strcmp((const char *)(v6 + 12), s2) )
  {
    v6 = *(_DWORD *)(v6 + 8);
    if ( !v6 )
      return v6;
  }
  return *(_DWORD *)(v6 + 4);
}
