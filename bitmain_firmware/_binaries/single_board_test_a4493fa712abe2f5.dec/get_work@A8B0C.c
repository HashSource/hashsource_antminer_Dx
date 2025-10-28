int *__fastcall get_work(int a1, _DWORD *a2, int a3, int a4)
{
  int v7; // r8
  int v8; // r5
  int *result; // r0
  char *v10; // r9
  char *v11; // r0
  bool v12; // zf
  int v13; // r5
  size_t v14; // r0
  char *s[2]; // [sp+4h] [bp-8h] BYREF

  switch ( a1 )
  {
    case 0:
      v8 = 246;
      *(_DWORD *)(a3 + 88) = 246;
      *(_DWORD *)(a3 + 92) = 4;
      *(_DWORD *)(a3 + 96) = 168;
      s[0] = 0;
      v7 = 492;
      goto LABEL_3;
    case 1:
      v8 = 64;
      *(_DWORD *)(a3 + 96) = 0;
      *(_DWORD *)(a3 + 88) = 64;
      *(_DWORD *)(a3 + 92) = 4;
      v7 = 128;
      s[0] = 0;
      goto LABEL_3;
    case 2:
      v8 = 48;
      *(_DWORD *)(a3 + 96) = 0;
      *(_DWORD *)(a3 + 88) = 48;
      *(_DWORD *)(a3 + 92) = 5;
      v7 = 96;
      s[0] = 0;
      goto LABEL_3;
    case 6:
    case 7:
      v7 = 160;
      v8 = 80;
      *(_DWORD *)(a3 + 88) = 80;
      *(_DWORD *)(a3 + 92) = 4;
      *(_DWORD *)(a3 + 96) = 0;
      s[0] = 0;
LABEL_3:
      result = get_key_value_string(a2, "work", (void **)s);
      if ( !result )
        goto LABEL_7;
      v10 = s[0];
      if ( strlen(s[0]) != v7 )
        goto LABEL_5;
      v12 = v8 == s2hex((char *)(a3 + 4), (unsigned __int8 *)s[0], v7);
      v11 = s[0];
      if ( !v12 )
        goto LABEL_6;
      free(s[0]);
      v13 = *(_DWORD *)(a3 + 92);
      s[0] = 0;
      if ( !v13 )
        goto LABEL_15;
      result = get_key_value_string(a2, "nonce", (void **)s);
      if ( !result )
        goto LABEL_7;
      v10 = s[0];
      v14 = strlen(s[0]);
      if ( v14 != 2 * v13 )
      {
LABEL_5:
        v11 = v10;
LABEL_6:
        free(v11);
        result = 0;
        goto LABEL_7;
      }
      v12 = v13 == s2hex((char *)(a3 + 84), (unsigned __int8 *)s[0], v14);
      v11 = s[0];
      if ( !v12 )
        goto LABEL_6;
      free(s[0]);
LABEL_15:
      result = (int *)get_work_by_key(a2, "sol", (char *)(a3 + 88), *(_DWORD *)(a3 + 96));
LABEL_7:
      *(_DWORD *)a3 = a4;
      *(_DWORD *)(a3 + 100) = 0;
      return result;
    default:
      printf("%s, algo type error!\n", "get_work_element_len");
      result = 0;
      goto LABEL_7;
  }
}
