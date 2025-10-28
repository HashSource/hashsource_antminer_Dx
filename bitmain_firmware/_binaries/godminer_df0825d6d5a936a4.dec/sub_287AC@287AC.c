int __fastcall sub_287AC(_DWORD *a1, const char **a2)
{
  int v3; // r5
  char *all_created_runtime; // r8
  int v5; // r0
  int v6; // r6
  double v7; // d0
  int v8; // r4
  float v9; // s22
  float v10; // s23
  __int64 v11; // r6
  double v12; // d9
  double v13; // d8
  _DWORD *v14; // r8
  _DWORD *v15; // r0
  bool v16; // zf
  double *v17; // r0
  _DWORD *v18; // r5
  double *v19; // r2
  double *v20; // r0
  double *v21; // r0
  char *v22; // r0
  _DWORD *v23; // r0
  _DWORD *v24; // r0
  _DWORD *v25; // r5
  int *v26; // r8
  int *v27; // r4
  int v28; // t1
  _DWORD *v29; // r0
  __int64 v30; // r4
  int v31; // r1
  double v32; // d8
  double v33; // r0
  double *v34; // r0
  char *v35; // r6
  _DWORD *v36; // r8
  int v37; // r0
  _DWORD *v38; // r0
  _DWORD *v39; // r0
  double v40; // d8
  double v41; // d6
  double *v42; // r0
  double *v43; // r0
  _DWORD *v44; // r0
  int v45; // r1
  _DWORD *v46; // r0
  __int64 v47; // r4
  _DWORD *v48; // r7
  int v49; // r10
  _DWORD *v50; // r0
  int v51; // r10
  _DWORD *v52; // r0
  _DWORD *v53; // r7
  int v54; // r10
  int v55; // r11
  int v56; // t1
  _DWORD *v57; // r0
  int *v58; // r11
  int *v59; // r10
  int v60; // t1
  _DWORD *v61; // r0
  _DWORD *v62; // r7
  int v63; // r10
  int v64; // r11
  int v65; // t1
  _DWORD *v66; // r0
  int v67; // r10
  int v68; // t1
  _DWORD *v69; // r0
  unsigned __int64 v70; // r0
  _DWORD *v71; // r0
  _DWORD *v72; // r2
  char *eeprom_chip_sn; // r0
  char *v74; // r0
  double *v77; // r0
  _DWORD *v78; // r2
  char *v79; // r7
  size_t v80; // r5
  size_t v81; // r2
  bool v82; // cf
  int v83; // r3
  int v84; // t1
  bool v85; // zf
  char *v86; // r0
  char *v87; // r10
  char *v88; // r11
  char *v89; // r8
  int v90; // t1
  int v91; // r3
  int v92; // [sp+10h] [bp-1084h]
  char *v93; // [sp+18h] [bp-107Ch]
  _DWORD *v94; // [sp+1Ch] [bp-1078h]
  _DWORD *v95; // [sp+2Ch] [bp-1068h]
  char *v97; // [sp+34h] [bp-1060h]
  char *ptr; // [sp+38h] [bp-105Ch]
  _DWORD *v99; // [sp+3Ch] [bp-1058h]
  int v100; // [sp+44h] [bp-1050h] BYREF
  double v101; // [sp+48h] [bp-104Ch] BYREF
  _DWORD v102[2]; // [sp+50h] [bp-1044h] BYREF
  _DWORD v103[2]; // [sp+58h] [bp-103Ch] BYREF
  int *v104; // [sp+60h] [bp-1034h]
  float v105; // [sp+64h] [bp-1030h]
  float v106; // [sp+68h] [bp-102Ch]
  float v107; // [sp+6Ch] [bp-1028h]
  float v108; // [sp+70h] [bp-1024h]
  double v109; // [sp+78h] [bp-101Ch]
  __int64 v110; // [sp+88h] [bp-100Ch]
  char v111[4100]; // [sp+90h] [bp-1004h] BYREF

  v102[0] = 0;
  v3 = a1 == 0;
  v102[1] = 0;
  v100 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v100);
  v5 = frontend_runtime_instance();
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK();
    logfmt_raw(v111, 0x1000u, 0, "%s: input bad api param", "get_stats");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "godminer-new/api_new.c",
      136,
      "get_stats",
      9,
      741,
      100,
      v111);
    return -2147483646;
  }
  else
  {
    v6 = v5;
    sub_23360(a1, a2);
    sub_2347C(a1);
    v99 = json_array();
    read_system_status_from_monitor((int)v103);
    v7 = v109;
    v8 = v103[1];
    format_hashrate_double(*(const char **)(*(_DWORD *)(v6 + 72) + 16), &v101, (char *)v102);
    v9 = v105;
    v10 = v106;
    v11 = v110;
    v12 = v107 * v7;
    v13 = v108 * v7;
    if ( v100 > 0 )
    {
      v97 = (char *)malloc(216 * v100);
      v87 = v97;
      v88 = (char *)malloc(4 * v100);
      ptr = v88;
      if ( v100 > 0 )
      {
        v89 = all_created_runtime - 4;
        do
        {
          v90 = *((_DWORD *)v89 + 1);
          v89 += 4;
          read_status_from_monitor(v87, v90);
          v91 = v100;
          v87 += 216;
          *(_DWORD *)&v88[4 * v3++] = *(_DWORD *)(*(_DWORD *)v89 + 216);
        }
        while ( v91 > v3 );
      }
    }
    else
    {
      ptr = 0;
      v97 = 0;
    }
    v14 = json_object();
    v95 = v14;
    get_total_nonce_rate();
    get_total_accept_rate();
    get_miner_elapsed_time();
    v15 = json_integer((__int64)v7);
    json_object_set_new(v14, "elapsed", v15);
    v16 = opt_algo == 9;
    if ( opt_algo != 9 )
      v16 = opt_algo == 6;
    if ( v16 )
    {
      sub_1226E4((__int64)(v10 * v7 * 100.0));
      v77 = json_real();
      json_object_set_new(v14, "rate_5s", v77);
      v12 = *(float *)&v7 * v12;
      sub_1226E4((__int64)(*(float *)&v7 * v13 * 100.0));
      v18 = v14;
    }
    else
    {
      sub_1226E4((__int64)(v9 * v7 * 100.0));
      v17 = json_real();
      v18 = v14;
      json_object_set_new(v14, "rate_5s", v17);
      sub_1226E4((__int64)(v13 * 100.0));
    }
    v19 = json_real();
    json_object_set_new(v18, "rate_avg", v19);
    sub_1226E4((__int64)(v12 * 100.0));
    v20 = json_real();
    json_object_set_new(v18, "rate_30m", v20);
    sub_1226E4((__int64)(v101 * 100.0));
    v21 = json_real();
    json_object_set_new(v14, "rate_ideal", v21);
    v22 = BUFX_strdup((char *)v102);
    json_object_set_new(v14, "rate_unit", v22);
    v23 = json_integer(v100);
    json_object_set_new(v14, "chain_num", v23);
    v24 = json_integer(v8);
    json_object_set_new(v14, "fan_num", v24);
    v25 = json_array();
    if ( v8 > 0 )
    {
      v26 = v104;
      v27 = &v104[v8];
      do
      {
        v28 = *v26++;
        v29 = json_integer(v28);
        json_array_append_new(v25, v29);
      }
      while ( v27 != v26 );
    }
    json_object_set_new(v95, "fan", v25);
    v30 = v11 + total_diff1;
    if ( v11 + total_diff1 )
    {
      LODWORD(v32) = sub_1226D4(v11);
      HIDWORD(v32) = v31;
      LODWORD(v33) = sub_1226D4(v30);
      sub_1226E4((__int64)(v32 / v33 * 100.0 * 10000.0));
    }
    v34 = json_real();
    json_object_set_new(v95, "hwp_total", v34);
    v94 = json_array();
    if ( v100 > 0 )
    {
      v35 = v97;
      v93 = ptr - 4;
      v92 = 0;
      while ( 1 )
      {
        v36 = json_object();
        v37 = *((_DWORD *)v93 + 1);
        v93 += 4;
        v38 = json_integer(v37);
        json_object_set_new(v36, "index", v38);
        v39 = json_integer(*((int *)v35 + 18));
        json_object_set_new(v36, "freq_avg", v39);
        v40 = *((float *)v35 + 10);
        v41 = v7 * *((double *)v35 + 6) * 100.0;
        v101 = v7 * *((double *)v35 + 6);
        sub_1226E4((__int64)v41);
        v42 = json_real();
        json_object_set_new(v36, "rate_ideal", v42);
        sub_1226E4((__int64)(v40 * v7 * 100.0));
        v43 = json_real();
        json_object_set_new(v36, "rate_real", v43);
        v44 = json_integer(*((int *)v35 + 16));
        json_object_set_new(v36, "asic_num", v44);
        v45 = *((_DWORD *)v35 + 17);
        if ( v45 )
        {
          v79 = v111;
          v80 = 0;
          v81 = stpcpy(v111, v45) - (_DWORD)v111;
          while ( 1 )
          {
            v82 = v80++ >= v81;
            if ( v82 )
              break;
            while ( 1 )
            {
              v84 = (unsigned __int8)*v79++;
              v83 = v84;
              v85 = v84 == 111;
              if ( v84 != 111 )
                v85 = v83 == 32;
              if ( v85 )
                break;
              *(v79 - 1) = 120;
              v81 = strlen(v111);
              v82 = v80++ >= v81;
              if ( v82 )
                goto LABEL_59;
            }
          }
LABEL_59:
          v86 = BUFX_strdup(v111);
          json_object_set_new(v36, "asic", v86);
        }
        v46 = json_array();
        v47 = *((_QWORD *)v35 + 3);
        v48 = v46;
        if ( (int)v47 <= 0 )
          break;
        v49 = 0;
        do
        {
          v50 = json_integer(0);
          ++v49;
          json_array_append_new(v48, v50);
        }
        while ( v49 != (_DWORD)v47 );
        if ( v47 > 0 )
          goto LABEL_22;
        json_object_set_new(v36, "temp_pic", v48);
        v53 = json_array();
LABEL_25:
        v54 = 0;
        v55 = *(_DWORD *)v35 - 4;
        do
        {
          v56 = *(_DWORD *)(v55 + 4);
          v55 += 4;
          ++v54;
          v57 = json_integer(v56);
          json_array_append_new(v53, v57);
        }
        while ( v54 < (int)v47 );
        if ( v47 > 0 )
          goto LABEL_28;
LABEL_64:
        json_object_set_new(v36, "temp_pcb", v53);
        v62 = json_array();
        if ( (int)v47 > 0 )
          goto LABEL_31;
LABEL_36:
        json_object_set_new(v36, "temp_chip", v62);
        v70 = *((_QWORD *)v35 + 10);
        if ( opt_algo == 8 )
          LODWORD(v70) = sub_1229FC(v70, 0x3E8u);
        v71 = json_integer(v70);
        json_object_set_new(v36, "hw", v71);
        if ( is_eeprom_loaded() )
        {
          if ( is_eeprom_loaded() )
            v72 = json_true();
          else
            v72 = json_false();
          json_object_set_new(v36, "eeprom_loaded", v72);
          if ( api_get_eeprom_chip_sn(v92) )
          {
            eeprom_chip_sn = (char *)api_get_eeprom_chip_sn(v92);
            v74 = BUFX_strdup(eeprom_chip_sn);
            json_object_set_new(v36, "sn", v74);
          }
        }
        else
        {
          if ( is_eeprom_loaded() )
            v78 = json_true();
          else
            v78 = json_false();
          json_object_set_new(v36, "eeprom_loaded", v78);
        }
        json_array_append_new(v94, v36);
        v35 += 216;
        if ( v100 <= ++v92 )
          goto LABEL_45;
      }
      if ( SHIDWORD(v47) <= 0 )
      {
        json_object_set_new(v36, "temp_pic", v46);
        v53 = json_array();
        goto LABEL_64;
      }
LABEL_22:
      v51 = 0;
      do
      {
        v52 = json_integer(0);
        ++v51;
        json_array_append_new(v48, v52);
      }
      while ( v51 < SHIDWORD(v47) );
      json_object_set_new(v36, "temp_pic", v48);
      v53 = json_array();
      if ( (int)v47 <= 0 )
      {
LABEL_28:
        v58 = (int *)*((_DWORD *)v35 + 2);
        v59 = &v58[HIDWORD(v47)];
        do
        {
          v60 = *v58++;
          v61 = json_integer(v60);
          json_array_append_new(v53, v61);
        }
        while ( v59 != v58 );
        json_object_set_new(v36, "temp_pcb", v53);
        v62 = json_array();
        if ( (int)v47 > 0 )
        {
LABEL_31:
          v63 = 0;
          v64 = *((_DWORD *)v35 + 1) - 4;
          do
          {
            v65 = *(_DWORD *)(v64 + 4);
            v64 += 4;
            ++v63;
            v66 = json_integer(v65);
            json_array_append_new(v62, v66);
          }
          while ( v63 < (int)v47 );
          if ( v47 <= 0 )
            goto LABEL_36;
        }
        LODWORD(v47) = 0;
        v67 = *((_DWORD *)v35 + 3) - 4;
        do
        {
          v68 = *(_DWORD *)(v67 + 4);
          v67 += 4;
          LODWORD(v47) = v47 + 1;
          v69 = json_integer(v68);
          json_array_append_new(v62, v69);
        }
        while ( (int)v47 < SHIDWORD(v47) );
        goto LABEL_36;
      }
      goto LABEL_25;
    }
LABEL_45:
    json_object_set_new(v95, "chain", v94);
    json_array_append_new(v99, v95);
    json_object_set_new(a1, "STATS", v99);
    if ( v100 > 0 )
    {
      free(ptr);
      free(v97);
    }
    return 0;
  }
}
