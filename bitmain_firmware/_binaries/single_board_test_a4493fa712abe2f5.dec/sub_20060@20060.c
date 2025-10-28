int __fastcall sub_20060(void *src, size_t n, const void **a3)
{
  unsigned int v4; // r6
  unsigned int v7; // r0
  char *v8; // r8
  _BYTE *v9; // r6
  _BYTE *v10; // r0
  char *v11; // r0
  char *v12; // r2
  char *v14; // r5

  v4 = (unsigned int)a3[2];
  v7 = (unsigned int)a3[1];
  if ( n < v4 - v7 )
  {
    v8 = (char *)*a3;
LABEL_12:
    memcpy(&v8[v7], src, n);
    v12 = (char *)*a3;
    v14 = (char *)a3[1] + n;
    a3[1] = v14;
    v14[(_DWORD)v12] = 0;
    return 0;
  }
  if ( !((n == -1) | (v4 >> 31)) && -2 - n >= v7 )
  {
    v9 = (_BYTE *)(2 * v4);
    v10 = (_BYTE *)(v7 + n + 1);
    if ( v9 < v10 )
      v9 = v10;
    if ( v9 )
    {
      v11 = (char *)off_12A258((size_t)v9);
      v8 = v11;
      if ( v11 )
      {
        memcpy(v11, *a3, (size_t)a3[1]);
        if ( *a3 )
          off_12A254((void *)*a3);
        v7 = (unsigned int)a3[1];
        *a3 = v8;
        a3[2] = v9;
        goto LABEL_12;
      }
    }
  }
  return -1;
}
