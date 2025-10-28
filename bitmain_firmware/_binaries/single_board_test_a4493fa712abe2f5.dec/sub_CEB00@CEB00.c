int __fastcall sub_CEB00(int a1, _BYTE *a2, const char *a3, _BYTE *a4)
{
  _BOOL4 v8; // r1
  size_t v10; // r0
  int v11; // r1
  char *v12; // r2
  size_t v13; // r3
  char v14; // r5
  int v15; // t1
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r3
  char v21; // r4
  _DWORD s[65]; // [sp+20h] [bp-104h] BYREF

  memset(s, 0, 0x100u);
  if ( !a1 )
    return -1;
  v8 = a3 == 0;
  if ( !a2 )
    v8 = 1;
  if ( !a4 || v8 )
    return -1;
  if ( !byte_3B5138[0] )
    return -2;
  printf("scan_code_data::%s", byte_3B5138);
  memset(s, 0, 0x100u);
  v10 = strlen(byte_3B5138);
  v11 = 0;
  v12 = byte_3B5138;
  v13 = 0;
  while ( v10 > v13++ )
  {
    v15 = (unsigned __int8)*v12++;
    v14 = v15;
    if ( (unsigned int)(v15 - 32) <= 0x5E )
      *((_BYTE *)s + v11++) = v14;
  }
  printf("after check, scan_code_data::%s", (const char *)s);
  if ( strchr((const char *)s, 32) )
  {
    *a4 = 1;
    _isoc99_sscanf(s, "%s %s %s %s %s %s %s %s", a3, a3 + 32, a3 + 48, a3 + 64, a3 + 80, a3 + 96, a3 + 112, a3 + 128);
    puts("recv qrcode data::");
    printf("factory_job::[%s].\n", a3);
    printf("chip_die::[%s].\n", a3 + 32);
    printf("chip_marking::[%s].\n", a3 + 48);
    printf("chip_bin::[%s].\n", a3 + 64);
    printf("chip_ftversion::[%s].\n", a3 + 80);
    printf("temp_sensor_type::[%s].\n", a3 + 96);
    printf("hashboard_ctrl_code::[%s].\n", a3 + 112);
    printf("hashboard_index::[%s].\n", a3 + 128);
    return 0;
  }
  else if ( strlen((const char *)s) == 17 )
  {
    v17 = s[0];
    v18 = s[1];
    v19 = s[2];
    v20 = s[3];
    *a2 = 1;
    *(_DWORD *)(a1 + 17) = 0;
    v21 = s[4];
    *(_DWORD *)(a1 + 1) = v17;
    *(_DWORD *)(a1 + 21) = 0;
    *(_DWORD *)(a1 + 25) = 0;
    *(_DWORD *)(a1 + 29) = 0;
    *(_BYTE *)a1 = 17;
    *(_DWORD *)(a1 + 5) = v18;
    *(_BYTE *)(a1 + 17) = v21;
    *(_DWORD *)(a1 + 9) = v19;
    *(_DWORD *)(a1 + 13) = v20;
    printf("recv sn data::[%s]\n", (const char *)(a1 + 1));
    return 0;
  }
  else
  {
    puts("bad data format!!!drop it.");
    return -3;
  }
}
