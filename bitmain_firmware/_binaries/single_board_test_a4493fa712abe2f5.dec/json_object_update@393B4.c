int __fastcall json_object_update(_DWORD *a1, _DWORD *a2)
{
  _BOOL4 v2; // r3
  _DWORD *v3; // r6
  _DWORD *v4; // r9
  bool v5; // zf
  _DWORD *v6; // r4
  char *v7; // r6
  unsigned int *v10; // r8
  unsigned int *v11; // r3
  unsigned int v12; // r2
  _BOOL4 v13; // r3
  unsigned int *v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r2
  int v18; // r3
  bool v19; // zf
  unsigned int *v20; // r3
  unsigned int v21; // r2

  if ( !a1 )
    return -1;
  v2 = a2 == 0;
  if ( *a1 )
    v2 = 1;
  if ( v2 || *a2 )
    return -1;
  v3 = (_DWORD *)a2[8];
  v4 = a2 + 7;
  v5 = v3 == 0;
  if ( v3 )
    v5 = v3 == v4;
  if ( v5 )
    return 0;
  v6 = (_DWORD *)v3[3];
  v7 = (char *)(v3 + 4);
  if ( !v6 )
    return 0;
  v10 = a1 + 2;
  while ( 1 )
  {
    v11 = v6 + 1;
    if ( v6[1] != -1 )
    {
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
      __dmb(0xBu);
    }
    v13 = a1 == v6;
    if ( *a1 )
      v13 = 1;
    if ( v13 )
    {
      if ( v6[1] == -1 )
        return -1;
      v14 = v6 + 1;
      __dmb(0xBu);
      do
      {
        v15 = __ldrex(v14);
        v16 = v15 - 1;
      }
      while ( __strex(v16, v14) );
      goto LABEL_20;
    }
    if ( hashtable_set(v10, v7, (int)v6) )
      break;
    if ( !*a2 )
    {
      v18 = *((_DWORD *)v7 - 3);
      v19 = v4 == (_DWORD *)v18;
      if ( v4 != (_DWORD *)v18 )
        v19 = v18 == 0;
      v7 = (char *)(v18 + 16);
      if ( !v19 )
      {
        v6 = *(_DWORD **)(v18 + 12);
        if ( v6 )
          continue;
      }
    }
    return 0;
  }
  if ( v6[1] == -1 )
    return -1;
  v20 = v6 + 1;
  __dmb(0xBu);
  do
  {
    v21 = __ldrex(v20);
    v16 = v21 - 1;
  }
  while ( __strex(v16, v20) );
LABEL_20:
  if ( v16 )
    return -1;
  json_delete(v6);
  return -1;
}
