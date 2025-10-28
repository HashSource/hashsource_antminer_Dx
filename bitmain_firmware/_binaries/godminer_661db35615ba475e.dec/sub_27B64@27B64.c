int __fastcall sub_27B64(_DWORD *a1, int a2)
{
  _BOOL4 v4; // r5
  int v5; // r6
  int v6; // r5
  _DWORD *v7; // r4
  _DWORD *v8; // r2
  _DWORD *v9; // r0
  int v10; // r3
  bool v11; // zf
  int *v12; // r3
  int v13; // r1
  _DWORD *v14; // r0
  int v15; // r8
  _QWORD *v16; // r0
  int v17; // r8
  _QWORD *v18; // r0
  _DWORD *v19; // r0
  int v20; // r8
  _DWORD *v21; // r0
  __int64 v22; // r8
  _QWORD *v23; // r0
  __int64 v24; // r8
  _QWORD *v25; // r0
  int v26; // r8
  _DWORD *v27; // r0
  int v28; // r8
  _DWORD *v29; // r0
  int v30; // r8
  _DWORD *v31; // r0
  int v32; // r8
  _DWORD *v33; // r0
  _DWORD *v34; // r0
  int v35; // r3
  bool v36; // cc
  time_t v37; // r0
  unsigned int v38; // r0
  _DWORD *v39; // r0
  double *v40; // r11
  _DWORD *v41; // r0
  __int64 v42; // r8
  _QWORD *v43; // r0
  double *v44; // r8
  _DWORD *v45; // r0
  _DWORD *v46; // r0
  double v47; // r0
  double v48; // d7
  double *v49; // r2
  double v50; // r0
  double v51; // d7
  double *v52; // r2
  double v53; // r0
  double v54; // d7
  double *v55; // r2
  double v56; // r0
  double v57; // d7
  double *v58; // r2
  _DWORD *v59; // r2
  _DWORD *v60; // r0
  _QWORD *v61; // r2
  double v62; // d5
  double v63; // d7
  double v64; // d11
  double v65; // r0
  double *v66; // r2
  double v67; // d7
  double v68; // d11
  double v69; // r0
  int v70; // r0
  int v71; // r3
  bool v72; // zf
  int v73; // r2
  char *v74; // r1
  _QWORD *v75; // r0
  __int64 v77; // [sp+10h] [bp-114Ch]
  int v78; // [sp+1Ch] [bp-1140h]
  _DWORD *v79; // [sp+24h] [bp-1138h]
  int v81; // [sp+34h] [bp-1128h] BYREF
  int v82; // [sp+38h] [bp-1124h]
  int v83; // [sp+3Ch] [bp-1120h]
  char v84[4]; // [sp+40h] [bp-111Ch] BYREF
  int v85; // [sp+44h] [bp-1118h]
  int v86; // [sp+48h] [bp-1114h]
  int v87; // [sp+4Ch] [bp-1110h]
  int v88; // [sp+50h] [bp-110Ch]
  int v89; // [sp+54h] [bp-1108h]
  char v90[128]; // [sp+58h] [bp-1104h] BYREF
  char s[128]; // [sp+D8h] [bp-1084h] BYREF
  char v92[4100]; // [sp+158h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  memset(v90, 0, sizeof(v90));
  v4 = a1 == 0;
  if ( !a2 )
    v4 = 1;
  v82 = 0;
  v83 = 0;
  v81 = 0;
  *(_DWORD *)v84 = 0;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v89 = 0;
  if ( v4 )
  {
    v5 = -2147483646;
    V_LOCK();
    logfmt_raw(v92, 0x1000u, 0, "%s: input bad api param\n", "get_pools_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_pools_old",
      13,
      975,
      100,
      v92);
  }
  else
  {
    v5 = total_pools;
    if ( total_pools )
    {
      sub_27658(a1, 1, 7, *(const char **)(a2 + 8));
      v79 = json_array();
      if ( total_pools > 0 )
      {
        v77 = 0;
        do
        {
          v78 = v77;
          v6 = *(_DWORD *)(pools + 4 * v77);
          v7 = json_object();
          v8 = off_190780(0x10u);
          if ( v8 )
          {
            v8[2] = v77;
            *v8 = 3;
            v8[3] = HIDWORD(v77);
            v8[1] = 1;
          }
          json_object_set_new(v7, "POOL", v8);
          memset(s, 0, sizeof(s));
          snprintf(s, 0x80u, "%s", *(const char **)(v6 + 8));
          v9 = json_string(s);
          json_object_set_new(v7, "URL", v9);
          v10 = *(unsigned __int8 *)(v6 + 1272);
          v81 = 0;
          v82 = 0;
          v11 = v10 == 0;
          v83 = 0;
          if ( v10 )
            LOWORD(v12) = -888;
          else
            LOWORD(v12) = -880;
          HIWORD(v12) = 21;
          v13 = v12[1];
          v81 = *v12;
          if ( v11 )
            LOWORD(v82) = v13;
          else
            LOBYTE(v82) = v13;
          v14 = json_string((const char *)&v81);
          json_object_set_new(v7, "Status", v14);
          v15 = *(_DWORD *)(v6 + 4);
          v16 = off_190780(0x10u);
          if ( v16 )
          {
            v16[1] = v15;
            *(_DWORD *)v16 = 3;
            *((_DWORD *)v16 + 1) = 1;
          }
          json_object_set_new(v7, "Priority", v16);
          v17 = *(_DWORD *)(v6 + 1004);
          v18 = off_190780(0x10u);
          if ( v18 )
          {
            v18[1] = v17;
            *(_DWORD *)v18 = 3;
            *((_DWORD *)v18 + 1) = 1;
          }
          json_object_set_new(v7, "Quota", v18);
          v19 = json_string("N");
          json_object_set_new(v7, "Long Poll", v19);
          v20 = *(_DWORD *)(v6 + 1000);
          v21 = off_190780(0x10u);
          if ( v21 )
          {
            v21[2] = v20;
            v21[3] = 0;
            *v21 = 3;
            v21[1] = 1;
          }
          json_object_set_new(v7, "Getworks", v21);
          v22 = *(_QWORD *)(v6 + 1296);
          v23 = off_190780(0x10u);
          if ( v23 )
          {
            v23[1] = v22;
            *(_DWORD *)v23 = 3;
            *((_DWORD *)v23 + 1) = 1;
          }
          json_object_set_new(v7, "Accepted", v23);
          v24 = *(_QWORD *)(v6 + 1304);
          v25 = off_190780(0x10u);
          if ( v25 )
          {
            v25[1] = v24;
            *(_DWORD *)v25 = 3;
            *((_DWORD *)v25 + 1) = 1;
          }
          json_object_set_new(v7, "Rejected", v25);
          v26 = *(_DWORD *)(v6 + 1312);
          v27 = off_190780(0x10u);
          if ( v27 )
          {
            v27[2] = v26;
            v27[3] = 0;
            *v27 = 3;
            v27[1] = 1;
          }
          json_object_set_new(v7, "Discarded", v27);
          v28 = *(_DWORD *)(v6 + 1008);
          v29 = off_190780(0x10u);
          if ( v29 )
          {
            v29[2] = v28;
            v29[3] = 0;
            *v29 = 3;
            v29[1] = 1;
          }
          json_object_set_new(v7, "Stale", v29);
          v30 = *(_DWORD *)(v6 + 1316);
          v31 = off_190780(0x10u);
          if ( v31 )
          {
            v31[2] = v30;
            v31[3] = 0;
            *v31 = 3;
            v31[1] = 1;
          }
          json_object_set_new(v7, "Get Failures", v31);
          v32 = *(_DWORD *)(v6 + 1320);
          v33 = off_190780(0x10u);
          if ( v33 )
          {
            v33[2] = v32;
            v33[3] = 0;
            *v33 = 3;
            v33[1] = 1;
          }
          json_object_set_new(v7, "Remote Failures", v33);
          memset(v90, 0, sizeof(v90));
          snprintf(v90, 0x80u, "%s", *(const char **)(v6 + 12));
          v34 = json_string(v90);
          json_object_set_new(v7, "User", v34);
          v35 = *(_DWORD *)(v6 + 984);
          *(_DWORD *)v84 = 0;
          v85 = 0;
          v36 = v35 <= 0;
          v86 = 0;
          if ( v35 <= 0 )
            LOWORD(v35) = 48;
          v87 = 0;
          v88 = 0;
          v89 = 0;
          if ( v36 )
          {
            *(_WORD *)v84 = v35;
          }
          else
          {
            v37 = time(0);
            v38 = (v37 - *(_DWORD *)(v6 + 984)) & ~((v37 - *(_DWORD *)(v6 + 984)) >> 31);
            snprintf(v84, 0x18u, "%d:%02d:%02d", v38 / 0xE10, v38 % 0xE10 / 0x3C, v38 % 0xE10 % 0x3C);
          }
          v39 = json_string(v84);
          json_object_set_new(v7, "Last Share Time", v39);
          v40 = (double *)(v6 + 1184);
          sprintf((char *)(v6 + 1344), "%8.4f", *(double *)(v6 + 1176));
          v41 = json_string((const char *)(v6 + 1344));
          json_object_set_new(v7, "Diff", v41);
          v42 = *(_QWORD *)(v6 + 1360);
          v43 = off_190780(0x10u);
          if ( v43 )
          {
            v43[1] = v42;
            *(_DWORD *)v43 = 3;
            *((_DWORD *)v43 + 1) = 1;
          }
          v44 = (double *)(v6 + 1328);
          json_object_set_new(v7, "Diff1 Shares", v43);
          v45 = json_string(&byte_1755A4);
          json_object_set_new(v7, "Proxy Type", v45);
          v46 = json_string(&byte_1755A4);
          json_object_set_new(v7, "Proxy", v46);
          LODWORD(v47) = sub_15D994((__int64)(*(double *)(v6 + 1328) * 100.0));
          v48 = v47;
          v49 = (double *)off_190780(0x10u);
          if ( v49 )
          {
            *(_DWORD *)v49 = 4;
            v49[1] = v48 * 0.01;
            *((_DWORD *)v49 + 1) = 1;
          }
          json_object_set_new(v7, "Difficulty Accepted", v49);
          LODWORD(v50) = sub_15D994((__int64)(*(double *)(v6 + 1336) * 100.0));
          v51 = v50;
          v52 = (double *)off_190780(0x10u);
          if ( v52 )
          {
            *(_DWORD *)v52 = 4;
            v52[1] = v51 * 0.01;
            *((_DWORD *)v52 + 1) = 1;
          }
          json_object_set_new(v7, "Difficulty Rejected", v52);
          LODWORD(v53) = sub_15D994((__int64)(*v40 * 100.0));
          v54 = v53;
          v55 = (double *)off_190780(0x10u);
          if ( v55 )
          {
            *(_DWORD *)v55 = 4;
            v55[1] = v54 * 0.01;
            *((_DWORD *)v55 + 1) = 1;
          }
          json_object_set_new(v7, "Difficulty Stale", v55);
          LODWORD(v56) = sub_15D994((__int64)(*(double *)(v6 + 992) * 100.0));
          v57 = v56;
          v58 = (double *)off_190780(0x10u);
          if ( v58 )
          {
            *(_DWORD *)v58 = 4;
            *((_DWORD *)v58 + 1) = 1;
            v58[1] = v57 * 0.01;
          }
          json_object_set_new(v7, "Last Share Difficulty", v58);
          if ( *(_BYTE *)(v6 + 24) )
            v59 = dword_190774;
          else
            v59 = dword_19078C;
          json_object_set_new(v7, "Has Stratum", v59);
          json_object_set_new(v7, "Stratum Active", dword_190774);
          v60 = json_string(&byte_1755A4);
          json_object_set_new(v7, "Stratum URL", v60);
          json_object_set_new(v7, "Has GBT", dword_19078C);
          v61 = off_190780(0x10u);
          if ( v61 )
          {
            *(_DWORD *)v61 = 4;
            v61[1] = 0;
            *((_DWORD *)v61 + 1) = 1;
          }
          json_object_set_new(v7, "Best Share", v61);
          v62 = *(double *)(v6 + 1336);
          v63 = v62 + *v44 + *v40;
          if ( v63 == 0.0 )
          {
            v64 = 0.0;
          }
          else
          {
            LODWORD(v65) = sub_15D994((__int64)(v62 / v63 * 100.0));
            v64 = v65 * 0.01;
          }
          v66 = (double *)off_190780(0x10u);
          if ( v66 )
          {
            *(_DWORD *)v66 = 4;
            v66[1] = v64;
            *((_DWORD *)v66 + 1) = 1;
          }
          json_object_set_new(v7, "Pool Rejected%", v66);
          v67 = *v44 + *(double *)(v6 + 1336) + *v40;
          if ( v67 == 0.0 )
          {
            v68 = 0.0;
          }
          else
          {
            LODWORD(v69) = sub_15D994((__int64)(*v40 / v67 * 100.0));
            v68 = v69 * 0.01;
          }
          v70 = (int)off_190780(0x10u);
          v73 = v70;
          v72 = v70 == 0;
          if ( v70 )
          {
            v70 = 4;
            v71 = 1;
            LOWORD(v74) = (unsigned __int16)"Pool Stale%%";
          }
          else
          {
            LOWORD(v74) = -492;
          }
          if ( v72 )
          {
            HIWORD(v74) = 21;
          }
          else
          {
            *(_DWORD *)v73 = v70;
            HIWORD(v74) = (unsigned int)"Pool Stale%%" >> 16;
            *(_DWORD *)(v73 + 4) = v71;
          }
          if ( !v72 )
            *(double *)(v73 + 8) = v68;
          json_object_set_new(v7, v74, (_DWORD *)v73);
          json_array_append_new((int)v79, v7);
          ++v77;
        }
        while ( total_pools > v78 + 1 );
      }
      v5 = 0;
      json_object_set_new(a1, "POOLS", v79);
      v75 = json_integer(1);
      json_object_set_new(a1, "id", v75);
    }
    else
    {
      sub_27658(a1, 0, 8, "No pools");
    }
  }
  return v5;
}
