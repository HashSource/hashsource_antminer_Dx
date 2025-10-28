void __fastcall sub_2A22C(
        _DWORD *a1,
        const char **a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        void *a14,
        int a15,
        double a16,
        char a17)
{
  int v19; // r8
  char *all_created_runtime; // r0
  char *v21; // r4
  _DWORD *v22; // r5
  double v23; // d0
  float v24; // s24
  float v25; // s21
  _DWORD *v26; // r0
  bool v27; // cc
  double v28; // d7
  double *v29; // r0
  int v30; // r0
  int v31; // r1
  char *v32; // r9
  _DWORD *v33; // r6
  char *v34; // r8
  int v35; // r4
  char *v36; // r11
  int v37; // t1
  int v38; // r1
  int v39; // [sp+2Ch] [bp-1018h] BYREF
  double v40; // [sp+30h] [bp-1014h] BYREF
  _DWORD v41[2]; // [sp+38h] [bp-100Ch] BYREF
  char v42[12]; // [sp+40h] [bp-1004h] BYREF
  float v43; // [sp+4Ch] [bp-FF8h]
  float v44; // [sp+50h] [bp-FF4h]
  double v45; // [sp+60h] [bp-FE4h]

  v41[0] = 0;
  v39 = 0;
  v41[1] = 0;
  v19 = frontend_runtime_instance();
  all_created_runtime = (char *)get_all_created_runtime(&v39);
  if ( !a2 )
  {
    V_LOCK();
    logfmt_raw(v42, 0x1000u, 0, "%s: input bad api param", "get_summary");
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
      v42);
    JUMPOUT(0x2A5A0);
  }
  v21 = all_created_runtime;
  sub_24410(a1, a2);
  sub_2452C(a1);
  json_array();
  v22 = json_object();
  read_system_status_from_monitor((int)v42);
  v23 = v45;
  format_hashrate_double(*(const char **)(*(_DWORD *)(v19 + 72) + 16), &v40, (char *)v41);
  v24 = v43;
  v25 = v44;
  if ( v39 > 0 )
  {
    v32 = (char *)malloc(216 * v39);
    v33 = malloc(4 * v39);
    if ( v39 > 0 )
    {
      v34 = v21 - 4;
      v35 = 0;
      v36 = v32;
      do
      {
        v37 = *((_DWORD *)v34 + 1);
        v34 += 4;
        read_status_from_monitor(v36, v37);
        v38 = v39;
        v36 += 216;
        v33[v35++] = *(_DWORD *)(*(_DWORD *)v34 + 232);
      }
      while ( v38 > v35 );
    }
  }
  get_miner_elapsed_time();
  get_total_nonce_rate();
  get_total_accept_rate();
  v26 = json_integer((__int64)v23);
  json_object_set_new(v22, "elapsed", v26);
  v27 = (unsigned int)opt_algo > 0xA;
  if ( opt_algo != 10 )
    v27 = (unsigned int)(opt_algo - 6) > 1;
  if ( v27 )
    v28 = v24;
  else
    v28 = v25;
  sub_12F00C((__int64)(v28 * v23 * 100.0));
  v29 = json_real();
  v30 = json_object_set_new(v22, "rate_5s", v29);
  sub_2A3C8(v30, v31, opt_algo - 6, opt_algo, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
}
