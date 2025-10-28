bool __fastcall stratum_handle_method_vbk(int a1, int *a2, char arg)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  int command_type; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  unsigned __int8 *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  int v13; // r6
  _BOOL4 v14; // r6
  void *v15; // r0
  int v16; // r0
  int v17; // r1
  int v18; // r3
  int v19; // r2
  pthread_mutex_t *v20; // r4
  _DWORD *v21; // r0
  int v22; // r9
  _DWORD *v23; // r0
  int v24; // r8
  _DWORD *v25; // r0
  _DWORD *v26; // r0
  const char *v27; // r11
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  const char *v30; // r10
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r0
  _DWORD *v34; // r0
  _DWORD *v35; // r0
  _DWORD *v36; // r0
  _DWORD *v37; // r0
  _DWORD *v38; // r0
  _DWORD *v39; // r0
  _DWORD *v40; // r0
  int v41; // r0
  bool v42; // zf
  bool v43; // zf
  _DWORD *v44; // r0
  bool v45; // zf
  _BOOL4 v46; // r2
  int v47; // r9
  int v48; // r8
  _BYTE *v49; // r8
  int v50; // r1
  int i; // r8
  char byte_from_hex; // r0
  char *v53; // r3
  int j; // r8
  char v55; // r0
  char *v56; // r3
  void *v57; // r0
  void *v58; // r0
  int *v59; // r6
  int *v60; // r12
  int v61; // r0
  int v62; // r1
  int v63; // r2
  int v64; // r3
  int v65; // r1
  int v66; // r2
  int v67; // r3
  int v68; // r0
  int v69; // r1
  char *v70; // [sp+10h] [bp-11B4h]
  int v71; // [sp+14h] [bp-11B0h]
  int v72; // [sp+14h] [bp-11B0h]
  int v73; // [sp+18h] [bp-11ACh]
  unsigned int v74; // [sp+18h] [bp-11ACh]
  char *v75; // [sp+1Ch] [bp-11A8h]
  int v76; // [sp+20h] [bp-11A4h]
  __int64 v77; // [sp+20h] [bp-11A4h]
  char *v78; // [sp+28h] [bp-119Ch]
  int v79; // [sp+2Ch] [bp-1198h]
  int v80; // [sp+2Ch] [bp-1198h]
  __int16 v81; // [sp+30h] [bp-1194h]
  int v82; // [sp+34h] [bp-1190h]
  _DWORD v83[2]; // [sp+38h] [bp-118Ch] BYREF
  char v84; // [sp+40h] [bp-1184h]
  _DWORD v85[2]; // [sp+44h] [bp-1180h] BYREF
  char v86; // [sp+4Ch] [bp-1178h]
  _DWORD v87[3]; // [sp+50h] [bp-1174h] BYREF
  _DWORD v88[4]; // [sp+5Ch] [bp-1168h] BYREF
  _DWORD v89[6]; // [sp+6Ch] [bp-1158h] BYREF
  int v90; // [sp+84h] [bp-1140h] BYREF
  _BYTE v91[14]; // [sp+88h] [bp-113Ch]
  int v92; // [sp+96h] [bp-112Eh]
  int v93; // [sp+9Ah] [bp-112Ah]
  char v94; // [sp+9Eh] [bp-1126h]
  int v95; // [sp+9Fh] [bp-1125h]
  int v96; // [sp+A3h] [bp-1121h]
  char v97; // [sp+A7h] [bp-111Dh]
  int v98; // [sp+A8h] [bp-111Ch]
  int v99; // [sp+ACh] [bp-1118h]
  int v100; // [sp+B0h] [bp-1114h]
  int v101; // [sp+B4h] [bp-1110h]
  char v102; // [sp+B8h] [bp-110Ch]
  char v103; // [sp+B9h] [bp-110Bh]
  char v104; // [sp+BAh] [bp-110Ah]
  char v105; // [sp+BBh] [bp-1109h]
  char v106; // [sp+BCh] [bp-1108h]
  char v107; // [sp+BDh] [bp-1107h]
  char v108; // [sp+BEh] [bp-1106h]
  char v109; // [sp+BFh] [bp-1105h]
  int v110; // [sp+C0h] [bp-1104h]
  _DWORD v111[23]; // [sp+C4h] [bp-1100h] BYREF
  char v112[160]; // [sp+120h] [bp-10A4h] BYREF
  char s[4100]; // [sp+1C0h] [bp-1004h] BYREF

  v4 = json_loads(arg, 0, (int)v111);
  v5 = v4;
  if ( !v4 )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(s, 0x1000u, 0, "JSON decode failed(%d): %s", v111[0], v112);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_handle_method_vbk",
      25,
      314,
      100,
      s);
    return 0;
  }
  command_type = get_command_type(v4);
  if ( command_type == 7 )
  {
    v21 = (_DWORD *)json_object_get(v5, "job_id");
    v22 = json_object_get(v21, "data");
    v23 = (_DWORD *)json_object_get(v5, "block_version");
    v24 = json_object_get(v23, "data");
    v25 = (_DWORD *)json_object_get(v5, "previous_block_hash");
    v26 = (_DWORD *)json_object_get(v25, "data");
    v27 = (const char *)json_string_value(v26);
    v28 = (_DWORD *)json_object_get(v5, "second_previous_block_hash");
    v29 = (_DWORD *)json_object_get(v28, "data");
    v30 = (const char *)json_string_value(v29);
    v31 = (_DWORD *)json_object_get(v5, "third_previous_block_hash");
    v32 = (_DWORD *)json_object_get(v31, "data");
    v78 = (char *)json_string_value(v32);
    v33 = (_DWORD *)json_object_get(v5, "merkle_root");
    v34 = (_DWORD *)json_object_get(v33, "data");
    v70 = (char *)json_string_value(v34);
    v35 = (_DWORD *)json_object_get(v5, "block_index");
    v71 = json_object_get(v35, "data");
    v36 = (_DWORD *)json_object_get(v5, "timestamp");
    v73 = json_object_get(v36, "data");
    v37 = (_DWORD *)json_object_get(v5, "difficulty");
    v76 = json_object_get(v37, "data");
    v38 = (_DWORD *)json_object_get(v5, "mining_target");
    v39 = (_DWORD *)json_object_get(v38, "data");
    v75 = (char *)json_string_value(v39);
    v40 = (_DWORD *)json_object_get(v5, "extra_nonce_start");
    v41 = json_object_get(v40, "data");
    v42 = v24 == 0;
    if ( v24 )
      v42 = v22 == 0;
    if ( v42 )
      goto LABEL_28;
    v43 = v30 == 0;
    if ( v30 )
      v43 = v27 == 0;
    if ( v43 )
      goto LABEL_28;
    v45 = v70 == 0;
    if ( v70 )
      v45 = v78 == 0;
    if ( v45 )
      goto LABEL_28;
    v14 = v73 == 0;
    if ( !v71 )
      v14 = 1;
    if ( v14 )
      goto LABEL_28;
    v46 = v75 == 0;
    if ( !v76 )
      v46 = 1;
    if ( !v41 )
      v46 = 1;
    if ( v46
      || (v79 = v41, strlen(v27) <= 0x2F)
      || strlen(v30) <= 0x2F
      || strlen(v78) <= 0x2F
      || strlen(v70) <= 0x1F
      || strlen(v75) <= 0x2F )
    {
LABEL_28:
      V_LOCK();
      logfmt_raw(s, 0x1000u, 0, "%s: invalid parameters", "stratum_handle_method_vbk");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_vbk/frontend_vbk.c",
        157,
        "stratum_handle_method_vbk",
        25,
        351,
        100,
        s);
      if ( v5[1] == -1 )
      {
        v20 = (pthread_mutex_t *)(a2 + 298);
      }
      else
      {
        v44 = v5;
        v20 = (pthread_mutex_t *)(a2 + 298);
        sub_F8BC0(v44);
      }
LABEL_31:
      pthread_mutex_lock(v20);
      *((_BYTE *)a2 + 1284) = 0;
      pthread_mutex_unlock(v20);
      return 0;
    }
    v82 = v79;
    v80 = json_integer_value(v22);
    v81 = json_integer_value(v24);
    v47 = 24;
    v48 = json_integer_value(v71);
    v72 = json_integer_value(v73);
    v74 = json_integer_value(v76);
    HIBYTE(v90) = v48;
    LOBYTE(v90) = HIBYTE(v48);
    v91[1] = v81;
    BYTE1(v90) = BYTE2(v48);
    BYTE2(v90) = BYTE1(v48);
    v49 = v87;
    v77 = json_integer_value(v82);
    v91[0] = HIBYTE(v81);
    do
    {
      v50 = v47;
      v47 += 2;
      *v49++ = extract_byte_from_hex(v27, v50);
    }
    while ( v47 != 48 );
    for ( i = 15; i != 24; ++i )
    {
      byte_from_hex = extract_byte_from_hex(v30, 2 * i);
      v53 = (char *)v83 + i;
      *(v53 - 15) = byte_from_hex;
    }
    for ( j = 15; j != 24; ++j )
    {
      v55 = extract_byte_from_hex(v78, 2 * j);
      v56 = (char *)v85 + j;
      *(v56 - 15) = v55;
    }
    hex2bin((int)v88, (unsigned __int8 *)v70, 16);
    *(_DWORD *)&v91[2] = v87[0];
    *(_DWORD *)&v91[6] = v87[1];
    *(_DWORD *)&v91[10] = v87[2];
    v92 = v83[0];
    v93 = v83[1];
    v94 = v84;
    v95 = v85[0];
    v96 = v85[1];
    v97 = v86;
    v105 = v72;
    v98 = v88[0];
    v99 = v88[1];
    v100 = v88[2];
    v101 = v88[3];
    v102 = HIBYTE(v72);
    v103 = BYTE2(v72);
    v104 = BYTE1(v72);
    v106 = HIBYTE(v74);
    v107 = BYTE2(v74);
    v108 = BYTE1(v74);
    v109 = v74;
    v110 = 0;
    hex2bin((int)v89, (unsigned __int8 *)v75, 24);
    if ( a2 != (int *)-440 )
    {
      pthread_mutex_lock((pthread_mutex_t *)a2 + 40);
      v57 = (void *)a2[206];
      if ( v57 )
      {
        free(v57);
        a2[206] = 0;
      }
      v58 = (void *)a2[208];
      if ( v58 )
      {
        free(v58);
        a2[208] = 0;
      }
      v59 = &v90;
      a2[227] = v80;
      sprintf(s, "%d", v80);
      a2[206] = (int)_strdup(s);
      v60 = a2 + 112;
      a2[228] = v72;
      *((_QWORD *)a2 + 115) = v77;
      do
      {
        v60 += 4;
        v61 = *v59;
        v62 = v59[1];
        v63 = v59[2];
        v64 = v59[3];
        v59 += 4;
        *(v60 - 4) = v61;
        *(v60 - 3) = v62;
        *(v60 - 2) = v63;
        *(v60 - 1) = v64;
      }
      while ( v59 != v111 );
      v14 = 1;
      v65 = v89[1];
      v66 = v89[2];
      v67 = v89[3];
      a2[176] = v89[0];
      a2[177] = v65;
      v68 = v89[4];
      v69 = v89[5];
      a2[179] = v67;
      a2[178] = v66;
      a2[180] = v68;
      a2[181] = v69;
      *((_QWORD *)a2 + 55) = *a2;
      *((double *)a2 + 147) = (double)v74;
      *((double *)a2 + 100) = (double)v74;
      pthread_mutex_unlock((pthread_mutex_t *)a2 + 40);
    }
