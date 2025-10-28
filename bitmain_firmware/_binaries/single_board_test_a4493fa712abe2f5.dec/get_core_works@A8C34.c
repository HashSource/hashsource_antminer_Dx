unsigned int __fastcall get_core_works(int a1, const char *a2, int a3, unsigned int a4)
{
  const char *v4; // r6
  int *file; // r0
  unsigned int v9; // r4
  int v11; // r0
  _DWORD *v12; // r9
  unsigned int v13; // r3
  unsigned int *v14; // r11
  unsigned int v15; // r7
  _DWORD *v16; // r6
  int v17; // r3
  int v18; // [sp+4h] [bp-118h]
  const char *v19; // [sp+8h] [bp-114h]
  int v20; // [sp+10h] [bp-10Ch]
  void *v21; // [sp+18h] [bp-104h] BYREF
  char v22[92]; // [sp+1Ch] [bp-100h] BYREF
  char s[164]; // [sp+78h] [bp-A4h] BYREF

  v4 = a2;
  file = json_load_file(a2, 0, (int)v22);
  if ( !file || (v9 = *file) != 0 )
  {
    v9 = 0;
    puts(s);
    return v9;
  }
  v11 = json_object_get(file, "works");
  v12 = (_DWORD *)v11;
  if ( !v11 || *(_DWORD *)v11 != 1 )
    return a4;
  v13 = *(_DWORD *)(v11 + 12);
  if ( a4 > v13 )
  {
    printf("%s malloc failed!", "get_core_works");
    printf("%s: file_path %s, actual pattern number is less than test pattern_num!\n", "get_core_works", v4);
    return v9;
  }
  if ( !a4 )
    return a4;
  if ( !v13 )
    return a4;
  v14 = **(unsigned int ***)(v11 + 16);
  if ( !v14 )
    return a4;
  v15 = *v14;
  if ( *v14 )
    goto LABEL_20;
  v19 = v4;
  v16 = **(_DWORD ***)(v11 + 16);
  while ( 2 )
  {
    v9 = v15;
    switch ( a1 )
    {
      case 0:
        *(_DWORD *)(a3 + 92) = 4;
        *(_DWORD *)(a3 + 88) = 246;
        v18 = 246;
        v17 = 492;
        *(_DWORD *)(a3 + 96) = 168;
        v21 = 0;
        goto LABEL_16;
      case 1:
        *(_DWORD *)(a3 + 88) = 64;
        v18 = 64;
        v17 = 128;
        *(_DWORD *)(a3 + 92) = 4;
        *(_DWORD *)(a3 + 96) = 0;
        v21 = 0;
        goto LABEL_16;
      case 2:
        *(_DWORD *)(a3 + 88) = 48;
        v18 = 48;
        v17 = 96;
        *(_DWORD *)(a3 + 92) = 5;
        *(_DWORD *)(a3 + 96) = 0;
        v21 = 0;
        goto LABEL_16;
      case 6:
      case 7:
        *(_DWORD *)(a3 + 88) = 80;
        *(_DWORD *)(a3 + 92) = 4;
        v17 = 160;
        __pld((void *)(a3 + 296));
        __pld((void *)(a3 + 300));
        *(_DWORD *)(a3 + 96) = 0;
        v18 = 80;
        v21 = 0;
LABEL_16:
        v20 = v17;
        if ( !get_key_value_string(v16, "work", &v21) )
          goto LABEL_26;
        if ( strlen((const char *)v21) != v20 || s2hex((char *)(a3 + 4), (unsigned __int8 *)v21, v20) != v18 )
        {
          v4 = v19;
          free(v21);
LABEL_19:
          *(_DWORD *)a3 = v15;
          *(_DWORD *)(a3 + 100) = 0;
          goto LABEL_20;
        }
        free(v21);
        if ( !get_work_by_key(v16, "nonce", (char *)(a3 + 84), *(_DWORD *)(a3 + 92))
          || !get_work_by_key(v16, "sol", (char *)(a3 + 88), *(_DWORD *)(a3 + 96)) )
        {
LABEL_26:
          v4 = v19;
          goto LABEL_19;
        }
        *(_DWORD *)a3 = v15++;
        *(_DWORD *)(a3 + 100) = 0;
        if ( a4 == v15 )
          return a4;
        if ( *v12 != 1 )
          return a4;
        if ( v15 >= v12[3] )
          return a4;
        v16 = *(_DWORD **)(v12[4] + 4 * v15);
        if ( !v16 )
          return a4;
        a3 += 104;
        if ( !*v16 )
          continue;
        v4 = v19;
        v9 = v15;
LABEL_20:
        printf("file_path %s, get_work error!\n", v4);
        return v9;
      default:
        v4 = v19;
        printf("%s, algo type error!\n", "get_work_element_len");
        goto LABEL_19;
    }
  }
}
