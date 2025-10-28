int __fastcall sub_27E4C(_DWORD *a1, int a2)
{
  int v4; // r0
  bool v5; // zf
  int v6; // r5
  _DWORD *v7; // r4
  float v8; // s20
  double v9; // d11
  float v10; // s26
  float v11; // s16
  double v12; // d10
  double v13; // d13
  double v14; // d8
  double v15; // r0
  double v16; // d15
  double v17; // d13
  double v18; // d8
  double v19; // d15
  _DWORD *v20; // r0
  bool v21; // zf
  double *v22; // r0
  double *v23; // r0
  double *v24; // r0
  _DWORD *v25; // r0
  _DWORD *v26; // r0
  _DWORD *v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  double *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r0
  _DWORD *v34; // r0
  _DWORD *v35; // r0
  _DWORD *v36; // r0
  double *v37; // r0
  double *v38; // r0
  double *v39; // r0
  double *v40; // r0
  double *v41; // r0
  _DWORD *v42; // r0
  int v43; // r1
  double v44; // d10
  double v45; // r0
  double *v46; // r0
  double v47; // r0
  double *v48; // r0
  double v49; // d7
  double v50; // d6
  bool v51; // cc
  double v52; // d7
  double *v53; // r0
  double v54; // d7
  double *v55; // r0
  _DWORD *v56; // r0
  bool v57; // zf
  char *v58; // r0
  char *v59; // r0
  bool v60; // zf
  char *v61; // r0
  char *v62; // r0
  _DWORD *v63; // r0
  double *v65; // r0
  double *v66; // r0
  __int64 v67; // [sp+10h] [bp-10E4h]
  __int64 v68; // [sp+18h] [bp-10DCh]
  _DWORD *v69; // [sp+20h] [bp-10D4h]
  double v70; // [sp+28h] [bp-10CCh]
  int v71; // [sp+34h] [bp-10C0h] BYREF
  double v72; // [sp+38h] [bp-10BCh] BYREF
  char v73[12]; // [sp+44h] [bp-10B0h] BYREF
  char v74[32]; // [sp+50h] [bp-10A4h] BYREF
  char v75[32]; // [sp+70h] [bp-1084h] BYREF
  char v76[32]; // [sp+90h] [bp-1064h] BYREF
  char v77[32]; // [sp+B0h] [bp-1044h] BYREF
  char v78[32]; // [sp+D0h] [bp-1024h] BYREF
  char v79[12]; // [sp+F0h] [bp-1004h] BYREF
  float v80; // [sp+FCh] [bp-FF8h]
  float v81; // [sp+100h] [bp-FF4h]
  float v82; // [sp+104h] [bp-FF0h]
  float v83; // [sp+108h] [bp-FECh]
  double v84; // [sp+110h] [bp-FE4h]
  __int64 v85; // [sp+120h] [bp-FD4h]

  v71 = 0;
  get_all_created_runtime(&v71);
  v4 = frontend_runtime_instance();
  v5 = a1 == 0;
  if ( a1 )
    v5 = a2 == 0;
  if ( v5 )
  {
    V_LOCK();
    logfmt_raw(v79, 0x1000u, 0, "%s: input bad api param", "get_summary_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/api_new.c",
      136,
      "get_summary_old",
      15,
      1110,
      100,
      v79);
    return -2147483646;
  }
  else
  {
    v6 = v4;
    sub_2358C(a1, 1, 11, *(const char **)(a2 + 8));
    v69 = json_array();
    v7 = json_object();
    read_system_status_from_monitor((int)v79);
    v8 = v81;
    v9 = v84;
    v10 = v82;
    v70 = v80;
    v11 = v83;
    format_hashrate_string(*(const char **)(*(_DWORD *)(v6 + 72) + 16), v74);
    v12 = v8;
    format_hashrate_string(*(const char **)(*(_DWORD *)(v6 + 72) + 16), v75);
    v13 = v10;
    format_hashrate_string(*(const char **)(*(_DWORD *)(v6 + 72) + 16), v76);
    v14 = v11;
    format_hashrate_string(*(const char **)(*(_DWORD *)(v6 + 72) + 16), v77);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v6 + 72) + 16), v78);
    format_hashrate_double(*(const char **)(*(_DWORD *)(v6 + 72) + 16), &v72, v73);
    v68 = v85;
    get_miner_elapsed_time();
    LODWORD(v15) = sub_1226E4(total_accepted);
    v16 = v15;
    if ( v9 != 0.0 )
      v16 = v15 / v9;
    v17 = v13 * v9;
    v18 = v14 * v9;
    v19 = v16 * 60.0;
    get_total_nonce_rate();
    get_total_accept_rate();
    v20 = json_integer((__int64)v9);
    json_object_set_new(v7, "Elapsed", v20);
    v21 = opt_algo == 9;
    if ( opt_algo != 9 )
      v21 = opt_algo == 6;
    if ( v21 )
    {
      sub_1226E4((__int64)(v12 * v9 * 100.0));
      v65 = json_real();
      json_object_set_new(v7, "GHS 5s", v65);
      sub_1226E4((__int64)(*(float *)&v9 * v18 * 100.0));
      v66 = json_real();
      json_object_set_new(v7, "GHS av", v66);
      sub_1226E4((__int64)(*(float *)&v9 * v17 * 100.0));
    }
    else
    {
      sub_1226E4((__int64)(v70 * v9 * 100.0));
      v22 = json_real();
      json_object_set_new(v7, "GHS 5s", v22);
      sub_1226E4((__int64)(v18 * 100.0));
      v23 = json_real();
      json_object_set_new(v7, "GHS av", v23);
      sub_1226E4((__int64)(v17 * 100.0));
    }
    v24 = json_real();
    json_object_set_new(v7, "GHS 30m", v24);
    v25 = json_integer((unsigned int)dword_164DE0);
    json_object_set_new(v7, "Found Blocks", v25);
    v26 = json_integer(*(__int64 *)&total_getworks);
    json_object_set_new(v7, "Getwork", v26);
    v27 = json_integer(total_accepted);
    json_object_set_new(v7, "Accepted", v27);
    v28 = json_integer(*(__int64 *)&total_rejected);
    json_object_set_new(v7, "Rejected", v28);
    v29 = json_integer(v68);
    json_object_set_new(v7, "Hardware Errors", v29);
    sub_1226E4((__int64)(v19 * 100.0));
    v30 = json_real();
    json_object_set_new(v7, "Utility", v30);
    v31 = json_integer(*(__int64 *)&total_discarded);
    json_object_set_new(v7, "Discarded", v31);
    v32 = json_integer(*(__int64 *)&total_stale);
    json_object_set_new(v7, "Stale", v32);
    v33 = json_integer((unsigned int)total_go);
    json_object_set_new(v7, "Get Failures", v33);
    v34 = json_integer((unsigned int)local_work);
    json_object_set_new(v7, "Local Work", v34);
    v35 = json_integer((unsigned int)total_ro);
    json_object_set_new(v7, "Remote Failures", v35);
    v36 = json_integer((unsigned int)new_blocks);
    json_object_set_new(v7, "Network Blocks", v36);
    sub_1226E4((__int64)(dbl_164DE8 * 100.0));
    v37 = json_real();
    json_object_set_new(v7, "Total MH", v37);
    v38 = json_real();
    json_object_set_new(v7, "Work Utility", v38);
    sub_1226E4((__int64)(total_diff_accepted * 100.0));
    v39 = json_real();
    json_object_set_new(v7, "Difficulty Accepted", v39);
    sub_1226E4((__int64)(total_diff_rejected * 100.0));
    v40 = json_real();
    json_object_set_new(v7, "Difficulty Rejected", v40);
    sub_1226E4((__int64)(total_diff_stale * 100.0));
    v41 = json_real();
    json_object_set_new(v7, "Difficulty Stale", v41);
    v42 = json_integer(*(__int64 *)&dword_164DF0);
    json_object_set_new(v7, "Best Share", v42);
    v67 = v68 + total_diff1;
    if ( v68 + total_diff1 )
    {
      LODWORD(v44) = sub_1226D4(v68);
      HIDWORD(v44) = v43;
      LODWORD(v45) = sub_1226D4(v67);
      sub_1226E4((__int64)(v44 / v45 * 100.0));
    }
    v46 = json_real();
    json_object_set_new(v7, "Device Hardware%", v46);
    if ( total_diff1 )
    {
      LODWORD(v47) = sub_1226E4(total_diff1);
      sub_1226E4((__int64)(total_diff_rejected / v47 * 100.0));
    }
    v48 = json_real();
    json_object_set_new(v7, "Device Rejected%", v48);
    v49 = total_diff_rejected + total_diff_accepted + total_diff_stale;
    if ( v49 == 0.0 )
      v50 = 0.0;
    else
      v50 = total_diff_rejected / v49;
    v51 = (unsigned int)opt_algo > 6;
    if ( opt_algo != 6 )
      v51 = (unsigned int)(opt_algo - 8) > 1;
    if ( !v51 )
    {
      v52 = (float)(1.0 - *(float *)&v9);
      if ( v52 < v50 )
        v50 = v50 - v52;
    }
    sub_1226E4((__int64)(v50 * 100.0));
    v53 = json_real();
    json_object_set_new(v7, "Pool Rejected%", v53);
    v54 = total_diff_accepted + total_diff_rejected + total_diff_stale;
    if ( v54 != 0.0 )
      sub_1226E4((__int64)(total_diff_stale / v54 * 100.0));
    v55 = json_real();
    json_object_set_new(v7, "Pool Stale%", v55);
    v56 = json_integer(last_getwork);
    json_object_set_new(v7, "Last getwork", v56);
    v57 = opt_algo == 9;
    if ( opt_algo != 9 )
      v57 = opt_algo == 6;
    if ( v57 )
      v58 = v75;
    else
      v58 = v74;
    v59 = BUFX_strdup(v58);
    json_object_set_new(v7, "RT HASHRATE", v59);
    v60 = opt_algo == 9;
    if ( opt_algo != 9 )
      v60 = opt_algo == 6;
    if ( v60 )
      format_hashrate_string(*(const char **)(*(_DWORD *)(v6 + 72) + 16), v77);
    v61 = BUFX_strdup(v77);
    json_object_set_new(v7, "AV HASHRATE", v61);
    v62 = BUFX_strdup(v78);
    json_object_set_new(v7, "THEORY HASHRATE", v62);
    json_array_append_new(v69, v7);
    json_object_set_new(a1, "SUMMARY", v69);
    v63 = json_integer(1);
    json_object_set_new(a1, "id", v63);
    return 0;
  }
}
