_DWORD *__fastcall json_deep_copy(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r6
  unsigned int *v4; // r7
  unsigned int v5; // r3
  unsigned int v6; // r3
  _DWORD *v7; // r0
  _DWORD *v8; // r7
  _BOOL4 v9; // r3
  unsigned int v10; // r6
  _DWORD *v11; // r0
  _DWORD *result; // r0
  const void *v13; // r6
  size_t v14; // r4
  _BYTE *v15; // r0
  _BYTE *v16; // r7
  __int64 v17; // r6
  __int64 v18; // r6

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
        v3 = a1[8];
        if ( (_DWORD *)v3 != a1 + 7 )
        {
          while ( v3 )
          {
            v7 = json_deep_copy(*(_DWORD **)(v3 + 12));
            v8 = v7;
            if ( v7 )
            {
              v9 = v2 == v7;
              if ( *v2 )
                v9 = 1;
              if ( v9 )
              {
                if ( v7[1] != -1 )
                {
                  v4 = v7 + 1;
                  __dmb(0xBu);
                  do
                  {
                    v5 = __ldrex(v4);
                    v6 = v5 - 1;
                  }
                  while ( __strex(v6, v4) );
                  if ( !v6 )
                    json_delete(v7);
                }
              }
              else if ( hashtable_set(v2 + 2, (char *)(v3 + 16), (int)v7) && v8[1] != -1 )
              {
                sub_84ED0(v8);
              }
            }
            if ( *a1 )
              break;
            v3 = *(_DWORD *)(v3 + 4);
            if ( a1 + 7 == (_DWORD *)v3 )
              break;
          }
        }
      }
      return v2;
    case 1:
      v2 = json_array();
      if ( !v2 )
        return 0;
      if ( *a1 == 1 && a1[3] )
      {
        v10 = 0;
        do
        {
          v11 = json_deep_copy(*(_DWORD **)(a1[4] + 4 * v10));
          json_array_append_new((int)v2, v11);
          if ( *a1 != 1 )
            break;
          ++v10;
        }
        while ( v10 < a1[3] );
      }
      return v2;
    case 2:
      v13 = (const void *)a1[2];
      v14 = a1[3];
      if ( !v13 )
        return 0;
      if ( v14 == -1 )
        return 0;
      v15 = off_1A25E8(v14 + 1);
      v16 = v15;
      if ( !v15 )
        return 0;
      memcpy(v15, v13, v14);
      v16[v14] = 0;
      result = off_1A25E8(0x10u);
      v2 = result;
      if ( result )
      {
        result[2] = v16;
        result[3] = v14;
        *result = 2;
        result[1] = 1;
        return result;
      }
      jsonp_free(v16);
      break;
    case 3:
      v17 = *((_QWORD *)a1 + 1);
      result = (_DWORD *)off_1A25E8(16);
      v2 = result;
      if ( !result )
        return v2;
      *((_QWORD *)result + 1) = v17;
      *result = 3;
      result[1] = 1;
      return result;
    case 4:
      v18 = *((_QWORD *)a1 + 1);
      result = (_DWORD *)off_1A25E8(16);
      v2 = result;
      if ( !result )
        return v2;
      *((_QWORD *)result + 1) = v18;
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
