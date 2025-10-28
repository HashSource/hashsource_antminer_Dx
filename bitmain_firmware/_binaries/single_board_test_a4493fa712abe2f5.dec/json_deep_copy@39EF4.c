int *__fastcall json_deep_copy(int a1)
{
  int *v2; // r5
  int *result; // r0
  int *v4; // r6
  int v5; // r7
  void *(*v6)(size_t); // r3
  int v7; // r0
  int v8; // r3
  _DWORD *v9; // r2
  unsigned int v10; // lr
  _DWORD *v11; // r3
  unsigned int v12; // r1
  unsigned int v13; // r3
  int v14; // r7
  unsigned int *v15; // r8
  unsigned int v16; // r3
  unsigned int v17; // r3
  int *v18; // r0
  int *v19; // r8
  _BOOL4 v20; // r3
  int *v21; // r0
  int *v22; // r7
  void *(*v23)(size_t); // r3
  int *v24; // r0
  unsigned int v25; // r3
  unsigned int v26; // r9
  unsigned int *v27; // r6
  unsigned int v28; // r3
  unsigned int v29; // r3
  bool v30; // cc
  int *v31; // r6
  _BOOL4 v32; // r3
  __int64 v33; // r2
  void *v34; // r10
  int v35; // r3
  __int64 v36; // kr00_8
  _BYTE *v37; // r0
  _BYTE *v38; // r7
  __int64 v39; // r6
  __int64 v40; // r6
  unsigned int v41; // r11
  unsigned int v42; // r2
  int v43; // r3

  if ( a1 )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 0:
        v4 = (int *)off_12A258(0x24u);
        if ( !v4 )
          return 0;
        if ( !hashtable_seed )
          json_object_seed(0);
        v5 = 0;
        v6 = off_12A258;
        v2 = v4;
        v4[4] = 3;
        *v4 = 0;
        v4[2] = 0;
        v4[1] = 1;
        v7 = (int)v6(64);
        v4[3] = v7;
        if ( v7 )
        {
          v8 = v4[4];
          v9 = v4 + 5;
          v4[5] = (int)(v4 + 5);
          v4[6] = (int)(v4 + 5);
          v4[7] = (int)(v4 + 7);
          v4[8] = (int)(v4 + 7);
          v10 = 1 << v8;
          if ( 1 << v8 )
          {
            if ( v10 <= 4 )
            {
              v12 = 0;
            }
            else
            {
              v11 = (_DWORD *)v7;
              v12 = ((v10 - 5) & 0xFFFFFFFC) + 4;
              do
              {
                v5 += 4;
                __pld(v11 + 59);
                *v11 = v9;
                v11[1] = v9;
                v11[2] = v9;
                v11[3] = v9;
                v11[4] = v9;
                v11[5] = v9;
                v11[6] = v9;
                v11[7] = v9;
                v11 += 8;
              }
              while ( v12 != v5 );
            }
            v13 = v7 + 8 * v12;
            do
            {
              *(_DWORD *)(v13 + 4) = v9;
              v13 += 8;
              *(_DWORD *)(v7 + 8 * v12++) = v9;
            }
            while ( v12 < v10 );
          }
          if ( !*(_DWORD *)a1 )
          {
            v14 = *(_DWORD *)(a1 + 32);
            if ( v14 != a1 + 28 )
            {
              while ( v14 )
              {
                v18 = json_deep_copy(*(_DWORD *)(v14 + 12));
                v19 = v18;
                if ( v18 )
                {
                  v20 = v18 == v4;
                  if ( *v4 )
                    v20 = 1;
                  if ( v20 )
                  {
                    if ( v18[1] != -1 )
                    {
                      v15 = (unsigned int *)(v18 + 1);
                      __dmb(0xBu);
                      do
                      {
                        v16 = __ldrex(v15);
                        v17 = v16 - 1;
                      }
                      while ( __strex(v17, v15) );
                      if ( !v17 )
                        json_delete(v18);
                    }
                  }
                  else if ( hashtable_set((unsigned int *)v4 + 2, (char *)(v14 + 16), (int)v18) && v19[1] != -1 )
                  {
                    sub_A8E50(v19);
                  }
                }
                if ( *(_DWORD *)a1 )
                  break;
                v14 = *(_DWORD *)(v14 + 4);
                if ( a1 + 28 == v14 )
                  break;
              }
            }
          }
        }
        else
        {
          v2 = 0;
          jsonp_free(v4);
        }
        return v2;
      case 1:
        v21 = (int *)off_12A258(0x14u);
        v22 = v21;
        if ( !v21 )
          return 0;
        *v21 = 1;
        v21[1] = 1;
        v23 = off_12A258;
        v2 = v21;
        v21[3] = 0;
        v21[2] = 8;
        v24 = (int *)v23(32);
        v22[4] = (int)v24;
        if ( !v24 )
        {
          v2 = 0;
          jsonp_free(v22);
          return v2;
        }
        if ( *(_DWORD *)a1 != 1 )
          return v2;
        v25 = *(_DWORD *)(a1 + 12);
        v26 = 0;
        if ( !v25 )
          return v2;
        break;
      case 2:
        v36 = *(_QWORD *)(a1 + 8);
        if ( !(_DWORD)v36 )
          return 0;
        if ( HIDWORD(v36) == -1 )
          return 0;
        v37 = off_12A258(HIDWORD(v36) + 1);
        v38 = v37;
        if ( !v37 )
          return 0;
        memcpy(v37, (const void *)v36, HIDWORD(v36));
        v38[HIDWORD(v36)] = 0;
        result = (int *)off_12A258(0x10u);
        v2 = result;
        if ( result )
        {
          result[2] = (int)v38;
          result[3] = HIDWORD(v36);
          *result = 2;
          result[1] = 1;
          return result;
        }
        jsonp_free(v38);
        return v2;
      case 3:
        v39 = *(_QWORD *)(a1 + 8);
        result = (int *)off_12A258(0x10u);
        v2 = result;
        if ( !result )
          return v2;
        *((_QWORD *)result + 1) = v39;
        *result = 3;
        result[1] = 1;
        return result;
      case 4:
        v40 = *(_QWORD *)(a1 + 8);
        result = (int *)off_12A258(0x10u);
        v2 = result;
        if ( !result )
          return v2;
        *((_QWORD *)result + 1) = v40;
        *result = 4;
        result[1] = 1;
        return result;
      case 5:
      case 6:
      case 7:
        return (int *)a1;
      default:
        return 0;
    }
    while ( 1 )
    {
      v30 = v25 > v26;
      if ( v25 <= v26 )
        v24 = 0;
      else
        v25 = *(_DWORD *)(a1 + 16);
      if ( v30 )
        v24 = *(int **)(v25 + 4 * v26);
      v24 = json_deep_copy((int)v24);
      v31 = v24;
      if ( !v24 )
        goto LABEL_44;
      v32 = v24 == v22;
      if ( *v22 != 1 )
        v32 = 1;
      if ( v32 )
      {
        if ( v24[1] != -1 )
        {
          v27 = (unsigned int *)(v24 + 1);
          __dmb(0xBu);
          do
          {
            v28 = __ldrex(v27);
            v29 = v28 - 1;
          }
          while ( __strex(v29, v27) );
          if ( !v29 )
            json_delete(v24);
        }
        goto LABEL_44;
      }
      v33 = *((_QWORD *)v22 + 1);
      v34 = (void *)v22[4];
      if ( HIDWORD(v33) + 1 > (unsigned int)v33 )
      {
        v41 = 2 * v33;
        v42 = v33 + 1;
        if ( v41 < v42 )
          v41 = v42;
        v24 = (int *)(4 * v41);
        if ( !(4 * v41) || (v24 = (int *)off_12A258((size_t)v24)) == 0 )
        {
LABEL_73:
          if ( v31[1] != -1 )
            sub_A8E50(v31);
          goto LABEL_44;
        }
        v43 = v22[3];
        v22[2] = v41;
        v22[4] = (int)v24;
        memcpy(v24, v34, 4 * v43);
        jsonp_free(v34);
        v34 = (void *)v22[4];
      }
      if ( !v34 )
        goto LABEL_73;
      v35 = v22[3];
      *((_DWORD *)v34 + v35) = v31;
      v22[3] = v35 + 1;
LABEL_44:
      if ( *(_DWORD *)a1 == 1 )
      {
        v25 = *(_DWORD *)(a1 + 12);
        if ( ++v26 < v25 )
          continue;
      }
      return v2;
    }
  }
  return 0;
}
