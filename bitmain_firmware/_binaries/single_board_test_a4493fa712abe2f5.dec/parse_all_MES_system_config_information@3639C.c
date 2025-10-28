int parse_all_MES_system_config_information()
{
  _DWORD *v0; // r0
  int v1; // r5
  _DWORD *v3; // r0
  _DWORD *v4; // r6
  _DWORD *v5; // r0
  char *v6; // r7
  const char *v7; // r0
  _DWORD *v8; // r0
  char *v9; // r7
  const char *v10; // r0
  const char *v11; // r7
  _DWORD *v12; // r0
  char *v13; // r5
  const char *v14; // r0
  unsigned int v15; // r5
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  char *v18; // r0
  char *v19; // r11
  int v20; // r2
  int v21; // r3
  _DWORD *v22; // r0
  const char *v23; // r0
  _DWORD *v24; // r0
  _DWORD *v25; // r10
  unsigned int v26; // r6
  _DWORD *v27; // r0
  _DWORD *v28; // r7
  _DWORD *v29; // r0
  int v30; // r3
  int v31; // r0
  _DWORD *v32; // r0
  const char *v33; // r0
  _DWORD *v34; // r0
  const char *v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  _DWORD *v39; // r0
  _DWORD *v40; // r7
  _DWORD *v41; // r2
  _DWORD *v42; // r5
  unsigned int v43; // r8
  _DWORD *v44; // r0
  int v45; // r0
  char *v46; // r0
  _DWORD *v47; // r0
  _DWORD *v48; // r7
  unsigned int v49; // r10
  _DWORD *v50; // r0
  char *v51; // r2
  _DWORD *v52; // r0
  _DWORD *v53; // r6
  _DWORD *v54; // r0
  _DWORD *v55; // r5
  int v56; // r3
  int v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  _DWORD *v65; // r0
  _DWORD *v66; // r7
  _DWORD *v67; // r0
  __int16 v68; // r2
  char *v69; // r3
  unsigned int v70; // r10
  _DWORD *v71; // r0
  _DWORD *v72; // r6
  _DWORD *v73; // r0
  _DWORD *v74; // r5
  int v75; // r3
  int v76; // r0
  int v77; // r0
  int v78; // r0
  int v79; // r0
  int v80; // r0
  int v81; // r0
  int v82; // r0
  int v83; // r0
  int v84; // r0
  _DWORD *v85; // r0
  _DWORD *v86; // r8
  unsigned int v87; // r9
  _DWORD *v88; // r0
  _DWORD *v89; // r10
  char *v90; // r0
  int v91; // r2
  char *v92; // r5
  int v93; // r0
  _DWORD *v94; // r0
  const char *v95; // r0
  _DWORD *v96; // r0
  _DWORD *v97; // r10
  _DWORD *v98; // r0
  __int16 v99; // r2
  char *v100; // r3
  unsigned int v101; // r5
  _DWORD *v102; // r0
  _DWORD *v103; // r7
  _DWORD *v104; // r0
  _DWORD *v105; // r6
  int v106; // r3
  int v107; // r0
  int v108; // r0
  int v109; // r0
  unsigned int v110; // r1
  char *v111; // r0
  unsigned int v112; // r9
  _DWORD *v113; // r0
  char *v114; // r2
  char *v115; // r1
  _DWORD *v116; // r0
  _DWORD *v117; // r5
  char *v118; // r0
  char *v119; // r6
  int v120; // r3
  _DWORD *v121; // r0
  const char *v122; // r0
  _DWORD *v123; // r0
  const char *v124; // r0
  _DWORD *v125; // r0
  const char *v126; // r0
  _DWORD *v127; // r0
  const char *v128; // r0
  int v129; // r0
  _DWORD *v130; // r0
  _DWORD *v131; // r10
  unsigned int v132; // r8
  _DWORD *v133; // r0
  char *v134; // r2
  char *v135; // r1
  _DWORD *v136; // r0
  _DWORD *v137; // r7
  char *v138; // r0
  char *v139; // r5
  int v140; // r3
  _DWORD *v141; // r0
  const char *v142; // r0
  int v143; // r0
  int v144; // r0
  int v145; // r0
  int v146; // r0
  int v147; // r0
  int v148; // r0
  _DWORD *v149; // r0
  _DWORD *v150; // r7
  _DWORD *v151; // r0
  _DWORD *v152; // r2
  unsigned int v153; // r9
  _DWORD *v154; // r5
  _DWORD *v155; // r0
  unsigned int i; // [sp+Ch] [bp-130h]
  _DWORD *v157; // [sp+10h] [bp-12Ch]
  int v158; // [sp+10h] [bp-12Ch]
  char *v159; // [sp+14h] [bp-128h]
  char *v160; // [sp+14h] [bp-128h]
  char *v161; // [sp+14h] [bp-128h]
  _DWORD *v162; // [sp+18h] [bp-124h]
  char *s; // [sp+1Ch] [bp-120h]
  char *sa; // [sp+1Ch] [bp-120h]
  char *v165; // [sp+20h] [bp-11Ch]
  char *v166; // [sp+24h] [bp-118h]
  char *v167; // [sp+2Ch] [bp-110h]
  char *v168; // [sp+30h] [bp-10Ch]
  char v169[256]; // [sp+3Ch] [bp-100h] BYREF

  puts("begin");
  v0 = json_loadb(MES_system_Config_information, mes_system_config_file_length - 1, 0, (int)v169);
  MES_system_config_File = (int)v0;
  if ( v0 && !*v0 )
  {
    v3 = (_DWORD *)json_object_get(v0, "result");
    v4 = v3;
    if ( v3 && (v1 = *v3) == 0 )
    {
      v5 = (_DWORD *)json_object_get(v3, "version");
      if ( v5 && *v5 == 2 )
      {
        v6 = (char *)Mes_System_Config_File_Information;
        v7 = (const char *)json_string_value(v5);
        v6 += 28;
        strcpy(v6, v7);
        printf("MES system paticular config information version is: %s\n", v6);
        v8 = (_DWORD *)json_object_get(v4, "code");
        if ( v8 && *v8 == 2 )
        {
          v9 = (char *)Mes_System_Config_File_Information;
          v10 = (const char *)json_string_value(v8);
          v9 += 52;
          strcpy(v9, v10);
          printf("MES system paticular config information code is: %s\n", v9);
          v11 = (const char *)(Mes_System_Config_File_Information + 52);
          if ( !strcmp((const char *)(Mes_System_Config_File_Information + 52), "000000") )
          {
            v12 = (_DWORD *)json_object_get(v4, "msg");
            if ( v12 && *v12 == 2 )
            {
              v13 = (char *)Mes_System_Config_File_Information;
              v14 = (const char *)json_string_value(v12);
              v13 += 76;
              strcpy(v13, v14);
              printf("MES system paticular config information msg is: %s\n", v13);
              if ( *(_BYTE *)(Mes_System_Config_File_Information + 76) == 111
                && *(_BYTE *)(Mes_System_Config_File_Information + 77) == 107
                && (v15 = *(unsigned __int8 *)(Mes_System_Config_File_Information + 78),
                    !*(_BYTE *)(Mes_System_Config_File_Information + 78)) )
              {
                v16 = (_DWORD *)json_object_get(v4, "configs");
                v162 = v16;
                if ( v16 && *v16 == 1 )
                {
                  gConfigs_array_size = (int)json_array_size(v16);
                  printf("There are %d configs in result\n", gConfigs_array_size);
                  for ( i = v15; ; ++i )
                  {
                    if ( i >= gConfigs_array_size )
                    {
                      v1 = 1;
                      goto LABEL_4;
                    }
                    v17 = json_array_get(v162, i);
                    v157 = v17;
                    if ( !v17 || *v17 )
                    {
                      v1 = 0;
                      printf("Can't read out configs[%d] in result, error\n", i);
                      goto LABEL_4;
                    }
                    v18 = (char *)malloc(0x34u);
                    v19 = v18;
                    if ( !v18 )
                    {
                      v1 = 0;
                      printf("malloc for configs[%d] in result fail\n", i);
                      goto LABEL_4;
                    }
                    v20 = Mes_System_Config_File_Information;
                    *((_DWORD *)v18 + 12) = 0;
                    v21 = *(_DWORD *)(v20 + 100);
                    if ( v21 )
                    {
                      while ( *(_DWORD *)(v21 + 48) )
                        v21 = *(_DWORD *)(v21 + 48);
                      *(_DWORD *)(v21 + 48) = v18;
                    }
                    else
                    {
                      *(_DWORD *)(v20 + 100) = v18;
                      *((_DWORD *)v18 + 12) = 0;
                    }
                    v22 = (_DWORD *)json_object_get(v157, "miner_type");
                    if ( !v22 || *v22 != 2 )
                    {
                      v1 = 0;
                      printf("Can't find miner_type in configs[%d] in result\n", i);
                      goto LABEL_4;
                    }
                    v23 = (const char *)json_string_value(v22);
                    strcpy(v19, v23);
                    v24 = (_DWORD *)json_object_get(v157, "hw_info");
                    v25 = v24;
                    if ( !v24 || *v24 != 1 )
                    {
                      v1 = 0;
                      printf("Can't find hw_info in configs[%d] in result\n", i);
                      goto LABEL_4;
                    }
                    v26 = 0;
                    gHw_info_array_size = (int)json_array_size(v24);
LABEL_41:
                    if ( gHw_info_array_size > v26 )
                    {
                      v27 = json_array_get(v25, v26);
                      v28 = v27;
                      if ( !v27 || *v27 )
                      {
                        v1 = 0;
                        printf("Can't read out hw_info_array[%d] in configs[%d], error\n", v26, i);
                      }
                      else
                      {
                        v29 = malloc(0x64u);
                        v1 = (int)v29;
                        if ( v29 )
                        {
                          v30 = *((_DWORD *)v19 + 6);
                          v29[24] = 0;
                          if ( v30 )
                          {
                            while ( *(_DWORD *)(v30 + 96) )
                              v30 = *(_DWORD *)(v30 + 96);
                            *(_DWORD *)(v30 + 96) = v29;
                          }
                          else
                          {
                            *((_DWORD *)v19 + 6) = v29;
                          }
                          v31 = json_object_get(v28, "id");
                          *(_DWORD *)v1 = json_integer_value(v31);
                          v32 = (_DWORD *)json_object_get(v28, "board_name");
                          v33 = (const char *)json_string_value(v32);
                          strcpy((char *)(v1 + 4), v33);
                          v34 = (_DWORD *)json_object_get(v28, "asic_type");
                          v35 = (const char *)json_string_value(v34);
                          strcpy((char *)(v1 + 28), v35);
                          v36 = json_object_get(v28, "asic_num");
                          *(_DWORD *)(v1 + 52) = json_integer_value(v36);
                          v37 = json_object_get(v28, "voltage_domain");
                          *(_DWORD *)(v1 + 56) = json_integer_value(v37);
                          v38 = json_object_get(v28, "asic_num_per_voltage_domain");
                          *(_DWORD *)(v1 + 60) = json_integer_value(v38);
                          v39 = (_DWORD *)json_object_get(v28, "power_version");
                          v40 = v39;
                          if ( v39 && *v39 == 1 )
                          {
                            v41 = json_array_size(v39);
                            v42 = (_DWORD *)(v1 + 64);
                            v43 = 0;
                            gPower_version_array_size = (int)v41;
                            while ( 1 )
                            {
                              if ( v41 == (_DWORD *)v43 )
                              {
                                ++v26;
                                goto LABEL_41;
                              }
                              v44 = json_array_get(v40, v43);
                              if ( !v44 || *v44 != 3 )
                                break;
                              v45 = json_integer_value((int)v44);
                              *v42++ = v45;
                              APW_power_version[v43++] = v45;
                            }
                            v1 = 0;
                            printf(
                              "Can't find power_version_array[%d] in configs[%d]->hw_info[%d], error\n",
                              v43,
                              i,
                              v26);
                          }
                          else
                          {
                            v1 = 0;
                            printf("Can't find power_version in configs[%d]->hw_info[%d]\n", i, v26);
                          }
                        }
                        else
                        {
                          printf("malloc for configs[%d] in result fail\n", i);
                        }
                      }
                      goto LABEL_4;
                    }
                    v46 = (char *)json_object_get(v157, "rule");
                    v159 = v46;
                    if ( !v46 || *(_DWORD *)v46 )
                    {
                      v1 = 0;
                      printf("Can't find rule configs[%d] in result\n", i);
                      goto LABEL_4;
                    }
                    v47 = (_DWORD *)json_object_get(v46, "pattern");
                    v48 = v47;
                    if ( !v47 || *v47 != 1 )
                    {
                      v1 = 0;
                      printf("Can't find pattern in configs[%d]->rule\n", i);
                      goto LABEL_4;
                    }
                    v49 = 0;
                    v50 = json_array_size(v47);
                    HIWORD(v51) = 15;
                    gPattern_array_size = (int)v50;
                    s = v51;
                    while ( gPattern_array_size > v49 )
                    {
                      v52 = json_array_get(v48, v49);
                      v53 = v52;
                      if ( !v52 || *v52 )
                      {
                        v1 = 0;
                        printf("Can't find pattern[%d] in configs[%d]->rule, error\n", v49, i);
                        goto LABEL_4;
                      }
                      v54 = malloc(0x24u);
                      v55 = v54;
                      if ( !v54 )
                        goto LABEL_83;
                      v56 = *((_DWORD *)v19 + 7);
                      v54[8] = 0;
                      if ( v56 )
                      {
                        while ( *(_DWORD *)(v56 + 32) )
                          v56 = *(_DWORD *)(v56 + 32);
                        *(_DWORD *)(v56 + 32) = v54;
                      }
                      else
                      {
                        *((_DWORD *)v19 + 7) = v54;
                      }
                      v57 = json_object_get(v53, "id");
                      *v55 = json_integer_value(v57);
                      ++v49;
                      v58 = json_object_get(v53, "pattern_number");
                      v55[1] = json_integer_value(v58);
                      v59 = json_object_get(v53, s);
                      v55[2] = json_integer_value(v59);
                      v60 = json_object_get(v53, "most_hw_num");
                      v55[3] = json_integer_value(v60);
                      v61 = json_object_get(v53, "least_nonce_per_core");
                      v55[4] = json_integer_value(v61);
                      v62 = json_object_get(v53, "nonce_rate");
                      v55[5] = json_integer_value(v62);
                      v63 = json_object_get(v53, "min_nonce_rate_per_asic");
                      v55[6] = json_integer_value(v63);
                      v64 = json_object_get(v53, "midstate_number");
                      v55[7] = json_integer_value(v64);
                    }
                    v65 = (_DWORD *)json_object_get(v159, "asic_reg");
                    v66 = v65;
                    if ( !v65 || *v65 != 1 )
                    {
                      v1 = 0;
                      printf("Can't find asic_reg in configs[%d]->rule\n", i);
                      goto LABEL_4;
                    }
                    v67 = json_array_size(v65);
                    LOWORD(v69) = v68;
                    v70 = 0;
                    HIWORD(v69) = 15;
                    gAsic_reg_array_size = (int)v67;
                    sa = v69;
                    while ( gAsic_reg_array_size > v70 )
                    {
                      v71 = json_array_get(v66, v70);
                      v72 = v71;
                      if ( !v71 || *v71 )
                      {
                        v1 = 0;
                        printf("Can't find asic_reg[%d] in configs[%d]->rule, error\n", v70, i);
                        goto LABEL_4;
                      }
                      v73 = malloc(0x28u);
                      v74 = v73;
                      if ( !v73 )
                        goto LABEL_83;
                      v75 = *((_DWORD *)v19 + 8);
                      v73[9] = 0;
                      if ( v75 )
                      {
                        while ( *(_DWORD *)(v75 + 36) )
                          v75 = *(_DWORD *)(v75 + 36);
                        *(_DWORD *)(v75 + 36) = v73;
                      }
                      else
                      {
                        *((_DWORD *)v19 + 8) = v73;
                      }
                      v76 = json_object_get(v72, "id");
                      *v74 = json_integer_value(v76);
                      ++v70;
                      v77 = json_object_get(v72, "ccdly_sel");
                      v74[1] = json_integer_value(v77);
                      v78 = json_object_get(v72, sa);
                      v74[2] = json_integer_value(v78);
                      v79 = json_object_get(v72, "swpf_mode");
                      v74[3] = json_integer_value(v79);
                      v80 = json_object_get(v72, "pulse_mode");
                      v74[4] = json_integer_value(v80);
                      v81 = json_object_get(v72, "clk_sel");
                      v74[5] = json_integer_value(v81);
                      v82 = json_object_get(v72, "ro_relay_en");
                      v74[6] = json_integer_value(v82);
                      v83 = json_object_get(v72, "co_relay_en");
                      v74[7] = json_integer_value(v83);
                      v84 = json_object_get(v72, "diode_vdd_mux_sel");
                      v74[8] = json_integer_value(v84);
                    }
                    v85 = (_DWORD *)json_object_get(v159, "test_method");
                    v86 = v85;
                    if ( !v85 || *v85 != 1 )
                    {
                      v1 = 0;
                      printf("Can't find test_method in configs[%d]->rule\n", i);
                      goto LABEL_4;
                    }
                    v87 = 0;
                    gTest_method_array_size = (int)json_array_size(v85);
                    while ( gTest_method_array_size > v87 )
                    {
                      v88 = json_array_get(v86, v87);
                      v89 = v88;
                      if ( !v88 || *v88 )
                      {
                        v1 = 0;
                        printf("Can't find test_method[%d] in configs[%d]->rule, error\n", v87, i);
                        goto LABEL_4;
                      }
                      v90 = (char *)malloc(0x20u);
                      if ( !v90 )
                        goto LABEL_83;
                      v91 = *((_DWORD *)v19 + 9);
                      *((_DWORD *)v90 + 7) = 0;
                      if ( v91 )
                      {
                        while ( *(_DWORD *)(v91 + 28) )
                          v91 = *(_DWORD *)(v91 + 28);
                        *(_DWORD *)(v91 + 28) = v90;
                      }
                      else
                      {
                        *((_DWORD *)v19 + 9) = v90;
                      }
                      v92 = v90;
                      ++v87;
                      v93 = json_object_get(v89, "id");
                      *(_DWORD *)v92 = json_integer_value(v93);
                      v94 = (_DWORD *)json_object_get(v89, "method");
                      v95 = (const char *)json_string_value(v94);
                      strcpy(v92 + 4, v95);
                    }
                    v96 = (_DWORD *)json_object_get(v159, "test_loop");
                    v97 = v96;
                    if ( !v96 || *v96 != 1 )
                    {
                      v1 = 0;
                      printf("Can't find test_loop in configs[%d]->rule\n", i);
                      goto LABEL_4;
                    }
                    v98 = json_array_size(v96);
                    LOWORD(v100) = v99;
                    v101 = 0;
                    HIWORD(v100) = 15;
                    gTest_loop_array_size = (int)v98;
                    v160 = v100;
                    while ( v101 < gTest_loop_array_size )
                    {
                      v102 = json_array_get(v97, v101);
                      v103 = v102;
                      if ( !v102 || *v102 )
                      {
                        v110 = v101;
                        v1 = 0;
                        printf("Can't find test_loop[%d] in configs[%d]->rule, error\n", v110, i);
                        goto LABEL_4;
                      }
                      v104 = malloc(0x10u);
                      v105 = v104;
                      if ( !v104 )
                        goto LABEL_83;
                      v106 = *((_DWORD *)v19 + 10);
                      v104[3] = 0;
                      if ( v106 )
                      {
                        while ( *(_DWORD *)(v106 + 12) )
                          v106 = *(_DWORD *)(v106 + 12);
                        *(_DWORD *)(v106 + 12) = v104;
                      }
                      else
                      {
                        *((_DWORD *)v19 + 10) = v104;
                      }
                      v107 = json_object_get(v103, "id");
                      *v105 = json_integer_value(v107);
                      ++v101;
                      v108 = json_object_get(v103, "frequency");
                      v105[1] = json_integer_value(v108);
                      v109 = json_object_get(v103, v160);
                      v105[2] = json_integer_value(v109);
                    }
                    v111 = (char *)json_object_get(v157, "test_config");
                    v161 = v111;
                    if ( !v111 || *(_DWORD *)v111 != 1 )
                    {
                      v1 = 0;
                      printf("Can't find test_config in configs[%d] in result\n", i);
                      goto LABEL_4;
                    }
                    v112 = 0;
                    v113 = json_array_size(v111);
                    HIWORD(v114) = 15;
                    HIWORD(v115) = 15;
                    v167 = v114;
                    gTest_config_array_size = (int)v113;
                    v168 = v115;
LABEL_134:
                    if ( v112 < gTest_config_array_size )
                      break;
                  }
                  v116 = json_array_get(v161, v112);
                  v117 = v116;
                  if ( !v116 || *v116 )
                  {
                    v1 = 0;
                    printf("Can't find test_config[%d] in configs[%d], error\n", v112, i);
                  }
                  else
                  {
                    v118 = (char *)malloc(0x6Cu);
                    v119 = v118;
                    if ( !v118 )
                    {
LABEL_83:
                      v1 = 0;
                      goto LABEL_4;
                    }
                    v120 = *((_DWORD *)v19 + 11);
                    *((_DWORD *)v118 + 26) = 0;
                    if ( v120 )
                    {
                      while ( *(_DWORD *)(v120 + 104) )
                        v120 = *(_DWORD *)(v120 + 104);
                      *(_DWORD *)(v120 + 104) = v118;
                    }
                    else
                    {
                      *((_DWORD *)v19 + 11) = v118;
                    }
                    v121 = (_DWORD *)json_object_get(v117, "hardware_version");
                    v122 = (const char *)json_string_value(v121);
                    strcpy(v119, v122);
                    v123 = (_DWORD *)json_object_get(v117, v167);
                    v124 = (const char *)json_string_value(v123);
                    strcpy(v119 + 24, v124);
                    v125 = (_DWORD *)json_object_get(v117, v168);
                    v126 = (const char *)json_string_value(v125);
                    strcpy(v119 + 48, v126);
                    v127 = (_DWORD *)json_object_get(v117, "ft_vesrion");
                    v128 = (const char *)json_string_value(v127);
                    strcpy(v119 + 72, v128);
                    v129 = json_object_get(v117, "bin");
                    *((_DWORD *)v119 + 24) = json_integer_value(v129);
                    v130 = (_DWORD *)json_object_get(v117, "data");
                    v131 = v130;
                    if ( !v130 || *v130 != 1 )
                    {
                      printf("Can't find data in configs[%d]->test_config[%d]\n", i, v112);
                      goto LABEL_83;
                    }
                    v132 = 0;
                    v133 = json_array_size(v130);
                    HIWORD(v134) = 15;
                    HIWORD(v135) = 15;
                    v165 = v134;
                    gData_array_size = (int)v133;
                    v166 = v135;
                    v158 = v112;
                    while ( 1 )
                    {
                      if ( v132 >= gData_array_size )
                      {
                        v112 = v158 + 1;
                        goto LABEL_134;
                      }
                      v136 = json_array_get(v131, v132);
                      v137 = v136;
                      if ( !v136 || *v136 )
                      {
                        v1 = 0;
                        printf("Can't find data[%d] in configs[%d]->test_config[%d], error\n", v132, i, v158);
                        goto LABEL_4;
                      }
                      v138 = (char *)malloc(0x60u);
                      v139 = v138;
                      if ( !v138 )
                        goto LABEL_83;
                      v140 = *((_DWORD *)v119 + 25);
                      *((_DWORD *)v138 + 23) = 0;
                      if ( v140 )
                      {
                        while ( *(_DWORD *)(v140 + 92) )
                          v140 = *(_DWORD *)(v140 + 92);
                        *(_DWORD *)(v140 + 92) = v138;
                      }
                      else
                      {
                        *((_DWORD *)v119 + 25) = v138;
                      }
                      v141 = (_DWORD *)json_object_get(v137, "version");
                      v142 = (const char *)json_string_value(v141);
                      strcpy(v139, v142);
                      v143 = json_object_get(v137, v165);
                      *((_DWORD *)v139 + 6) = json_integer_value(v143);
                      v144 = json_object_get(v137, v166);
                      *((_DWORD *)v139 + 7) = json_integer_value(v144);
                      v145 = json_object_get(v137, "test_method_id");
                      *((_DWORD *)v139 + 8) = json_integer_value(v145);
                      v146 = json_object_get(v137, "voltage_accuracy");
                      *((_DWORD *)v139 + 9) = json_integer_value(v146);
                      v147 = json_object_get(v137, "fan_speed");
                      *((_DWORD *)v139 + 10) = json_integer_value(v147);
                      v148 = json_object_get(v137, "pre_open_core_voltage");
                      *((_DWORD *)v139 + 22) = json_integer_value(v148);
                      v149 = (_DWORD *)json_object_get(v137, "test_loop_id");
                      v150 = v149;
                      if ( !v149 || *v149 != 1 )
                        break;
                      v151 = json_array_size(v149);
                      v152 = v151;
                      if ( (unsigned int)v151 > 0xA )
                      {
                        printf("Test_loop_id_array_size is %d, bigger than %d\n", v151, 10);
                        v1 = 0;
                        goto LABEL_4;
                      }
                      *((_DWORD *)v139 + 21) = v151;
                      v153 = 0;
                      v154 = v139 + 44;
                      while ( (_DWORD *)v153 != v152 )
                      {
                        v155 = json_array_get(v150, v153);
                        if ( !v155 || *v155 != 3 )
                        {
                          v1 = 0;
                          printf(
                            "Can't find test_loop_id[%d] in configs[%d]->test_config[%d]->data[%d], error\n",
                            v153,
                            i,
                            v158,
                            v132);
                          goto LABEL_4;
                        }
                        ++v153;
                        *v154++ = json_integer_value((int)v155);
                      }
                      ++v132;
                    }
                    v1 = 0;
                    printf("Can't find test_loop_id in configs[%d]->test_config[%d]->data[%d]\n", i, v158, v132);
                  }
                }
                else
                {
                  v1 = 0;
                  puts("Can't find configs in result");
                }
              }
              else
              {
                v1 = 0;
                printf(
                  "Get all config information fail. msg: %s\n",
                  (const char *)(Mes_System_Config_File_Information + 76));
              }
            }
            else
            {
              v1 = 0;
              puts("Can't find msg in result");
            }
          }
          else
          {
            printf("Get all config information fail. code: %s\n", v11);
          }
        }
        else
        {
          v1 = 0;
          puts("Can't find code in result");
        }
      }
      else
      {
        v1 = 0;
        puts("Can't find version in result");
      }
    }
    else
    {
      v1 = 0;
      puts("Can't find result in MES system paticular config information");
    }
  }
  else
  {
    v1 = 0;
    puts("The received MES system all config information is not in JSON format");
  }
LABEL_4:
  puts("done");
  return v1;
}
