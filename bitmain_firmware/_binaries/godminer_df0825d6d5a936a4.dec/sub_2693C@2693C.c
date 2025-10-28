int __fastcall sub_2693C(_DWORD *a1, const char **a2)
{
  float v2; // s0
  bool v5; // zf
  __int64 v6; // kr00_8
  double v7; // d7
  double v8; // d6
  bool v9; // cc
  __int64 v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  int v14; // r3
  bool v15; // cc
  unsigned int v16; // lr
  char *v17; // r0
  int v18; // r5
  _DWORD *v19; // r4
  _DWORD *v20; // r0
  char *v21; // r0
  char *v22; // r0
  int v23; // r2
  int *v24; // r3
  int v25; // r1
  char *v26; // r0
  _DWORD *v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  char *v33; // r0
  _DWORD *v34; // r0
  double *v35; // r0
  bool v36; // zf
  _DWORD *v38; // [sp+1Ch] [bp-1150h]
  int v40; // [sp+34h] [bp-1138h] BYREF
  int v41; // [sp+38h] [bp-1134h]
  int v42; // [sp+3Ch] [bp-1130h]
  char v43[4]; // [sp+40h] [bp-112Ch] BYREF
  int v44; // [sp+44h] [bp-1128h]
  int v45; // [sp+48h] [bp-1124h]
  int v46; // [sp+4Ch] [bp-1120h]
  char v47[4]; // [sp+50h] [bp-111Ch] BYREF
  int v48; // [sp+54h] [bp-1118h]
  int v49; // [sp+58h] [bp-1114h]
  int v50; // [sp+5Ch] [bp-1110h]
  int v51; // [sp+60h] [bp-110Ch]
  int v52; // [sp+64h] [bp-1108h]
  char s[128]; // [sp+68h] [bp-1104h] BYREF
  char v54[128]; // [sp+E8h] [bp-1084h] BYREF
  char v55[4100]; // [sp+168h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v54, 0, sizeof(v54));
  v5 = a1 == 0;
  if ( a1 )
    v5 = a2 == 0;
  v41 = 0;
  v42 = 0;
  v40 = 0;
  *(_DWORD *)v43 = 0;
  *(_DWORD *)v47 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  if ( v5 )
  {
    V_LOCK();
    logfmt_raw(v55, 0x1000u, 0, "%s: input bad api param", "get_pools");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/api_new.c",
      136,
      "get_pools",
      9,
      600,
      100,
      v55);
    return -2147483646;
  }
  else
  {
    sub_23360(a1, a2);
    sub_2347C(a1);
    v38 = json_array();
    get_total_nonce_rate();
    if ( total_pools > 0 )
    {
      v6 = 0;
      do
      {
        v18 = *(_DWORD *)(pools + 4 * v6);
        if ( v18 )
        {
          v19 = json_object();
          v20 = json_integer(v6);
          json_object_set_new(v19, "index", v20);
          memset(s, 0, sizeof(s));
          snprintf(s, 0x80u, "%s", *(const char **)(v18 + 8));
          v21 = BUFX_strdup(s);
          json_object_set_new(v19, "url", v21);
          memset(v54, 0, sizeof(v54));
          snprintf(v54, 0x80u, "%s", *(const char **)(v18 + 12));
          v22 = BUFX_strdup(v54);
          json_object_set_new(v19, "user", v22);
          v23 = *(unsigned __int8 *)(v18 + 1896);
          v41 = 0;
          v40 = 0;
          v42 = 0;
          if ( v23 )
            LOWORD(v24) = 13800;
          else
            LOWORD(v24) = 12988;
          HIWORD(v24) = 18;
          v25 = v24[1];
          v40 = *v24;
          if ( v23 )
            LOBYTE(v41) = v25;
          else
            LOWORD(v41) = v25;
          v26 = BUFX_strdup((char *)&v40);
          json_object_set_new(v19, "status", v26);
          v27 = json_integer(*(int *)(v18 + 4));
          json_object_set_new(v19, "priority", v27);
          v28 = json_integer(*(unsigned int *)(v18 + 1624));
          json_object_set_new(v19, "getworks", v28);
          v29 = json_integer(*(_QWORD *)(v18 + 1920));
          json_object_set_new(v19, "accepted", v29);
          v30 = json_integer(*(_QWORD *)(v18 + 1928));
          json_object_set_new(v19, "rejected", v30);
          v31 = json_integer(*(unsigned int *)(v18 + 1936));
          json_object_set_new(v19, "discarded", v31);
          v32 = json_integer(*(unsigned int *)(v18 + 1632));
          json_object_set_new(v19, "stale", v32);
          *(_DWORD *)v43 = 0;
          v44 = 0;
          v45 = 0;
          v46 = 0;
          snprintf(v43, 0x10u, "%s", (const char *)(v18 + 1968));
          v33 = BUFX_strdup(v43);
          json_object_set_new(v19, "diff", v33);
          v34 = json_integer(*(_QWORD *)(v18 + 1984));
          json_object_set_new(v19, "diff1", v34);
          v35 = json_real();
          LODWORD(v10) = json_object_set_new(v19, "diffa", v35);
          v36 = opt_algo == 9;
          if ( opt_algo != 9 )
            v36 = opt_algo == 6;
          if ( v36 )
          {
            v7 = *(double *)(v18 + 1960);
            v8 = (double)(int)((v7 + *(double *)(v18 + 1952)) * (float)(1.0 - v2));
            v9 = v7 <= v8;
            if ( v7 <= v8 )
              v10 = 0;
            else
              v7 = v7 - v8;
            if ( !v9 )
              v10 = (int)v7;
          }
          else
          {
            v10 = (__int64)*(double *)(v18 + 1960);
          }
          v11 = json_integer(v10);
          json_object_set_new(v19, "diffr", v11);
          v12 = json_integer((__int64)*(double *)(v18 + 1808));
          json_object_set_new(v19, "diffs", v12);
          v13 = json_integer((__int64)*(double *)(v18 + 1616));
          json_object_set_new(v19, "lsdiff", v13);
          v14 = *(_DWORD *)(v18 + 1608);
          *(_DWORD *)v47 = 0;
          v48 = 0;
          v15 = v14 <= 0;
          v49 = 0;
          if ( v14 <= 0 )
            LOWORD(v14) = 48;
          v50 = 0;
          v51 = 0;
          v52 = 0;
          if ( v15 )
          {
            *(_WORD *)v47 = v14;
          }
          else
          {
            v16 = time(0) - *(_DWORD *)(v18 + 1608);
            snprintf(v47, 0x18u, "%d:%d:%d", v16 / 0xE10, v16 % 0xE10 / 0x3C, v16 % 0xE10 % 0x3C);
          }
          v17 = BUFX_strdup(v47);
          json_object_set_new(v19, "lstime", v17);
          json_array_append_new(v38, v19);
        }
        ++v6;
      }
      while ( total_pools > (int)v6 );
    }
    json_object_set_new(a1, "POOLS", v38);
    return 0;
  }
}
