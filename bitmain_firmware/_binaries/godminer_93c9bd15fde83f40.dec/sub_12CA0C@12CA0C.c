int __fastcall sub_12CA0C(void *src, size_t n, const void **a3)
{
  unsigned int v4; // r6
  _BYTE *v7; // r0
  const void *v8; // r8
  _BYTE *v9; // r6
  _BYTE *v10; // r0
  void *v11; // r0
  const void *v12; // r2
  char *v14; // r5

  v4 = (unsigned int)a3[2];
  v7 = a3[1];
  if ( n < v4 - (unsigned int)v7 )
  {
    v8 = *a3;
LABEL_12:
    memcpy(&v7[(_DWORD)v8], src, n);
    v12 = *a3;
    v14 = (char *)a3[1] + n;
    a3[1] = v14;
    v14[(_DWORD)v12] = 0;
    return 0;
  }
  if ( !((n == -1) | (v4 >> 31)) && -2 - n >= (unsigned int)v7 )
  {
    v9 = (_BYTE *)(2 * v4);
    v10 = &v7[n + 1];
    if ( v10 >= v9 )
      v9 = v10;
    if ( v9 )
    {
      v11 = off_1A25E8((size_t)v9);
      v8 = v11;
      if ( v11 )
      {
        memcpy(v11, *a3, (size_t)a3[1]);
        if ( *a3 )
          off_1A25EC((void *)*a3);
        v7 = a3[1];
        *a3 = v8;
        a3[2] = v9;
        goto LABEL_12;
      }
    }
  }
  return -1;
}
