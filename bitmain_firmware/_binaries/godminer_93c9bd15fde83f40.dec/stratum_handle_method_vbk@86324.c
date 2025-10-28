bool __fastcall stratum_handle_method_vbk(int a1, int *a2, char arg)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  int command_type; // r0
  int v8; // r1
  char *v9; // r1
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  unsigned __int8 *v12; // r0
  char *v13; // r1
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  int v16; // r6
  _BOOL4 v17; // r6
  void *v18; // r0
  int v19; // r0
  int v20; // r1
  int v21; // r3
  int v22; // r2
  pthread_mutex_t *v23; // r4
  char *v24; // r1
  _DWORD *v25; // r0
  int v26; // r0
  char *v27; // r1
  int v28; // r9
  _DWORD *v29; // r0
  int v30; // r0
  char *v31; // r1
  int v32; // r8
  _DWORD *v33; // r0
  _DWORD *v34; // r0
  const char *v35; // r0
  char *v36; // r1
  const char *v37; // r11
  _DWORD *v38; // r0
  _DWORD *v39; // r0
  const char *v40; // r0
  char *v41; // r1
  const char *v42; // r10
  _DWORD *v43; // r0
  _DWORD *v44; // r0
  char *v45; // r0
  char *v46; // r1
  char *v47; // r6
  _DWORD *v48; // r0
  _DWORD *v49; // r0
  char *v50; // r0
  char *v51; // r1
  _DWORD *v52; // r0
  int v53; // r0
  char *v54; // r1
  _DWORD *v55; // r0
  int v56; // r0
  char *v57; // r1
  _DWORD *v58; // r0
  int v59; // r0
  char *v60; // r1
  _DWORD *v61; // r0
  _DWORD *v62; // r0
  char *v63; // r0
  char *v64; // r1
  _DWORD *v65; // r0
  int v66; // r0
  bool v67; // zf
  bool v68; // zf
  int v69; // r3
  int v70; // r1
  _DWORD *v71; // r0
  bool v72; // zf
  _BOOL4 v73; // r2
  int v74; // r9
  int v75; // r8
  _BYTE *v76; // r8
  int v77; // r1
  int i; // r8
  char byte_from_hex; // r0
  char *v80; // r3
  int j; // r8
  char v82; // r0
  char *v83; // r3
  void *v84; // r0
  void *v85; // r0
  int *v86; // r6
  int *v87; // r12
  int v88; // r0
  int v89; // r1
  int v90; // r2
  int v91; // r3
  int v92; // r1
  int v93; // r2
  int v94; // r3
  int v95; // r0
  int v96; // r1
  char *v97; // [sp+10h] [bp-11B4h]
  int v98; // [sp+14h] [bp-11B0h]
  int v99; // [sp+14h] [bp-11B0h]
  int v100; // [sp+18h] [bp-11ACh]
  unsigned int v101; // [sp+18h] [bp-11ACh]
  char *v102; // [sp+1Ch] [bp-11A8h]
  int v103; // [sp+20h] [bp-11A4h]
  __int64 v104; // [sp+20h] [bp-11A4h]
  char *v105; // [sp+28h] [bp-119Ch]
  int v106; // [sp+2Ch] [bp-1198h]
  int v107; // [sp+2Ch] [bp-1198h]
  __int16 v108; // [sp+30h] [bp-1194h]
  int v109; // [sp+34h] [bp-1190h]
  _DWORD v110[2]; // [sp+38h] [bp-118Ch] BYREF
  char v111; // [sp+40h] [bp-1184h]
  _DWORD v112[2]; // [sp+44h] [bp-1180h] BYREF
  char v113; // [sp+4Ch] [bp-1178h]
  _DWORD v114[3]; // [sp+50h] [bp-1174h] BYREF
  _DWORD v115[4]; // [sp+5Ch] [bp-1168h] BYREF
  _DWORD v116[6]; // [sp+6Ch] [bp-1158h] BYREF
  int v117; // [sp+84h] [bp-1140h] BYREF
  _BYTE v118[14]; // [sp+88h] [bp-113Ch]
  int v119; // [sp+96h] [bp-112Eh]
  int v120; // [sp+9Ah] [bp-112Ah]
  char v121; // [sp+9Eh] [bp-1126h]
  int v122; // [sp+9Fh] [bp-1125h]
  int v123; // [sp+A3h] [bp-1121h]
  char v124; // [sp+A7h] [bp-111Dh]
  int v125; // [sp+A8h] [bp-111Ch]
  int v126; // [sp+ACh] [bp-1118h]
  int v127; // [sp+B0h] [bp-1114h]
  int v128; // [sp+B4h] [bp-1110h]
  char v129; // [sp+B8h] [bp-110Ch]
  char v130; // [sp+B9h] [bp-110Bh]
  char v131; // [sp+BAh] [bp-110Ah]
  char v132; // [sp+BBh] [bp-1109h]
  char v133; // [sp+BCh] [bp-1108h]
  char v134; // [sp+BDh] [bp-1107h]
  char v135; // [sp+BEh] [bp-1106h]
  char v136; // [sp+BFh] [bp-1105h]
  int v137; // [sp+C0h] [bp-1104h]
  _DWORD v138[23]; // [sp+C4h] [bp-1100h] BYREF
  char v139[160]; // [sp+120h] [bp-10A4h] BYREF
  char s[4100]; // [sp+1C0h] [bp-1004h] BYREF

  v4 = sub_C479C(arg, 0, (int)v138);
  v5 = v4;
  if ( !v4 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(s, 0x1000u, 0, 1525596, v138[0], v139);
    pthread_mutex_unlock(&stru_1A8A24);
    LOWORD(v8) = 29096;
    HIWORD(v8) = (unsigned int)"}" >> 16;
    zlog(g_zc, v8, 157, "stratum_handle_method_vbk", 25, 314, 100, s);
    return 0;
  }
  command_type = get_command_type(v4);
  if ( command_type == 7 )
  {
    LOWORD(v24) = 19064;
    HIWORD(v24) = (unsigned int)"loc xnonce1" >> 16;
    v25 = (_DWORD *)json_object_get(v5, v24);
    v26 = json_object_get(v25, "data");
    LOWORD(v27) = -31908;
    v28 = v26;
    HIWORD(v27) = (unsigned int)"08x %08x %08x " >> 16;
    v29 = (_DWORD *)json_object_get(v5, v27);
    v30 = json_object_get(v29, "data");
    LOWORD(v31) = -31892;
    v32 = v30;
    HIWORD(v31) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/frontend/frontend_dash/frontend_dash.c" >> 16;
    v33 = (_DWORD *)json_object_get(v5, v31);
    v34 = (_DWORD *)json_object_get(v33, "data");
    v35 = (const char *)json_string_value(v34);
    LOWORD(v36) = -31872;
    v37 = v35;
    HIWORD(v36) = (unsigned int)"enkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_dash/frontend_dash.c" >> 16;
    v38 = (_DWORD *)json_object_get(v5, v36);
    v39 = (_DWORD *)json_object_get(v38, "data");
    v40 = (const char *)json_string_value(v39);
    LOWORD(v41) = -31844;
    v42 = v40;
    HIWORD(v41) = (unsigned int)"_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/frontend/frontend_dash/frontend_dash.c" >> 16;
    v43 = (_DWORD *)json_object_get(v5, v41);
    v44 = (_DWORD *)json_object_get(v43, "data");
    v45 = (char *)json_string_value(v44);
    LOWORD(v46) = -31728;
    v105 = v45;
    HIWORD(v46) = (unsigned int)"ed to alloc xnonce2" >> 16;
    v47 = v45;
    v48 = (_DWORD *)json_object_get(v5, v46);
    v49 = (_DWORD *)json_object_get(v48, "data");
    v50 = (char *)json_string_value(v49);
    LOWORD(v51) = -31816;
    v97 = v50;
    HIWORD(v51) = (unsigned int)"oot/tmp/release/build/godminer-origin_master/frontend/frontend_dash/frontend_dash.c" >> 16;
    v52 = (_DWORD *)json_object_get(v5, v51);
    v53 = json_object_get(v52, "data");
    LOWORD(v54) = -31804;
    v98 = v53;
    HIWORD(v54) = (unsigned int)"ase/build/godminer-origin_master/frontend/frontend_dash/frontend_dash.c" >> 16;
    v55 = (_DWORD *)json_object_get(v5, v54);
    v56 = json_object_get(v55, "data");
    LOWORD(v57) = 19240;
    v100 = v56;
    HIWORD(v57) = (unsigned int)"t from pool: %s" >> 16;
    v58 = (_DWORD *)json_object_get(v5, v57);
    v59 = json_object_get(v58, "data");
    LOWORD(v60) = -31792;
    v103 = v59;
    HIWORD(v60) = (unsigned int)"dminer-origin_master/frontend/frontend_dash/frontend_dash.c" >> 16;
    v61 = (_DWORD *)json_object_get(v5, v60);
    v62 = (_DWORD *)json_object_get(v61, "data");
    v63 = (char *)json_string_value(v62);
    LOWORD(v64) = -31776;
    v102 = v63;
    HIWORD(v64) = (unsigned int)"ster/frontend/frontend_dash/frontend_dash.c" >> 16;
    v65 = (_DWORD *)json_object_get(v5, v64);
    v66 = json_object_get(v65, "data");
    v67 = v32 == 0;
    if ( v32 )
      v67 = v28 == 0;
    if ( v67 )
      goto LABEL_28;
    v68 = v42 == 0;
    if ( v42 )
      v68 = v37 == 0;
    if ( v68 )
      goto LABEL_28;
    v72 = v97 == 0;
    if ( v97 )
      v72 = v47 == 0;
    if ( v72 )
      goto LABEL_28;
    v17 = v100 == 0;
    if ( !v98 )
      v17 = 1;
    if ( v17 )
      goto LABEL_28;
    v73 = v102 == 0;
    if ( !v103 )
      v73 = 1;
    if ( !v66 )
      v73 = 1;
    if ( v73
      || (v106 = v66, strlen(v37) <= 0x2F)
      || strlen(v42) <= 0x2F
      || strlen(v105) <= 0x2F
      || strlen(v97) <= 0x1F
      || strlen(v102) <= 0x2F )
    {
LABEL_28:
      V_LOCK();
      LOWORD(v69) = -31756;
      HIWORD(v69) = (unsigned int)"nd_dash/frontend_dash.c" >> 16;
      logfmt_raw(s, 0x1000u, 0, v69, "stratum_handle_method_vbk");
      V_UNLOCK();
      LOWORD(v70) = 29096;
      HIWORD(v70) = (unsigned int)"}" >> 16;
      zlog(g_zc, v70, 157, "stratum_handle_method_vbk", 25, 351, 100, s);
      if ( v5[1] == -1 )
      {
        v23 = (pthread_mutex_t *)(a2 + 298);
      }
      else
      {
        v71 = v5;
        v23 = (pthread_mutex_t *)(a2 + 298);
        sub_84ED0(v71);
      }
LABEL_31:
      pthread_mutex_lock(v23);
      *((_BYTE *)a2 + 1284) = 0;
      pthread_mutex_unlock(v23);
      return 0;
    }
    v109 = v106;
    v107 = json_integer_value(v28);
    v108 = json_integer_value(v32);
    v74 = 24;
    v75 = json_integer_value(v98);
    v99 = json_integer_value(v100);
    v101 = json_integer_value(v103);
    HIBYTE(v117) = v75;
    LOBYTE(v117) = HIBYTE(v75);
    v118[1] = v108;
    BYTE1(v117) = BYTE2(v75);
    BYTE2(v117) = BYTE1(v75);
    v76 = v114;
    v104 = json_integer_value(v109);
    v118[0] = HIBYTE(v108);
    do
    {
      v77 = v74;
      v74 += 2;
      *v76++ = extract_byte_from_hex(v37, v77);
    }
    while ( v74 != 48 );
    for ( i = 15; i != 24; ++i )
    {
      byte_from_hex = extract_byte_from_hex(v42, 2 * i);
      v80 = (char *)v110 + i;
      *(v80 - 15) = byte_from_hex;
    }
    for ( j = 15; j != 24; ++j )
    {
      v82 = extract_byte_from_hex(v105, 2 * j);
      v83 = (char *)v112 + j;
      *(v83 - 15) = v82;
    }
    hex2bin((int)v115, (unsigned __int8 *)v97, 16);
    *(_DWORD *)&v118[2] = v114[0];
    *(_DWORD *)&v118[6] = v114[1];
    *(_DWORD *)&v118[10] = v114[2];
    v119 = v110[0];
    v120 = v110[1];
    v121 = v111;
    v122 = v112[0];
    v123 = v112[1];
    v124 = v113;
    v132 = v99;
    v125 = v115[0];
    v126 = v115[1];
    v127 = v115[2];
    v128 = v115[3];
    v129 = HIBYTE(v99);
    v130 = BYTE2(v99);
    v131 = BYTE1(v99);
    v133 = HIBYTE(v101);
    v134 = BYTE2(v101);
    v135 = BYTE1(v101);
    v136 = v101;
    v137 = 0;
    hex2bin((int)v116, (unsigned __int8 *)v102, 24);
    if ( a2 != (int *)-440 )
    {
      pthread_mutex_lock((pthread_mutex_t *)a2 + 40);
      v84 = (void *)a2[206];
      if ( v84 )
      {
        free(v84);
        a2[206] = 0;
      }
      v85 = (void *)a2[208];
      if ( v85 )
      {
        free(v85);
        a2[208] = 0;
      }
      v86 = &v117;
      a2[227] = v107;
      sprintf(s, "%d", v107);
      a2[206] = (int)_strdup(s);
      v87 = a2 + 112;
      a2[228] = v99;
      *((_QWORD *)a2 + 115) = v104;
      do
      {
        v87 += 4;
        v88 = *v86;
        v89 = v86[1];
        v90 = v86[2];
        v91 = v86[3];
        v86 += 4;
        *(v87 - 4) = v88;
        *(v87 - 3) = v89;
        *(v87 - 2) = v90;
        *(v87 - 1) = v91;
      }
      while ( v86 != v138 );
      v17 = 1;
      v92 = v116[1];
      v93 = v116[2];
      v94 = v116[3];
      a2[176] = v116[0];
      a2[177] = v92;
      v95 = v116[4];
      v96 = v116[5];
      a2[179] = v94;
      a2[178] = v93;
      a2[180] = v95;
      a2[181] = v96;
      *((_QWORD *)a2 + 55) = *a2;
      *((double *)a2 + 147) = (double)v101;
      *((double *)a2 + 100) = (double)v101;
      pthread_mutex_unlock((pthread_mutex_t *)a2 + 40);
    }
LABEL_17:
    if ( v5[1] != -1 )
      sub_84ED0(v5);
    v23 = (pthread_mutex_t *)(a2 + 298);
    if ( v17 )
    {
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 298));
      *((_BYTE *)a2 + 1284) = 1;
      pthread_cond_broadcast((pthread_cond_t *)(a2 + 306));
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 298));
      return v17;
    }
    goto LABEL_31;
  }
  if ( command_type == 8 )
  {
    LOWORD(v9) = -31732;
    HIWORD(v9) = (unsigned int)"Failed to alloc xnonce2" >> 16;
    v10 = (_DWORD *)json_object_get(v5, v9);
    v11 = (_DWORD *)json_object_get(v10, "data");
    v12 = (unsigned __int8 *)json_string_value(v11);
    hex2bin((int)&v117, v12, 16);
    LOWORD(v13) = 19064;
    HIWORD(v13) = (unsigned int)"loc xnonce1" >> 16;
    v14 = (_DWORD *)json_object_get(v5, v13);
    v15 = (_DWORD *)json_object_get(v14, "data");
    v16 = (int)v15;
    if ( v15 )
    {
      if ( *v15 == 3 )
        v16 = v15[2];
      else
        v16 = 0;
    }
    if ( a2 == (int *)-440 )
    {
      v17 = 0;
    }
    else
    {
      pthread_mutex_lock((pthread_mutex_t *)a2 + 40);
      v18 = (void *)a2[206];
      a2[227] = v16;
      if ( v18 )
        free(v18);
      sprintf(s, "%d", v16);
      v17 = 1;
      a2[206] = (int)_strdup(s);
      v19 = v117;
      v20 = *(_DWORD *)v118;
      v21 = *(_DWORD *)&v118[8];
      a2[150] = *(_DWORD *)&v118[4];
      v22 = *a2;
      a2[151] = v21;
      a2[148] = v19;
      a2[149] = v20;
      *((_QWORD *)a2 + 55) = v22;
      pthread_mutex_unlock((pthread_mutex_t *)a2 + 40);
    }
    goto LABEL_17;
  }
  if ( v5[1] != -1 )
    sub_84ED0(v5);
  return 0;
}
