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
  void **v11; // r8
  int v12; // r8
  _DWORD *v13; // r0
  void *v14; // r0
  int v15; // [sp+4h] [bp-8h] BYREF

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
        v11 = (void **)v2[5];
        if ( v11 )
        {
          if ( !ptr[8]
            || (get_raw_clib_object(v2[5], &v15), ((void (__fastcall *)(int))ptr[8])(v15), (v11 = (void **)v2[5]) != 0) )
          {
            free(*v11);
            free(v11);
          }
        }
        v12 = v2[2];
        if ( v12 )
        {
          if ( v5 == *(_DWORD **)v12 )
          {
            v13 = *(_DWORD **)(v12 + 4);
            v2 = (_DWORD *)v2[2];
            if ( v5 != v13 )
            {
              free(v13);
              *(_DWORD *)(v12 + 4) = v5;
            }
          }
          else
          {
            free(*(void **)v12);
            v2 = (_DWORD *)v12;
            *(_DWORD *)v12 = v5;
          }
        }
        else
        {
          v14 = v2;
          v2 = v5;
          free(v14);
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
