_DWORD *__fastcall remove_c_rb(int a1, int a2)
{
  _DWORD *v4; // r4
  _DWORD *v5; // r5
  int v6; // r7
  size_t v7; // r9
  void *v8; // r0
  void *v9; // r6
  int v10; // r7
  __int64 v11; // kr00_8
  __int64 v13; // r2
  _DWORD *v14; // r6
  int v15; // r7
  int v16; // r2
  int v17; // r1
  _DWORD *v18; // r1
  _DWORD *v19; // r0
  int v20; // r4
  int v21; // r9
  _DWORD *v22; // r2
  _DWORD *v23; // r4
  _DWORD *v24; // r0
  _DWORD *v25; // r0
  _DWORD *v26; // lr
  int v27; // r4
  int v28; // r1
  _DWORD *v29; // r1
  _DWORD *v30; // r2
  _DWORD *v31; // r1
  _DWORD *v32; // r4
  _DWORD *v33; // r4

  v5 = (_DWORD *)(a1 + 4);
  v4 = *(_DWORD **)a1;
  while ( 1 )
  {
    if ( v4 == v5 )
      return 0;
    v6 = v4[4];
    v7 = *(_DWORD *)(v6 + 4);
    v8 = malloc(v7);
    v9 = v8;
    if ( v8 )
      memcpy(v8, *(const void **)v6, v7);
    v10 = (*(int (__fastcall **)(int, void *))(a1 + 36))(a2, v9);
    free(v9);
    if ( !v10 )
      break;
    v11 = *(_QWORD *)v4;
    v4 = (_DWORD *)v4[1];
    if ( v10 < 0 )
      v4 = (_DWORD *)v11;
  }
  v13 = *(_QWORD *)v4;
  if ( (_DWORD *)*v4 != v5 )
  {
    if ( (_DWORD *)HIDWORD(v13) != v5 )
    {
      while ( *(_DWORD **)HIDWORD(v13) != v5 )
        HIDWORD(v13) = *(_DWORD *)HIDWORD(v13);
      v14 = (_DWORD *)HIDWORD(v13);
      HIDWORD(v13) = *(_DWORD *)(HIDWORD(v13) + 4);
      *(_DWORD *)(HIDWORD(v13) + 8) = v14[2];
      LODWORD(v13) = v14[2];
      if ( !(_DWORD)v13 )
        goto LABEL_13;
LABEL_17:
      if ( *(_DWORD **)v13 == v14 )
        *(_DWORD *)v13 = HIDWORD(v13);
      else
        *(_DWORD *)(v13 + 4) = HIDWORD(v13);
      goto LABEL_20;
    }
    HIDWORD(v13) = *v4;
  }
  v14 = v4;
  *(_DWORD *)(HIDWORD(v13) + 8) = v4[2];
  LODWORD(v13) = v4[2];
  if ( (_DWORD)v13 )
    goto LABEL_17;
LABEL_13:
  *(_DWORD *)a1 = HIDWORD(v13);
LABEL_20:
  if ( v4 != v14 )
  {
    v15 = v4[4];
    v16 = v4[5];
    v17 = v14[5];
    v4[4] = v14[4];
    v14[4] = v15;
    v4[5] = v17;
    v14[5] = v16;
  }
  if ( !v14[3] )
  {
    LODWORD(v13) = *(_DWORD *)a1;
LABEL_25:
    while ( HIDWORD(v13) != (_DWORD)v13 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(HIDWORD(v13) + 12) )
          goto LABEL_32;
        LODWORD(v13) = *(_DWORD *)(HIDWORD(v13) + 8);
        v18 = *(_DWORD **)v13;
        if ( HIDWORD(v13) == *(_DWORD *)v13 )
          break;
        v19 = (_DWORD *)v18[1];
        if ( v18[3] == 1 )
        {
          v18[3] = 0;
          *(_DWORD *)(v13 + 12) = 1;
          *(_DWORD *)v13 = v19;
          if ( v19 != v5 )
            v19[2] = v13;
          v32 = *(_DWORD **)(v13 + 8);
          if ( v18 != v5 )
          {
            v18[2] = v32;
            v32 = *(_DWORD **)(v13 + 8);
          }
          if ( v32 )
          {
            if ( (_DWORD)v13 == v32[1] )
              v32[1] = v18;
            else
              *v32 = v18;
          }
          else
          {
            *(_DWORD *)a1 = v18;
          }
          v18[1] = v13;
          if ( (_DWORD *)v13 != v5 )
            *(_DWORD *)(v13 + 8) = v18;
          LODWORD(v13) = *(_DWORD *)(HIDWORD(v13) + 8);
          v18 = *(_DWORD **)v13;
          v19 = *(_DWORD **)(*(_DWORD *)v13 + 4);
        }
        v20 = *v18;
        v21 = *(_DWORD *)(*v18 + 12);
        if ( v19[3] )
        {
          if ( !v21 )
          {
            v22 = (_DWORD *)*v19;
            v19[3] = 0;
            v18[3] = 1;
            v18[1] = v22;
            if ( v22 != v5 )
              v22[2] = v18;
            v23 = (_DWORD *)v18[2];
            if ( v19 != v5 )
            {
              v19[2] = v23;
              v23 = (_DWORD *)v18[2];
            }
            if ( v23 )
            {
              if ( v18 == (_DWORD *)*v23 )
                *v23 = v19;
              else
                v23[1] = v19;
            }
            else
            {
              *(_DWORD *)a1 = v19;
            }
            *v19 = v18;
            if ( v18 != v5 )
              v18[2] = v19;
            LODWORD(v13) = *(_DWORD *)(HIDWORD(v13) + 8);
            v18 = *(_DWORD **)v13;
            v19 = *(_DWORD **)(*(_DWORD *)v13 + 4);
            v20 = **(_DWORD **)v13;
          }
LABEL_45:
          v18[3] = *(_DWORD *)(v13 + 12);
          *(_DWORD *)(v13 + 12) = 0;
          *(_DWORD *)(v20 + 12) = 0;
          *(_DWORD *)v13 = v19;
          if ( v19 != v5 )
            v19[2] = v13;
          v24 = *(_DWORD **)(v13 + 8);
          if ( v18 != v5 )
          {
            v18[2] = v24;
            v24 = *(_DWORD **)(v13 + 8);
          }
          if ( v24 )
          {
            if ( v24[1] == (_DWORD)v13 )
              v24[1] = v18;
            else
              *v24 = v18;
          }
          else
          {
            *(_DWORD *)a1 = v18;
          }
          v18[1] = v13;
          if ( (_DWORD *)v13 != v5 )
            *(_DWORD *)(v13 + 8) = v18;
LABEL_55:
          HIDWORD(v13) = *(_DWORD *)a1;
          LODWORD(v13) = *(_DWORD *)a1;
          goto LABEL_25;
        }
        if ( v21 )
          goto LABEL_45;
        HIDWORD(v13) = v13;
        LODWORD(v13) = *(_DWORD *)a1;
        v18[3] = 1;
        if ( HIDWORD(v13) == (_DWORD)v13 )
          goto LABEL_32;
      }
      v25 = *(_DWORD **)(v13 + 4);
      v26 = (_DWORD *)*v25;
      if ( v25[3] == 1 )
      {
        v25[3] = 0;
        *(_DWORD *)(v13 + 12) = 1;
        *(_DWORD *)(v13 + 4) = v26;
        if ( v26 != v5 )
          v26[2] = v13;
        v33 = *(_DWORD **)(v13 + 8);
        if ( v25 != v5 )
        {
          v25[2] = v33;
          v33 = *(_DWORD **)(v13 + 8);
        }
        if ( v33 )
        {
          if ( (_DWORD)v13 == *v33 )
            *v33 = v25;
          else
            v33[1] = v25;
        }
        else
        {
          *(_DWORD *)a1 = v25;
        }
        *v25 = v13;
        if ( (_DWORD *)v13 != v5 )
          *(_DWORD *)(v13 + 8) = v25;
        LODWORD(v13) = *(_DWORD *)(HIDWORD(v13) + 8);
        v25 = *(_DWORD **)(v13 + 4);
        v26 = (_DWORD *)*v25;
      }
      v27 = v25[1];
      v28 = *(_DWORD *)(v27 + 12);
      if ( v26[3] )
      {
        if ( !v28 )
        {
          v30 = (_DWORD *)v26[1];
          v26[3] = 0;
          v25[3] = 1;
          *v25 = v30;
          if ( v30 != v5 )
            v30[2] = v25;
          v31 = (_DWORD *)v25[2];
          if ( v26 != v5 )
          {
            v26[2] = v31;
            v31 = (_DWORD *)v25[2];
          }
          if ( v31 )
          {
            if ( v25 == (_DWORD *)v31[1] )
              v31[1] = v26;
            else
              *v31 = v26;
          }
          else
          {
            *(_DWORD *)a1 = v26;
          }
          v26[1] = v25;
          if ( v25 != v5 )
            v25[2] = v26;
          LODWORD(v13) = *(_DWORD *)(HIDWORD(v13) + 8);
          v25 = *(_DWORD **)(v13 + 4);
          v27 = v25[1];
          v26 = (_DWORD *)*v25;
        }
LABEL_59:
        v25[3] = *(_DWORD *)(v13 + 12);
        *(_DWORD *)(v13 + 12) = 0;
        *(_DWORD *)(v27 + 12) = 0;
        *(_DWORD *)(v13 + 4) = v26;
        if ( v26 != v5 )
          v26[2] = v13;
        v29 = *(_DWORD **)(v13 + 8);
        if ( v25 != v5 )
        {
          v25[2] = v29;
          v29 = *(_DWORD **)(v13 + 8);
        }
        if ( v29 )
        {
          if ( *v29 == (_DWORD)v13 )
            *v29 = v25;
          else
            v29[1] = v25;
        }
        else
        {
          *(_DWORD *)a1 = v25;
        }
        *v25 = v13;
        if ( (_DWORD *)v13 != v5 )
          *(_DWORD *)(v13 + 8) = v25;
        goto LABEL_55;
      }
      if ( v28 )
        goto LABEL_59;
      HIDWORD(v13) = v13;
      v25[3] = 1;
      LODWORD(v13) = *(_DWORD *)a1;
    }
LABEL_32:
    *(_DWORD *)(HIDWORD(v13) + 12) = 0;
  }
  sub_57D5C((_DWORD *)a1);
  return v14;
}
