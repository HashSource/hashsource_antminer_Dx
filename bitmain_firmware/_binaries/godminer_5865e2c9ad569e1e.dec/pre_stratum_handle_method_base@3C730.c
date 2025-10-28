const char *__fastcall pre_stratum_handle_method_base(int a1, int a2, int a3, _DWORD *a4)
{
  double *v8; // r0
  double *v9; // r4
  _DWORD *v10; // r0
  const char *v11; // r5
  char *v12; // r1
  int v13; // r10
  char *v14; // r1
  const char *v15; // r1
  _BYTE *v16; // r1
  int v17; // r3
  unsigned int *v18; // r3
  unsigned int v19; // r2
  unsigned int v20; // r2
  int v22; // r3
  int v23; // r1
  char *v24; // r1
  const char *v25; // r1
  int v26; // r3
  const char *v27; // r1
  int v28; // r3
  int v29; // r1
  char v30[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v31[160]; // [sp+70h] [bp-10A0h] BYREF
  char v32[4096]; // [sp+110h] [bp-1000h] BYREF

  v8 = json_loads(a3, 0, v30);
  v9 = v8;
  if ( !v8 )
  {
    V_LOCK();
    LOWORD(v22) = 14540;
    HIWORD(v22) = (unsigned int)"e\", \"params\": [\"ckbminer-v1.0.0\", null]}" >> 16;
    logfmt_raw(v32, 0x1000u, 0, v22, *(_DWORD *)v30, v31);
    V_UNLOCK();
    LOWORD(v23) = 14288;
    HIWORD(v23) = (unsigned int)"failed(%d): %s" >> 16;
    zlog(g_zc, v23, 151, "pre_stratum_handle_method_base", 30, 123, 100, v32);
    return 0;
  }
  v10 = (_DWORD *)json_object_get(v8, "method");
  v11 = (const char *)json_string_value(v10);
  if ( !v11 )
  {
LABEL_8:
    if ( *((_DWORD *)v9 + 1) != -1 )
      goto LABEL_9;
    return v11;
  }
  LOWORD(v12) = 14576;
  HIWORD(v12) = (unsigned int)"ll]}" >> 16;
  v13 = json_object_get(v9, v12);
  if ( !v13 )
  {
    LOWORD(v24) = 14584;
    HIWORD(v24) = (unsigned int)"{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.1\", null]}" >> 16;
    v13 = json_object_get(v9, v24);
  }
  LOWORD(v14) = 5244;
  HIWORD(v14) = (unsigned int)"e time: %s type: %s" >> 16;
  json_object_get(v9, v14);
  LOWORD(v15) = 14592;
  HIWORD(v15) = (unsigned int)", \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.1\", null]}" >> 16;
  if ( strcasecmp(v11, v15) )
  {
    LOWORD(v25) = 14608;
    HIWORD(v25) = (unsigned int)"ing.subscribe\", \"params\": [\"GodMiner/2.0.1\", null]}" >> 16;
    if ( !strcasecmp(v11, v25)
      || (LOWORD(v27) = 14632, HIWORD(v27) = (unsigned int)": [\"GodMiner/2.0.1\", null]}" >> 16, !strcasecmp(v11, v27)) )
    {
      LOWORD(v26) = 14704;
      HIWORD(v26) = (unsigned int)"cribe timed out" >> 16;
      *a4 = v26;
      v11 = (const char *)(*(int (__fastcall **)(int, int, int))(a1 + 56))(a1, a2, v13);
    }
    else
    {
      V_LOCK();
      LOWORD(v28) = 14676;
      HIWORD(v28) = (unsigned int)"e send failed" >> 16;
      v11 = 0;
      logfmt_raw(v32, 0x1000u, 0, v28, a3);
      V_UNLOCK();
      LOWORD(v29) = 14288;
      HIWORD(v29) = (unsigned int)"failed(%d): %s" >> 16;
      zlog(g_zc, v29, 151, "pre_stratum_handle_method_base", 30, 156, 80, v32);
    }
    goto LABEL_8;
  }
  v11 = (const char *)(*(int (__fastcall **)(int, int, int))(a1 + 48))(a1, a2, v13);
  v16 = (_BYTE *)(a2 + 1916);
  if ( v11 )
  {
    LOWORD(v17) = 16688;
    HIWORD(v17) = (unsigned int)"00000000000000000000000080020000" >> 16;
    *a4 = v17;
    pool_tset(a2, v16, 1);
    goto LABEL_8;
  }
  pool_tclear(a2, v16, 0);
  if ( *((_DWORD *)v9 + 1) == -1 )
    return v11;
LABEL_9:
  v18 = (unsigned int *)v9 + 1;
  __dmb(0xBu);
  do
  {
    v19 = __ldrex(v18);
    v20 = v19 - 1;
  }
  while ( __strex(v20, v18) );
  if ( v20 )
    return v11;
  json_delete(v9);
  return v11;
}
