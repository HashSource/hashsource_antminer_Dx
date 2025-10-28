int __fastcall json_dumpb(_DWORD *a1, int a2, int a3, int a4)
{
  char *v6; // r0
  unsigned int v7; // r1
  int v8; // r3
  char *v9; // r2
  unsigned int v10; // r12
  char *v11; // r2
  int v12; // r0
  _DWORD *v13; // r5
  int v14; // r8
  _DWORD *v15; // r0
  int *v16; // r6
  unsigned int *v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r2
  __int64 v21; // [sp+0h] [bp-30h]
  int v22; // [sp+8h] [bp-28h] BYREF
  int v23; // [sp+Ch] [bp-24h]
  int v24; // [sp+10h] [bp-20h]
  unsigned int v25; // [sp+14h] [bp-1Ch] BYREF
  void *v26; // [sp+18h] [bp-18h]
  int v27; // [sp+1Ch] [bp-14h]
  int v28; // [sp+20h] [bp-10h] BYREF
  void *ptr; // [sp+24h] [bp-Ch]
  _DWORD v30[2]; // [sp+28h] [bp-8h] BYREF

  v22 = a3;
  v24 = a2;
  v23 = 0;
  if ( (a4 & 0x200) == 0 && (!a1 || *a1 > 1u) )
    return 0;
  v25 = 0;
  v27 = 3;
  v6 = (char *)off_1A25E8(0x40u);
  v26 = v6;
  if ( !v6 )
    return 0;
  ptr = &v28;
  v28 = (int)&v28;
  v7 = 1 << v27;
  v30[1] = v30;
  v30[0] = v30;
  if ( 1 << v27 )
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
        *((_DWORD *)v9 - 58) = &v28;
        *((_DWORD *)v9 - 59) = &v28;
        v9 += 32;
        *((_DWORD *)v9 - 64) = &v28;
        *((_DWORD *)v9 - 65) = &v28;
        *((_DWORD *)v9 - 62) = &v28;
        *((_DWORD *)v9 - 63) = &v28;
        *((_DWORD *)v9 - 60) = &v28;
        *((_DWORD *)v9 - 61) = &v28;
      }
      while ( v8 != v10 );
    }
    v11 = &v6[8 * v10];
    do
    {
      *((_DWORD *)v11 + 1) = &v28;
      v11 += 8;
      *(_DWORD *)&v6[8 * v10++] = &v28;
    }
    while ( v10 < v7 );
  }
  LODWORD(v21) = sub_12C9C8;
  HIDWORD(v21) = &v22;
  v12 = sub_13144C(a1, a4, 0, &v25, v21);
  v13 = ptr;
  v14 = v12;
  if ( ptr != &v28 )
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
    while ( v16 != &v28 );
  }
  if ( v26 )
    off_1A25EC(v26);
  if ( !v14 )
    return v23;
  else
    return 0;
}
