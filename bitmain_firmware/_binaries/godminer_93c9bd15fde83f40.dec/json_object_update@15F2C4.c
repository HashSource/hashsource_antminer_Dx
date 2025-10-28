int __fastcall json_object_update(_DWORD *a1, _DWORD *a2)
{
  _BOOL4 v3; // r3
  _DWORD *v4; // r5
  _DWORD *v5; // r9
  bool v6; // zf
  _DWORD *v7; // r4
  char *v8; // r5
  unsigned int *v10; // r3
  unsigned int v11; // r2
  _BOOL4 v12; // r3
  unsigned int *v13; // r3
  unsigned int v14; // r2
  unsigned int v15; // r2
  int v17; // r3
  bool v18; // zf
  unsigned int *v19; // r3
  unsigned int v20; // r2

  if ( !a1 )
    return -1;
  v3 = a2 == 0;
  if ( *a1 )
    v3 = 1;
  if ( v3 || *a2 )
    return -1;
  v4 = (_DWORD *)a2[8];
  v5 = a2 + 7;
  v6 = v4 == 0;
  if ( v4 )
    v6 = v4 == v5;
  if ( v6 )
    return 0;
  v7 = (_DWORD *)v4[3];
  v8 = (char *)(v4 + 4);
  if ( !v7 )
    return 0;
  while ( 1 )
  {
    v10 = v7 + 1;
    if ( v7[1] != -1 )
    {
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      __dmb(0xBu);
    }
    v12 = a1 == v7;
    if ( *a1 )
      v12 = 1;
    if ( v12 )
    {
      if ( v7[1] == -1 )
        return -1;
      v13 = v7 + 1;
      __dmb(0xBu);
      do
      {
        v14 = __ldrex(v13);
        v15 = v14 - 1;
      }
      while ( __strex(v15, v13) );
      goto LABEL_19;
    }
    if ( hashtable_set(a1 + 2, v8, (int)v7) )
      break;
    if ( !*a2 )
    {
      v17 = *((_DWORD *)v8 - 3);
      v18 = v5 == (_DWORD *)v17;
      if ( v5 != (_DWORD *)v17 )
        v18 = v17 == 0;
      v8 = (char *)(v17 + 16);
      if ( !v18 )
      {
        v7 = *(_DWORD **)(v17 + 12);
        if ( v7 )
          continue;
      }
    }
    return 0;
  }
  if ( v7[1] == -1 )
    return -1;
  v19 = v7 + 1;
  __dmb(0xBu);
  do
  {
    v20 = __ldrex(v19);
    v15 = v20 - 1;
  }
  while ( __strex(v15, v19) );
LABEL_19:
  if ( v15 )
    return -1;
  json_delete(v7);
  return -1;
}
