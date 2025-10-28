int __fastcall stratum_prepare_upstream_work_ae(_DWORD *a1, int a2, char *a3)
{
  int v3; // r6
  int v7; // r4
  int v8; // r6
  char *v9; // r11
  int v10; // r4
  int v11; // t1
  char *v12; // r0
  int v13; // r4
  int v14; // r3
  int v15; // r3
  int v16; // r12
  int v18; // [sp+4h] [bp-250h]
  char s[32]; // [sp+10h] [bp-244h] BYREF
  char src[32]; // [sp+30h] [bp-224h] BYREF
  char dest[516]; // [sp+50h] [bp-204h] BYREF

  v3 = a1[97];
  v7 = a1[98];
  if ( v3 )
  {
    v8 = v7 + v3 - 1;
    v9 = s;
    v10 = v7 - 1;
    do
    {
      v11 = *(unsigned __int8 *)++v10;
      v12 = v9;
      v9 += 2;
      sprintf(v12, "%02x", v11);
    }
    while ( v10 != v8 );
  }
  v13 = 0;
  memset(dest, 0, 0x200u);
  do
  {
    v14 = *(_DWORD *)(a1[99] + v13);
    v13 += 4;
    snprintf(src, 0x20u, "\"%08x\",", v14);
    strcat(dest, src);
  }
  while ( v13 != 164 );
  snprintf(src, 0x20u, "\"%08x\"", *(_DWORD *)(a1[99] + 164));
  strcat(dest, src);
  v15 = *(_DWORD *)(a2 + 1288);
  v16 = *(_DWORD *)(a2 + 12);
  v18 = a1[96];
  *(_DWORD *)(a2 + 1288) = v15 + 1;
  snprintf(a3, 0x400u, "{\"method\":\"mining.submit\",\"id\":%d,\"params\":[\"%s\",\"%s\",\"%s\",[", v15, v16, v18, s);
  strcat(a3, dest);
  strcat(a3, "]]}\r\n");
  return 0;
}
