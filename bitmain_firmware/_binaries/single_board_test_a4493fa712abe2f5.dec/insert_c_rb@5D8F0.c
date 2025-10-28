int __fastcall insert_c_rb(int a1, const void *a2, size_t a3, const void *a4, size_t size)
{
  _DWORD *v9; // r0
  _DWORD *v10; // r4
  _DWORD *v11; // r8
  size_t *v12; // r0
  size_t *v13; // r6
  void *v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r5
  void *v17; // r0
  _DWORD *v18; // r5
  int v19; // r7
  size_t v20; // r11
  void *v21; // r0
  void *v22; // r10
  size_t v23; // r11
  void *v24; // r0
  void *v25; // r7
  int v26; // r6
  __int64 v27; // r2
  int v28; // r7
  size_t v29; // r6
  void *v30; // r0
  void *v31; // r10
  int v32; // r7
  size_t v33; // r11
  void *v34; // r0
  void *v35; // r6
  int v36; // r7
  _DWORD *v37; // r2
  _DWORD *v38; // r1
  _DWORD *v39; // r0
  _DWORD *v40; // r3
  _DWORD *v41; // r1
  _DWORD *v42; // r2
  _DWORD *v43; // r2
  int v45; // lr
  _DWORD *v46; // r7
  _DWORD *v47; // r0
  _DWORD *v48; // r1
  bool v49; // zf
  _DWORD *v50; // r7
  size_t *v51; // r0
  void *v52; // r0

  v9 = malloc(0x18u);
  if ( !v9 )
    return 2;
  v10 = v9;
  v11 = (_DWORD *)(a1 + 4);
  *v9 = a1 + 4;
  v9[1] = a1 + 4;
  v9[3] = 1;
  v12 = (size_t *)malloc(8u);
  v13 = v12;
  if ( v12 )
  {
    v12[1] = a3;
    v14 = malloc(a3);
    *v13 = (size_t)v14;
    if ( v14 )
    {
      memcpy(v14, a2, a3);
    }
    else
    {
      v51 = v13;
      v13 = 0;
      free(v51);
    }
  }
  v10[4] = v13;
  if ( a4 )
  {
    v15 = malloc(8u);
    v16 = v15;
    if ( v15 )
    {
      v15[1] = size;
      v17 = malloc(size);
      *v16 = v17;
      if ( v17 )
      {
        memcpy(v17, a4, size);
      }
      else
      {
        v52 = v16;
        v16 = 0;
        free(v52);
      }
    }
    v10[5] = v16;
  }
  else
  {
    v10[5] = 0;
  }
  v18 = *(_DWORD **)a1;
  if ( v11 == *(_DWORD **)a1 )
  {
    *(_DWORD *)a1 = v10;
    v10[2] = 0;
    v50 = v10;
    goto LABEL_45;
  }
  while ( 1 )
  {
    v19 = v18[4];
    v20 = *(_DWORD *)(v19 + 4);
    v21 = malloc(v20);
    v22 = v21;
    if ( v21 )
      memcpy(v21, *(const void **)v19, v20);
    v23 = v13[1];
    v24 = malloc(v23);
    v25 = v24;
    if ( v24 )
      memcpy(v24, (const void *)*v13, v23);
    v26 = (*(int (__fastcall **)(void *, void *))(a1 + 36))(v25, v22);
    free(v22);
    free(v25);
    if ( !v26 )
      return 401;
    v27 = *(_QWORD *)v18;
    if ( v26 < 0 )
      break;
    if ( v11 == (_DWORD *)HIDWORD(v27) )
      goto LABEL_21;
LABEL_13:
    v13 = (size_t *)v10[4];
    v18 = (_DWORD *)HIDWORD(v27);
  }
  HIDWORD(v27) = *v18;
  if ( v11 != (_DWORD *)v27 )
    goto LABEL_13;
LABEL_21:
  v28 = v18[4];
  v10[2] = v18;
  v29 = *(_DWORD *)(v28 + 4);
  v30 = malloc(v29);
  v31 = v30;
  if ( v30 )
    memcpy(v30, *(const void **)v28, v29);
  v32 = v10[4];
  v33 = *(_DWORD *)(v32 + 4);
  v34 = malloc(v33);
  v35 = v34;
  if ( v34 )
    memcpy(v34, *(const void **)v32, v33);
  v36 = (*(int (__fastcall **)(void *, void *))(a1 + 36))(v35, v31);
  free(v31);
  free(v35);
  if ( v36 >= 0 )
    v18[1] = v10;
  else
    *v18 = v10;
  v50 = *(_DWORD **)a1;
LABEL_29:
  if ( v10 != v50 )
  {
    do
    {
      v37 = (_DWORD *)v10[2];
      if ( v37[3] != 1 )
        break;
      v38 = (_DWORD *)v37[2];
      v39 = (_DWORD *)*v38;
      v40 = v38;
      if ( v37 == (_DWORD *)*v38 )
      {
        v45 = v38[1];
        if ( *(_DWORD *)(v45 + 12) == 1 )
        {
          v37[3] = 0;
          v10 = v38;
          *(_DWORD *)(v45 + 12) = 0;
          v38[3] = 1;
          goto LABEL_29;
        }
        v46 = (_DWORD *)v37[1];
        if ( v46 == v10 )
        {
          v40 = (_DWORD *)*v10;
          v49 = v11 == (_DWORD *)*v10;
          v37[1] = *v10;
          if ( !v49 )
          {
            v40[2] = v37;
            v38 = (_DWORD *)v37[2];
          }
          if ( v11 != v10 )
          {
            v10[2] = v38;
            v38 = (_DWORD *)v37[2];
          }
          if ( v38 )
          {
            v40 = (_DWORD *)*v38;
            if ( v37 == (_DWORD *)*v38 )
              *v38 = v10;
            else
              v38[1] = v10;
          }
          else
          {
            *(_DWORD *)a1 = v10;
          }
          *v10 = v37;
          if ( v11 == v37 )
          {
            v39 = *(_DWORD **)(a1 + 12);
          }
          else
          {
            v39 = v46;
            v37[2] = v10;
          }
          if ( v11 == v37 )
          {
            v10 = (_DWORD *)(a1 + 4);
          }
          else
          {
            v40 = (_DWORD *)v10[2];
            v10 = v37;
          }
          if ( v11 == v37 )
            v40 = (_DWORD *)v39[2];
          v37 = (_DWORD *)*v40;
          v46 = *(_DWORD **)(*v40 + 4);
        }
        v39[3] = 0;
        v40[3] = 1;
        *v40 = v46;
        if ( v11 != v46 )
          v46[2] = v40;
        v47 = (_DWORD *)v40[2];
        if ( v11 != v37 )
        {
          v37[2] = v47;
          v47 = (_DWORD *)v40[2];
        }
        if ( v47 )
        {
          if ( v40 == (_DWORD *)v47[1] )
            v47[1] = v37;
          else
            *v47 = v37;
        }
        else
        {
          *(_DWORD *)a1 = v37;
        }
        v37[1] = v40;
        if ( v11 != v40 )
        {
          v40[2] = v37;
          v50 = *(_DWORD **)a1;
          goto LABEL_29;
        }
      }
      else
      {
        if ( v39[3] == 1 )
        {
          v37[3] = 0;
          v10 = v38;
          v39[3] = 0;
          v38[3] = 1;
          goto LABEL_29;
        }
        if ( v10 == (_DWORD *)*v37 )
        {
          v48 = (_DWORD *)v10[1];
          *v37 = v48;
          if ( v11 != v48 )
          {
            v48[2] = v37;
            v40 = (_DWORD *)v37[2];
          }
          if ( v11 != v10 )
          {
            v10[2] = v40;
            v40 = (_DWORD *)v37[2];
          }
          if ( v40 )
          {
            v48 = (_DWORD *)v40[1];
            if ( v37 == v48 )
              v40[1] = v10;
            else
              *v40 = v10;
          }
          else
          {
            *(_DWORD *)a1 = v10;
          }
          v49 = v11 == v37;
          v10[1] = v37;
          if ( v11 == v37 )
          {
            v37 = *(_DWORD **)(a1 + 12);
          }
          else
          {
            v48 = v10;
            v37[2] = v10;
            v10 = v37;
          }
          if ( v49 )
            v10 = (_DWORD *)(a1 + 4);
          else
            v40 = (_DWORD *)v48[2];
          if ( v49 )
            v40 = (_DWORD *)v37[2];
          else
            v37 = v48;
        }
        v41 = (_DWORD *)v40[1];
        v37[3] = 0;
        v40[3] = 1;
        v42 = (_DWORD *)*v41;
        v49 = v11 == (_DWORD *)*v41;
        v40[1] = *v41;
        if ( !v49 )
          v42[2] = v40;
        v43 = (_DWORD *)v40[2];
        if ( v11 != v41 )
        {
          v41[2] = v43;
          v43 = (_DWORD *)v40[2];
        }
        if ( v43 )
        {
          if ( v40 == (_DWORD *)*v43 )
            *v43 = v41;
          else
            v43[1] = v41;
        }
        else
        {
          *(_DWORD *)a1 = v41;
        }
        *v41 = v40;
        if ( v11 != v40 )
          v40[2] = v41;
      }
      v50 = *(_DWORD **)a1;
    }
    while ( v10 != *(_DWORD **)a1 );
  }
LABEL_45:
  v50[3] = 0;
  sub_57D5C((_DWORD *)a1);
  return 0;
}
