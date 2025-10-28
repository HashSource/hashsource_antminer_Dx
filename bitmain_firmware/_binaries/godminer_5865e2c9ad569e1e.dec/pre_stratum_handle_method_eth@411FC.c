int __fastcall pre_stratum_handle_method_eth(int (__fastcall **a1)(_DWORD, _DWORD, _DWORD), int a2, int a3, _DWORD *a4)
{
  double *v8; // r0
  double *v9; // r4
  _DWORD *v10; // r6
  const char *v11; // r0
  bool v12; // zf
  char *v13; // r1
  _DWORD *v14; // r0
  const char *v15; // r6
  char *v16; // r1
  int v17; // r7
  char *v18; // r1
  const char *v19; // r1
  const char *v20; // r1
  int v21; // r3
  int v22; // r6
  unsigned int *v23; // r3
  unsigned int v24; // r2
  unsigned int v25; // r2
  int v27; // r3
  int v28; // r1
  char *v29; // r1
  int v30; // r0
  char *v31; // r1
  _DWORD *v32; // r6
  char *v33; // r1
  _DWORD *v34; // r5
  int v35; // r3
  int v36; // r1
  char *v37; // r1
  _DWORD *v38; // r0
  char *v39; // r1
  int v40; // r0
  __int64 v41; // r10
  _BYTE *v42; // r1
  int v43; // r3
  char *v44; // r1
  int v45; // r3
  int v46; // r1
  const char *v47; // r1
  const char *v48; // r1
  char *v49; // r1
  int v50; // r1
  const char *v51; // r0
  char v52[92]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v53[160]; // [sp+70h] [bp-10A4h] BYREF
  char v54[4100]; // [sp+110h] [bp-1004h] BYREF

  v8 = json_loads(a3, 0, v52);
  v9 = v8;
  if ( v8 )
  {
    v10 = (_DWORD *)json_object_get(v8, "jsonrpc");
    v11 = (const char *)json_string_value(v10);
    v12 = v10 == 0;
    if ( v10 )
      v12 = v11 == 0;
    if ( !v12 && !strcasecmp(v11, "2.0") )
    {
      LOWORD(v37) = 14576;
      *(_BYTE *)(a2 + 1656) = 1;
      HIWORD(v37) = (unsigned int)"ll]}" >> 16;
      v38 = (_DWORD *)json_object_get(v9, v37);
      if ( !v38 )
      {
        LOWORD(v49) = 14584;
        HIWORD(v49) = (unsigned int)"{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.1\", null]}" >> 16;
        v38 = (_DWORD *)json_object_get(v9, v49);
      }
      v22 = sub_401AC(v38, a2);
      if ( !v22 )
      {
        V_LOCK();
        LOWORD(v45) = 14676;
        HIWORD(v45) = (unsigned int)"e send failed" >> 16;
        logfmt_raw(v54, 0x1000u, 0, v45, a3);
        V_UNLOCK();
        LOWORD(v46) = 17696;
        HIWORD(v46) = (unsigned int)"%13.2f" >> 16;
        zlog(g_zc, v46, 163, "pre_stratum_handle_method_eth", 29, 1092, 80, v54);
        goto LABEL_31;
      }
    }
    else
    {
      LOWORD(v13) = 14568;
      *(_BYTE *)(a2 + 1656) = 0;
      HIWORD(v13) = (unsigned int)"0.0\", null]}" >> 16;
      v14 = (_DWORD *)json_object_get(v9, v13);
      v15 = (const char *)json_string_value(v14);
      if ( v15 )
      {
        LOWORD(v16) = 14576;
        HIWORD(v16) = (unsigned int)"ll]}" >> 16;
        v17 = json_object_get(v9, v16);
        if ( !v17 )
        {
          LOWORD(v44) = 14584;
          HIWORD(v44) = (unsigned int)"{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.1\", null]}" >> 16;
          v17 = json_object_get(v9, v44);
        }
        LOWORD(v18) = 5244;
        HIWORD(v18) = (unsigned int)"e time: %s type: %s" >> 16;
        json_object_get(v9, v18);
        LOWORD(v19) = 14592;
        HIWORD(v19) = (unsigned int)", \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.1\", null]}" >> 16;
        if ( !strcasecmp(v15, v19) )
        {
          LOWORD(v39) = 18528;
          HIWORD(v39) = (unsigned int)"thod\": \"eth_submitLogin\"}" >> 16;
          v40 = json_object_get(v9, v39);
          v41 = json_integer_value(v40);
          if ( v41 )
          {
            v22 = *(_DWORD *)(a2 + 1588);
            if ( !v22 )
            {
              v22 = (int)calloc(1u, 0x6Bu);
              *(_DWORD *)(a2 + 1588) = v22;
              if ( !v22 )
              {
                LOWORD(v50) = 15708;
                LOWORD(v51) = 5892;
                HIWORD(v50) = (unsigned int)"parse_extranonce_dash" >> 16;
                HIWORD(v51) = (unsigned int)"simulation submit thread create failed" >> 16;
                printf(v51, v50);
                return v22;
              }
            }
            *(_QWORD *)(v22 + 96) = v41;
          }
          v22 = a1[12](a1, a2, v17);
          v42 = (_BYTE *)(a2 + 1916);
          if ( v22 )
          {
            LOWORD(v43) = 16688;
            HIWORD(v43) = (unsigned int)"00000000000000000000000080020000" >> 16;
            *a4 = v43;
            pool_tset(a2, v42, 1);
            goto LABEL_12;
          }
          goto LABEL_35;
        }
        LOWORD(v20) = 14608;
        HIWORD(v20) = (unsigned int)"ing.subscribe\", \"params\": [\"GodMiner/2.0.1\", null]}" >> 16;
        if ( !strcasecmp(v15, v20)
          || (LOWORD(v47) = 14632,
              HIWORD(v47) = (unsigned int)": [\"GodMiner/2.0.1\", null]}" >> 16,
              !strcasecmp(v15, v47)) )
        {
          LOWORD(v21) = 14704;
          HIWORD(v21) = (unsigned int)"cribe timed out" >> 16;
          *a4 = v21;
          v22 = a1[14](a1, a2, v17);
          goto LABEL_12;
        }
        LOWORD(v48) = 14652;
        HIWORD(v48) = (unsigned int)" null]}" >> 16;
        if ( !strcasecmp(v15, v48) )
        {
          v22 = a1[13](a1, a2, v17);
          v42 = (_BYTE *)(a2 + 1916);
          if ( v22 )
          {
            pool_tset(a2, v42, 1);
LABEL_12:
            if ( *((_DWORD *)v9 + 1) != -1 )
            {
              v23 = (unsigned int *)v9 + 1;
              __dmb(0xBu);
              do
              {
                v24 = __ldrex(v23);
                v25 = v24 - 1;
              }
              while ( __strex(v25, v23) );
              if ( !v25 )
                json_delete(v9);
            }
            return v22;
          }
LABEL_35:
          pool_tclear(a2, v42, 0);
          goto LABEL_12;
        }
      }
      LOWORD(v29) = 14584;
      HIWORD(v29) = (unsigned int)"{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.1\", null]}" >> 16;
      v30 = json_object_get(v9, v29);
      LOWORD(v31) = 4756;
      v32 = (_DWORD *)v30;
      HIWORD(v31) = (unsigned int)"ot be here" >> 16;
      json_object_get(v9, v31);
      LOWORD(v33) = 5244;
      HIWORD(v33) = (unsigned int)"e time: %s type: %s" >> 16;
      v34 = (_DWORD *)json_object_get(v9, v33);
      if ( v32 && *v32 != 7 && v32 != json_false() )
        json_string_value(v32);
      json_true();
      if ( !v34 || *v34 == 7 || json_integer_value((int)v34) != 2 )
      {
        V_LOCK();
        LOWORD(v35) = 18536;
        HIWORD(v35) = (unsigned int)"eth_submitLogin\"}" >> 16;
        logfmt_raw(v54, 0x1000u, 0, v35, "pre_stratum_handle_method_eth");
        V_UNLOCK();
        LOWORD(v36) = 17696;
        HIWORD(v36) = (unsigned int)"%13.2f" >> 16;
        v22 = 0;
        zlog(g_zc, v36, 163, "pre_stratum_handle_method_eth", 29, 1084, 40, v54);
        goto LABEL_12;
      }
    }
    v22 = 1;
LABEL_31:
    *a4 = "notify";
    goto LABEL_12;
  }
  V_LOCK();
  LOWORD(v27) = 14540;
  HIWORD(v27) = (unsigned int)"e\", \"params\": [\"ckbminer-v1.0.0\", null]}" >> 16;
  logfmt_raw(v54, 0x1000u, 0, v27, *(_DWORD *)v52, v53);
  V_UNLOCK();
  LOWORD(v28) = 17696;
  HIWORD(v28) = (unsigned int)"%13.2f" >> 16;
  zlog(g_zc, v28, 163, "pre_stratum_handle_method_eth", 29, 995, 100, v54);
  return 0;
}
