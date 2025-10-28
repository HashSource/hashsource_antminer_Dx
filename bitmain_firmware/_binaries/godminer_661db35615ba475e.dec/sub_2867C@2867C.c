_DWORD *__fastcall sub_2867C(_DWORD *result, const char **a2)
{
  bool v2; // zf
  _DWORD *v4; // r4
  _DWORD *v5; // r5
  _DWORD *v6; // r0
  int v7; // r6
  _QWORD *v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  _DWORD v11[4]; // [sp+0h] [bp-20h] BYREF
  _DWORD v12[4]; // [sp+10h] [bp-10h] BYREF

  v2 = a2 == 0;
  if ( a2 )
    v2 = result == 0;
  memset(v12, 0, sizeof(v12));
  memset(v11, 0, sizeof(v11));
  if ( !v2 )
  {
    v4 = result;
    v5 = json_object();
    v6 = json_string("S");
    json_object_set_new(v5, "STATUS", v6);
    v7 = dword_190C5C;
    v8 = off_190780(0x10u);
    if ( v8 )
    {
      v8[1] = v7;
      *(_DWORD *)v8 = 3;
      *((_DWORD *)v8 + 1) = 1;
    }
    json_object_set_new(v5, "when", v8);
    snprintf((char *)v12, 0x10u, "%s", *a2);
    v9 = json_string((const char *)v12);
    json_object_set_new(v5, "Msg", v9);
    snprintf((char *)v11, 0x10u, "%s", a2[1]);
    v10 = json_string((const char *)v11);
    json_object_set_new(v5, "api_version", v10);
    return (_DWORD *)json_object_set_new(v4, "STATUS", v5);
  }
  return result;
}
