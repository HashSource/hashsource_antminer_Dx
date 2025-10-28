int __fastcall sub_12CFA8(int a1, _BYTE *a2, const char **a3, int *a4, int a5)
{
  const char *v5; // r7
  char *v6; // r0
  int v7; // r11
  size_t v8; // r6
  const char *v9; // r4
  int v10; // r5
  const char **v11; // r10
  int v12; // r8
  bool v13; // zf
  const char **v14; // r10
  int v15; // r3
  char *v16; // r2
  int result; // r0
  int v18; // r6
  const char **v19; // r7
  const char *v20; // r0
  int v21; // r3
  int v22; // r1
  int v26; // [sp+Ch] [bp-10h]
  int v27; // [sp+10h] [bp-Ch]

  v5 = off_1A2BD0;
  v27 = optind;
  v26 = ++optind;
  v6 = strchr(off_1A2BD0, 61);
  v7 = (int)v6;
  if ( v6 )
  {
    v8 = v6 - v5;
    v7 = (int)(v6 + 1);
  }
  else
  {
    v8 = strlen(v5);
  }
  v9 = *a3;
  if ( *a3 )
  {
    if ( v8 == 1 )
      v10 = a5 & 1;
    else
      v10 = 0;
    if ( !v10 )
    {
      v11 = a3 + 28;
      v12 = -1;
      while ( 1 )
      {
        __pld(v11);
        v11 += 4;
        if ( !strncmp(v5, v9, v8) )
        {
          if ( v8 == strlen(v9) )
            goto LABEL_35;
          v13 = v12 == -1;
          v12 = v10;
          if ( !v13 )
            goto LABEL_34;
        }
        v9 = *(v11 - 28);
        ++v10;
        if ( !v9 )
        {
          if ( v12 == -1 )
            goto LABEL_33;
          goto LABEL_15;
        }
      }
    }
    v18 = *(unsigned __int8 *)v5;
    v10 = 0;
    v19 = a3 + 28;
    v20 = *a3;
    while ( 1 )
    {
      v21 = *(unsigned __int8 *)v20;
      __pld(v19);
      v19 += 4;
      if ( v18 == v21 && strlen(v20) == 1 )
        break;
      v20 = *(v19 - 28);
      ++v10;
      if ( !v20 )
        goto LABEL_33;
    }
LABEL_35:
    v12 = v10;
LABEL_15:
    v14 = &a3[4 * v12];
    v15 = (int)v14[1];
    v16 = (char *)v14[2];
    if ( v15 )
    {
      if ( (unsigned int)(v15 - 1) <= 1 )
      {
        if ( v7 )
        {
          optarg = v7;
        }
        else if ( v15 == 1 )
        {
          v22 = *(_DWORD *)(a1 + 4 * v26);
          optind = v27 + 2;
          optarg = v22;
          if ( !v22 )
          {
            if ( !v16 )
              v7 = (int)v14[3];
            optind = v26;
            optopt = v7;
            if ( *a2 != 58 )
              return 63;
            return 58;
          }
        }
      }
    }
    else if ( v7 )
    {
      if ( !v16 )
        v15 = (int)v14[3];
      optopt = v15;
      if ( *a2 != 58 )
        return 63;
      return 58;
    }
    if ( a4 )
      *a4 = v12;
    result = (int)v14[3];
    if ( v16 )
    {
      *(_DWORD *)v16 = result;
      return 0;
    }
  }
  else
  {
LABEL_33:
    if ( !a5 )
    {
LABEL_34:
      optopt = 0;
      return 63;
    }
    optind = v27;
    return -1;
  }
  return result;
}
