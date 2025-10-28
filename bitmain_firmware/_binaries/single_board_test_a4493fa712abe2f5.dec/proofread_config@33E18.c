bool __fastcall proofread_config(int *a1)
{
  int v1; // r1
  int v3; // r11
  int v4; // r7
  int v5; // r4
  int v6; // r2
  const char *v7; // r5
  size_t v8; // r0
  size_t v9; // r6
  const char *v10; // r1
  int v11; // r0
  _BOOL4 result; // r0

  v1 = a1[1];
  if ( v1 <= 0 )
  {
    result = 0;
    goto LABEL_23;
  }
  v3 = *a1;
  v4 = 0;
  v5 = 0;
  do
  {
    while ( 1 )
    {
      v6 = *(unsigned __int8 *)(v3 + 56);
      __pld((void *)(v3 + 136));
      if ( v6 )
        break;
      ++v5;
      v3 += 80;
      if ( v5 >= v1 )
        goto LABEL_22;
    }
    v7 = *(const char **)v3;
    v8 = strlen(*(const char **)v3);
    v9 = v8;
    v10 = (const char *)(*(_DWORD *)v3 + v8);
    if ( !v8 )
      goto LABEL_19;
    v11 = strncasecmp(v7, "grin29", v8);
    if ( v11 || v7[v9] )
    {
      if ( !strncasecmp(v7, "vbk", v9) && !v7[v9] )
      {
        v11 = 1;
        goto LABEL_21;
      }
      if ( !strncasecmp(v7, "ckb", v9) && !v7[v9] )
      {
        v11 = 2;
        goto LABEL_21;
      }
      if ( !strncasecmp(v7, "ae", v9) )
      {
        if ( !v7[v9] )
        {
          v11 = 3;
          goto LABEL_21;
        }
      }
      else if ( !strncasecmp(v7, "grin32", v9) && !v7[v9] )
      {
        v11 = 4;
        goto LABEL_21;
      }
      if ( !strncasecmp(v7, "eth", v9) )
      {
        if ( !v7[v9] )
        {
          v11 = 5;
          goto LABEL_21;
        }
      }
      else if ( !strncasecmp(v7, "ltc", v9) && !v7[v9] )
      {
        v11 = 6;
        goto LABEL_21;
      }
      if ( !strncasecmp(v7, "dash", v9) )
      {
        if ( v7[v9] )
          goto LABEL_18;
        v11 = 7;
      }
      else
      {
        if ( strncasecmp(v7, "ckb2", v9) || v7[v9] )
        {
LABEL_18:
          v10 = v7;
LABEL_19:
          printf("algo %s type err!\n", v10);
          return 0;
        }
        v11 = 8;
      }
    }
LABEL_21:
    *(_DWORD *)(v3 + 4) = v11;
    __pld((void *)(v3 + 84));
    ++v5;
    a1[2] = v3;
    ++v4;
    *(_DWORD *)(v3 + 32) = 0;
    v3 += 80;
    v1 = a1[1];
  }
  while ( v5 < v1 );
LABEL_22:
  result = v4 == 1;
LABEL_23:
  a1[16] = 0;
  return result;
}
