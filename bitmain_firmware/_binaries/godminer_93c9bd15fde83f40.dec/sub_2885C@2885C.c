void *__fastcall sub_2885C(_DWORD *a1, int a2, int a3, const char *a4)
{
  void *result; // r0
  bool v9; // zf
  _DWORD *v10; // r9
  _DWORD *v11; // r6
  __int16 v12; // r3
  _DWORD *v13; // r0
  _QWORD *v14; // r0
  _QWORD *v15; // r0
  const char *v16; // r2
  _DWORD *v17; // r3
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r2
  __int16 v21; // [sp+4h] [bp-38h] BYREF
  char s[48]; // [sp+8h] [bp-34h] BYREF

  v21 = 0;
  result = memset(s, 0, sizeof(s));
  v9 = a4 == 0;
  if ( a4 )
    v9 = a1 == 0;
  if ( !v9 )
  {
    v10 = json_array();
    v11 = json_object();
    v12 = a2 ? 83 : 69;
    v21 = v12;
    v13 = json_string((const char *)&v21);
    json_object_set_new(v11, "STATUS", v13);
    v14 = json_integer(dword_1A3F6C);
    json_object_set_new(v11, "When", v14);
    v15 = json_integer(a3);
    json_object_set_new(v11, "Code", v15);
    if ( a3 == 7 )
      LOWORD(v17) = 18932;
    else
      LOWORD(v16) = 26612;
    if ( a3 == 7 )
    {
      HIWORD(v17) = 26;
      snprintf(s, 0x30u, a4, *v17);
    }
    else
    {
      HIWORD(v16) = 23;
      snprintf(s, 0x30u, v16, a4);
    }
    v18 = json_string(s);
    json_object_set_new(v11, "Msg", v18);
    v19 = json_string(opt_api_description);
    json_object_set_new(v11, "Description", v19);
    json_array_append_new((int)v10, v11);
    result = (void *)json_object_set_new(a1, "STATUS", v10);
    if ( !a2 )
    {
      v20 = off_1A25E8(0x10u);
      if ( v20 )
      {
        *v20 = 3;
        v20[1] = 1;
        *((_QWORD *)v20 + 1) = 1;
      }
      return (void *)json_object_set_new(a1, "id", v20);
    }
  }
  return result;
}
