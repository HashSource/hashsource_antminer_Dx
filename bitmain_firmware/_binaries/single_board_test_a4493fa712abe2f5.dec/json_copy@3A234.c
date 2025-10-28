int *__fastcall json_copy(int a1)
{
  int *v2; // r5
  int *result; // r0
  _DWORD *v4; // r6
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
  int v15; // r9
  bool v16; // zf
  _DWORD *v17; // r3
  char *i; // r7
  unsigned int *v19; // r2
  unsigned int v20; // r1
  unsigned int v21; // r1
  int v22; // r7
  bool v23; // zf
  unsigned int *v24; // r2
  unsigned int v25; // r1
  _BOOL4 v26; // r2
  _DWORD *v27; // r0
  _DWORD *v28; // r7
  void *(*v29)(size_t); // r3
  int v30; // r0
  unsigned int v31; // r2
  int v32; // r9
  unsigned int v33; // r10
  _DWORD *v34; // r6
  unsigned int *v35; // r3
  unsigned int v36; // r2
  _BOOL4 v37; // r3
  unsigned int *v38; // r3
  unsigned int v39; // r2
  unsigned int v40; // r2
  __int64 v41; // kr00_8
  _BYTE *v42; // r0
  _BYTE *v43; // r7
  __int64 v44; // r6
  __int64 v45; // r6
  __int64 v46; // r2
  void *v47; // r11
  int v48; // r3
  void *v50; // r0
  int v51; // r3
  _DWORD *v52; // [sp+4h] [bp-8h]
  int v53; // [sp+4h] [bp-8h]

  if ( a1 )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 0:
        v4 = off_12A258(0x24u);
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
          v4[5] = v4 + 5;
          v4[6] = v4 + 5;
          v4[7] = v4 + 7;
          v4[8] = v4 + 7;
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
            while ( v10 > v12 );
          }
          if ( !*(_DWORD *)a1 )
          {
            v14 = *(_DWORD *)(a1 + 32);
            v15 = a1 + 28;
            v16 = v14 == a1 + 28;
            if ( v14 != a1 + 28 )
              v16 = v14 == 0;
            if ( !v16 )
            {
              v17 = *(_DWORD **)(v14 + 12);
              for ( i = (char *)(v14 + 16); v17; i = (char *)(v22 + 16) )
              {
                if ( v17[1] != -1 )
                {
                  v24 = v17 + 1;
                  do
                    v25 = __ldrex(v24);
                  while ( __strex(v25 + 1, v24) );
                  __dmb(0xBu);
                }
                v26 = v4 == v17;
                if ( *v4 )
                  v26 = 1;
                if ( v26 )
                {
                  if ( v17[1] != -1 )
                  {
                    v19 = v17 + 1;
                    __dmb(0xBu);
                    do
                    {
                      v20 = __ldrex(v19);
                      v21 = v20 - 1;
                    }
                    while ( __strex(v21, v19) );
                    if ( !v21 )
                      json_delete(v17);
                  }
                }
                else
                {
                  v52 = v17;
                  if ( hashtable_set(v4 + 2, i, (int)v17) && v52[1] != -1 )
                    sub_A8E50(v52);
                }
                if ( *(_DWORD *)a1 )
                  break;
                v22 = *((_DWORD *)i - 3);
                v23 = v15 == v22;
                if ( v15 != v22 )
                  v23 = v22 == 0;
                if ( v23 )
                  break;
                v17 = *(_DWORD **)(v22 + 12);
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
        v27 = off_12A258(0x14u);
        v28 = v27;
        if ( !v27 )
          return 0;
        *v27 = 1;
        v27[1] = 1;
        v29 = off_12A258;
        v2 = v27;
        v27[3] = 0;
        v27[2] = 8;
        v30 = (int)v29(32);
        v28[4] = v30;
        if ( !v30 )
        {
          v2 = 0;
          jsonp_free(v28);
          return v2;
        }
        if ( *(_DWORD *)a1 != 1 )
          return v2;
        v31 = *(_DWORD *)(a1 + 12);
        v32 = 0;
        v33 = 1;
        if ( !v31 )
          return v2;
        while ( 2 )
        {
          if ( v31 <= v33 - 1 || (v34 = *(_DWORD **)(*(_DWORD *)(a1 + 16) + v32)) == 0 )
          {
            if ( v33 >= v31 )
              return v2;
            goto LABEL_47;
          }
          if ( v34[1] != -1 )
          {
            v35 = v34 + 1;
            do
              v36 = __ldrex(v35);
            while ( __strex(v36 + 1, v35) );
            __dmb(0xBu);
          }
          v37 = v34 == v28;
          if ( *v28 != 1 )
            v37 = 1;
          if ( v37 )
          {
            if ( v34[1] != -1 )
            {
              v38 = v34 + 1;
              __dmb(0xBu);
              do
              {
                v39 = __ldrex(v38);
                v40 = v39 - 1;
              }
              while ( __strex(v40, v38) );
              if ( !v40 )
                json_delete(v34);
            }
            goto LABEL_62;
          }
          v46 = *((_QWORD *)v28 + 1);
          v47 = (void *)v28[4];
          if ( HIDWORD(v46) + 1 <= (unsigned int)v46 )
            goto LABEL_76;
          HIDWORD(v46) = 2 * v46;
          LODWORD(v46) = v46 + 1;
          if ( (unsigned int)v46 < HIDWORD(v46) )
            LODWORD(v46) = HIDWORD(v46);
          if ( 4 * (_DWORD)v46 )
          {
            v53 = v46;
            v50 = off_12A258(4 * v46);
            if ( v50 )
            {
              v51 = v28[3];
              v28[4] = v50;
              v28[2] = v53;
              memcpy(v50, v47, 4 * v51);
              jsonp_free(v47);
              v47 = (void *)v28[4];
LABEL_76:
              if ( v47 )
              {
                v48 = v28[3];
                *((_DWORD *)v47 + v48) = v34;
                v28[3] = v48 + 1;
                goto LABEL_62;
              }
            }
          }
          if ( v34[1] != -1 )
            sub_A8E50(v34);
LABEL_62:
          if ( *(_DWORD *)a1 != 1 )
            return v2;
          v31 = *(_DWORD *)(a1 + 12);
          if ( v31 <= v33 )
            return v2;
LABEL_47:
          ++v33;
          v32 += 4;
          continue;
        }
      case 2:
        v41 = *(_QWORD *)(a1 + 8);
        if ( !(_DWORD)v41 )
          return 0;
        if ( HIDWORD(v41) == -1 )
          return 0;
        v42 = off_12A258(HIDWORD(v41) + 1);
        v43 = v42;
        if ( !v42 )
          return 0;
        memcpy(v42, (const void *)v41, HIDWORD(v41));
        v43[HIDWORD(v41)] = 0;
        result = (int *)off_12A258(0x10u);
        v2 = result;
        if ( result )
        {
          result[2] = (int)v43;
          result[3] = HIDWORD(v41);
          *result = 2;
          result[1] = 1;
          return result;
        }
        jsonp_free(v43);
        return v2;
      case 3:
        v44 = *(_QWORD *)(a1 + 8);
        result = (int *)off_12A258(0x10u);
        v2 = result;
        if ( !result )
          return v2;
        *((_QWORD *)result + 1) = v44;
        *result = 3;
        result[1] = 1;
        return result;
      case 4:
        v45 = *(_QWORD *)(a1 + 8);
        result = (int *)off_12A258(0x10u);
        v2 = result;
        if ( !result )
          return v2;
        *((_QWORD *)result + 1) = v45;
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
  }
  return 0;
}
