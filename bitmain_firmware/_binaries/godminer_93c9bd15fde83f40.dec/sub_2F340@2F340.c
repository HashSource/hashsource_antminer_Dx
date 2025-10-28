int __fastcall sub_2F340(_DWORD *a1, const char **a2)
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
  int v53; // r6
  _DWORD *v54; // r5
  int j; // r4
  _DWORD *v56; // r3
  int k; // r4
  _DWORD *v58; // r3
  _DWORD *v59; // r0
  _DWORD *v60; // r9
  int *v61; // r8
  int *v62; // r10
  int v63; // r4
  int v64; // t1
  _DWORD *v65; // r3
  int v66; // r3
  int *v67; // r8
  int *v68; // r10
  int v69; // r4
  int v70; // t1
  _DWORD *v71; // r3
  _DWORD *v72; // r10
  int v73; // r8
  int v74; // r9
  int v75; // r4
  int v76; // t1
  _DWORD *v77; // r3
  int v78; // r6
  int v79; // r8
  int v80; // r4
  int v81; // t1
  _DWORD *v82; // r3
  __int64 v83; // r4
  _QWORD *v84; // r0
  const char *v85; // r0
  _DWORD *v86; // r0
  double v88; // d0
  _DWORD *v89; // r2
  size_t v90; // r5
  char *v91; // r6
  size_t v92; // r2
  bool v93; // cf
  int v94; // r3
  int v95; // t1
  bool v96; // zf
  _DWORD *v97; // r0
  char *v98; // r4
  _DWORD *v99; // r0
  char *v100; // r3
  int *v101; // r11
  _DWORD *v102; // r5
  _DWORD *v103; // r10
  int v104; // t1
  char *v105; // r0
  int v106; // [sp+10h] [bp-1D44h]
  int v107; // [sp+18h] [bp-1D3Ch]
  _DWORD *v108; // [sp+18h] [bp-1D3Ch]
  __int64 v109; // [sp+1Ch] [bp-1D38h]
  int *v110; // [sp+1Ch] [bp-1D38h]
  int *i; // [sp+20h] [bp-1D34h]
  int v112; // [sp+24h] [bp-1D30h]
  _DWORD *v113; // [sp+28h] [bp-1D2Ch]
  int *v114; // [sp+2Ch] [bp-1D28h]
  _DWORD *v115; // [sp+34h] [bp-1D20h]
  char *v117; // [sp+3Ch] [bp-1D18h]
  int *ptr; // [sp+40h] [bp-1D14h]
  _DWORD *v119; // [sp+44h] [bp-1D10h]
  double v120; // [sp+48h] [bp-1D0Ch] BYREF
  _DWORD v121[2]; // [sp+50h] [bp-1D04h] BYREF
  _DWORD v122[2]; // [sp+58h] [bp-1CFCh] BYREF
  int *v123; // [sp+60h] [bp-1CF4h]
  float v124; // [sp+64h] [bp-1CF0h]
  float v125; // [sp+68h] [bp-1CECh]
  float v126; // [sp+6Ch] [bp-1CE8h]
  double v127; // [sp+70h] [bp-1CE4h]
  __int64 v128; // [sp+78h] [bp-1CDCh]
  char v129[208]; // [sp+80h] [bp-1CD4h] BYREF
  char dest[1024]; // [sp+150h] [bp-1C04h] BYREF
  char s[2048]; // [sp+550h] [bp-1804h] BYREF
  char v132[4100]; // [sp+D50h] [bp-1004h] BYREF

  v121[0] = 0;
  v121[1] = 0;
  pthread_mutex_lock(&stru_1A9B48);
  v3 = dword_1A9B60;
  pthread_mutex_unlock(&stru_1A9B48);
  v4 = dword_1A4988;
  if ( !dword_1A4988 )
  {
    V_LOCK();
    logfmt_raw(v132, 0x1000u, 0, "frontend runtime type not set");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_interface.c",
      150,
      "frontend_runtime_instance",
      25,
      72,
      100,
      v132);
  }
  v5 = a1 == 0;
  if ( !a2 )
    v5 = 1;
  if ( v5 )
  {
    V_LOCK();
    logfmt_raw(v132, 0x1000u, 0, "%s: input bad api param\n", "get_stats");
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
      v132);
    return -2147483646;
  }
  else
  {
    sub_2AAB8(a1, a2);
    sub_2A9A8(a1);
    v119 = json_array();
    read_system_status_from_monitor((int)v122);
    v6 = v127;
    v107 = v122[1];
    format_hashrate_double(*(const char **)(v4 + 84), &v120, (char *)v121);
    v109 = v128;
    v7 = v6;
    v8 = v124 * 100.0;
    v9 = v125 * 100.0;
    v10 = v126 * 100.0;
    if ( v3 > 0 )
    {
      v117 = (char *)malloc(208 * v3);
      v98 = v117 + 1664;
      v99 = malloc(4 * v3);
      v100 = (char *)&v99[v3];
      v112 = v3;
      v101 = dword_1A9B64;
      v102 = v99;
      v103 = v100;
      ptr = v99;
      do
      {
        v104 = *v101++;
        __pld(v98);
        memcpy(v129, &dword_1A4178[52 * *(_DWORD *)(v104 + 132)], sizeof(v129));
        v105 = v98 - 1664;
        v98 += 208;
        memcpy(v105, v129, 0xD0u);
        *v102++ = *(_DWORD *)(v104 + 136);
      }
      while ( v103 != v102 );
      v3 = v112;
    }
    else
    {
      ptr = 0;
      v117 = 0;
    }
    v11 = json_object();
    v115 = v11;
    get_miner_elapsed_time();
    v12 = json_integer((__int64)v6);
    json_object_set_new(v11, "elapsed", v12);
    sub_16E7EC((__int64)(v6 * v8));
    v13 = json_real();
    json_object_set_new(v11, "rate_5s", v13);
    sub_16E7EC((__int64)(v9 * v6));
    v14 = json_real();
    json_object_set_new(v11, "rate_30m", v14);
    sub_16E7EC((__int64)(v6 * v10));
    v15 = json_real();
    json_object_set_new(v11, "rate_avg", v15);
    if ( !strcmp(*(const char **)(dword_1A9B64[0] + 184), "dash") )
    {
      v88 = v120;
      update_rate_ideal();
      sub_16E7EC((__int64)(v88 * 100.0));
    }
    else
    {
      sub_16E7EC((__int64)(v120 * 100.0));
    }
    v16 = json_real();
    json_object_set_new(v11, "rate_ideal", v16);
    v17 = json_string((const char *)v121);
    json_object_set_new(v11, "rate_unit", v17);
    v18 = json_integer(v3);
    json_object_set_new(v11, "chain_num", v18);
    v19 = json_integer(v107);
    json_object_set_new(v11, "fan_num", v19);
    v20 = json_array();
    if ( v107 > 0 )
    {
      v21 = v123;
      v22 = &v123[v107];
      do
      {
        while ( 1 )
        {
          v24 = *v21++;
          v23 = v24;
          v25 = off_1A25E8(0x10u);
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
    v26 = v109 + total_diff1;
    if ( v109 + total_diff1 )
    {
      LODWORD(v28) = sub_16E7DC(v109);
      HIDWORD(v28) = v27;
      LODWORD(v29) = sub_16E7DC(v26);
      sub_16E7EC((__int64)(v28 / v29 * 10000.0));
    }
    v30 = json_real();
    json_object_set_new(v115, "hwp_total", v30);
    v31 = json_array();
    v113 = v31;
    if ( v3 > 0 )
    {
      v110 = ptr;
      v114 = &ptr[v3];
      v32 = v117 + 244;
      for ( i = dword_1AA668; ; ++i )
      {
        v108 = json_object();
        v33 = *v110++;
        v34 = off_1A25E8(0x10u);
        v35 = v34;
        if ( v34 )
        {
          *((_QWORD *)v34 + 1) = v33;
          *v34 = 3;
          v34[1] = 1;
        }
        v36 = v108;
        __pld(v32 + 28);
        json_object_set_new(v36, "index", v35);
        v37 = *((_DWORD *)v32 - 45);
        v38 = off_1A25E8(0x10u);
        v39 = v38;
        if ( v38 )
        {
          *((_QWORD *)v38 + 1) = v37;
          *v38 = 3;
          v38[1] = 1;
        }
        v40 = v108;
        __pld(v32);
        json_object_set_new(v40, "freq_avg", v39);
        v41 = *((float *)v32 - 52);
        v42 = v7 * *(double *)(v32 - 196) * 100.0;
        v120 = v7 * *(double *)(v32 - 196);
        LODWORD(v43) = sub_16E7EC((__int64)v42);
        v44 = v43;
        v45 = (double *)off_1A25E8(0x10u);
        if ( v45 )
        {
          *(_DWORD *)v45 = 4;
          *((_DWORD *)v45 + 1) = 1;
          v45[1] = v44 * 0.01;
        }
        json_object_set_new(v108, "rate_ideal", v45);
        LODWORD(v46) = sub_16E7EC((__int64)(v41 * (v7 * 100.0)));
        v47 = v46;
        v48 = (double *)off_1A25E8(0x10u);
        if ( v48 )
        {
          *(_DWORD *)v48 = 4;
          *((_DWORD *)v48 + 1) = 1;
          v48[1] = v47 * 0.01;
        }
        json_object_set_new(v108, "rate_real", v48);
        v49 = *((_DWORD *)v32 - 47);
        v50 = off_1A25E8(0x10u);
        if ( v50 )
        {
          v50[1] = v49;
          *(_DWORD *)v50 = 3;
          *((_DWORD *)v50 + 1) = 1;
        }
        json_object_set_new(v108, "asic_num", v50);
        v51 = (const char *)*((_DWORD *)v32 - 46);
        if ( v51 )
        {
          v90 = 0;
          v91 = dest;
          strcpy(dest, v51);
          v92 = strlen(dest);
          while ( 1 )
          {
            v93 = v90++ >= v92;
            if ( v93 )
              break;
            while ( 1 )
            {
              v95 = (unsigned __int8)*v91++;
              v94 = v95;
              v96 = v95 == 111;
              if ( v95 != 111 )
                v96 = v94 == 32;
              if ( v96 )
                break;
              *(v91 - 1) = 120;
              v92 = strlen(dest);
              v93 = v90++ >= v92;
              if ( v93 )
                goto LABEL_76;
            }
          }
LABEL_76:
          v97 = json_string(dest);
          json_object_set_new(v108, "asic", v97);
        }
        v52 = json_array();
        v53 = *((_DWORD *)v32 - 55);
        v54 = v52;
        if ( v53 <= 0 )
        {
LABEL_33:
          v106 = *((_DWORD *)v32 - 54);
          if ( v106 <= 0 )
            goto LABEL_37;
        }
        else
        {
          for ( j = 0; j != v53; ++j )
          {
            while ( 1 )
            {
              v56 = off_1A25E8(0x10u);
              if ( !v56 )
                break;
              ++j;
              *v56 = 3;
              v56[1] = 1;
              *((_QWORD *)v56 + 1) = 0;
              json_array_append_new((int)v54, v56);
              if ( j == v53 )
                goto LABEL_33;
            }
            json_array_append_new((int)v54, 0);
          }
          v106 = *((_DWORD *)v32 - 54);
          if ( v106 <= 0 )
          {
            json_object_set_new(v108, "temp_pic", v54);
            v60 = json_array();
LABEL_38:
            v61 = (int *)*((_DWORD *)v32 - 61);
            v62 = &v61[v53];
            do
            {
              while ( 1 )
              {
                v64 = *v61++;
                v63 = v64;
                v65 = off_1A25E8(0x10u);
                if ( !v65 )
                  break;
                v65[1] = 1;
                *v65 = 3;
                *((_QWORD *)v65 + 1) = v63;
                json_array_append_new((int)v60, v65);
                if ( v62 == v61 )
                  goto LABEL_41;
              }
              json_array_append_new((int)v60, 0);
            }
            while ( v62 != v61 );
LABEL_41:
            v66 = v106;
            if ( v106 <= 0 )
            {
              json_object_set_new(v108, "temp_pcb", v60);
              v72 = json_array();
LABEL_46:
              v73 = 0;
              v74 = *((_DWORD *)v32 - 60) - 4;
              do
              {
                while ( 1 )
                {
                  v76 = *(_DWORD *)(v74 + 4);
                  v74 += 4;
                  v75 = v76;
                  v77 = off_1A25E8(0x10u);
                  if ( !v77 )
                    break;
                  ++v73;
                  *v77 = 3;
                  v77[1] = 1;
                  *((_QWORD *)v77 + 1) = v75;
                  json_array_append_new((int)v72, v77);
                  if ( v73 >= v53 )
                    goto LABEL_49;
                }
                ++v73;
                json_array_append_new((int)v72, 0);
              }
              while ( v73 < v53 );
LABEL_49:
              if ( v106 <= 0 )
                goto LABEL_53;
            }
            else
            {
LABEL_42:
              v67 = (int *)*((_DWORD *)v32 - 59);
              v68 = &v67[v66];
              do
              {
                while ( 1 )
                {
                  v70 = *v67++;
                  v69 = v70;
                  v71 = off_1A25E8(0x10u);
                  if ( !v71 )
                    break;
                  v71[1] = 1;
                  *v71 = 3;
                  *((_QWORD *)v71 + 1) = v69;
                  json_array_append_new((int)v60, v71);
                  if ( v68 == v67 )
                    goto LABEL_45;
                }
                json_array_append_new((int)v60, 0);
              }
              while ( v68 != v67 );
LABEL_45:
              json_object_set_new(v108, "temp_pcb", v60);
              v72 = json_array();
              if ( v53 > 0 )
                goto LABEL_46;
            }
            v78 = 0;
            v79 = *((_DWORD *)v32 - 58) - 4;
            do
            {
              while ( 1 )
              {
                v81 = *(_DWORD *)(v79 + 4);
                v79 += 4;
                v80 = v81;
                v82 = off_1A25E8(0x10u);
                if ( !v82 )
                  break;
                *v82 = 3;
                ++v78;
                v82[1] = 1;
                *((_QWORD *)v82 + 1) = v80;
                json_array_append_new((int)v72, v82);
                if ( v106 <= v78 )
                  goto LABEL_53;
              }
              json_array_append_new((int)v72, 0);
              ++v78;
            }
            while ( v106 > v78 );
            goto LABEL_53;
          }
        }
        for ( k = 0; k != v106; ++k )
        {
          while ( 1 )
          {
            v58 = off_1A25E8(0x10u);
            if ( !v58 )
              break;
            *v58 = 3;
            ++k;
            v58[1] = 1;
            *((_QWORD *)v58 + 1) = 0;
            json_array_append_new((int)v54, v58);
            if ( k == v106 )
              goto LABEL_37;
          }
          json_array_append_new((int)v54, 0);
        }
LABEL_37:
        json_object_set_new(v108, "temp_pic", v54);
        v59 = json_array();
        v60 = v59;
        if ( v53 > 0 )
          goto LABEL_38;
        v66 = v106;
        if ( v106 > 0 )
          goto LABEL_42;
        json_object_set_new(v108, "temp_pcb", v59);
        v72 = json_array();
LABEL_53:
        json_object_set_new(v108, "temp_chip", v72);
        v83 = *(_QWORD *)(v32 - 172);
        v84 = off_1A25E8(0x10u);
        if ( v84 )
        {
          v84[1] = v83;
          *(_DWORD *)v84 = 3;
          *((_DWORD *)v84 + 1) = 1;
        }
        json_object_set_new(v108, "hw", v84);
        if ( dword_1AA6AC && *(_BYTE *)(dword_1AA6AC + 80) )
        {
          json_object_set_new(v108, "eeprom_loaded", dword_1A24DC);
          if ( dword_1AA6AC && *(_BYTE *)(dword_1AA6AC + 80) )
          {
            v85 = *(const char **)(*(_DWORD *)(dword_1AA6AC + 4 * *i) + 3);
            if ( v85 )
            {
              v86 = json_string(v85);
              json_object_set_new(v108, "sn", v86);
            }
          }
          else
          {
            snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.\n", "get_chip_sn", *i);
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw(v132, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
              163,
              "get_chip_sn",
              11,
              759,
              100,
              v132);
          }
        }
        else
        {
          snprintf(s, 0x800u, "%s: g_eeprom_data is not ready\n", "is_eeprom_loaded");
          pthread_mutex_lock(&stru_1A8A24);
          logfmt_raw(v132, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
            163,
            "is_eeprom_loaded",
            16,
            718,
            20,
            v132);
          if ( dword_1AA6AC && *(_BYTE *)(dword_1AA6AC + 80) )
          {
            v89 = dword_1A24DC;
          }
          else
          {
            snprintf(s, 0x800u, "%s: g_eeprom_data is not ready\n", "is_eeprom_loaded");
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw(v132, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_1A8A24);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
              163,
              "is_eeprom_loaded",
              16,
              718,
              20,
              v132);
            v89 = dword_1A24E4;
          }
          json_object_set_new(v108, "eeprom_loaded", v89);
        }
        v32 += 208;
        json_array_append_new((int)v113, v108);
        if ( v114 == v110 )
        {
          json_object_set_new(v115, "chain", v113);
          json_array_append_new((int)v119, v115);
          json_object_set_new(a1, "STATS", v119);
          free(ptr);
          free(v117);
          return 0;
        }
      }
    }
    json_object_set_new(v115, "chain", v31);
    json_array_append_new((int)v119, v115);
    json_object_set_new(a1, "STATS", v119);
    return 0;
  }
}
