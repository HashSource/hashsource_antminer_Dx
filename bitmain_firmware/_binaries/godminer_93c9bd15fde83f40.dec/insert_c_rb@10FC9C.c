int __fastcall insert_c_rb(int a1, const void *a2, size_t a3, const void *a4, size_t size)
{
  _DWORD *v9; // r0
  _DWORD *v10; // r5
  _DWORD *v11; // r8
  size_t *v12; // r0
  size_t *v13; // r6
  void *v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r4
  void *v17; // r0
  _DWORD *v18; // r4
  int v19; // r11
  size_t v20; // r7
  void *v21; // r0
  void *v22; // r10
  size_t v23; // r11
  void *v24; // r0
  void *v25; // r7
  size_t v26; // r2
  int v27; // r6
  __int64 v28; // r2
  int v29; // r7
  size_t v30; // r6
  void *v31; // r0
  void *v32; // r10
  int v33; // r7
  size_t v34; // r11
  void *v35; // r0
  void *v36; // r6
  int v37; // r7
  _DWORD *v38; // r2
  _DWORD *v39; // r1
  _DWORD *v40; // r0
  _DWORD *v41; // r3
  _DWORD *v42; // r1
  _DWORD *v43; // r2
  _DWORD *v44; // r2
  int v46; // r7
  _DWORD *v47; // r12
  _DWORD *v48; // r1
  _DWORD *v49; // r1
  bool v50; // zf
  _DWORD *v51; // r12
  size_t *v52; // r0
  void *v53; // r0

  v9 = malloc(0x18u);
  v10 = v9;
  if ( !v9 )
    return 2;
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
      v52 = v13;
      v13 = 0;
      free(v52);
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
        v53 = v16;
        v16 = 0;
        free(v53);
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
    v51 = v10;
    goto LABEL_47;
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
    v26 = v23;
    if ( v24 )
      memcpy(v24, (const void *)*v13, v23);
    v27 = (*(int (__fastcall **)(void *, void *, size_t))(a1 + 36))(v25, v22, v26);
    free(v22);
    free(v25);
    if ( !v27 )
      return 401;
    v28 = *(_QWORD *)v18;
    if ( v27 < 0 )
      break;
    if ( v11 == (_DWORD *)HIDWORD(v28) )
      goto LABEL_22;
LABEL_14:
    v13 = (size_t *)v10[4];
    v18 = (_DWORD *)HIDWORD(v28);
  }
  HIDWORD(v28) = *v18;
  if ( v11 != (_DWORD *)v28 )
    goto LABEL_14;
LABEL_22:
  v29 = v18[4];
  v10[2] = v18;
  v30 = *(_DWORD *)(v29 + 4);
  v31 = malloc(v30);
  v32 = v31;
  if ( v31 )
    memcpy(v31, *(const void **)v29, v30);
  v33 = v10[4];
  v34 = *(_DWORD *)(v33 + 4);
  v35 = malloc(v34);
  v36 = v35;
  if ( v35 )
    memcpy(v35, *(const void **)v33, v34);
  v37 = (*(int (__fastcall **)(void *, void *))(a1 + 36))(v36, v32);
  free(v32);
  free(v36);
  if ( v37 >= 0 )
    v18[1] = v10;
  else
    *v18 = v10;
  v51 = *(_DWORD **)a1;
