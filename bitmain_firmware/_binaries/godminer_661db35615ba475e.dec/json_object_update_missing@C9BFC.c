int __fastcall json_object_update_missing(int *a1, int *a2)
{
  int v3; // r7
  _BOOL4 v4; // r3
  int v5; // r5
  int *v6; // r9
  bool v7; // zf
  int *v8; // r8
  char *v9; // r5
  size_t v10; // r0
  int v11; // r10
  int v12; // r0
  int v13; // r3
  int v14; // r4
  int v15; // r11
  int v16; // r3
  bool v17; // zf
  unsigned int *v18; // r3
  unsigned int v19; // r2
  _BOOL4 v20; // r7
  unsigned int *v21; // r3
  unsigned int v22; // r2
  unsigned int v23; // r2
  int v24; // r3
  int *v27; // [sp+Ch] [bp-8h]

  if ( !a1 )
    return -1;
  v3 = *a1;
  v4 = a2 == 0;
  if ( *a1 )
    v4 = 1;
  if ( v4 || *a2 )
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
      v27 = a1 + 2;
      while ( 1 )
      {
        v10 = strlen(v9);
        v11 = sub_101820((unsigned __int16 *)v9, v10, hashtable_seed);
        v12 = a1[3];
        v13 = v11 & ~(-1 << a1[4]);
        v14 = *(_DWORD *)(v12 + 8 * v13);
        v15 = v12 + 8 * v13;
        if ( (int *)v14 == a1 + 5 && v14 == *(_DWORD *)(v15 + 4) )
          break;
        while ( v11 != *(_DWORD *)(v14 + 16) || strcmp((const char *)(v14 + 24), v9) )
        {
          if ( v14 == *(_DWORD *)(v15 + 4) )
            goto LABEL_39;
          v14 = *(_DWORD *)(v14 + 4);
        }
        if ( !*(_DWORD *)(v14 + 20) )
          break;
        while ( 1 )
        {
          v16 = *((_DWORD *)v9 - 3);
          v17 = v16 == 0;
          if ( v16 )
            v17 = v6 == (int *)v16;
          if ( v17 )
            return 0;
          v9 = (char *)(v16 + 16);
          if ( v16 == -16 )
            return 0;
          v8 = *(int **)(v16 + 12);
          if ( !v8 )
            return 0;
          v3 = *a1;
          if ( !*a1 )
            break;
          if ( v8[1] == -1 )
            goto LABEL_31;
LABEL_25:
          v18 = (unsigned int *)(v8 + 1);
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 + 1, v18) );
          __dmb(0xBu);
          v3 = *a1;
LABEL_28:
          v7 = v3 == 0;
          v20 = v3 != 0;
          if ( v7 )
            v20 = a1 == v8;
          if ( !v20 )
          {
            if ( hashtable_set(v27, v9, (int)v8) && v8[1] != -1 )
              sub_F8BC0(v8);
            goto LABEL_35;
          }
LABEL_31:
          if ( v8[1] != -1 )
          {
            v21 = (unsigned int *)(v8 + 1);
            __dmb(0xBu);
            do
            {
              v22 = __ldrex(v21);
              v23 = v22 - 1;
            }
            while ( __strex(v23, v21) );
            if ( !v23 )
            {
              json_delete(v8);
              v24 = *a2;
              goto LABEL_36;
            }
          }
LABEL_35:
          v24 = *a2;
LABEL_36:
          if ( v24 )
            return 0;
        }
      }
LABEL_39:
      if ( v8[1] == -1 )
        goto LABEL_28;
      goto LABEL_25;
    }
  }
  return 0;
}
