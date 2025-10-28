void *__fastcall sub_2A9A8(_DWORD *a1)
{
  void *result; // r0
  _DWORD *v3; // r5
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  char v7[64]; // [sp+0h] [bp-C4h] BYREF
  char v8[64]; // [sp+40h] [bp-84h] BYREF
  char s[68]; // [sp+80h] [bp-44h] BYREF

  memset(s, 0, 0x40u);
  memset(v8, 0, sizeof(v8));
  result = memset(v7, 0, sizeof(v7));
  if ( a1 )
  {
    v3 = json_object();
    snprintf(s, 0x40u, "%s", g_miner_version);
    v4 = json_string(s);
    json_object_set_new(v3, "miner_version", v4);
    snprintf(v8, 0x40u, "%s", g_miner_compiletime);
    v5 = json_string(v8);
    json_object_set_new(v3, "CompileTime", v5);
    snprintf(v7, 0x40u, "%s", g_miner_type);
    v6 = json_string(v7);
    json_object_set_new(v3, "type", v6);
    return (void *)json_object_set_new(a1, "INFO", v3);
  }
  return result;
}