LABEL_30:
  if ( v10 != v51 )
  {
    do
    {
      v38 = (_DWORD *)v10[2];
      if ( v38[3] != 1 )
        break;
      v39 = (_DWORD *)v38[2];
      v40 = (_DWORD *)*v39;
      v41 = v39;
      if ( v38 == (_DWORD *)*v39 )
      {
        v46 = v39[1];
        if ( *(_DWORD *)(v46 + 12) == 1 )
        {
          v38[3] = 0;
          v10 = v39;
          *(_DWORD *)(v46 + 12) = 0;
          v39[3] = 1;
          goto LABEL_30;
        }
        v47 = (_DWORD *)v38[1];
        if ( v47 == v10 )
        {
          v41 = (_DWORD *)*v10;
          v50 = v11 == (_DWORD *)*v10;
          v38[1] = *v10;
          if ( !v50 )
          {
            v41[2] = v38;
            v39 = (_DWORD *)v38[2];
          }
          if ( v11 != v10 )
          {
            v10[2] = v39;
            v39 = (_DWORD *)v38[2];
          }
          if ( v39 )
          {
            v41 = (_DWORD *)*v39;
            if ( v38 == (_DWORD *)*v39 )
              *v39 = v10;
            else
              v39[1] = v10;
          }
          else
          {
            *(_DWORD *)a1 = v10;
          }
          *v10 = v38;
          if ( v11 == v38 )
          {
            v40 = *(_DWORD **)(a1 + 12);
          }
          else
          {
            v40 = v47;
            v38[2] = v10;
          }
          if ( v11 == v38 )
          {
            v10 = (_DWORD *)(a1 + 4);
          }
          else
          {
            v41 = (_DWORD *)v10[2];
            v10 = v38;
          }
          if ( v11 == v38 )
            v41 = (_DWORD *)v40[2];
          v38 = (_DWORD *)*v41;
          v47 = *(_DWORD **)(*v41 + 4);
        }
        v40[3] = 0;
        v41[3] = 1;
        *v41 = v47;
        if ( v11 != v47 )
          v47[2] = v41;
        v48 = (_DWORD *)v41[2];
        if ( v11 != v38 )
        {
          v38[2] = v48;
          v48 = (_DWORD *)v41[2];
        }
        if ( v48 )
        {
          if ( v41 == (_DWORD *)v48[1] )
            v48[1] = v38;
          else
            *v48 = v38;
        }
        else
        {
          *(_DWORD *)a1 = v38;
        }
        v38[1] = v41;
        if ( v11 != v41 )
        {
          v41[2] = v38;
          v51 = *(_DWORD **)a1;
          goto LABEL_30;
        }
      }
      else
      {
        if ( v40[3] == 1 )
        {
          v38[3] = 0;
          v10 = v39;
          v40[3] = 0;
          v39[3] = 1;
          goto LABEL_30;
        }
        if ( v10 == (_DWORD *)*v38 )
        {
          v49 = (_DWORD *)v10[1];
          *v38 = v49;
          if ( v11 != v49 )
          {
            v49[2] = v38;
            v41 = (_DWORD *)v38[2];
          }
          if ( v11 != v10 )
          {
            v10[2] = v41;
            v41 = (_DWORD *)v38[2];
          }
          if ( v41 )
          {
            v49 = (_DWORD *)v41[1];
            if ( v38 == v49 )
              v41[1] = v10;
            else
              *v41 = v10;
          }
          else
          {
            *(_DWORD *)a1 = v10;
          }
          v50 = v11 == v38;
          v10[1] = v38;
          if ( v11 == v38 )
          {
            v38 = *(_DWORD **)(a1 + 12);
          }
          else
          {
            v49 = v10;
            v38[2] = v10;
            v10 = v38;
          }
          if ( v50 )
            v10 = (_DWORD *)(a1 + 4);
          else
            v41 = (_DWORD *)v49[2];
          if ( v50 )
            v41 = (_DWORD *)v38[2];
          else
            v38 = v49;
        }
        v42 = (_DWORD *)v41[1];
        v38[3] = 0;
        v41[3] = 1;
        v43 = (_DWORD *)*v42;
        v50 = v11 == (_DWORD *)*v42;
        v41[1] = *v42;
        if ( !v50 )
          v43[2] = v41;
        v44 = (_DWORD *)v41[2];
        if ( v11 != v42 )
        {
          v42[2] = v44;
          v44 = (_DWORD *)v41[2];
        }
        if ( v44 )
        {
          if ( v41 == (_DWORD *)*v44 )
            *v44 = v42;
          else
            v44[1] = v42;
        }
        else
        {
          *(_DWORD *)a1 = v42;
        }
        *v42 = v41;
        if ( v11 != v41 )
          v41[2] = v42;
      }
      v51 = *(_DWORD **)a1;
    }
    while ( v10 != *(_DWORD **)a1 );
  }
LABEL_47:
  v51[3] = 0;
  sub_10E904((_DWORD *)a1);
  return 0;
}
