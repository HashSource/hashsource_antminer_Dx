int *__fastcall read_config_json(int a1)
{
  char *v2; // r0
  _DWORD *file; // r0
  _DWORD *v4; // r6
  int *v5; // r4
  int v6; // r2
  int v7; // r1
  int v8; // r3
  unsigned int *v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r2
  int v13[23]; // [sp+Ch] [bp-1FCh] BYREF
  char v14[160]; // [sp+68h] [bp-1A0h] BYREF
  char s[256]; // [sp+108h] [bp-100h] BYREF

  v2 = getenv("PCBA_CONFIG_PATH");
  if ( v2 )
    snprintf(s, 0x100u, "%s/%s.json", v2, "Config");
  else
    snprintf(s, 0x100u, "/mnt/card/%s.json", "Config");
  printf("pcba config path = %s\n", s);
  file = json_load_file(s, 0, (int)v13);
  v4 = file;
  if ( file && !*file )
  {
    v5 = parse_config(file, (void **)a1);
    if ( v4[1] != -1 )
    {
      v10 = v4 + 1;
      __dmb(0xBu);
      do
      {
        v11 = __ldrex(v10);
        v12 = v11 - 1;
      }
      while ( __strex(v12, v10) );
      if ( !v12 )
        json_delete(v4);
    }
  }
  else
  {
    v5 = 0;
    if ( v13[0] < 0 )
      puts(v14);
    else
      printf("%s:%d: %s\n", s, v13[0], v14);
  }
  v6 = *(_DWORD *)(a1 + 52);
  v7 = *(_DWORD *)(*(_DWORD *)a1 + 40);
  v8 = *(_DWORD *)(*(_DWORD *)a1 + 28);
  if ( v7 != v6 || v7 != v8 )
  {
    v5 = 0;
    printf(
      "%s the level number is not equal: [%d %d %d]\n ",
      "read_config_json",
      v6,
      v8,
      *(_DWORD *)(*(_DWORD *)a1 + 40));
  }
  return v5;
}
