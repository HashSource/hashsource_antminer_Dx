int __fastcall json_object_update_existing(int *a1, int *a2)
{
  _BOOL4 v2; // r3
  unsigned int v3; // r6
  int v4; // r5
  int *v5; // r9
  bool v6; // zf
  int *v7; // r7
  char *v8; // r5
  size_t v10; // r0
  int v11; // r10
  __int64 v12; // r0
  int v13; // r3
  int v14; // r4
  int v15; // r11
  unsigned int *v16; // r3
  unsigned int v17; // r2
  int v18; // r6
  unsigned int *v19; // r3
  unsigned int v20; // r2
  unsigned int v21; // r2
  int v23; // r3
  bool v24; // zf
  unsigned int *v25; // r3
  unsigned int v26; // r2
  int *v27; // [sp+4h] [bp-34h]

  if ( !a1 )
    return -1;
  v2 = a2 == 0;
  if ( *a1 )
    v2 = 1;
  if ( v2 )
    return -1;
  v3 = *a2;
  if ( *a2 )
    return -1;
  v4 = a2[8];
  v5 = a2 + 7;
  v6 = v4 == 0;
  if ( v4 )
    v6 = v4 == (_DWORD)v5;
  if ( !v6 )
  {
    v7 = *(int **)(v4 + 12);
    v8 = (char *)(v4 + 16);
    if ( v7 )
    {
      v27 = a1 + 5;
      while ( 1 )
      {
        if ( v3 )
          goto LABEL_34;
        v10 = strlen(v8);
        v11 = sub_208E0((unsigned __int16 *)v8, v10, hashtable_seed);
        v12 = *(_QWORD *)(a1 + 3);
        v13 = v11 & ~(-1 << SBYTE4(v12));
        v14 = *(_DWORD *)(v12 + 8 * v13);
        v15 = v12 + 8 * v13;
        if ( (int *)v14 == v27 && v27 == *(int **)(v15 + 4) )
          goto LABEL_34;
        while ( v11 != *(_DWORD *)(v14 + 16) || strcmp((const char *)(v14 + 24), v8) )
        {
          if ( v14 == *(_DWORD *)(v15 + 4) )
            goto LABEL_34;
          v14 = *(_DWORD *)(v14 + 4);
        }
        if ( !*(_DWORD *)(v14 + 20) )
          goto LABEL_34;
        if ( v7[1] != -1 )
        {
          v16 = (unsigned int *)(v7 + 1);
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 + 1, v16) );
          __dmb(0xBu);
          v3 = *a1;
        }
        v18 = v3 != 0;
        if ( a1 == v7 )
          v18 |= 1u;
        if ( v18 )
        {
          if ( v7[1] == -1 )
            goto LABEL_31;
          v19 = (unsigned int *)(v7 + 1);
          __dmb(0xBu);
          do
          {
            v20 = __ldrex(v19);
            v21 = v20 - 1;
          }
          while ( __strex(v21, v19) );
        }
        else
        {
          if ( !hashtable_set((unsigned int *)a1 + 2, v8, (int)v7) || v7[1] == -1 )
            goto LABEL_31;
          v25 = (unsigned int *)(v7 + 1);
          __dmb(0xBu);
          do
          {
            v26 = __ldrex(v25);
            v21 = v26 - 1;
          }
          while ( __strex(v21, v25) );
        }
        if ( !v21 )
          json_delete(v7);
LABEL_31:
        if ( *a2 )
          return 0;
LABEL_34:
        v23 = *((_DWORD *)v8 - 3);
        v24 = v23 == 0;
        if ( v23 )
          v24 = v5 == (int *)v23;
        if ( v24 )
          return 0;
        v8 = (char *)(v23 + 16);
        if ( v23 == -16 )
          return 0;
        v7 = *(int **)(v23 + 12);
        if ( !v7 )
          return 0;
        v3 = *a1;
      }
    }
  }
  return 0;
}
