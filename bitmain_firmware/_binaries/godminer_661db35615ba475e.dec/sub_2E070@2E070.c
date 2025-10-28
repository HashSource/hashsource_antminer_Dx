int __fastcall sub_2E070(_DWORD *a1, const char **a2)
{
  int v3; // r11
  int v4; // r7
  _BOOL4 v5; // r5
  double v6; // d0
  double v7; // d11
  double v8; // d10
  double v9; // d9
  double v10; // d8
  _DWORD *v11; // r5
  _QWORD *v12; // r0
  _QWORD *v13; // r0
  _QWORD *v14; // r0
  _QWORD *v15; // r0
  _QWORD *v16; // r0
  _DWORD *v17; // r0
  _QWORD *v18; // r0
  _QWORD *v19; // r0
  _DWORD *v20; // r10
  int *v21; // r6
  int *v22; // r9
  int v23; // r4
  int v24; // t1
  _DWORD *v25; // r3
  __int64 v26; // r4
  int v27; // r1
  double v28; // d8
  double v29; // r0
  _QWORD *v30; // r0
  _DWORD *v31; // r0
  char *v32; // r11
  int v33; // r4
  _DWORD *v34; // r0
  _DWORD *v35; // r2
  _DWORD *v36; // r0
  int v37; // r4
  _DWORD *v38; // r0
  _DWORD *v39; // r2
  _DWORD *v40; // r0
  double v41; // d8
  double v42; // d6
  double v43; // r0
  double v44; // d7
  double *v45; // r2
  double v46; // r0
  double v47; // d7
  double *v48; // r2
  int v49; // r4
  _QWORD *v50; // r0
  const char *v51; // r1
  _DWORD *v52; // r0
  _DWORD *v53; // r4
  void *(*v54)(size_t); // r3
  int v55; // r0
  int v56; // r9
  int i; // r5
  _DWORD *v58; // r3
  int j; // r5
  _DWORD *v60; // r3
  _DWORD *v61; // r0
  _DWORD *v62; // r6
  void *(*v63)(size_t); // r3
  int v64; // r0
  int *v65; // r8
  int *v66; // r10
  int v67; // r4
  int v68; // t1
  _DWORD *v69; // r3
  int *v70; // r8
  int *v71; // r10
  int v72; // r4
  int v73; // t1
  _DWORD *v74; // r3
  _DWORD *v75; // r0
  _DWORD *v76; // r6
  void *(*v77)(size_t); // r3
  int v78; // r0
  int *v79; // r8
  int *v80; // r9
  int v81; // r4
  int v82; // t1
  _DWORD *v83; // r3
  int *v84; // r8
  int *v85; // r10
  int v86; // r4
  int v87; // t1
  _DWORD *v88; // r3
  __int64 v89; // r4
  _QWORD *v90; // r0
  const char *v91; // r0
  _DWORD *v92; // r0
  double v94; // d0
  _DWORD *v95; // r2
  size_t v96; // r5
  char *v97; // r6
  size_t v98; // r2
  bool v99; // cf
  int v100; // r3
  int v101; // t1
  bool v102; // zf
  _DWORD *v103; // r0
  char *v104; // r4
  _DWORD *v105; // r0
  char *v106; // r3
  int *v107; // r11
  _DWORD *v108; // r5
  _DWORD *v109; // r10
  int v110; // t1
  char *v111; // r0
  void *v112; // r0
  void *v113; // r0
  void *v114; // r0
  _DWORD *v115; // [sp+10h] [bp-1D44h]
  int v116; // [sp+1Ch] [bp-1D38h]
  int v117; // [sp+1Ch] [bp-1D38h]
  __int64 v118; // [sp+20h] [bp-1D34h]
  int *v119; // [sp+20h] [bp-1D34h]
  int *v120; // [sp+24h] [bp-1D30h]
  int v121; // [sp+28h] [bp-1D2Ch]
  _DWORD *v122; // [sp+2Ch] [bp-1D28h]
  int *v123; // [sp+30h] [bp-1D24h]
  _DWORD *v124; // [sp+34h] [bp-1D20h]
  char *v126; // [sp+3Ch] [bp-1D18h]
  int *ptr; // [sp+40h] [bp-1D14h]
  _DWORD *v128; // [sp+44h] [bp-1D10h]
  double v129; // [sp+48h] [bp-1D0Ch] BYREF
  _DWORD v130[2]; // [sp+50h] [bp-1D04h] BYREF
  _DWORD v131[2]; // [sp+58h] [bp-1CFCh] BYREF
  int *v132; // [sp+60h] [bp-1CF4h]
  float v133; // [sp+64h] [bp-1CF0h]
  float v134; // [sp+68h] [bp-1CECh]
  float v135; // [sp+6Ch] [bp-1CE8h]
  double v136; // [sp+70h] [bp-1CE4h]
  __int64 v137; // [sp+78h] [bp-1CDCh]
  char v138[208]; // [sp+80h] [bp-1CD4h] BYREF
  char dest[1024]; // [sp+150h] [bp-1C04h] BYREF
  char s[2048]; // [sp+550h] [bp-1804h] BYREF
  char v141[4100]; // [sp+D50h] [bp-1004h] BYREF

  v130[0] = 0;
  v130[1] = 0;
  pthread_mutex_lock(&stru_190E30);
  v3 = dword_190E48;
  pthread_mutex_unlock(&stru_190E30);
  v4 = dword_191C84;
  if ( !dword_191C84 )
  {
    V_LOCK();
    logfmt_raw(v141, 0x1000u, 0, "frontend runtime type not set");
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
      v141);
  }
  v5 = a1 == 0;
  if ( !a2 )
    v5 = 1;
  if ( v5 )
  {
    V_LOCK();
    logfmt_raw(v141, 0x1000u, 0, "%s: input bad api param\n", "get_stats");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_stats",
      9,
      558,
      100,
      v141);
    return -2147483646;
  }
  else
  {
    sub_2867C(a1, a2);
    sub_2856C(a1);
    v128 = json_array();
    read_system_status_from_monitor((int)v131);
    v6 = v136;
    v116 = v131[1];
    format_hashrate_double(*(const char **)(v4 + 84), &v129, (char *)v130);
    v118 = v137;
    v7 = v6;
    v8 = v133 * 100.0;
    v9 = v134 * 100.0;
    v10 = v135 * 100.0;
    if ( v3 > 0 )
    {
      v126 = (char *)malloc(208 * v3);
      v104 = v126 + 1664;
      v105 = malloc(4 * v3);
      v106 = (char *)&v105[v3];
      v121 = v3;
      v107 = dword_190E4C;
      v108 = v105;
      v109 = v106;
      ptr = v105;
      do
      {
        v110 = *v107++;
        __pld(v104);
        memcpy(v138, &dword_191398[52 * *(_DWORD *)(v110 + 120)], sizeof(v138));
        v111 = v104 - 1664;
        v104 += 208;
        memcpy(v111, v138, 0xD0u);
        *v108++ = *(_DWORD *)(v110 + 124);
      }
      while ( v109 != v108 );
      v3 = v121;
    }
    else
    {
      ptr = 0;
      v126 = 0;
    }
    v11 = json_object();
    v124 = v11;
    get_miner_elapsed_time();
    v12 = json_integer((__int64)v6);
    json_object_set_new(v11, "elapsed", v12);
    sub_15D994((__int64)(v6 * v8));
    v13 = json_real();
    json_object_set_new(v11, "rate_5s", v13);
    sub_15D994((__int64)(v6 * v9));
    v14 = json_real();
    json_object_set_new(v11, "rate_30m", v14);
    sub_15D994((__int64)(v6 * v10));
    v15 = json_real();
    json_object_set_new(v11, "rate_avg", v15);
    if ( !strcmp(*(const char **)(dword_190E4C[0] + 172), "dash") )
    {
      v94 = v129;
      update_rate_ideal();
      sub_15D994((__int64)(v94 * 100.0));
    }
    else
    {
      sub_15D994((__int64)(v129 * 100.0));
    }
    v16 = json_real();
    json_object_set_new(v11, "rate_ideal", v16);
    v17 = json_string((const char *)v130);
    json_object_set_new(v11, "rate_unit", v17);
    v18 = json_integer(v3);
    json_object_set_new(v11, "chain_num", v18);
    v19 = json_integer(v116);
    json_object_set_new(v11, "fan_num", v19);
    v20 = json_array();
    if ( v116 > 0 )
    {
      v21 = v132;
      v22 = &v132[v116];
      do
      {
        while ( 1 )
        {
          v24 = *v21++;
          v23 = v24;
          v25 = off_190780(0x10u);
          if ( !v25 )
            break;
          *v25 = 3;
          v25[1] = 1;
          *((_QWORD *)v25 + 1) = v23;
          json_array_append_new((int)v20, v25);
          if ( v22 == v21 )
            goto LABEL_14;
        }
        json_array_append_new((int)v20, 0);
      }
      while ( v22 != v21 );
    }
LABEL_14:
    json_object_set_new(v11, "fan", v20);
    v26 = v118 + total_diff1;
    if ( v118 + total_diff1 )
    {
      LODWORD(v28) = sub_15D984(v118);
      HIDWORD(v28) = v27;
      LODWORD(v29) = sub_15D984(v26);
      sub_15D994((__int64)(v28 / v29 * 10000.0));
    }
    v30 = json_real();
    json_object_set_new(v124, "hwp_total", v30);
    v31 = json_array();
    v122 = v31;
    if ( v3 <= 0 )
    {
      json_object_set_new(v124, "chain", v31);
      json_array_append_new((int)v128, v124);
      json_object_set_new(a1, "STATS", v128);
      return 0;
    }
    else
    {
      v119 = ptr;
      v123 = &ptr[v3];
      v32 = v126 + 244;
      v120 = &dword_195CBC;
      do
      {
        v115 = json_object();
        v33 = *v119++;
        v34 = off_190780(0x10u);
        v35 = v34;
        if ( v34 )
        {
          *((_QWORD *)v34 + 1) = v33;
          *v34 = 3;
          v34[1] = 1;
        }
        v36 = v115;
        __pld(v32 + 28);
        json_object_set_new(v36, "index", v35);
        v37 = *((_DWORD *)v32 - 45);
        v38 = off_190780(0x10u);
        v39 = v38;
        if ( v38 )
        {
          *((_QWORD *)v38 + 1) = v37;
          *v38 = 3;
          v38[1] = 1;
        }
        v40 = v115;
        __pld(v32);
        json_object_set_new(v40, "freq_avg", v39);
        v41 = *((float *)v32 - 52);
        v42 = v7 * *(double *)(v32 - 196) * 100.0;
        v129 = v7 * *(double *)(v32 - 196);
        LODWORD(v43) = sub_15D994((__int64)v42);
        v44 = v43;
        v45 = (double *)off_190780(0x10u);
        if ( v45 )
        {
          *(_DWORD *)v45 = 4;
          *((_DWORD *)v45 + 1) = 1;
          v45[1] = v44 * 0.01;
        }
        json_object_set_new(v115, "rate_ideal", v45);
        LODWORD(v46) = sub_15D994((__int64)(v41 * (v7 * 100.0)));
        v47 = v46;
        v48 = (double *)off_190780(0x10u);
        if ( v48 )
        {
          *(_DWORD *)v48 = 4;
          *((_DWORD *)v48 + 1) = 1;
          v48[1] = v47 * 0.01;
        }
        json_object_set_new(v115, "rate_real", v48);
        v49 = *((_DWORD *)v32 - 47);
        v50 = off_190780(0x10u);
        if ( v50 )
        {
          v50[1] = v49;
          *(_DWORD *)v50 = 3;
          *((_DWORD *)v50 + 1) = 1;
        }
        json_object_set_new(v115, "asic_num", v50);
        v51 = (const char *)*((_DWORD *)v32 - 46);
        if ( v51 )
        {
          v96 = 0;
          v97 = dest;
          strcpy(dest, v51);
          v98 = strlen(dest);
          while ( 1 )
          {
            v99 = v96++ >= v98;
            if ( v99 )
              break;
            while ( 1 )
            {
              v101 = (unsigned __int8)*v97++;
              v100 = v101;
              v102 = v101 == 111;
              if ( v101 != 111 )
                v102 = v100 == 32;
              if ( v102 )
                break;
              *(v97 - 1) = 120;
              v98 = strlen(dest);
              v99 = v96++ >= v98;
              if ( v99 )
                goto LABEL_85;
            }
          }
LABEL_85:
          v103 = json_string(dest);
          json_object_set_new(v115, "asic", v103);
        }
        v52 = off_190780(0x14u);
        v53 = v52;
        if ( v52 )
        {
          *v52 = 1;
          v52[1] = 1;
          v54 = off_190780;
          v52[3] = 0;
          v52[2] = 8;
          v55 = (int)v54(32);
          v53[4] = v55;
          if ( !v55 )
          {
            v114 = v53;
            v53 = 0;
            jsonp_free(v114);
          }
        }
        v56 = *((_DWORD *)v32 - 55);
        if ( v56 > 0 )
        {
          for ( i = 0; i != v56; ++i )
          {
            while ( 1 )
            {
              v58 = off_190780(0x10u);
              if ( !v58 )
                break;
              ++i;
              *v58 = 3;
              v58[1] = 1;
              *((_QWORD *)v58 + 1) = 0;
              json_array_append_new((int)v53, v58);
              if ( i == v56 )
                goto LABEL_36;
            }
            json_array_append_new((int)v53, 0);
          }
        }
LABEL_36:
        v117 = *((_DWORD *)v32 - 54);
        if ( v117 > 0 )
        {
          for ( j = 0; j != v117; ++j )
          {
            while ( 1 )
            {
              v60 = off_190780(0x10u);
              if ( !v60 )
                break;
              *v60 = 3;
              ++j;
              v60[1] = 1;
              *((_QWORD *)v60 + 1) = 0;
              json_array_append_new((int)v53, v60);
              if ( j == v117 )
                goto LABEL_40;
            }
            json_array_append_new((int)v53, 0);
          }
        }
LABEL_40:
        json_object_set_new(v115, "temp_pic", v53);
        v61 = off_190780(0x14u);
        v62 = v61;
        if ( v61 )
        {
          *v61 = 1;
          v61[1] = 1;
          v63 = off_190780;
          v61[3] = 0;
          v61[2] = 8;
          v64 = (int)v63(32);
          v62[4] = v64;
          if ( !v64 )
          {
            v113 = v62;
            v62 = 0;
            jsonp_free(v113);
          }
        }
        if ( v56 > 0 )
        {
          v65 = (int *)*((_DWORD *)v32 - 61);
          v66 = &v65[v56];
          do
          {
            while ( 1 )
            {
              v68 = *v65++;
              v67 = v68;
              v69 = off_190780(0x10u);
              if ( !v69 )
                break;
              v69[1] = 1;
              *v69 = 3;
              *((_QWORD *)v69 + 1) = v67;
              json_array_append_new((int)v62, v69);
              if ( v66 == v65 )
                goto LABEL_47;
            }
            json_array_append_new((int)v62, 0);
          }
          while ( v66 != v65 );
        }
LABEL_47:
        if ( v117 > 0 )
        {
          v70 = (int *)*((_DWORD *)v32 - 59);
          v71 = &v70[v117];
          do
          {
            while ( 1 )
            {
              v73 = *v70++;
              v72 = v73;
              v74 = off_190780(0x10u);
              if ( !v74 )
                break;
              v74[1] = 1;
              *v74 = 3;
              *((_QWORD *)v74 + 1) = v72;
              json_array_append_new((int)v62, v74);
              if ( v71 == v70 )
                goto LABEL_51;
            }
            json_array_append_new((int)v62, 0);
          }
          while ( v71 != v70 );
        }
LABEL_51:
        json_object_set_new(v115, "temp_pcb", v62);
        v75 = off_190780(0x14u);
        v76 = v75;
        if ( v75 )
        {
          *v75 = 1;
          v75[1] = 1;
          v77 = off_190780;
          v75[3] = 0;
          v75[2] = 8;
          v78 = (int)v77(32);
          v76[4] = v78;
          if ( !v78 )
          {
            v112 = v76;
            v76 = 0;
            jsonp_free(v112);
          }
        }
        if ( v56 > 0 )
        {
          v79 = (int *)*((_DWORD *)v32 - 60);
          v80 = &v79[v56];
          do
          {
            while ( 1 )
            {
              v82 = *v79++;
              v81 = v82;
              v83 = off_190780(0x10u);
              if ( !v83 )
                break;
              *v83 = 3;
              v83[1] = 1;
              *((_QWORD *)v83 + 1) = v81;
              json_array_append_new((int)v76, v83);
              if ( v80 == v79 )
                goto LABEL_58;
            }
            json_array_append_new((int)v76, 0);
          }
          while ( v80 != v79 );
        }
LABEL_58:
        if ( v117 > 0 )
        {
          v84 = (int *)*((_DWORD *)v32 - 58);
          v85 = &v84[v117];
          do
          {
            while ( 1 )
            {
              v87 = *v84++;
              v86 = v87;
              v88 = off_190780(0x10u);
              if ( !v88 )
                break;
              *v88 = 3;
              v88[1] = 1;
              *((_QWORD *)v88 + 1) = v86;
              json_array_append_new((int)v76, v88);
              if ( v84 == v85 )
                goto LABEL_62;
            }
            json_array_append_new((int)v76, 0);
          }
          while ( v84 != v85 );
        }
LABEL_62:
        json_object_set_new(v115, "temp_chip", v76);
        v89 = *(_QWORD *)(v32 - 172);
        v90 = off_190780(0x10u);
        if ( v90 )
        {
          v90[1] = v89;
          *(_DWORD *)v90 = 3;
          *((_DWORD *)v90 + 1) = 1;
        }
        json_object_set_new(v115, "hw", v90);
        if ( dword_195D14 && *(_BYTE *)(dword_195D14 + 80) )
        {
          json_object_set_new(v115, "eeprom_loaded", dword_190774);
          if ( dword_195D14 && *(_BYTE *)(dword_195D14 + 80) )
          {
            v91 = *(const char **)(*(_DWORD *)(dword_195D14 + 4 * *v120) + 3);
            if ( v91 )
            {
              v92 = json_string(v91);
              json_object_set_new(v115, "sn", v92);
            }
          }
          else
          {
            snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.\n", "get_chip_sn", *v120);
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw(v141, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
              163,
              "get_chip_sn",
              11,
              733,
              100,
              v141);
          }
        }
        else
        {
          snprintf(s, 0x800u, "%s: g_eeprom_data is not ready\n", "is_eeprom_loaded");
          pthread_mutex_lock(&stru_197BB8);
          logfmt_raw(v141, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_197BB8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
            163,
            "is_eeprom_loaded",
            16,
            692,
            20,
            v141);
          if ( dword_195D14 && *(_BYTE *)(dword_195D14 + 80) )
          {
            v95 = dword_190774;
          }
          else
          {
            snprintf(s, 0x800u, "%s: g_eeprom_data is not ready\n", "is_eeprom_loaded");
            pthread_mutex_lock(&stru_197BB8);
            logfmt_raw(v141, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_197BB8);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
              163,
              "is_eeprom_loaded",
              16,
              692,
              20,
              v141);
            v95 = dword_19078C;
          }
          json_object_set_new(v115, "eeprom_loaded", v95);
        }
        v32 += 208;
        json_array_append_new((int)v122, v115);
        ++v120;
      }
      while ( v123 != v119 );
      json_object_set_new(v124, "chain", v122);
      json_array_append_new((int)v128, v124);
      json_object_set_new(a1, "STATS", v128);
      free(ptr);
      free(v126);
      return 0;
    }
  }
}
