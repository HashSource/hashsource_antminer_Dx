_DWORD *__fastcall json_copy(_DWORD *a1)
{
  _DWORD *v2; // r7
  _DWORD *v3; // r1
  bool v4; // zf
  _DWORD *v5; // r5
  char *i; // r6
  unsigned int *v7; // r3
  unsigned int v8; // r2
  unsigned int v9; // r2
  _DWORD *v10; // r1
  bool v11; // zf
  unsigned int *v12; // r3
  unsigned int v13; // r2
  _BOOL4 v14; // r3
  unsigned int v15; // r3
  unsigned int j; // r5
  _DWORD *v17; // r1
  unsigned int *v18; // r2
  unsigned int v19; // r3
  _DWORD *result; // r0
  const void *v21; // r6
  size_t v22; // r4
  _BYTE *v23; // r0
  _BYTE *v24; // r8
  __int64 v25; // r4
  __int64 v26; // r4

  if ( !a1 )
    return 0;
  switch ( *a1 )
  {
    case 0:
      v2 = json_object();
      if ( !v2 )
        return 0;
      if ( !*a1 )
      {
        v3 = (_DWORD *)a1[8];
        v4 = v3 == a1 + 7;
        if ( v3 != a1 + 7 )
          v4 = v3 == 0;
        if ( !v4 )
        {
          v5 = (_DWORD *)v3[3];
          for ( i = (char *)(v3 + 4); v5; i = (char *)(v10 + 4) )
          {
            if ( v5[1] != -1 )
            {
              v12 = v5 + 1;
              do
                v13 = __ldrex(v12);
              while ( __strex(v13 + 1, v12) );
              __dmb(0xBu);
            }
            v14 = v2 == v5;
            if ( *v2 )
              v14 = 1;
            if ( v14 )
            {
              if ( v5[1] != -1 )
              {
                v7 = v5 + 1;
                __dmb(0xBu);
                do
                {
                  v8 = __ldrex(v7);
                  v9 = v8 - 1;
                }
                while ( __strex(v9, v7) );
                if ( !v9 )
                  json_delete(v5);
              }
            }
            else if ( hashtable_set(v2 + 2, i, (int)v5) && v5[1] != -1 )
            {
              sub_84ED0(v5);
            }
            if ( *a1 )
              break;
            v10 = (_DWORD *)*((_DWORD *)i - 3);
            v11 = v10 == 0;
            if ( v10 )
              v11 = a1 + 7 == v10;
            if ( v11 )
              break;
            v5 = (_DWORD *)v10[3];
          }
        }
      }
      return v2;
    case 1:
      v2 = json_array();
      if ( !v2 )
        return 0;
      if ( *a1 == 1 )
      {
        v15 = a1[3];
        if ( v15 )
        {
          for ( j = 0; j < v15; ++j )
          {
            v17 = 0;
            if ( v15 > j )
            {
              v17 = *(_DWORD **)(a1[4] + 4 * j);
              v18 = v17 + 1;
              if ( v17 )
              {
                if ( v17[1] != -1 )
                {
                  do
                    v19 = __ldrex(v18);
                  while ( __strex(v19 + 1, v18) );
                  __dmb(0xBu);
                }
              }
            }
            json_array_append_new((int)v2, v17);
            if ( *a1 != 1 )
              break;
            v15 = a1[3];
          }
        }
      }
      return v2;
    case 2:
      v21 = (const void *)a1[2];
      v22 = a1[3];
      if ( !v21 )
        return 0;
      if ( v22 == -1 )
        return 0;
      v23 = off_1A25E8(v22 + 1);
      v24 = v23;
      if ( !v23 )
        return 0;
      memcpy(v23, v21, v22);
      v24[v22] = 0;
      result = off_1A25E8(0x10u);
      v2 = result;
      if ( result )
      {
        result[2] = v24;
        result[3] = v22;
        *result = 2;
        result[1] = 1;
        return result;
      }
      jsonp_free(v24);
      break;
    case 3:
      v25 = *((_QWORD *)a1 + 1);
      result = (_DWORD *)off_1A25E8(16);
      v2 = result;
      if ( !result )
        return v2;
      *((_QWORD *)result + 1) = v25;
      *result = 3;
      result[1] = 1;
      return result;
    case 4:
      v26 = *((_QWORD *)a1 + 1);
      result = (_DWORD *)off_1A25E8(16);
      v2 = result;
      if ( !result )
        return v2;
      *((_QWORD *)result + 1) = v26;
      *result = 4;
      result[1] = 1;
      return result;
    case 5:
    case 6:
    case 7:
      return a1;
    default:
      return 0;
  }
  return v2;
}
