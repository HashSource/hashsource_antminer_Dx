int __fastcall sub_2CFA0(_DWORD *a1, int a2)
{
  int v4; // r6
  bool v5; // zf
  _DWORD *v6; // r4
  double v7; // d10
  double v8; // d13
  double v9; // d8
  double v10; // d9
  __int64 v11; // r10
  double v12; // d10
  double v13; // d13
  double v14; // d9
  double v15; // r0
  double v16; // d14
  _QWORD *v17; // r0
  _QWORD *v18; // r0
  _QWORD *v19; // r0
  _QWORD *v20; // r0
  _QWORD *v21; // r0
  _QWORD *v22; // r0
  _QWORD *v23; // r0
  _QWORD *v24; // r0
  _QWORD *v25; // r0
  _QWORD *v26; // r0
  _QWORD *v27; // r0
  _QWORD *v28; // r0
  _QWORD *v29; // r0
  _QWORD *v30; // r0
  _QWORD *v31; // r0
  _QWORD *v32; // r0
  _QWORD *v33; // r0
  _QWORD *v34; // r0
  _QWORD *v35; // r0
  _QWORD *v36; // r0
  _QWORD *v37; // r0
  _QWORD *v38; // r0
  _QWORD *v39; // r0
  double v40; // r0
  _QWORD *v41; // r0
  double v42; // d7
  _QWORD *v43; // r0
  double v44; // d7
  _QWORD *v45; // r0
  _QWORD *v46; // r0
  _DWORD *v47; // r0
  _DWORD *v48; // r0
  double v49; // d0
  _DWORD *v50; // r0
  _QWORD *v51; // r0
  int v53; // r1
  double v54; // d9
  double v55; // r0
  __int64 v56; // [sp+10h] [bp-10ACh]
  _DWORD *v57; // [sp+18h] [bp-10A4h]
  unsigned int v58; // [sp+1Ch] [bp-10A0h]
  double v59; // [sp+20h] [bp-109Ch] BYREF
  char v60[12]; // [sp+2Ch] [bp-1090h] BYREF
  char v61[32]; // [sp+38h] [bp-1084h] BYREF
  char v62[32]; // [sp+58h] [bp-1064h] BYREF
  char v63[32]; // [sp+78h] [bp-1044h] BYREF
  char v64[32]; // [sp+98h] [bp-1024h] BYREF
  char v65[12]; // [sp+B8h] [bp-1004h] BYREF
  float v66; // [sp+C4h] [bp-FF8h]
  float v67; // [sp+C8h] [bp-FF4h]
  float v68; // [sp+CCh] [bp-FF0h]
  double v69; // [sp+D0h] [bp-FECh]
  unsigned int v70; // [sp+D8h] [bp-FE4h]
  int v71; // [sp+DCh] [bp-FE0h]

  pthread_mutex_lock(&stru_190E30);
  pthread_mutex_unlock(&stru_190E30);
  v4 = dword_191C84;
  if ( !dword_191C84 )
  {
    V_LOCK();
    logfmt_raw(v65, 0x1000u, 0, "frontend runtime type not set");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_interface.c",
      150,
      "frontend_runtime_instance",
      25,
      67,
      100,
      v65);
  }
  v5 = a1 == 0;
  if ( a1 )
    v5 = a2 == 0;
  if ( v5 )
  {
    V_LOCK();
    logfmt_raw(v65, 0x1000u, 0, "%s: input bad api param\n", "get_summary_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_summary_old",
      15,
      884,
      100,
      v65);
    return -2147483646;
  }
  else
  {
    sub_27658(a1, 1, 11, *(const char **)(a2 + 8));
    v57 = json_array();
    v6 = json_object();
    read_system_status_from_monitor((int)v65);
    v7 = v66;
    v8 = v67;
    v9 = v69;
    v10 = v68;
    format_hashrate_string(*(const char **)(v4 + 84), v64);
    format_hashrate_string(*(const char **)(v4 + 84), v63);
    format_hashrate_string(*(const char **)(v4 + 84), v62);
    format_hashrate_string(*(const char **)(v4 + 84), v61);
    format_hashrate_double(*(const char **)(v4 + 84), &v59, v60);
    HIDWORD(v11) = v71;
    v58 = v70;
    v12 = v7 * 100.0;
    v13 = v8 * 100.0;
    v14 = v10 * 100.0;
    get_miner_elapsed_time();
    LODWORD(v15) = sub_15D994(total_accepted);
    v16 = v15;
    if ( v9 != 0.0 )
      v16 = v15 / v9;
    v17 = json_integer((__int64)v9);
    json_object_set_new(v6, "Elapsed", v17);
    sub_15D994((__int64)(v9 * v12));
    v18 = json_real();
    json_object_set_new(v6, "GHS 5s", v18);
    sub_15D994((__int64)(v9 * v14));
    v19 = json_real();
    json_object_set_new(v6, "GHS av", v19);
    sub_15D994((__int64)(v9 * v13));
    v20 = json_real();
    json_object_set_new(v6, "GHS 30m", v20);
    v21 = json_integer((unsigned int)dword_196B94);
    json_object_set_new(v6, "Found Blocks", v21);
    v22 = json_integer(*(__int64 *)&total_getworks);
    json_object_set_new(v6, "Getwork", v22);
    v23 = json_integer(total_accepted);
    json_object_set_new(v6, "Accepted", v23);
    v24 = json_integer(total_rejected);
    json_object_set_new(v6, "Rejected", v24);
    LODWORD(v11) = v58;
    v25 = json_integer(__SPAIR64__(HIDWORD(v11), v58));
    json_object_set_new(v6, "Hardware Errors", v25);
    sub_15D994((__int64)(v16 * 6000.0));
    v26 = json_real();
    json_object_set_new(v6, "Utility", v26);
    v27 = json_integer(*(__int64 *)&total_discarded);
    json_object_set_new(v6, "Discarded", v27);
    v28 = json_integer(*(__int64 *)&total_stale);
    json_object_set_new(v6, "Stale", v28);
    v29 = json_integer((unsigned int)total_go);
    json_object_set_new(v6, "Get Failures", v29);
    v30 = json_integer((unsigned int)local_work);
    json_object_set_new(v6, "Local Work", v30);
    v31 = json_integer((unsigned int)total_ro);
    json_object_set_new(v6, "Remote Failures", v31);
    v32 = json_integer((unsigned int)new_blocks);
    json_object_set_new(v6, "Network Blocks", v32);
    sub_15D994((__int64)(dbl_196B98 * 100.0));
    v33 = json_real();
    json_object_set_new(v6, "Total MH", v33);
    v34 = json_real();
    json_object_set_new(v6, "Work Utility", v34);
    sub_15D994((__int64)(total_diff_accepted * 100.0));
    v35 = json_real();
    json_object_set_new(v6, "Difficulty Accepted", v35);
    sub_15D994((__int64)(total_diff_rejected * 100.0));
    v36 = json_real();
    json_object_set_new(v6, "Difficulty Rejected", v36);
    sub_15D994((__int64)(total_diff_stale * 100.0));
    v37 = json_real();
    json_object_set_new(v6, "Difficulty Stale", v37);
    v38 = json_integer(*(__int64 *)&dword_196BA0);
    json_object_set_new(v6, "Best Share", v38);
    v56 = v11 + total_diff1;
    if ( v11 + total_diff1 )
    {
      LODWORD(v54) = sub_15D984(v11);
      HIDWORD(v54) = v53;
      LODWORD(v55) = sub_15D984(v56);
      sub_15D994((__int64)(v54 / v55 * 100.0));
    }
    v39 = json_real();
    json_object_set_new(v6, "Device Hardware%", v39);
    if ( total_diff1 )
    {
      LODWORD(v40) = sub_15D994(total_diff1);
      sub_15D994((__int64)(total_diff_rejected / v40 * 100.0));
    }
    v41 = json_real();
    json_object_set_new(v6, "Device Rejected%", v41);
    v42 = total_diff_rejected + total_diff_accepted + total_diff_stale;
    if ( v42 != 0.0 )
      sub_15D994((__int64)(total_diff_rejected / v42 * 100.0));
    v43 = json_real();
    json_object_set_new(v6, "Pool Rejected%", v43);
    v44 = total_diff_accepted + total_diff_rejected + total_diff_stale;
    if ( v44 != 0.0 )
      sub_15D994((__int64)(total_diff_stale / v44 * 100.0));
    v45 = json_real();
    json_object_set_new(v6, "Pool Stale%", v45);
    v46 = json_integer(last_getwork);
    json_object_set_new(v6, "Last getwork", v46);
    v47 = json_string(v64);
    json_object_set_new(v6, "RT HASHRATE", v47);
    v48 = json_string(v62);
    json_object_set_new(v6, "AV HASHRATE", v48);
    if ( !strcmp(*(const char **)(dword_190E4C[0] + 172), "dash") )
    {
      v49 = v59;
      update_rate_ideal();
      sub_15D994((__int64)(v49 * 100.0));
      v50 = json_real();
    }
    else
    {
      v50 = json_string(v61);
    }
    json_object_set_new(v6, "THEORY HASHRATE", v50);
    json_array_append_new((int)v57, v6);
    json_object_set_new(a1, "SUMMARY", v57);
    v51 = json_integer(1);
    json_object_set_new(a1, "id", v51);
    return 0;
  }
}
