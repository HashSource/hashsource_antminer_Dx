unsigned int __fastcall check_whether_MES_system_submit_result_is_correct(_DWORD *a1)
{
  _DWORD *v1; // r0
  _DWORD *v2; // r5
  unsigned int v3; // r4
  _DWORD *v4; // r6
  unsigned int *v5; // r3
  unsigned int v6; // r4
  _DWORD *v7; // r7
  unsigned int *v8; // r3
  unsigned int v9; // r2
  unsigned int v10; // r2
  _DWORD *v12; // r0
  unsigned int *v13; // r3
  unsigned int v14; // r4
  unsigned int *v15; // r3
  unsigned int v16; // r2
  unsigned int v17; // r2
  const char *v18; // r7
  unsigned int *v19; // r3
  unsigned int v20; // r2
  unsigned int v21; // r2
  _DWORD *v22; // r0
  const char *v23; // r0

  v1 = (_DWORD *)json_object_get(a1, "result");
  v2 = v1;
  if ( v1 )
  {
    v3 = *v1;
    if ( *v1 )
    {
      puts("Don't find result in submit result responce");
      if ( v2[1] == -1 )
        return 0;
      v4 = 0;
    }
    else
    {
      v12 = (_DWORD *)json_object_get(v1, "code");
      v4 = v12;
      if ( v12 && *v12 == 2 )
      {
        v18 = (const char *)v12[2];
        if ( !strcmp(v18, "000000") )
        {
          v7 = 0;
          v3 = 1;
          puts("submit result success");
        }
        else
        {
          printf("submit result fail! code: %s\n", v18);
          v22 = (_DWORD *)json_object_get(v2, "msg");
          v7 = v22;
          if ( v22 && *v22 == 2 )
          {
            v23 = (const char *)json_string_value(v22);
            printf("submit result fail! msg: %s\n", v23);
          }
          else
          {
            v3 = 0;
            puts("Don't get msg in result");
          }
        }
        if ( v2[1] == -1 )
          goto LABEL_10;
        v19 = v2 + 1;
        __dmb(0xBu);
        do
        {
          v20 = __ldrex(v19);
          v21 = v20 - 1;
        }
        while ( __strex(v21, v19) );
        if ( v21 )
          goto LABEL_10;
        goto LABEL_33;
      }
      puts("Don't get code in result");
      if ( v2[1] == -1 )
      {
        if ( v4 )
        {
          if ( v4[1] != -1 )
          {
            v13 = v4 + 1;
            __dmb(0xBu);
            do
            {
              v14 = __ldrex(v13);
              v3 = v14 - 1;
            }
            while ( __strex(v3, v13) );
            v7 = (_DWORD *)v3;
            if ( !v3 )
              goto LABEL_27;
          }
        }
        return 0;
      }
    }
    v5 = v2 + 1;
    __dmb(0xBu);
    do
    {
      v6 = __ldrex(v5);
      v3 = v6 - 1;
    }
    while ( __strex(v3, v5) );
    if ( v3 )
    {
      v3 = 0;
      v7 = 0;
      if ( v4 )
        goto LABEL_10;
      return 0;
    }
    v7 = 0;
LABEL_33:
    json_delete(v2);
    if ( !v4 )
      goto LABEL_11;
LABEL_10:
    if ( v4[1] == -1 )
      goto LABEL_11;
    v15 = v4 + 1;
    __dmb(0xBu);
    do
    {
      v16 = __ldrex(v15);
      v17 = v16 - 1;
    }
    while ( __strex(v17, v15) );
    if ( v17 )
    {
LABEL_11:
      if ( v7 && v7[1] != -1 )
      {
        v8 = v7 + 1;
        __dmb(0xBu);
        do
        {
          v9 = __ldrex(v8);
          v10 = v9 - 1;
        }
        while ( __strex(v10, v8) );
        if ( !v10 )
          json_delete(v7);
      }
      return v3;
    }
LABEL_27:
    json_delete(v4);
    goto LABEL_11;
  }
  puts("Don't find result in submit result responce");
  return 0;
}
