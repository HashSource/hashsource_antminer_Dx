int __fastcall set_json_info_by_errorcode_and_time(_DWORD *a1, char *a2, time_t a3)
{
  int result; // r0
  _DWORD *v6; // r5
  char *v7; // r0
  char *v8; // r0
  char *v9; // r0
  char *v10; // r0
  time_t timer; // [sp+1Ch] [bp-334h] BYREF
  struct tm tp; // [sp+24h] [bp-32Ch] BYREF
  char v13[256]; // [sp+50h] [bp-300h] BYREF
  char v14[256]; // [sp+150h] [bp-200h] BYREF
  char s[256]; // [sp+250h] [bp-100h] BYREF

  timer = a3;
  if ( byte_196FC8 || (result = miner_6060info_errorcode_init()) != 0 )
  {
    result = get_reason_suggestion_from_json_by_errorcode(a2, v13, v14, 0x100u);
    if ( result )
    {
      v6 = json_object();
      v7 = BUFX_strdup(a2);
      json_object_set_new(v6, "code", v7);
      v8 = BUFX_strdup(v13);
      json_object_set_new(v6, "cause", v8);
      v9 = BUFX_strdup(v14);
      json_object_set_new(v6, "suggestion", v9);
      localtime_r(&timer, &tp);
      snprintf(
        s,
        0x100u,
        "%d%02d%02d%02d%02d%02d",
        tp.tm_year + 1900,
        tp.tm_mon + 1,
        tp.tm_mday,
        tp.tm_hour,
        tp.tm_min,
        tp.tm_sec);
      v10 = BUFX_strdup(s);
      json_object_set_new(v6, "timestamp", v10);
      return json_array_append_new(a1, v6);
    }
  }
  return result;
}
