char *load_factory_pools()
{
  int v0; // r4
  int v1; // r1
  bool v2; // cc
  char *v3; // r10
  int v4; // r2
  const char *v5; // r11
  int v6; // r10
  void *v7; // r0
  char *v8; // r0
  int v9; // r3
  int v10; // r2
  int v11; // r3
  int v12; // r10
  void *v13; // r0
  char *result; // r0
  _DWORD v15[30]; // [sp+0h] [bp-F4h] BYREF
  _DWORD v16[30]; // [sp+78h] [bp-7Ch] BYREF

  v16[0] = "stratum+tcp://sz-grin.ss.btc.com:1800";
  v16[2] = "stratum+tcp://sz-grin.ss.btc.com:25";
  v16[6] = "stratum+tcp://cn-ckb.ss.btc.com:1800";
  v16[1] = "stratum+tcp://sz-grin.ss.btc.com:443";
  v16[8] = "stratum+tcp://47.92.12.117:1800";
  v16[15] = "stratum+tcp://stratum-eth.antpool.com:8008";
  v16[16] = "stratum+tcp://stratum-eth.antpool.com:443";
  v16[17] = "stratum+tcp://stratum-eth.antpool.com:25";
  v16[3] = "stratum+tcp://vbk.f2pool.com:3500";
  v16[18] = "stratum+tcp://stratum-ltc.antpool.com:8888";
  v16[4] = "stratum+tcp://vbk.f2pool.com:3500";
  v16[5] = "stratum+tcp://vbk.f2pool.com:3500";
  v16[19] = "stratum+tcp://stratum-ltc.antpool.com:443";
  v16[20] = "stratum+tcp://stratum-ltc.antpool.com:25";
  v16[21] = "stratum+tcp://stratum-dash.antpool.com:6099";
  v16[7] = "stratum+tcp://ckb.antpool.com:9018";
  v16[9] = " ";
  v16[10] = " ";
  v0 = 0;
  v16[11] = " ";
  v16[12] = " ";
  v16[13] = " ";
  v16[14] = " ";
  memset(&v16[24], 0, 24);
  memset(&v15[24], 0, 24);
  v16[22] = "stratum+tcp://stratum-dash.antpool.com:443";
  v16[23] = "stratum+tcp://stratum-dash.antpool.com:25";
  v15[1] = " ";
  v15[2] = " ";
  v15[4] = " ";
  v15[5] = " ";
  v15[9] = " ";
  v15[10] = " ";
  v15[11] = " ";
  v15[12] = " ";
  v15[13] = " ";
  v15[14] = " ";
  v15[3] = "VDxtAJV7B9tEburQPf7QpJJYnDqKWi";
  v15[6] = "BTCcomCKB";
  v15[7] = "ceshifjzhckb";
  v15[8] = "ceshifjzhckb01";
  v15[15] = "shenzhen+test+eth";
  v15[16] = "shenzhen+test+eth";
  v15[17] = "shenzhen+test+eth";
  v15[18] = "shenzhen+test+ltc";
  v15[19] = "shenzhenotestoltc";
  v15[20] = "shenzhenotestoltc";
  v15[0] = "BTCcomf1";
  v15[21] = "shenzhen+test+dash";
  v15[22] = "shenzhenotestodash";
  v15[23] = "shenzhenotestodash";
  do
  {
    v1 = dword_1AB188 + 1;
    v2 = ++dword_1AB188 <= total_pools;
    v3 = (char *)v16[3 * opt_algo + v0];
    if ( !v2 )
    {
      add_pool();
      v1 = dword_1AB188;
    }
    sub_133DB4(
      (void **)(*(_DWORD *)(pools + 4 * (v1 + 0x3FFFFFFF)) + 8),
      (_BYTE *)(*(_DWORD *)(pools + 4 * (v1 + 0x3FFFFFFF)) + 24),
      v3);
    v4 = dword_1AA880 + 1;
    v2 = ++dword_1AA880 <= total_pools;
    v5 = (const char *)v15[3 * opt_algo + v0];
    if ( !v2 )
    {
      add_pool();
      v4 = dword_1AA880;
    }
    v6 = *(_DWORD *)(pools + 4 * (v4 + 0x3FFFFFFF));
    v7 = *(void **)(v6 + 12);
    if ( v7 )
      free(v7);
    v8 = _strdup(v5);
    v9 = dword_1AA87C;
    v10 = total_pools;
    *(_DWORD *)(v6 + 12) = v8;
    v11 = v9 + 1;
    dword_1AA87C = v11;
    if ( v11 > v10 )
    {
      add_pool();
      v11 = dword_1AA87C;
    }
    ++v0;
    v12 = *(_DWORD *)(pools + 4 * (v11 + 0x3FFFFFFF));
    v13 = *(void **)(v12 + 16);
    if ( v13 )
      free(v13);
    result = _strdup("x");
    *(_DWORD *)(v12 + 16) = result;
  }
  while ( v0 != 3 );
  return result;
}
