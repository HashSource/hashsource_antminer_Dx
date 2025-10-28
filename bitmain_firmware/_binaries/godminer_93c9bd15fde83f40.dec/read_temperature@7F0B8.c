int __fastcall read_temperature(
        int a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  int *v9; // r4
  void (*v13)(void); // r2
  int v14; // r0
  int v15; // r11
  int *v16; // r3
  int v17; // r3
  const char *v18; // r2
  int v19; // r2
  const char *v20; // r3
  __int64 v21; // kr00_8
  const char **v22; // lr
  const char **v23; // r10
  const char *v24; // r1
  const char *v25; // r2
  const char *v26; // r3
  char **v27; // r5
  int v28; // r1
  int v29; // r2
  const char *v30; // r3
  const char *v31; // r1
  const char *v32; // r2
  const char *v33; // r3
  int v34; // r1
  int v35; // r2
  char *v36; // r3
  char *v37; // r1
  char *v38; // r2
  char *v39; // r3
  pthread_mutex_t *v40; // r5
  int v41; // r2
  int v42; // r0
  int v43; // r12
  int v44; // r12
  int v45; // r12
  int v46; // r5
  const char *v47; // r3
  const char **v48; // lr
  __int64 v49; // r2
  const char **v50; // r5
  __int64 v51; // r0
  __int64 v52; // r2
  __int64 v53; // r2
  char **v54; // lr
  __int64 v55; // r2
  __int64 v56; // r2
  __int64 v57; // r2
  int v58; // r9
  _DWORD *v59; // r8
  int v60; // r3
  int v61; // r0
  int v62; // r1
  int v63; // r2
  int v64; // r3
  const char *v65; // r3
  int v66; // r2
  int v67; // r2
  int v68; // r10
  int v69; // lr
  int v70; // r12
  const char *v71; // r3
  const char **v72; // r8
  const char **v73; // lr
  const char *v74; // r1
  __int64 v75; // r2
  char **v76; // r12
  int v77; // r1
  __int64 v78; // r2
  const char *v79; // r1
  __int64 v80; // r2
  int v81; // r1
  __int64 v82; // r2
  char *v83; // r1
  __int64 v84; // r2
  int result; // r0
  char v86; // [sp+20h] [bp-11CCh] BYREF
  char v87; // [sp+40h] [bp-11ACh] BYREF
  char v88; // [sp+60h] [bp-118Ch] BYREF
  char *v89; // [sp+80h] [bp-116Ch]
  const char *v90; // [sp+84h] [bp-1168h]
  int *v91; // [sp+8Ch] [bp-1160h]
  pthread_mutex_t *mutex; // [sp+90h] [bp-115Ch]
  int *v93; // [sp+94h] [bp-1158h]
  const char *v94; // [sp+98h] [bp-1154h]
  const char *v95; // [sp+9Ch] [bp-1150h]
  char *v96; // [sp+A0h] [bp-114Ch]
  const char *v97; // [sp+A4h] [bp-1148h]
  char **v98; // [sp+A8h] [bp-1144h]
  const char **v99; // [sp+ACh] [bp-1140h]
  const char **v100; // [sp+B0h] [bp-113Ch]
  const char *v101; // [sp+B4h] [bp-1138h]
  char *v102; // [sp+B8h] [bp-1134h]
  _DWORD *v103; // [sp+BCh] [bp-1130h]
  int *v104; // [sp+C0h] [bp-112Ch]
  int *v105; // [sp+C4h] [bp-1128h]
  int v106; // [sp+C8h] [bp-1124h]
  _DWORD *v107; // [sp+CCh] [bp-1120h]
  _DWORD *v108; // [sp+D0h] [bp-111Ch]
  int v109; // [sp+D4h] [bp-1118h]
  const char *v110; // [sp+D8h] [bp-1114h] BYREF
  int v111; // [sp+DCh] [bp-1110h] BYREF
  int v112; // [sp+E0h] [bp-110Ch] BYREF
  int v113; // [sp+E4h] [bp-1108h] BYREF
  const char *v114; // [sp+E8h] [bp-1104h]
  int v115; // [sp+ECh] [bp-1100h]
  int v116; // [sp+F0h] [bp-10FCh]
  int v117; // [sp+F4h] [bp-10F8h]
  __int64 v118; // [sp+F8h] [bp-10F4h]
  int v119; // [sp+100h] [bp-10ECh]
  int v120; // [sp+104h] [bp-10E8h]
  char *v121; // [sp+108h] [bp-10E4h]
  int v122; // [sp+10Ch] [bp-10E0h]
  int v123; // [sp+110h] [bp-10DCh]
  char *v124; // [sp+114h] [bp-10D8h]
  __int64 v125; // [sp+118h] [bp-10D4h]
  char *v126; // [sp+120h] [bp-10CCh]
  char *v127; // [sp+124h] [bp-10C8h]
  const char *v128; // [sp+128h] [bp-10C4h]
  int v129; // [sp+12Ch] [bp-10C0h]
  int v130; // [sp+130h] [bp-10BCh]
  const char *v131; // [sp+134h] [bp-10B8h]
  __int64 v132; // [sp+138h] [bp-10B4h]
  const char *v133; // [sp+140h] [bp-10ACh]
  const char *v134; // [sp+144h] [bp-10A8h]
  const char *v135; // [sp+148h] [bp-10A4h]
  __int64 v136; // [sp+14Ch] [bp-10A0h]
  const char *v137; // [sp+154h] [bp-1098h]
  __int64 v138; // [sp+158h] [bp-1094h]
  const char *v139; // [sp+160h] [bp-108Ch]
  const char *v140; // [sp+164h] [bp-1088h]
  const char *v141; // [sp+168h] [bp-1084h]
  int v142; // [sp+16Ch] [bp-1080h]
  int v143; // [sp+170h] [bp-107Ch]
  int v144; // [sp+174h] [bp-1078h]
  __int64 v145; // [sp+178h] [bp-1074h]
  int v146; // [sp+180h] [bp-106Ch]
  int v147; // [sp+184h] [bp-1068h]
  char *v148; // [sp+188h] [bp-1064h]
  int v149; // [sp+18Ch] [bp-1060h]
  __int64 v150; // [sp+190h] [bp-105Ch]
  __int64 v151; // [sp+198h] [bp-1054h]
  __int64 v152; // [sp+1A0h] [bp-104Ch]
  const char *v153; // [sp+1A8h] [bp-1044h]
  int v154; // [sp+1ACh] [bp-1040h]
  __int64 v155; // [sp+1B0h] [bp-103Ch]
  __int64 v156; // [sp+1B8h] [bp-1034h]
  __int64 v157; // [sp+1C0h] [bp-102Ch]
  const char *v158; // [sp+1C8h] [bp-1024h]
  int v159; // [sp+1CCh] [bp-1020h]
  int v160; // [sp+1D0h] [bp-101Ch]
  const char *v161; // [sp+1D4h] [bp-1018h]
  __int64 v162; // [sp+1D8h] [bp-1014h]
  __int64 v163; // [sp+1E0h] [bp-100Ch]
  char var1004[4120]; // [sp+1E8h] [bp-1004h] BYREF

  v9 = *(int **)(a1 + 208);
  v107 = a3;
  v13 = *(void (**)(void))(a1 + 96);
  v103 = a2;
  v108 = a4;
  v93 = v9;
  v13();
  *a3 = -150;
  *a4 = 150;
  *a5 = -150;
  *a6 = 150;
  v14 = v9[1];
  if ( v14 > 0 )
  {
    v91 = dword_1A8A20;
    v100 = (const char **)&v88;
    v15 = 0;
    v99 = (const char **)&v87;
    v96 = "%s";
    v98 = (char **)&v86;
    v109 = 0;
    v106 = 0;
    v101 = "chain";
    v102 = "sensor";
    v94 = "pcbtemp";
    v95 = "chiptemp";
    v97 = "read_temperature";
    v104 = &g_zc;
    v105 = &g_temp_zc;
    mutex = &stru_1A8A24;
    v16 = v93;
    do
    {
      v58 = *v16;
      v111 = 0;
      v59 = (_DWORD *)(v58 + 20 * v15);
      (*(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 100))(
        a1,
        &v113,
        &v111,
        *v59,
        v59[1],
        v59[2],
        v59[3],
        v59[4]);
      if ( v111 )
      {
        v60 = v113;
        if ( v113 == -64 )
        {
          ++*a9;
        }
        else
        {
          ++*a7;
          if ( v60 > *v107 )
            *v107 = v60;
          if ( v60 < *v108 )
            *v108 = v60;
        }
      }
      v61 = v59[1];
      v62 = v59[2];
      v63 = v59[3];
      v64 = v59[4];
      v110 = 0;
      (*(void (__fastcall **)(int, int *, const char **, _DWORD, int, int, int, int))(a1 + 104))(
        a1,
        &v112,
        &v110,
        *(_DWORD *)(v58 + 20 * v15),
        v61,
        v62,
        v63,
        v64);
      v65 = v110;
      if ( v110 )
      {
        v66 = v112;
        if ( v112 == -64 )
        {
          ++*a9;
        }
        else
        {
          ++*a8;
          if ( v66 > *a5 )
            *a5 = v66;
          if ( v66 < *a6 )
            *a6 = v66;
        }
      }
      if ( v103 )
      {
        v67 = v59[2];
        if ( v67 )
        {
          if ( v67 == 1 )
          {
            if ( v111 && v113 != -64 )
            {
              *(_DWORD *)(v103[2] + 4 * v109) = v113;
              v65 = v110;
            }
            if ( v65 && v112 != -64 )
              *(_DWORD *)(v103[3] + 4 * v109) = v112;
            ++v109;
          }
        }
        else
        {
          if ( v111 && v113 != -64 )
          {
            *(_DWORD *)(*v103 + 4 * v106) = v113;
            v65 = v110;
          }
          if ( v65 && v112 != -64 )
            *(_DWORD *)(v103[1] + 4 * v106) = v112;
          ++v106;
        }
      }
      pthread_mutex_lock(mutex);
      v68 = *(_DWORD *)(a1 + 136);
      v69 = v59[4];
      v114 = v101;
      v115 = 5;
      v118 = v68;
      v125 = v69;
      v122 = 6;
      v119 = 0;
      v121 = v102;
      v126 = 0;
      v116 = 3;
      v123 = 3;
      v70 = *v91;
      if ( v111 )
      {
        v130 = 3;
        v133 = 0;
        v129 = 7;
        v128 = v94;
        v132 = v113;
        v17 = v70 + 4;
        v18 = v110;
        if ( !v110 )
          goto LABEL_33;
      }
      else
      {
        v133 = 0;
        v18 = v110;
        v130 = 3;
        v129 = 7;
        v128 = v94;
        v132 = -256;
        v17 = v70 + 4;
        if ( !v110 )
        {
LABEL_33:
          v139 = v18;
          *v91 = v17;
          v136 = 0x300000008LL;
          v135 = v95;
          v138 = -256;
          goto LABEL_5;
        }
      }
      v19 = v112;
      v139 = 0;
      *v91 = v17;
      v136 = 0x300000008LL;
      v135 = v95;
      v138 = v19;
LABEL_5:
      v21 = v136;
      v20 = v137;
      v90 = v97;
      v22 = v100;
      v89 = v96;
      *v100 = v135;
      *(_QWORD *)(v22 + 1) = v21;
      v22[3] = v20;
      v22 += 4;
      v23 = v99;
      v24 = (const char *)HIDWORD(v138);
      v25 = v139;
      v26 = v140;
      v27 = v98;
      *v22 = (const char *)v138;
      v22[1] = v24;
      v22[2] = v25;
      v22[3] = v26;
      v28 = v129;
      v29 = v130;
      v30 = v131;
      *v23 = v128;
      v23[1] = (const char *)v28;
      v23[2] = (const char *)v29;
      v23[3] = v30;
      v23 += 4;
      v31 = (const char *)HIDWORD(v132);
      v32 = v133;
      v33 = v134;
      *v23 = (const char *)v132;
      v23[1] = v31;
      v23[2] = v32;
      v23[3] = v33;
      v34 = v122;
      v35 = v123;
      v36 = v124;
      *v27 = v121;
      v27[1] = (char *)v34;
      v27[2] = (char *)v35;
      v27[3] = v36;
      v27 += 4;
      v37 = (char *)HIDWORD(v125);
      v38 = v126;
      v39 = v127;
      *v27 = (char *)v125;
      v27[1] = v37;
      v27[2] = v38;
      v27[3] = v39;
      logfmt_raw(var1004, 0x1000u, 0, v120, v114, v115, v116, v117, v118, v119, v120);
      v40 = mutex;
      pthread_mutex_unlock(mutex);
      zlog(
        *v104,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        186,
        "read_temperature",
        16,
        80,
        20,
        var1004);
      pthread_mutex_lock(v40);
      v41 = *(_DWORD *)(a1 + 136);
      v42 = v59[4];
      v141 = v101;
      v142 = 5;
      v145 = v41;
      v149 = 6;
      v146 = 0;
      v148 = v102;
      LODWORD(v152) = 0;
      v151 = v42;
      v143 = 3;
      LODWORD(v150) = 3;
      v43 = *v91;
      if ( v111 )
      {
        v44 = v43 + 3;
        LODWORD(v155) = 3;
        LODWORD(v157) = 0;
        v153 = v94;
        v154 = 7;
        v156 = v113;
      }
      else
      {
        v154 = 7;
        v44 = v43 + 3;
        v153 = v94;
        LODWORD(v155) = 3;
        LODWORD(v157) = 0;
        v156 = -256;
      }
      v45 = v44 + 1;
      if ( v110 )
      {
        v46 = v112;
        v158 = v95;
        ++v15;
        v159 = 8;
        v160 = 3;
        v47 = v161;
        v48 = v100;
        v90 = v97;
        v89 = v96;
        LODWORD(v163) = 0;
        *v100 = v95;
        v48[1] = (const char *)8;
        v48[2] = (const char *)3;
        v48[3] = v47;
        v48 += 4;
        v49 = v46;
        v50 = v99;
        v162 = v49;
        v51 = v49;
        v52 = v163;
        *v91 = v45;
        *(_QWORD *)v48 = v51;
        *((_QWORD *)v48 + 1) = v52;
        HIDWORD(v51) = v154;
        v53 = v155;
        v54 = v98;
        *v50 = v153;
        v50[1] = (const char *)HIDWORD(v51);
        *((_QWORD *)v50 + 1) = v53;
        v50 += 4;
        HIDWORD(v51) = HIDWORD(v156);
        v55 = v157;
        *v50 = (const char *)v156;
        v50[1] = (const char *)HIDWORD(v51);
        *((_QWORD *)v50 + 1) = v55;
        HIDWORD(v51) = v149;
        v56 = v150;
        *v54 = v148;
        v54[1] = (char *)HIDWORD(v51);
        *((_QWORD *)v54 + 1) = v56;
        v54 += 4;
        HIDWORD(v51) = HIDWORD(v151);
        v57 = v152;
        *v54 = (char *)v151;
        v54[1] = (char *)HIDWORD(v51);
        *((_QWORD *)v54 + 1) = v57;
      }
      else
      {
        v158 = v95;
        LODWORD(v163) = 0;
        ++v15;
        v162 = -256;
        v159 = 8;
        v160 = 3;
        v71 = v161;
        v72 = v100;
        v90 = v97;
        v89 = v96;
        *v100 = v95;
        v72[1] = (const char *)8;
        v72[2] = (const char *)3;
        v72[3] = v71;
        v72 += 4;
        v73 = v99;
        *v91 = v45;
        v74 = (const char *)HIDWORD(v162);
        v75 = v163;
        v76 = v98;
        *v72 = (const char *)v162;
        v72[1] = v74;
        *((_QWORD *)v72 + 1) = v75;
        v77 = v154;
        v78 = v155;
        *v73 = v153;
        v73[1] = (const char *)v77;
        *((_QWORD *)v73 + 1) = v78;
        v73 += 4;
        v79 = (const char *)HIDWORD(v156);
        v80 = v157;
        *v73 = (const char *)v156;
        v73[1] = v79;
        *((_QWORD *)v73 + 1) = v80;
        v81 = v149;
        v82 = v150;
        *v76 = v148;
        v76[1] = (char *)v81;
        *((_QWORD *)v76 + 1) = v82;
        v76 += 4;
        v83 = (char *)HIDWORD(v151);
        v84 = v152;
        *v76 = (char *)v151;
        v76[1] = v83;
        *((_QWORD *)v76 + 1) = v84;
      }
      logfmt_raw(var1004, 0x1000u, 0, v147, v141, v142, v143, v144, v145, v146, v147);
      pthread_mutex_unlock(mutex);
      zlog(
        *v105,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        186,
        "read_temperature",
        16,
        82,
        40,
        var1004);
      v16 = v93;
      v14 = v93[1];
    }
    while ( v14 > v15 );
  }
  if ( *a7 != v14 )
    return -1;
  result = *a8 - v14;
  if ( result )
    return -1;
  return result;
}
