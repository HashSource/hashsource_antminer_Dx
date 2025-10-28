void __fastcall map_remove_(_DWORD *a1, char *s2)
{
  int v2; // r3
  int v3; // r5
  char *v4; // r2
  int v5; // t1
  int v6; // r3
  int v7; // r3
  char *v10; // r4
  _DWORD *v11; // r6

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
  if ( v6 )
  {
    v7 = (v6 - 1) & v3;
    v10 = *(char **)(*a1 + 4 * v7);
    v11 = (_DWORD *)(*a1 + 4 * v7);
    if ( v10 )
    {
      while ( *(_DWORD *)v10 != v3 || strcmp(v10 + 12, s2) )
      {
        v11 = v10 + 8;
        v10 = (char *)*((_DWORD *)v10 + 2);
        if ( !v10 )
          return;
      }
      *v11 = *((_DWORD *)v10 + 2);
      free(v10);
      --a1[2];
    }
  }
}
