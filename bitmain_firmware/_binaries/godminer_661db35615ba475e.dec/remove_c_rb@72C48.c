_DWORD *__fastcall remove_c_rb(int a1, int a2)
{
  _DWORD *v4; // r4
  _DWORD *v5; // r5
  int v6; // r9
  size_t v7; // r7
  void *v8; // r0
  void *v9; // r6
  size_t v10; // r2
  int v11; // r7
  _DWORD *v12; // r3
  __int64 v14; // r2
  _DWORD *v15; // r6
  int v16; // r0
  int v17; // r2
  int v18; // r1
  _DWORD *v19; // r1
  _DWORD *v20; // r0
  _DWORD *v21; // lr
  int v22; // r7
  _DWORD *v23; // r2
  _DWORD *v24; // r2
  _DWORD *v25; // r0
  int v26; // lr
  int v27; // r7
  _DWORD *v28; // r2
  _DWORD *v29; // r2
  _DWORD *v30; // r0
  _DWORD *v31; // r0

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
    v10 = v7;
    if ( v8 )
      memcpy(v8, *(const void **)v6, v7);
    v11 = (*(int (__fastcall **)(int, void *, size_t))(a1 + 36))(a2, v9, v10);
    free(v9);
    if ( !v11 )
      break;
    v12 = (_DWORD *)*v4;
    v4 = (_DWORD *)v4[1];
    if ( v11 < 0 )
      v4 = v12;
  }
  v14 = *(_QWORD *)v4;
  if ( (_DWORD *)*v4 != v5 )
  {
    if ( (_DWORD *)HIDWORD(v14) != v5 )
    {
      while ( *(_DWORD **)HIDWORD(v14) != v5 )
        HIDWORD(v14) = *(_DWORD *)HIDWORD(v14);
      v15 = (_DWORD *)HIDWORD(v14);
      HIDWORD(v14) = *(_DWORD *)(HIDWORD(v14) + 4);
      goto LABEL_16;
    }
    HIDWORD(v14) = *v4;
  }
  v15 = v4;
