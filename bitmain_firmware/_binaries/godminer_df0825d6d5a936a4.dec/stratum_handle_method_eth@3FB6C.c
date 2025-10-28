int __fastcall stratum_handle_method_eth(int a1, int a2, int a3)
{
  double *v4; // r0
  double *v5; // r4
  int v6; // r0
  int v7; // r7
  _DWORD *v8; // r0
  int v9; // r5
  bool v10; // zf
  unsigned int *v11; // r3
  unsigned int v12; // r2
  unsigned int v13; // r2
  _BYTE *v15; // r1
  char v16[92]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v17[160]; // [sp+70h] [bp-10A4h] BYREF
  char v18[4100]; // [sp+110h] [bp-1004h] BYREF

  v4 = json_loads(a3, 0, v16);
  v5 = v4;
  if ( v4 )
  {
    v6 = json_object_get(v4, "id");
    v7 = json_integer_value(v6);
    v8 = (_DWORD *)json_object_get(v5, "result");
    if ( v8 )
    {
      v9 = *(unsigned __int8 *)(a2 + 1648);
      if ( *(_BYTE *)(a2 + 1648) )
      {
        v10 = *v8 == 1;
        if ( *v8 == 1 )
          v10 = v7 == 0;
        v9 = v10;
        if ( v10 )
        {
          v9 = sub_3EEB4(v8, a2);
          v15 = (_BYTE *)(a2 + 1908);
          if ( v9 )
            pool_tset(a2, v15, 1);
          else
            pool_tclear(a2, v15, 0);
        }
      }
    }
    else
    {
      v9 = 0;
    }
    if ( *((_DWORD *)v5 + 1) == -1 )
      return v9;
    v11 = (unsigned int *)v5 + 1;
    __dmb(0xBu);
    do
    {
      v12 = __ldrex(v11);
      v13 = v12 - 1;
    }
    while ( __strex(v13, v11) );
    if ( v13 )
    {
      return v9;
    }
    else
    {
      json_delete(v5);
      return v9;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, 1208100, *(_DWORD *)v16, v17);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/frontend/frontend_eth/frontend_eth.c",
      163,
      "stratum_handle_method_eth",
      25,
      412,
      100,
      v18);
    return 0;
  }
}
