int __fastcall json_dump_callback(_DWORD *a1, int (__fastcall *a2)(char *, int, int), unsigned int a3, int a4)
{
  unsigned int v6; // r6
  char *v9; // r0
  unsigned int v10; // r2
  int v11; // r3
  _DWORD *v12; // r5
  char *v13; // r3
  int v14; // r0
  _DWORD *v15; // r5
  int v16; // r8
  _DWORD *v17; // r0
  int *v18; // r6
  unsigned int *v19; // r3
  unsigned int v20; // r2
  unsigned int v21; // r2
  int v23; // [sp+Ch] [bp-20h] BYREF
  void *v24; // [sp+10h] [bp-1Ch]
  int v25; // [sp+14h] [bp-18h]
  int v26; // [sp+18h] [bp-14h] BYREF
  void *ptr; // [sp+1Ch] [bp-10h]
  _DWORD v28[3]; // [sp+20h] [bp-Ch] BYREF

  if ( (a4 & 0x200) == 0 && (!a1 || *a1 > 1u) )
    return -1;
  v6 = 0;
  v23 = 0;
  v25 = 3;
  v9 = (char *)off_12A258(0x40u);
  v24 = v9;
  if ( !v9 )
    return -1;
  v26 = (int)&v26;
  ptr = &v26;
  v28[0] = v28;
  v28[1] = v28;
  v10 = 1 << v25;
  if ( 1 << v25 )
  {
    if ( v10 > 4 )
    {
      v11 = 0;
      v12 = v9;
      v6 = ((v10 - 5) & 0xFFFFFFFC) + 4;
      do
      {
        v11 += 4;
        __pld(v12 + 59);
        *v12 = &v26;
        v12[1] = &v26;
        v12[2] = &v26;
        v12[3] = &v26;
        v12[4] = &v26;
        v12[5] = &v26;
        v12[6] = &v26;
        v12[7] = &v26;
        v12 += 8;
      }
      while ( v11 != v6 );
    }
    v13 = &v9[8 * v6];
    do
    {
      *((_DWORD *)v13 + 1) = &v26;
      v13 += 8;
      *(_DWORD *)&v9[8 * v6++] = &v26;
    }
    while ( v6 < v10 );
  }
  v14 = sub_23BB0(a1, a4, 0, &v23, __SPAIR64__(a3, (unsigned int)a2));
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
      off_12A254(v15);
      v15 = v18;
    }
    while ( v18 != &v26 );
  }
  if ( v24 )
    off_12A254(v24);
  return v16;
}
