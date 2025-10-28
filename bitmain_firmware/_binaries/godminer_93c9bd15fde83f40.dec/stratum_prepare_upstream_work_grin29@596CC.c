int __fastcall stratum_prepare_upstream_work_grin29(int a1, int a2, char *a3)
{
  int v3; // r8
  const char *v5; // r5
  _DWORD *v6; // r4
  int v9; // r10
  int v10; // r3
  int v11; // t1
  const char *v12; // r5
  int v13; // r4
  int v14; // t1
  const char *v15; // r2
  size_t v16; // r0
  int *v17; // r3
  size_t v18; // r2
  char *v19; // r1
  int v20; // r0
  void *v21; // r0
  int v23; // [sp+Ch] [bp-238h]
  __int64 v24; // [sp+18h] [bp-22Ch]
  char src[32]; // [sp+20h] [bp-224h] BYREF
  char s[516]; // [sp+40h] [bp-204h] BYREF

  v3 = *(_DWORD *)(a1 + 396);
  LOWORD(v5) = 16896;
  HIWORD(v5) = (unsigned int)&unk_1746B4 >> 16;
  v6 = (_DWORD *)(v3 + 28);
  v24 = *(_QWORD *)(a1 + 368);
  v9 = 0;
  memset(s, 0, 0x200u);
  do
  {
    v10 = *(v6 - 7);
    __pld(v6);
    v9 += 8;
    snprintf(src, 0x20u, v5, v10);
    strcat(s, src);
    snprintf(src, 0x20u, v5, *(v6 - 6));
    strcat(s, src);
    snprintf(src, 0x20u, v5, *(v6 - 5));
    strcat(s, src);
    snprintf(src, 0x20u, v5, *(v6 - 4));
    strcat(s, src);
    snprintf(src, 0x20u, v5, *(v6 - 3));
    strcat(s, src);
    snprintf(src, 0x20u, v5, *(v6 - 2));
    strcat(s, src);
    snprintf(src, 0x20u, v5, *(v6 - 1));
    strcat(s, src);
    v11 = *v6;
    v6 += 8;
    snprintf(src, 0x20u, v5, v11);
    strcat(s, src);
  }
  while ( v9 != 40 );
  LOWORD(v12) = 16896;
  v13 = v3 + 156;
  do
  {
    v14 = *(_DWORD *)(v13 + 4);
    v13 += 4;
    HIWORD(v12) = (unsigned int)&unk_1746B4 >> 16;
    snprintf(src, 0x20u, v12, v14);
    strcat(s, src);
  }
  while ( v3 + 160 != v13 );
  snprintf(src, 0x20u, "%d", *(_DWORD *)(v3 + 164));
  strcat(s, src);
  LOWORD(v15) = 16900;
  HIWORD(v15) = (unsigned int)&unk_1746B8 >> 16;
  snprintf(a3, 0x400u, v15, a2 + 1052, *(_DWORD *)(a1 + 376), *(_DWORD *)(a1 + 380), *(_DWORD *)(a1 + 384), v23, v24);
  strcat(a3, s);
  v16 = strlen(a3);
  LOWORD(v17) = 17016;
  v18 = v16;
  HIWORD(v17) = (unsigned int)"\"%s\"], \"id\": %d, \"method\": \"eth_submitLogin\"}" >> 16;
  v19 = &a3[v16];
  v20 = *v17;
  LOWORD(v17) = *((_WORD *)v17 + 2);
  *(_DWORD *)&a3[v18] = v20;
  *((_WORD *)v19 + 2) = (_WORD)v17;
  v21 = *(void **)(a1 + 396);
  if ( v21 )
    free(v21);
  return 0;
}