LABEL_17:
    if ( v5[1] != -1 )
      sub_F8BC0(v5);
    v20 = (pthread_mutex_t *)(a2 + 298);
    if ( v14 )
    {
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 298));
      *((_BYTE *)a2 + 1284) = 1;
      pthread_cond_broadcast((pthread_cond_t *)(a2 + 306));
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 298));
      return v14;
    }
    goto LABEL_31;
  }
  if ( command_type == 8 )
  {
    v8 = (_DWORD *)json_object_get(v5, "new_merkle_root");
    v9 = (_DWORD *)json_object_get(v8, "data");
    v10 = (unsigned __int8 *)json_string_value(v9);
    hex2bin((int)&v90, v10, 16);
    v11 = (_DWORD *)json_object_get(v5, "job_id");
    v12 = (_DWORD *)json_object_get(v11, "data");
    v13 = (int)v12;
    if ( v12 )
    {
      if ( *v12 == 3 )
        v13 = v12[2];
      else
        v13 = 0;
    }
    if ( a2 == (int *)-440 )
    {
      v14 = 0;
    }
    else
    {
      pthread_mutex_lock((pthread_mutex_t *)a2 + 40);
      v15 = (void *)a2[206];
      a2[227] = v13;
      if ( v15 )
        free(v15);
      sprintf(s, "%d", v13);
      v14 = 1;
      a2[206] = (int)_strdup(s);
      v16 = v90;
      v17 = *(_DWORD *)v91;
      v18 = *(_DWORD *)&v91[8];
      a2[150] = *(_DWORD *)&v91[4];
      v19 = *a2;
      a2[151] = v18;
      a2[148] = v16;
      a2[149] = v17;
      *((_QWORD *)a2 + 55) = v19;
      pthread_mutex_unlock((pthread_mutex_t *)a2 + 40);
    }
    goto LABEL_17;
  }
  if ( v5[1] != -1 )
    sub_F8BC0(v5);
  return 0;
}
