bool __fastcall sub_C581C(int *a1, int *a2)
{
  int v2; // r3
  int v6; // r7
  int v7; // r2
  unsigned int v8; // r6
  int *v9; // r1
  bool v10; // zf
  int *v11; // r0
  int *v12; // r3
  int *v13; // r8
  bool v14; // zf
  int *v15; // r7
  int *v16; // r6
  int *v17; // r1
  bool v18; // zf
  size_t v19; // r2

  v2 = *a1;
  if ( *a1 != *a2 )
    return 0;
  if ( a1 == a2 )
    return 1;
  switch ( v2 )
  {
    case 0:
      if ( a1[2] != a2[2] )
        return 0;
      v12 = (int *)a1[8];
      v13 = a1 + 7;
      v14 = v12 == a1 + 7;
      if ( v12 != a1 + 7 )
        v14 = v12 == 0;
      if ( v14 )
        return 1;
      do
      {
        v15 = v12 + 4;
        if ( v12 == (int *)-16 )
          break;
        v16 = (int *)v12[3];
        if ( !v16 )
          break;
        v17 = (int *)json_object_get(a2, (char *)v12 + 16);
        if ( !v17 || !sub_C581C(v16, v17) )
          return 0;
        if ( *a1 )
          break;
        v12 = (int *)*(v15 - 3);
        v18 = v12 == 0;
        if ( v12 )
          v18 = v13 == v12;
      }
      while ( !v18 );
      return 1;
    case 1:
      v6 = a1[3];
      if ( v6 != a2[3] )
        return 0;
      if ( !v6 )
        return 1;
      v7 = *a1;
      v8 = 0;
      break;
    case 2:
      v19 = a1[3];
      return v19 == a2[3] && !memcmp((const void *)a1[2], (const void *)a2[2], v19);
    case 3:
      return *((_QWORD *)a1 + 1) == *((_QWORD *)a2 + 1);
    case 4:
      return *((double *)a1 + 1) == *((double *)a2 + 1);
    default:
      return 0;
  }
  while ( 1 )
  {
    if ( v2 == 1 && a1[3] > v8 )
      v11 = *(int **)(a1[4] + 4 * v8);
    else
      v11 = 0;
    if ( v7 != 1 || a2[3] <= v8 )
      return 0;
    v9 = *(int **)(a2[4] + 4 * v8);
    v10 = v9 == 0;
    if ( v9 )
      v10 = v11 == 0;
    if ( v10 || !sub_C581C(v11, v9) )
      return 0;
    if ( v6 == ++v8 )
      break;
    v2 = *a1;
    v7 = *a2;
  }
  return 1;
}
