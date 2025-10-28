int __fastcall delete_c_rb(_DWORD *ptr)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r5
  _DWORD *v5; // r7
  void (__fastcall *v6)(void *); // r9
  int v7; // r8
  size_t v8; // r10
  void *v9; // r0
  void *v10; // r11
  int v11; // r8
  void (__fastcall *v12)(void *); // r9
  size_t v13; // r10
  void *v14; // r0
  void *v15; // r11
  int v16; // r8
  _DWORD *v17; // r0
  void *v18; // r0

  v3 = ptr + 1;
  v2 = (_DWORD *)*ptr;
  while ( v2 != v3 )
  {
    if ( (_DWORD *)*v2 == v3 )
    {
      v5 = (_DWORD *)v2[1];
      if ( v3 == v5 )
      {
        v6 = (void (__fastcall *)(void *))ptr[7];
        v7 = v2[4];
        if ( v6 )
        {
          v8 = *(_DWORD *)(v7 + 4);
          v9 = malloc(v8);
          v10 = v9;
          if ( v9 )
            memcpy(v9, *(const void **)v7, v8);
          v6(v10);
          v7 = v2[4];
        }
        if ( v7 )
        {
          free(*(void **)v7);
          free((void *)v7);
        }
        v11 = v2[5];
        if ( v11 )
        {
          v12 = (void (__fastcall *)(void *))ptr[8];
          if ( !v12 )
            goto LABEL_20;
          v13 = *(_DWORD *)(v11 + 4);
          v14 = malloc(v13);
          v15 = v14;
          if ( v14 )
            memcpy(v14, *(const void **)v11, v13);
          v12(v15);
          v11 = v2[5];
          if ( v11 )
          {
LABEL_20:
            free(*(void **)v11);
            free((void *)v11);
          }
        }
        v16 = v2[2];
        if ( v16 )
        {
          if ( v5 == *(_DWORD **)v16 )
          {
            v17 = *(_DWORD **)(v16 + 4);
            v2 = (_DWORD *)v2[2];
            if ( v5 != v17 )
            {
              free(v17);
              *(_DWORD *)(v16 + 4) = v5;
            }
          }
          else
          {
            free(*(void **)v16);
            v2 = (_DWORD *)v16;
            *(_DWORD *)v16 = v5;
          }
        }
        else
        {
          v18 = v2;
          v2 = v5;
          free(v18);
        }
      }
      else
      {
        v2 = (_DWORD *)v2[1];
      }
    }
    else
    {
      v2 = (_DWORD *)*v2;
    }
  }
  free(ptr);
  return 0;
}
