int __fastcall delete_c_map(_DWORD **a1)
{
  _DWORD *v2; // r8
  _DWORD *v3; // r4
  _DWORD *v4; // r5
  _DWORD *v6; // r7
  void (__fastcall *v7)(void *); // r10
  int v8; // r9
  size_t v9; // r11
  void *v10; // r0
  void *v11; // r3
  int v12; // r9
  void (__fastcall *v13)(void *); // r10
  size_t v14; // r11
  void *v15; // r0
  void *v16; // r3
  int v17; // r9
  _DWORD *v18; // r0
  void *v19; // r0
  void *v20; // [sp+4h] [bp-8h]
  void *v21; // [sp+4h] [bp-8h]

  if ( a1 )
  {
    v2 = *a1;
    v4 = *a1 + 1;
    v3 = (_DWORD *)**a1;
    while ( v3 != v4 )
    {
      if ( (_DWORD *)*v3 == v4 )
      {
        v6 = (_DWORD *)v3[1];
        if ( v4 == v6 )
        {
          v7 = (void (__fastcall *)(void *))v2[7];
          v8 = v3[4];
          if ( v7 )
          {
            v9 = *(_DWORD *)(v8 + 4);
            v10 = malloc(v9);
            v11 = v10;
            if ( v10 )
            {
              v20 = v10;
              memcpy(v10, *(const void **)v8, v9);
              v7 = (void (__fastcall *)(void *))v2[7];
              v11 = v20;
            }
            v7(v11);
            v8 = v3[4];
          }
          if ( v8 )
          {
            free(*(void **)v8);
            free((void *)v8);
          }
          v12 = v3[5];
          if ( v12 )
          {
            v13 = (void (__fastcall *)(void *))v2[8];
            if ( !v13 )
              goto LABEL_25;
            v14 = *(_DWORD *)(v12 + 4);
            v15 = malloc(v14);
            v16 = v15;
            if ( v15 )
            {
              v21 = v15;
              memcpy(v15, *(const void **)v12, v14);
              v13 = (void (__fastcall *)(void *))v2[8];
              v16 = v21;
            }
            v13(v16);
            v12 = v3[5];
            if ( v12 )
            {
LABEL_25:
              free(*(void **)v12);
              free((void *)v12);
            }
          }
          v17 = v3[2];
          if ( v17 )
          {
            if ( v6 == *(_DWORD **)v17 )
            {
              v18 = *(_DWORD **)(v17 + 4);
              v3 = (_DWORD *)v3[2];
              if ( v6 != v18 )
              {
                free(v18);
                *(_DWORD *)(v17 + 4) = v6;
              }
            }
            else
            {
              free(*(void **)v17);
              v3 = (_DWORD *)v17;
              *(_DWORD *)v17 = v6;
            }
          }
          else
          {
            v19 = v3;
            v3 = v6;
            free(v19);
          }
        }
        else
        {
          v3 = (_DWORD *)v3[1];
        }
      }
      else
      {
        v3 = (_DWORD *)*v3;
      }
    }
    free(v2);
    free(a1);
  }
  return 0;
}
