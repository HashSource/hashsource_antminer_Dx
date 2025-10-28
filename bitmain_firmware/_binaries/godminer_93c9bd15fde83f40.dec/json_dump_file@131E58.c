int __fastcall json_dump_file(_DWORD *a1, int a2, int a3)
{
  FILE *v5; // r6
  char *v6; // r0
  unsigned int v7; // lr
  int v8; // r12
  char *v9; // r3
  unsigned int v10; // r2
  char *v11; // r3
  int v12; // r0
  _DWORD *v13; // r5
  int v14; // r8
  _DWORD *v15; // r0
  int *v16; // r7
  unsigned int *v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r2
  __int64 v21; // [sp+0h] [bp-2Ch]
  unsigned int v22; // [sp+Ch] [bp-20h] BYREF
  void *v23; // [sp+10h] [bp-1Ch]
  int v24; // [sp+14h] [bp-18h]
  int v25; // [sp+18h] [bp-14h] BYREF
  void *ptr; // [sp+1Ch] [bp-10h]
  _DWORD v27[3]; // [sp+20h] [bp-Ch] BYREF

  v5 = (FILE *)fopen64(a2, "w");
  if ( !v5 )
    return -1;
  if ( ((a3 & 0x200) != 0 || a1 && *a1 <= 1u) && (v22 = 0, v24 = 3, v6 = (char *)off_1A25E8(0x40u), (v23 = v6) != 0) )
  {
    ptr = &v25;
    v25 = (int)&v25;
    v7 = 1 << v24;
    v27[1] = v27;
    v27[0] = v27;
    if ( 1 << v24 )
    {
      if ( v7 <= 4 )
      {
        v10 = 0;
      }
      else
      {
        v8 = 0;
        v9 = v6 + 236;
        v10 = ((v7 - 5) & 0xFFFFFFFC) + 4;
        do
        {
          v8 += 4;
          __pld(v9);
          *((_DWORD *)v9 - 58) = &v25;
          *((_DWORD *)v9 - 59) = &v25;
          v9 += 32;
          *((_DWORD *)v9 - 64) = &v25;
          *((_DWORD *)v9 - 65) = &v25;
          *((_DWORD *)v9 - 62) = &v25;
          *((_DWORD *)v9 - 63) = &v25;
          *((_DWORD *)v9 - 60) = &v25;
          *((_DWORD *)v9 - 61) = &v25;
        }
        while ( v8 != v10 );
      }
      v11 = &v6[8 * v10];
      do
      {
        *((_DWORD *)v11 + 1) = &v25;
        v11 += 8;
        *(_DWORD *)&v6[8 * v10++] = &v25;
      }
      while ( v10 < v7 );
    }
    HIDWORD(v21) = v5;
    LODWORD(v21) = sub_12CF64;
    v12 = sub_13144C(a1, a3, 0, &v22, v21);
    v13 = ptr;
    v14 = v12;
    if ( ptr != &v25 )
    {
      do
      {
        v15 = (_DWORD *)v13[5];
        v16 = (int *)v13[1];
        if ( v15 )
        {
          v17 = v15 + 1;
          if ( v15[1] != -1 )
          {
            __dmb(0xBu);
            do
            {
              v18 = __ldrex(v17);
              v19 = v18 - 1;
            }
            while ( __strex(v19, v17) );
            if ( !v19 )
              json_delete(v15);
          }
        }
        off_1A25EC(v13);
        v13 = v16;
      }
      while ( v16 != &v25 );
    }
    if ( v23 )
      off_1A25EC(v23);
  }
  else
  {
    v14 = -1;
  }
  if ( fclose(v5) )
    return -1;
  return v14;
}
