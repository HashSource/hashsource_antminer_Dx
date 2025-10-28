void __fastcall config_free(char **a1)
{
  void *v2; // r0
  char *v3; // r3
  int v4; // r4
  int v5; // r6
  char *v6; // r1
  void *v7; // r0
  void *v8; // r0
  char *v9; // r2
  char *v10; // r1
  char *v11; // r0
  char *v12; // r0
  char *v13; // r0

  if ( a1 )
  {
    v2 = (void *)*((_DWORD *)a1[2] + 2);
    if ( v2 )
    {
      free(v2);
      *((_DWORD *)a1[2] + 2) = 0;
    }
    v3 = *a1;
    if ( *a1 )
    {
      if ( (int)a1[1] > 0 )
      {
        v4 = 0;
        v5 = 0;
        do
        {
          while ( 1 )
          {
            v6 = &v3[v4];
            v7 = *(void **)&v3[v4];
            if ( v7 )
            {
              free(v7);
              v3 = *a1;
              v6 = &v3[v4];
              *(_DWORD *)&v3[v4] = 0;
            }
            v8 = (void *)*((_DWORD *)v6 + 6);
            if ( !v8 )
              break;
            free(v8);
            v9 = a1[1];
            ++v5;
            v3 = *a1;
            v10 = &(*a1)[v4];
            v4 += 80;
            *((_DWORD *)v10 + 6) = 0;
            if ( (int)v9 <= v5 )
              goto LABEL_11;
          }
          ++v5;
          v4 += 80;
        }
        while ( (int)a1[1] > v5 );
      }
LABEL_11:
      free(v3);
      *a1 = 0;
    }
    v11 = a1[3];
    if ( v11 )
    {
      free(v11);
      a1[3] = 0;
    }
    v12 = a1[12];
    if ( v12 )
    {
      free(v12);
      a1[12] = 0;
    }
    v13 = a1[17];
    if ( v13 )
    {
      free(v13);
      a1[17] = 0;
    }
  }
}
