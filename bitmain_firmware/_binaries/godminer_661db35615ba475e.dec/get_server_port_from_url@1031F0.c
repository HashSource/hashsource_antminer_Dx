int __fastcall get_server_port_from_url(char *a1, char *a2, _WORD *a3)
{
  char *v6; // r0
  bool v7; // zf
  char *v8; // r6
  int v10; // r8
  const char *v11; // r6
  int v12; // [sp+4h] [bp-4h] BYREF

  if ( !a1 )
    return 0;
  v6 = strchr(a1, 58);
  v7 = v6 == 0;
  if ( v6 )
    v7 = a1 == v6;
  v8 = v6;
  if ( v7 )
    return 0;
  v10 = v6 - a1;
  strncpy(a2, a1, v6 - a1);
  v11 = v8 + 1;
  a2[v10] = 0;
  if ( v11 - a1 >= strlen(a1) )
    return 0;
  sub_132694(v11, &v12);
  *a3 = v12;
  return 1;
}
