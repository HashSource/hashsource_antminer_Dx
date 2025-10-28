int __fastcall stratum_prepare_upstream_work_grin29(int a1, int a2, char *a3)
{
  int v3; // r8
  _DWORD *v5; // r4
  int v8; // r10
  int v9; // r3
  int v10; // t1
  int v11; // r4
  int v12; // t1
  void *v13; // r0
  __int64 v15; // [sp+18h] [bp-22Ch]
  char src[32]; // [sp+20h] [bp-224h] BYREF
  char s[516]; // [sp+40h] [bp-204h] BYREF

  v3 = *(_DWORD *)(a1 + 396);
  v5 = (_DWORD *)(v3 + 28);
  v15 = *(_QWORD *)(a1 + 368);
  v8 = 0;
  memset(s, 0, 0x200u);
  do
  {
    v9 = *(v5 - 7);
    __pld(v5);
    v8 += 8;
    snprintf(src, 0x20u, "%d,", v9);
    strcat(s, src);
    snprintf(src, 0x20u, "%d,", *(v5 - 6));
    strcat(s, src);
    snprintf(src, 0x20u, "%d,", *(v5 - 5));
    strcat(s, src);
    snprintf(src, 0x20u, "%d,", *(v5 - 4));
    strcat(s, src);
    snprintf(src, 0x20u, "%d,", *(v5 - 3));
    strcat(s, src);
    snprintf(src, 0x20u, "%d,", *(v5 - 2));
    strcat(s, src);
    snprintf(src, 0x20u, "%d,", *(v5 - 1));
    strcat(s, src);
    v10 = *v5;
    v5 += 8;
    snprintf(src, 0x20u, "%d,", v10);
    strcat(s, src);
  }
  while ( v8 != 40 );
  v11 = v3 + 156;
  do
  {
    v12 = *(_DWORD *)(v11 + 4);
    v11 += 4;
    snprintf(src, 0x20u, "%d,", v12);
    strcat(s, src);
  }
  while ( v3 + 160 != v11 );
  snprintf(src, 0x20u, "%d", *(_DWORD *)(v3 + 164));
  strcat(s, src);
  snprintf(
    a3,
    0x400u,
    "{\"id\":\"%s\",\"jsonrpc\":\"2.0\",\"method\":\"submit\",\"params\":{\"edge_bits\":%d,\"height\":%d,\"job_id\":%s,\""
    "nonce\":%llu,\"pow\":[",
    (const char *)(a2 + 1052),
    *(_DWORD *)(a1 + 376),
    *(_DWORD *)(a1 + 380),
    *(const char **)(a1 + 384),
    v15);
  strcat(a3, s);
  strcat(a3, "]}}\r\n");
  v13 = *(void **)(a1 + 396);
  if ( v13 )
    free(v13);
  return 0;
}
