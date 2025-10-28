int __fastcall sub_29194(_DWORD *a1, const char **a2)
{
  char *v4; // r6
  int v5; // r8
  char *all_created_runtime; // r0
  char *v7; // r4
  _DWORD *v8; // r10
  _DWORD *v9; // r5
  double v10; // d0
  float v11; // s24
  float v12; // s25
  double v13; // d11
  double v14; // d9
  _DWORD *v15; // r0
  bool v16; // zf
  double v17; // d7
  double *v18; // r0
  bool v19; // zf
  double *v20; // r0
  double *v21; // r0
  double *v22; // r0
  char *v23; // r0
  __int64 v24; // r0
  _DWORD *v25; // r0
  _DWORD *v26; // r0
  _DWORD *v27; // r8
  char **v28; // r11
  _DWORD *v29; // r4
  char *v30; // r0
  char *v31; // t1
  char *v33; // r8
  int v34; // r4
  char *v35; // r11
  int v36; // t1
  int v37; // r1
  double *v38; // r0
  unsigned __int64 v39; // [sp+18h] [bp-102Ch]
  char *ptr; // [sp+24h] [bp-1020h]
  int v41; // [sp+2Ch] [bp-1018h] BYREF
  double v42; // [sp+30h] [bp-1014h] BYREF
  _DWORD v43[2]; // [sp+38h] [bp-100Ch] BYREF
  char v44[12]; // [sp+40h] [bp-1004h] BYREF
  float v45; // [sp+4Ch] [bp-FF8h]
  float v46; // [sp+50h] [bp-FF4h]
  float v47; // [sp+54h] [bp-FF0h]
  float v48; // [sp+58h] [bp-FECh]
  double v49; // [sp+60h] [bp-FE4h]
  unsigned __int64 v50; // [sp+70h] [bp-FD4h]

  v4 = (char *)v43;
  v43[0] = 0;
  v41 = 0;
  v43[1] = 0;
  v5 = frontend_runtime_instance();
  all_created_runtime = (char *)get_all_created_runtime(&v41);
  if ( a2 )
  {
    v7 = all_created_runtime;
    sub_23360(a1, a2);
    sub_2347C(a1);
    v8 = json_array();
    v9 = json_object();
    read_system_status_from_monitor((int)v44);
    v10 = v49;
    format_hashrate_double(*(const char **)(*(_DWORD *)(v5 + 72) + 16), &v42, (char *)v43);
    if ( v41 <= 0 )
      v4 = 0;
    v11 = v45;
    v12 = v46;
    v39 = v50;
    v13 = v47 * v10;
    if ( v41 <= 0 )
      ptr = v4;
    v14 = v48 * v10;
    if ( v41 > 0 )
    {
      ptr = (char *)malloc(216 * v41);
      v4 = (char *)malloc(4 * v41);
      if ( v41 > 0 )
      {
        v33 = v7 - 4;
        v34 = 0;
        v35 = ptr;
        do
        {
          v36 = *((_DWORD *)v33 + 1);
          v33 += 4;
          read_status_from_monitor(v35, v36);
          v37 = v41;
          v35 += 216;
          *(_DWORD *)&v4[4 * v34++] = *(_DWORD *)(*(_DWORD *)v33 + 216);
        }
        while ( v37 > v34 );
      }
    }
    get_miner_elapsed_time();
    get_total_nonce_rate();
    get_total_accept_rate();
    v15 = json_integer((__int64)v10);
    json_object_set_new(v9, "elapsed", v15);
    v16 = opt_algo == 9;
    if ( opt_algo != 9 )
      v16 = opt_algo == 6;
    if ( v16 )
      v17 = v12;
    else
      v17 = v11;
    sub_1226E4((__int64)(v17 * v10 * 100.0));
    v18 = json_real();
    json_object_set_new(v9, "rate_5s", v18);
    v19 = opt_algo == 9;
    if ( opt_algo != 9 )
      v19 = opt_algo == 6;
    if ( v19 )
    {
      sub_1226E4((__int64)(*(float *)&v10 * v14 * 100.0));
      v20 = json_real();
      json_object_set_new(v9, "rate_avg", v20);
      sub_1226E4((__int64)(*(float *)&v10 * v13 * 100.0));
    }
    else
    {
      sub_1226E4((__int64)(v14 * 100.0));
      v38 = json_real();
      json_object_set_new(v9, "rate_avg", v38);
      sub_1226E4((__int64)(v13 * 100.0));
    }
    v21 = json_real();
    json_object_set_new(v9, "rate_30m", v21);
    sub_1226E4((__int64)(v42 * 100.0));
    v22 = json_real();
    json_object_set_new(v9, "rate_ideal", v22);
    v23 = BUFX_strdup((char *)v43);
    json_object_set_new(v9, "rate_unit", v23);
    v24 = v39;
    if ( opt_algo == 8 )
      LODWORD(v24) = sub_1229FC(v39, 0x3E8u);
    v25 = json_integer(v24);
    json_object_set_new(v9, "hw_all", v25);
    v26 = json_integer(*(__int64 *)&dword_164DF0);
    json_object_set_new(v9, "bestshare", v26);
    v27 = json_array();
    if ( v27 && off_163368 )
    {
      v28 = (char **)&off_163368;
      do
      {
        v29 = json_object();
        v30 = BUFX_strdup(*v28);
        json_object_set_new(v29, "type", v30);
        ((void (__fastcall *)(_DWORD *, char **))v28[1])(v29, v28);
        json_array_append_new(v27, v29);
        v31 = v28[6];
        v28 += 6;
      }
      while ( v31 );
    }
    json_object_set_new(v9, "status", v27);
    json_array_append_new(v8, v9);
    json_object_set_new(a1, "SUMMARY", v8);
    if ( v41 > 0 )
    {
      free(v4);
      free(ptr);
    }
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v44, 0x1000u, 0, "%s: input bad api param", "get_summary");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/api_new.c",
      136,
      "get_summary",
      11,
      504,
      100,
      v44);
    return -2147483646;
  }
}
