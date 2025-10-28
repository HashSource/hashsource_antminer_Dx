int __fastcall json_dumpfd(_DWORD *a1, int a2, int a3)
{
  char *v5; // r0
  unsigned int v6; // r1
  int v7; // r2
  char *v8; // r3
  unsigned int v9; // r12
  char *v10; // r3
  int v11; // r0
  _DWORD *v12; // r5
  int v13; // r8
  _DWORD *v14; // r0
  int *v15; // r6
  unsigned int *v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r2
  __int64 v20; // [sp+0h] [bp-30h]
  int v21; // [sp+Ch] [bp-24h] BYREF
  unsigned int v22; // [sp+14h] [bp-1Ch] BYREF
  void *v23; // [sp+18h] [bp-18h]
  int v24; // [sp+1Ch] [bp-14h]
  int v25; // [sp+20h] [bp-10h] BYREF
  void *ptr; // [sp+24h] [bp-Ch]
  _DWORD v27[2]; // [sp+28h] [bp-8h] BYREF

  v21 = a2;
  if ( (a3 & 0x200) == 0 && (!a1 || *a1 > 1u) )
    return -1;
  v22 = 0;
  v24 = 3;
  v5 = (char *)off_1A25E8(0x40u);
  v23 = v5;
  if ( !v5 )
    return -1;
  ptr = &v25;
  v25 = (int)&v25;
  v6 = 1 << v24;
  v27[1] = v27;
  v27[0] = v27;
  if ( 1 << v24 )
  {
    if ( v6 <= 4 )
    {
      v9 = 0;
    }
    else
    {
      v7 = 0;
      v8 = v5 + 236;
      v9 = ((v6 - 5) & 0xFFFFFFFC) + 4;
      do
      {
        v7 += 4;
        __pld(v8);
        *((_DWORD *)v8 - 58) = &v25;
        *((_DWORD *)v8 - 59) = &v25;
        v8 += 32;
        *((_DWORD *)v8 - 64) = &v25;
        *((_DWORD *)v8 - 65) = &v25;
        *((_DWORD *)v8 - 62) = &v25;
        *((_DWORD *)v8 - 63) = &v25;
        *((_DWORD *)v8 - 60) = &v25;
        *((_DWORD *)v8 - 61) = &v25;
      }
      while ( v7 != v9 );
    }
    v10 = &v5[8 * v9];
    do
    {
      *((_DWORD *)v10 + 1) = &v25;
      v10 += 8;
      *(_DWORD *)&v5[8 * v9++] = &v25;
    }
    while ( v6 > v9 );
  }
  LODWORD(v20) = sub_12CF80;
  HIDWORD(v20) = &v21;
  v11 = sub_13144C(a1, a3, 0, &v22, v20);
  v12 = ptr;
  v13 = v11;
  if ( ptr != &v25 )
  {
    do
    {
      v14 = (_DWORD *)v12[5];
      v15 = (int *)v12[1];
      if ( v14 )
      {
        v16 = v14 + 1;
        if ( v14[1] != -1 )
        {
          __dmb(0xBu);
          do
          {
            v17 = __ldrex(v16);
            v18 = v17 - 1;
          }
          while ( __strex(v18, v16) );
          if ( !v18 )
            json_delete(v14);
        }
      }
      off_1A25EC(v12);
      v12 = v15;
    }
    while ( v15 != &v25 );
  }
  if ( v23 )
    off_1A25EC(v23);
  return v13;
}
