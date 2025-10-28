int __fastcall json_object_update_existing(int *a1, int *a2)
{
  _BOOL4 v3; // r3
  int v4; // r6
  int v5; // r5
  int *v6; // r9
  bool v7; // zf
  int *v8; // r7
  char *v9; // r5
  size_t v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r10
  int v14; // r3
  int v15; // r4
  int v16; // r11
  unsigned int *v17; // r3
  unsigned int v18; // r2
  int v19; // r6
  unsigned int *v20; // r3
  unsigned int v21; // r2
  unsigned int v22; // r2
  int v24; // r3
  bool v25; // zf
  unsigned int *v26; // r3
  unsigned int v27; // r2
  int *v28; // [sp+4h] [bp-10h]

  if ( !a1 )
    return -1;
  v3 = a2 == 0;
  if ( *a1 )
    v3 = 1;
  if ( v3 )
    return -1;
  v4 = *a2;
  if ( *a2 )
    return -1;
  v5 = a2[8];
  v6 = a2 + 7;
  v7 = v5 == 0;
  if ( v5 )
    v7 = v5 == (_DWORD)v6;
  if ( !v7 )
  {
    v8 = *(int **)(v5 + 12);
    v9 = (char *)(v5 + 16);
    if ( v8 )
    {
      v28 = a1 + 5;
      while ( 1 )
      {
        if ( v4 )
          goto LABEL_34;
        v10 = strlen(v9);
        v11 = sub_101820((unsigned __int16 *)v9, v10, hashtable_seed);
        v12 = a1[3];
        v13 = v11;
        v14 = v11 & ~(-1 << a1[4]);
        v15 = *(_DWORD *)(v12 + 8 * v14);
        v16 = v12 + 8 * v14;
        if ( (int *)v15 == v28 && v28 == *(int **)(v16 + 4) )
          goto LABEL_34;
        while ( v13 != *(_DWORD *)(v15 + 16) || strcmp((const char *)(v15 + 24), v9) )
        {
          if ( v15 == *(_DWORD *)(v16 + 4) )
            goto LABEL_34;
          v15 = *(_DWORD *)(v15 + 4);
        }
        if ( !*(_DWORD *)(v15 + 20) )
          goto LABEL_34;
        if ( v8[1] != -1 )
        {
          v17 = (unsigned int *)(v8 + 1);
          do
            v18 = __ldrex(v17);
          while ( __strex(v18 + 1, v17) );
          __dmb(0xBu);
          v4 = *a1;
        }
        v19 = v4 != 0;
        if ( a1 == v8 )
          v19 |= 1u;
        if ( v19 )
        {
          if ( v8[1] == -1 )
            goto LABEL_31;
          v20 = (unsigned int *)(v8 + 1);
          __dmb(0xBu);
          do
          {
            v21 = __ldrex(v20);
            v22 = v21 - 1;
          }
          while ( __strex(v22, v20) );
        }
        else
        {
          if ( !hashtable_set(a1 + 2, v9, (int)v8) || v8[1] == -1 )
            goto LABEL_31;
          v26 = (unsigned int *)(v8 + 1);
          __dmb(0xBu);
          do
          {
            v27 = __ldrex(v26);
            v22 = v27 - 1;
          }
          while ( __strex(v22, v26) );
        }
        if ( !v22 )
          json_delete(v8);
LABEL_31:
        if ( *a2 )
          return 0;
LABEL_34:
        v24 = *((_DWORD *)v9 - 3);
        v25 = v24 == 0;
        if ( v24 )
          v25 = v6 == (int *)v24;
        if ( v25 )
          return 0;
        v9 = (char *)(v24 + 16);
        if ( v24 == -16 )
          return 0;
        v8 = *(int **)(v24 + 12);
        if ( !v8 )
          return 0;
        v4 = *a1;
      }
    }
  }
  return 0;
}
