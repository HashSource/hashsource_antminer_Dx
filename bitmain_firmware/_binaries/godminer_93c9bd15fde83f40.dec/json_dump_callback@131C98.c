int __fastcall json_dump_callback(_DWORD *a1, int (__fastcall *a2)(char *, int, int), unsigned int a3, int a4)
{
  char *v8; // r0
  unsigned int v9; // r2
  int v10; // r3
  char *v11; // r12
  unsigned int v12; // lr
  char *v13; // r3
  int v14; // r0
  _DWORD *v15; // r5
  int v16; // r8
  _DWORD *v17; // r0
  int *v18; // r6
  unsigned int *v19; // r3
  unsigned int v20; // r2
  unsigned int v21; // r2
  unsigned int v23; // [sp+Ch] [bp-1Ch] BYREF
  void *v24; // [sp+10h] [bp-18h]
  int v25; // [sp+14h] [bp-14h]
  int v26; // [sp+18h] [bp-10h] BYREF
  void *ptr; // [sp+1Ch] [bp-Ch]
  _DWORD v28[2]; // [sp+20h] [bp-8h] BYREF

  if ( (a4 & 0x200) == 0 && (!a1 || *a1 > 1u) )
    return -1;
  v23 = 0;
  v25 = 3;
  v8 = (char *)off_1A25E8(64);
  v24 = v8;
  if ( !v8 )
    return -1;
  ptr = &v26;
  v26 = (int)&v26;
  v9 = 1 << v25;
  v28[1] = v28;
  v28[0] = v28;
  if ( 1 << v25 )
  {
    if ( v9 <= 4 )
    {
      v12 = 0;
    }
    else
    {
      v10 = 0;
      v11 = v8 + 236;
      v12 = ((v9 - 5) & 0xFFFFFFFC) + 4;
      do
      {
        v10 += 4;
        __pld(v11);
        *((_DWORD *)v11 - 58) = &v26;
        *((_DWORD *)v11 - 59) = &v26;
        v11 += 32;
        *((_DWORD *)v11 - 64) = &v26;
        *((_DWORD *)v11 - 65) = &v26;
        *((_DWORD *)v11 - 62) = &v26;
        *((_DWORD *)v11 - 63) = &v26;
        *((_DWORD *)v11 - 60) = &v26;
        *((_DWORD *)v11 - 61) = &v26;
      }
      while ( v10 != v12 );
    }
    v13 = &v8[8 * v12];
    do
    {
      *((_DWORD *)v13 + 1) = &v26;
      v13 += 8;
      *(_DWORD *)&v8[8 * v12++] = &v26;
    }
    while ( v12 < v9 );
  }
  v14 = sub_13144C(a1, a4, 0, &v23, __SPAIR64__(a3, (unsigned int)a2));
  v15 = ptr;
  v16 = v14;
  if ( ptr != &v26 )
  {
    do
    {
      v17 = (_DWORD *)v15[5];
      v18 = (int *)v15[1];
      if ( v17 )
      {
        v19 = v17 + 1;
        if ( v17[1] != -1 )
        {
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
      off_1A25EC(v15);
      v15 = v18;
    }
    while ( v18 != &v26 );
  }
  if ( v24 )
    off_1A25EC(v24);
  return v16;
}
