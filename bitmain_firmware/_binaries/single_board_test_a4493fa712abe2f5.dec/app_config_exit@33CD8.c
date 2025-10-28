void app_config_exit()
{
  int v0; // r5
  void *v1; // r0
  char *v2; // r3
  int v3; // r4
  int v4; // r6
  char *v5; // r1
  void *v6; // r0
  void *v7; // r0
  int v8; // r2
  int v9; // r1
  void *v10; // r0
  void *v11; // r0
  void *v12; // r0

  v0 = g_config_info[0];
  if ( g_config_info[0] )
  {
    v1 = *(void **)(*(_DWORD *)(g_config_info[0] + 8) + 8);
    if ( v1 )
    {
      free(v1);
      *(_DWORD *)(*(_DWORD *)(v0 + 8) + 8) = 0;
    }
    v2 = *(char **)v0;
    if ( *(_DWORD *)v0 )
    {
      if ( *(int *)(v0 + 4) > 0 )
      {
        v3 = 0;
        v4 = 0;
        do
        {
          while ( 1 )
          {
            v5 = &v2[v3];
            v6 = *(void **)&v2[v3];
            if ( v6 )
            {
              free(v6);
              v2 = *(char **)v0;
              v5 = &v2[v3];
              *(_DWORD *)&v2[v3] = 0;
            }
            v7 = (void *)*((_DWORD *)v5 + 6);
            if ( !v7 )
              break;
            free(v7);
            v8 = *(_DWORD *)(v0 + 4);
            ++v4;
            v2 = *(char **)v0;
            v9 = *(_DWORD *)v0 + v3;
            v3 += 80;
            *(_DWORD *)(v9 + 24) = 0;
            if ( v8 <= v4 )
              goto LABEL_11;
          }
          ++v4;
          v3 += 80;
        }
        while ( v4 < *(_DWORD *)(v0 + 4) );
      }
LABEL_11:
      free(v2);
      *(_DWORD *)v0 = 0;
    }
    v10 = *(void **)(v0 + 12);
    if ( v10 )
    {
      free(v10);
      *(_DWORD *)(v0 + 12) = 0;
    }
    v11 = *(void **)(v0 + 48);
    if ( v11 )
    {
      free(v11);
      *(_DWORD *)(v0 + 48) = 0;
    }
    v12 = *(void **)(v0 + 68);
    if ( v12 )
    {
      free(v12);
      *(_DWORD *)(v0 + 68) = 0;
    }
  }
}
