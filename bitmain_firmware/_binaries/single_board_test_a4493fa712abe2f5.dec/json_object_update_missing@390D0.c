int __fastcall json_object_update_missing(int *a1, _DWORD *a2)
{
  _BOOL4 v2; // r3
  _DWORD *v3; // r5
  _DWORD *v4; // r9
  bool v5; // zf
  int *v6; // r8
  char *v7; // r5
  int *v9; // r7
  int v10; // r8
  size_t v11; // r0
  int v12; // r0
  int v13; // r2
  int v14; // r10
  int v15; // r3
  int v16; // r4
  int v17; // r11
  int v18; // r3
  bool v19; // zf
  unsigned int *v20; // r3
  unsigned int v21; // r2
  _BOOL4 v22; // r3
  unsigned int *v23; // r3
  unsigned int v24; // r2
  unsigned int v25; // r2
  unsigned int *v28; // [sp+Ch] [bp-2Ch]

  if ( !a1 )
    return -1;
  v2 = a2 == 0;
  if ( *a1 )
    v2 = 1;
  if ( v2 || *a2 )
    return -1;
  v3 = (_DWORD *)a2[8];
  v4 = a2 + 7;
  v5 = v3 == 0;
  if ( v3 )
    v5 = v3 == v4;
  if ( !v5 )
  {
    v6 = (int *)v3[3];
    v7 = (char *)(v3 + 4);
    if ( v6 )
    {
      v9 = v6;
      v28 = (unsigned int *)(a1 + 2);
      v10 = *a1;
      while ( 1 )
      {
        v11 = strlen(v7);
        v12 = sub_208E0((unsigned __int16 *)v7, v11, hashtable_seed);
        v13 = a1[3];
        v14 = v12;
        v15 = v12 & ~(-1 << a1[4]);
        v16 = *(_DWORD *)(v13 + 8 * v15);
        v17 = v13 + 8 * v15;
        if ( (int *)v16 == a1 + 5 && v16 == *(_DWORD *)(v17 + 4) )
          break;
        while ( v14 != *(_DWORD *)(v16 + 16) || strcmp((const char *)(v16 + 24), v7) )
        {
          if ( v16 == *(_DWORD *)(v17 + 4) )
            goto LABEL_38;
          v16 = *(_DWORD *)(v16 + 4);
        }
        if ( !*(_DWORD *)(v16 + 20) )
          break;
        while ( 1 )
        {
          v18 = *((_DWORD *)v7 - 3);
          v19 = v18 == 0;
          if ( v18 )
            v19 = v4 == (_DWORD *)v18;
          if ( v19 )
            return 0;
          v7 = (char *)(v18 + 16);
          if ( v18 == -16 )
            return 0;
          v9 = *(int **)(v18 + 12);
          if ( !v9 )
            return 0;
          v10 = *a1;
          if ( !*a1 )
            break;
          if ( v9[1] == -1 )
            goto LABEL_31;
LABEL_25:
          v20 = (unsigned int *)(v9 + 1);
          do
            v21 = __ldrex(v20);
          while ( __strex(v21 + 1, v20) );
          __dmb(0xBu);
          v10 = *a1;
LABEL_28:
          v22 = a1 == v9;
          if ( v10 )
            v22 = 1;
          if ( !v22 )
          {
            if ( hashtable_set(v28, v7, (int)v9) && v9[1] != -1 )
              sub_A8E50(v9);
            goto LABEL_35;
          }
LABEL_31:
          if ( v9[1] == -1 )
            goto LABEL_35;
          v23 = (unsigned int *)(v9 + 1);
          __dmb(0xBu);
          do
          {
            v24 = __ldrex(v23);
            v25 = v24 - 1;
          }
          while ( __strex(v25, v23) );
          if ( v25 )
          {
LABEL_35:
            if ( *a2 )
              return 0;
          }
          else
          {
            json_delete(v9);
            if ( *a2 )
              return 0;
          }
        }
      }
LABEL_38:
      if ( v9[1] == -1 )
        goto LABEL_28;
      goto LABEL_25;
    }
  }
  return 0;
}
