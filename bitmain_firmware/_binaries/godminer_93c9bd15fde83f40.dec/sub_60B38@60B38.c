_DWORD *__fastcall sub_60B38(int *a1, _DWORD *a2)
{
  _DWORD *v2; // r4
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  unsigned int *v6; // r3
  unsigned int v7; // r2
  _DWORD *v8; // r4
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  char *v11; // r7
  unsigned int *v13; // r3
  unsigned int v14; // r2
  unsigned int v15; // r2

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
      json_object_set_new(v5, "result", dword_1A24E4);
      v8 = json_object();
      v9 = off_1A25E8(0x10u);
      if ( v9 )
      {
        *v9 = 3;
        v9[1] = 1;
        *((_QWORD *)v9 + 1) = 38;
      }
      json_object_set_new(v8, "code", v9);
      v10 = json_string("unknown method");
      json_object_set_new(v8, "message", v10);
      json_object_set_new(v5, "error", v8);
      v11 = (char *)json_dumps(v5, 0);
      v2 = (_DWORD *)stratum_send_line(a1, v11);
      if ( v5 )
      {
        if ( v5[1] != -1 )
        {
          v13 = v5 + 1;
          __dmb(0xBu);
          do
          {
            v14 = __ldrex(v13);
            v15 = v14 - 1;
          }
          while ( __strex(v15, v13) );
          if ( !v15 )
            json_delete(v5);
        }
      }
      if ( v11 )
        free(v11);
    }
  }
  return v2;
}
