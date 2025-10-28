int __fastcall pre_stratum_handle_method_eth(int a1, int a2, int a3, _DWORD *a4)
{
  double *v7; // r0
  double *v8; // r4
  _DWORD *v9; // r0
  const char *v10; // r0
  int v11; // r0
  char *v12; // r1
  _DWORD *v13; // r0
  int v14; // r5
  int v15; // r2
  unsigned int *v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r2
  char v20[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v21[160]; // [sp+70h] [bp-10A0h] BYREF
  char v22[4096]; // [sp+110h] [bp-1000h] BYREF

  v7 = json_loads(a3, 0, v20);
  v8 = v7;
  if ( v7 )
  {
    v9 = (_DWORD *)json_object_get(v7, "jsonrpc");
    v10 = (const char *)json_string_value(v9);
    v11 = strcasecmp(v10, "2.0");
    LOWORD(v12) = 28488;
    if ( !v11 )
      *(_BYTE *)(a2 + 1648) = 1;
    HIWORD(v12) = 18;
    v13 = (_DWORD *)json_object_get(v8, v12);
    if ( !v13 )
      v13 = (_DWORD *)json_object_get(v8, "result");
    v14 = sub_3EEB4(v13, a2);
    if ( !v14 )
    {
      V_LOCK();
      logfmt_raw(v22, 0x1000u, 0, 1208236, a3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_godminer-new/frontend/frontend_eth/frontend_eth.c",
        163,
        "pre_stratum_handle_method_eth",
        29,
        506,
        80,
        v22);
    }
    v15 = *((_DWORD *)v8 + 1);
    *a4 = "notify";
    if ( v15 == -1 )
      return v14;
    v16 = (unsigned int *)v8 + 1;
    __dmb(0xBu);
    do
    {
      v17 = __ldrex(v16);
      v18 = v17 - 1;
    }
    while ( __strex(v18, v16) );
    if ( v18 )
    {
      return v14;
    }
    else
    {
      json_delete(v8);
      return v14;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, 1208100, *(_DWORD *)v20, v21);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/frontend/frontend_eth/frontend_eth.c",
      163,
      "pre_stratum_handle_method_eth",
      29,
      487,
      100,
      v22);
    return 0;
  }
}
