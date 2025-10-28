_DWORD *__fastcall sub_60A20(int *a1, _DWORD *a2)
{
  _DWORD *v2; // r4
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  unsigned int *v6; // r3
  unsigned int v7; // r2
  _DWORD *v8; // r0
  char *v9; // r7
  unsigned int *v11; // r3
  unsigned int v12; // r2
  unsigned int v13; // r2

  v2 = a2;
  if ( a2 )
  {
    if ( *a2 == 7 )
    {
      return 0;
    }
    else
    {
      v4 = json_object();
      v5 = v4;
      if ( v2[1] != -1 )
      {
        v6 = v2 + 1;
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 + 1, v6) );
        __dmb(0xBu);
      }
      json_object_set_new(v4, "id", v2);
      json_object_set_new(v5, "error", dword_1A25D8);
      v8 = json_string("GodMiner/1.0.0");
      json_object_set_new(v5, "result", v8);
      v9 = (char *)json_dumps(v5, 0);
      v2 = (_DWORD *)stratum_send_line(a1, v9);
      if ( v5 )
      {
        if ( v5[1] != -1 )
        {
          v11 = v5 + 1;
          __dmb(0xBu);
          do
          {
            v12 = __ldrex(v11);
            v13 = v12 - 1;
          }
          while ( __strex(v13, v11) );
          if ( !v13 )
            json_delete(v5);
        }
      }
      if ( v9 )
        free(v9);
    }
  }
  return v2;
}