LABEL_16:
  *(_DWORD *)(HIDWORD(v14) + 8) = v15[2];
  LODWORD(v14) = v15[2];
  if ( (_DWORD)v14 )
  {
    if ( *(_DWORD **)v14 == v15 )
      *(_DWORD *)v14 = HIDWORD(v14);
    else
      *(_DWORD *)(v14 + 4) = HIDWORD(v14);
  }
  else
  {
    *(_DWORD *)a1 = HIDWORD(v14);
  }
  if ( v4 != v15 )
  {
    v16 = v4[4];
    v17 = v4[5];
    v18 = v15[5];
    v4[4] = v15[4];
    v15[4] = v16;
    v4[5] = v18;
    v15[5] = v17;
  }
  if ( !v15[3] )
  {
    LODWORD(v14) = *(_DWORD *)a1;
    while ( HIDWORD(v14) != (_DWORD)v14 )
    {
      if ( *(_DWORD *)(HIDWORD(v14) + 12) )
        break;
      LODWORD(v14) = *(_DWORD *)(HIDWORD(v14) + 8);
      v19 = *(_DWORD **)v14;
      if ( HIDWORD(v14) == *(_DWORD *)v14 )
      {
        v19 = *(_DWORD **)(v14 + 4);
        v25 = (_DWORD *)*v19;
        if ( v19[3] == 1 )
        {
          v19[3] = 0;
          *(_DWORD *)(v14 + 4) = v25;
          *(_DWORD *)(v14 + 12) = 1;
          if ( v25 != v5 )
            v25[2] = v14;
          v31 = *(_DWORD **)(v14 + 8);
          if ( v19 != v5 )
          {
            v19[2] = v31;
            v31 = *(_DWORD **)(v14 + 8);
          }
          if ( v31 )
          {
            if ( (_DWORD)v14 == *v31 )
              *v31 = v19;
            else
              v31[1] = v19;
          }
          else
          {
            *(_DWORD *)a1 = v19;
          }
          *v19 = v14;
          if ( (_DWORD *)v14 != v5 )
            *(_DWORD *)(v14 + 8) = v19;
          LODWORD(v14) = *(_DWORD *)(HIDWORD(v14) + 8);
          v19 = *(_DWORD **)(v14 + 4);
          v25 = (_DWORD *)*v19;
        }
        v26 = v19[1];
        v27 = *(_DWORD *)(v26 + 12);
        if ( v25[3] )
        {
          if ( !v27 )
          {
            v28 = (_DWORD *)v25[1];
            v25[3] = 0;
            v19[3] = 1;
            *v19 = v28;
            if ( v28 != v5 )
              v28[2] = v19;
            v29 = (_DWORD *)v19[2];
            if ( v25 != v5 )
            {
              v25[2] = v29;
              v29 = (_DWORD *)v19[2];
            }
            if ( v29 )
            {
              if ( v19 == (_DWORD *)v29[1] )
                v29[1] = v25;
              else
                *v29 = v25;
            }
            else
            {
              *(_DWORD *)a1 = v25;
            }
            v25[1] = v19;
            if ( v19 != v5 )
              v19[2] = v25;
            LODWORD(v14) = *(_DWORD *)(HIDWORD(v14) + 8);
            v19 = *(_DWORD **)(v14 + 4);
            v25 = (_DWORD *)*v19;
            v26 = v19[1];
          }
LABEL_62:
          v19[3] = *(_DWORD *)(v14 + 12);
          *(_DWORD *)(v14 + 12) = 0;
          *(_DWORD *)(v26 + 12) = 0;
          *(_DWORD *)(v14 + 4) = v25;
          if ( v25 != v5 )
            v25[2] = v14;
          HIDWORD(v14) = *(_DWORD *)(v14 + 8);
          if ( v19 != v5 )
          {
            v19[2] = HIDWORD(v14);
            HIDWORD(v14) = *(_DWORD *)(v14 + 8);
          }
          if ( HIDWORD(v14) )
          {
            if ( *(_DWORD *)HIDWORD(v14) == (_DWORD)v14 )
              *(_DWORD *)HIDWORD(v14) = v19;
            else
              *(_DWORD *)(HIDWORD(v14) + 4) = v19;
          }
          else
          {
            *(_DWORD *)a1 = v19;
          }
          *v19 = v14;
          if ( (_DWORD *)v14 == v5 )
          {
LABEL_58:
            HIDWORD(v14) = *(_DWORD *)a1;
            LODWORD(v14) = *(_DWORD *)a1;
            continue;
          }
LABEL_57:
          *(_DWORD *)(v14 + 8) = v19;
          goto LABEL_58;
        }
        if ( v27 )
          goto LABEL_62;
      }
      else
      {
        v20 = (_DWORD *)v19[1];
        if ( v19[3] == 1 )
        {
          v19[3] = 0;
          *(_DWORD *)v14 = v20;
          *(_DWORD *)(v14 + 12) = 1;
          if ( v20 != v5 )
            v20[2] = v14;
          v30 = *(_DWORD **)(v14 + 8);
          if ( v19 != v5 )
          {
            v19[2] = v30;
            v30 = *(_DWORD **)(v14 + 8);
          }
          if ( v30 )
          {
            if ( (_DWORD)v14 == v30[1] )
              v30[1] = v19;
            else
              *v30 = v19;
          }
          else
          {
            *(_DWORD *)a1 = v19;
          }
          v19[1] = v14;
          if ( (_DWORD *)v14 != v5 )
            *(_DWORD *)(v14 + 8) = v19;
          LODWORD(v14) = *(_DWORD *)(HIDWORD(v14) + 8);
          v19 = *(_DWORD **)v14;
          v20 = *(_DWORD **)(*(_DWORD *)v14 + 4);
        }
        v21 = (_DWORD *)*v19;
        v22 = *(_DWORD *)(*v19 + 12);
        if ( v20[3] )
        {
          if ( !v22 )
          {
            v23 = (_DWORD *)*v20;
            v20[3] = 0;
            v19[3] = 1;
            v19[1] = v23;
            if ( v23 != v5 )
              v23[2] = v19;
            v24 = (_DWORD *)v19[2];
            if ( v20 != v5 )
            {
              v20[2] = v24;
              v24 = (_DWORD *)v19[2];
            }
            if ( v24 )
            {
              if ( v19 == (_DWORD *)*v24 )
                *v24 = v20;
              else
                v24[1] = v20;
            }
            else
            {
              *(_DWORD *)a1 = v20;
            }
            *v20 = v19;
            if ( v19 != v5 )
              v19[2] = v20;
            LODWORD(v14) = *(_DWORD *)(HIDWORD(v14) + 8);
            v19 = *(_DWORD **)v14;
            v21 = **(_DWORD ***)v14;
            v20 = *(_DWORD **)(*(_DWORD *)v14 + 4);
          }
LABEL_47:
          v19[3] = *(_DWORD *)(v14 + 12);
          *(_DWORD *)(v14 + 12) = 0;
          v21[3] = 0;
          *(_DWORD *)v14 = v20;
          if ( v20 != v5 )
            v20[2] = v14;
          HIDWORD(v14) = *(_DWORD *)(v14 + 8);
          if ( v19 != v5 )
          {
            v19[2] = HIDWORD(v14);
            HIDWORD(v14) = *(_DWORD *)(v14 + 8);
          }
          if ( HIDWORD(v14) )
          {
            if ( *(_DWORD *)(HIDWORD(v14) + 4) == (_DWORD)v14 )
              *(_DWORD *)(HIDWORD(v14) + 4) = v19;
            else
              *(_DWORD *)HIDWORD(v14) = v19;
          }
          else
          {
            *(_DWORD *)a1 = v19;
          }
          v19[1] = v14;
          if ( (_DWORD *)v14 == v5 )
            goto LABEL_58;
          goto LABEL_57;
        }
        if ( v22 )
          goto LABEL_47;
      }
      HIDWORD(v14) = v14;
      LODWORD(v14) = *(_DWORD *)a1;
      v19[3] = 1;
    }
    *(_DWORD *)(HIDWORD(v14) + 12) = 0;
  }
  sub_6B290((_DWORD *)a1);
  return v15;
}
