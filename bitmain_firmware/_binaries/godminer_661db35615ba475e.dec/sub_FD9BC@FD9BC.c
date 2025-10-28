_DWORD *__fastcall sub_FD9BC(int *a1, _DWORD *a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  unsigned int *v6; // r3
  unsigned int v7; // r2
  _DWORD *v8; // r0
  char *v9; // r7
  unsigned int *v11; // r3
  unsigned int v12; // r2
  unsigned int v13; // r2
  char v14[68]; // [sp+0h] [bp-44h] BYREF

  memset(v14, 0, 0x40u);
  if ( a2 )
  {
    if ( *a2 == 7 )
    {
      return 0;
    }
    else
    {
      snprintf(v14, 0x40u, "%s", *(const char **)&aNoncePopHandle_3[4 * opt_algo + 728]);
      v4 = json_object();
      v5 = v4;
      if ( a2[1] != -1 )
      {
        v6 = a2 + 1;
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 + 1, v6) );
        __dmb(0xBu);
      }
      json_object_set_new(v4, "id", a2);
      json_object_set_new(v5, "error", dword_190784);
      v8 = json_string(v14);
      json_object_set_new(v5, "result", v8);
      v9 = json_dumps(v5, 0);
      a2 = (_DWORD *)stratum_send_line(a1, v9);
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
  return a2;
}
