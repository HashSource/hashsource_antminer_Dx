_DWORD *__fastcall sub_FD614(int a1, _DWORD *a2)
{
  _DWORD *v2; // r4
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  unsigned int *v6; // r3
  unsigned int v7; // r2
  _DWORD *v8; // r4
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r2
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  _QWORD *v14; // r2
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r4
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  char *v20; // r6
  unsigned int *v21; // r3
  unsigned int v22; // r2
  unsigned int v23; // r2
  char v25[8]; // [sp+8h] [bp-68h] BYREF
  char v26[32]; // [sp+10h] [bp-60h] BYREF
  char s[64]; // [sp+30h] [bp-40h] BYREF

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
      if ( *(_BYTE *)(a1 + 1016) )
      {
        memset(s, 0, sizeof(s));
        memset(v26, 0, sizeof(v26));
        snprintf(s, 0x40u, "%s", *(const char **)&aNoncePopHandle_3[4 * opt_algo + 728]);
        strcpy(v25, "linux");
        sprintf(v26, "GCC %d.%d.%d\n", 7, 2, 1);
        v26[31] = 0;
        v8 = json_object();
        v9 = json_string(s);
        json_object_set_new(v8, "algo", v9);
        v10 = json_string("cpu");
        json_object_set_new(v8, "type", v10);
        v11 = (_DWORD *)off_190780(16);
        if ( v11 )
        {
          v11[1] = 1;
          *v11 = 3;
          *((_QWORD *)v11 + 1) = 0;
        }
        json_object_set_new(v8, "freq", v11);
        v12 = (_DWORD *)off_190780(16);
        if ( v12 )
        {
          *v12 = 3;
          v12[1] = 1;
          *((_QWORD *)v12 + 1) = 0;
        }
        json_object_set_new(v8, "memf", v12);
        v13 = (_DWORD *)off_190780(16);
        if ( v13 )
        {
          *v13 = 3;
          v13[1] = 1;
          *((_QWORD *)v13 + 1) = 0;
        }
        json_object_set_new(v8, "power", v13);
        v14 = (_QWORD *)off_190780(16);
        if ( v14 )
        {
          *(_DWORD *)v14 = 4;
          v14[1] = 0;
          *((_DWORD *)v14 + 1) = 1;
        }
        json_object_set_new(v8, "intensity", v14);
        v15 = json_string(v25);
        json_object_set_new(v8, "os", v15);
        v16 = json_string(v26);
        json_object_set_new(v8, "driver", v16);
        json_object_set_new(v5, "result", v8);
        json_object_set_new(v5, "error", dword_190784);
      }
      else
      {
        v17 = json_object();
        v18 = off_190780(0x10u);
        if ( v18 )
        {
          *v18 = 3;
          v18[1] = 1;
          *((_QWORD *)v18 + 1) = 1;
        }
        json_object_set_new(v17, "code", v18);
        v19 = json_string("disabled");
        json_object_set_new(v17, "message", v19);
        json_object_set_new(v5, "error", v17);
      }
      v20 = json_dumps(v5, 0);
      v2 = (_DWORD *)stratum_send_line((int *)a1, v20);
      if ( v5 )
      {
        if ( v5[1] != -1 )
        {
          v21 = v5 + 1;
          __dmb(0xBu);
          do
          {
            v22 = __ldrex(v21);
            v23 = v22 - 1;
          }
          while ( __strex(v23, v21) );
          if ( !v23 )
            json_delete(v5);
        }
      }
      if ( v20 )
        free(v20);
    }
  }
  return v2;
}
