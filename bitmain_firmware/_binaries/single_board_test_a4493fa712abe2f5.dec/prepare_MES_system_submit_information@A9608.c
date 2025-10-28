int __fastcall prepare_MES_system_submit_information(int a1)
{
  int v1; // r4
  _DWORD *file; // r0
  _DWORD *v4; // r8
  _DWORD *v6; // r0
  _DWORD *v7; // r4
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r10
  _DWORD *v11; // r0
  _DWORD *v12; // r4
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r6
  _DWORD *v19; // r0
  _DWORD *v20; // r6
  _DWORD *v21; // r0
  _DWORD *v22; // r6
  _DWORD *v23; // r0
  _DWORD *v24; // r0
  int v25; // r5
  int chip_bin; // r2
  _DWORD *v27; // r0
  _DWORD *v28; // r0
  __int64 v29; // r2
  int v30; // r1
  _DWORD *v31; // r0
  int v32; // r4
  _DWORD *v33; // r0
  _DWORD *v34; // r0
  const char *v35; // r1
  _DWORD *v36; // r0
  unsigned int i; // r10
  _DWORD *v38; // r0
  _DWORD *v39; // r4
  _DWORD *v40; // r0
  _DWORD *v41; // r6
  _DWORD *v42; // r0
  unsigned int v43; // r7
  char *v44; // r10
  _DWORD *v45; // r0
  _DWORD *v46; // r5
  _DWORD *v47; // r0
  _DWORD *v48; // r0
  _DWORD *v49; // r4
  _BYTE *v50; // r0
  const char *v51; // r0
  _DWORD *v52; // r0
  _DWORD *v53; // r0
  _DWORD *v54; // r4
  _BYTE *v55; // r0
  const char *v56; // r0
  _DWORD *v57; // r0
  _DWORD *v58; // r9
  _DWORD *v59; // r11
  unsigned int j; // r4
  _DWORD *v61; // r0
  _DWORD *v62; // r0
  int v63; // r5
  unsigned int v64; // r1
  unsigned int v65; // r3
  _DWORD *v66; // r0
  _DWORD *v67; // r4
  _DWORD *v68; // r0
  __int64 v69; // r2
  _DWORD *v70; // r0
  _DWORD *v71; // r0
  int v72; // r3
  char *v73; // r1
  _DWORD *v74; // r0
  int v75; // r10
  _DWORD *v76; // r0
  _DWORD *v77; // r4
  unsigned int v78; // r9
  _DWORD *v79; // r5
  _DWORD *v80; // r0
  _QWORD *v81; // r0
  _DWORD *v82; // r5
  unsigned int *v83; // r3
  unsigned int v84; // r2
  unsigned int *v85; // r3
  unsigned int v86; // r2
  unsigned int v87; // r2
  char *v89; // r4
  int v90; // r5
  char *v91; // r1
  __int64 v92; // kr08_8
  void *v93; // r7
  int v94; // r3
  unsigned int v95; // r5
  _DWORD *v96; // r6
  _DWORD *v97; // r0
  int v98; // r2
  unsigned int *v99; // r3
  unsigned int v100; // r2
  int v101; // r8
  void *v102; // r0
  int v103; // r2
  _DWORD *v104; // r0
  _DWORD *v105; // r7
  _DWORD *v106; // r10
  unsigned int k; // r11
  _DWORD *v108; // r0
  _DWORD *v109; // r4
  _DWORD *v110; // r0
  _DWORD *v111; // r5
  _DWORD *v112; // r0
  _DWORD *v113; // r0
  _DWORD *v114; // r4
  const char *v115; // r0
  _BYTE *v116; // r0
  const char *v117; // r0
  _DWORD *v118; // [sp+4h] [bp-170h]
  int v119; // [sp+8h] [bp-16Ch]
  _BYTE *v120; // [sp+Ch] [bp-168h]
  unsigned int v121; // [sp+10h] [bp-164h]
  unsigned int v122; // [sp+18h] [bp-15Ch]
  _DWORD *v123; // [sp+1Ch] [bp-158h]
  _DWORD *v124; // [sp+24h] [bp-150h]
  unsigned int v125; // [sp+2Ch] [bp-148h]
  _DWORD *v126; // [sp+30h] [bp-144h]
  char *v127; // [sp+34h] [bp-140h]
  _DWORD *v128; // [sp+38h] [bp-13Ch]
  int v129; // [sp+3Ch] [bp-138h]
  _DWORD *v130; // [sp+4Ch] [bp-128h]
  _DWORD *v131; // [sp+50h] [bp-124h]
  _DWORD *v132; // [sp+54h] [bp-120h]
  char v133[12]; // [sp+68h] [bp-10Ch] BYREF
  _BYTE v134[256]; // [sp+74h] [bp-100h] BYREF

  v1 = 0;
  memset(v133, 0, 10);
  memset(submit_result_handshake_information, 0, 0x800u);
  file = json_load_file("/mnt/card/MES_system_submit_result_template.ini", 0, (int)v134);
  v4 = file;
  if ( !file )
  {
    printf("Can't read out %s file.\n", "/mnt/card/MES_system_submit_result_template.ini");
    return 0;
  }
  if ( *file )
  {
    printf("Can't read out %s file.\n", "/mnt/card/MES_system_submit_result_template.ini");
    goto LABEL_4;
  }
  json_dumps(file, 0);
  v6 = (_DWORD *)json_object_get(v4, "params");
  v7 = v6;
  if ( !v6 || *v6 )
  {
    printf("Can't read out params in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
    v1 = 0;
    goto LABEL_4;
  }
  v8 = (_DWORD *)json_object_get(v6, "software_commit_id");
  if ( !v8 || *v8 != 2 )
  {
    printf("Can't read out software_commit_id in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
    v1 = 0;
    goto LABEL_4;
  }
  json_string_set(v8, "de4596f922f83549c2a74d28d2a7c6eb5979d316");
  v9 = (_DWORD *)json_object_get(v7, "datas");
  v10 = v9;
  if ( !v9 || *v9 != 1 )
  {
    printf("Can't read out datas in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
    v1 = 0;
    goto LABEL_4;
  }
  v128 = json_array_size(v9);
  if ( !v128 )
    goto LABEL_196;
  v119 = 31;
  v129 = ((_DWORD)&loc_40E46 + 2) * a1;
  v122 = 0;
  v120 = &gHistory_Result[((_DWORD)&loc_40E46 + 2) * a1];
  v127 = &gHistory_Result[((_DWORD)&loc_40E46 + 2) * a1 + 265784];
  v118 = v4;
  v126 = v10;
  while ( 2 )
  {
    v11 = json_array_get(v126, v122);
    v12 = v11;
    if ( !v11 || *v11 )
    {
      v4 = v118;
      v1 = 0;
      printf("Can't read out datas_array[%d] in datas\n", v122);
      break;
    }
    v13 = (_DWORD *)json_object_get(v11, "miner_type");
    if ( !v13 || *v13 != 2 )
    {
      v4 = v118;
      v1 = 0;
      printf("Can't read out miner_type in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
      break;
    }
    json_string_set(v13, (char *)(MES2Local_Config_Information + 16));
    v14 = (_DWORD *)json_object_get(v12, "board_name");
    if ( !v14 || *v14 != 2 )
    {
      v4 = v118;
      v1 = 0;
      printf("Can't read out board_name in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
      break;
    }
    json_string_set(v14, (char *)(MES2Local_Config_Information + 32));
    v15 = (_DWORD *)json_object_get(v12, "sn");
    if ( !v15 || *v15 != 2 )
    {
      v4 = v118;
      v1 = 0;
      printf("Can't read out sn in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
      break;
    }
    json_string_set(v15, dword_3B57DD);
    v16 = (_DWORD *)json_object_get(v12, "order_id");
    if ( !v16 || *v16 != 2 )
    {
      v4 = v118;
      v1 = 0;
      printf("Can't read out order_id in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
      break;
    }
    json_string_set(v16, (char *)qr_code);
    v17 = (_DWORD *)json_object_get(v12, "hardware_version");
    v18 = v17;
    if ( !v17 || *v17 != 2 )
    {
      v4 = v118;
      v1 = 0;
      printf("Can't read out hardware_version in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
      break;
    }
    memset(v133, 48, 10);
    sub_CEABC(v133);
    json_string_set(v18, v133);
    v19 = (_DWORD *)json_object_get(v12, "bom_version");
    v20 = v19;
    if ( !v19 || *v19 != 2 )
    {
      v4 = v118;
      v1 = 0;
      printf("Can't read out bom_version in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
      break;
    }
    memset(v133, 48, 10);
    sub_CEA80(3, v133);
    json_string_set(v20, v133);
    v21 = (_DWORD *)json_object_get(v12, "chip_technology");
    v22 = v21;
    if ( !v21 || *v21 != 2 )
    {
      v4 = v118;
      v1 = 0;
      printf("Can't read out chip_technology in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
      break;
    }
    memset(v133, 48, 10);
    sub_CEA80(5, v133);
    json_string_set(v22, v133);
    v23 = (_DWORD *)json_object_get(v12, "ft_version");
    if ( !v23 || *v23 != 2 )
    {
      v4 = v118;
      v1 = 0;
      printf("Can't read out ft_version in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
      break;
    }
    json_string_set(v23, src);
    v24 = (_DWORD *)json_object_get(v12, "bin");
    v25 = (int)v24;
    if ( !v24 || *v24 != 3 )
    {
      v4 = v118;
      v1 = 0;
      printf("Can't read out bin in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
      break;
    }
    chip_bin = get_chip_bin((int)qr_code);
    if ( chip_bin == 255 )
    {
      v4 = v118;
      v1 = 0;
      printf("chip bin is BIN%d, error\n", 255);
      break;
    }
    json_integer_set(v25, (unsigned __int8)chip_bin);
    v27 = (_DWORD *)json_object_get(v12, "rule_version");
    if ( !v27 || *v27 != 2 )
    {
      v4 = v118;
      v1 = 0;
      printf("Can't read out rule_version in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
      break;
    }
    json_string_set(v27, (char *)(MES2Local_Config_Information + 442));
    v28 = (_DWORD *)json_object_get(v12, "rule_level");
    if ( !v28 || *v28 != 3 )
    {
      v4 = v118;
      v1 = 0;
      printf("Can't read out rule_level in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
      break;
    }
    HIDWORD(v29) = v120 + 264192;
    LODWORD(v29) = *((_DWORD *)v120 + 4);
    v30 = (unsigned __int8)v120[265796];
    if ( v30 == 240 )
      LODWORD(v29) = v29 + 100;
    else
      v25 = 100;
    if ( v30 == 240 )
      HIDWORD(v29) = 0;
    else
      LODWORD(v29) = v29 + v25 * v30;
    if ( v30 != 240 )
      HIDWORD(v29) = 0;
    json_integer_set((int)v28, v29);
    v31 = (_DWORD *)json_object_get(v12, "rule_result");
    v123 = v31;
    if ( !v31 || (v32 = *v31) != 0 )
    {
      v4 = v118;
      v1 = 0;
      printf("Can't read out rule_result in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
      break;
    }
    v33 = (_DWORD *)json_object_get(v31, "result");
    if ( !v33 || (unsigned int)(*v33 - 5) > 1 )
    {
LABEL_202:
      v4 = v118;
      v1 = 0;
      printf("Can't read out result in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
      break;
    }
    if ( v120[265796] )
    {
      if ( v120[265796] == 1 )
      {
        v32 = 1;
        v119 &= ~1u;
        puts("LOOSE_STANDARD: ASIC_OK, fail");
      }
      else
      {
        v119 &= 0xFFFFFFFC;
        puts("PATTERN NG: ASIC_OK, NONCE_RATE_OK, fail");
      }
    }
    else
    {
      v32 = 1;
      puts("STRICT_STANDARD: ASIC_OK, NONCE_RATE_OK");
    }
    if ( !v120[2] )
    {
      v32 = (unsigned __int8)v120[2];
      v119 &= ~4u;
      puts("EEPROM_OK, fail");
    }
    if ( *(_BYTE *)(MES2Local_Config_Information + 88) && !v120[3] )
    {
      v119 &= ~8u;
      puts("PIC_SENSOR_OK, fail");
      if ( !*(_BYTE *)(MES2Local_Config_Information + 89) || v120[4] )
        goto LABEL_66;
      goto LABEL_132;
    }
    if ( *(_BYTE *)(MES2Local_Config_Information + 89) && !v120[4] )
    {
LABEL_132:
      v119 &= ~0x10u;
      puts("ASIC_SENSOR_OK, fail");
      goto LABEL_66;
    }
    if ( v32 )
    {
      sub_1F9B0(v123, dword_12A260);
      puts("set result as true");
      goto LABEL_67;
    }
LABEL_66:
    sub_1F9B0(v123, dword_12A268);
    puts("set result as false");
LABEL_67:
    printf("test_result: 0x%08x\n", v119);
    v34 = (_DWORD *)json_object_get(v123, "result");
    if ( !v34 || (unsigned int)(*v34 - 5) > 1 )
      goto LABEL_202;
    if ( *v34 == 5 )
      v35 = "true";
    else
      v35 = "false";
    printf("result: %s\n", v35, "false", "true");
    v36 = (_DWORD *)json_object_get(v123, "sensors");
    v124 = v36;
    if ( !v36 || *v36 != 1 )
    {
      v4 = v118;
      v1 = 0;
      printf("Can't read out sensors in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
      break;
    }
    v1 = *(unsigned __int8 *)(MES2Local_Config_Information + 88);
    if ( !*(_BYTE *)(MES2Local_Config_Information + 88)
      && json_array_remove(v36, *(unsigned __int8 *)(MES2Local_Config_Information + 88)) )
    {
      v4 = v118;
      printf("Can't remove pic sensors template %s\n", "/mnt/card/MES_system_submit_result_template.ini");
      break;
    }
    v1 = *(unsigned __int8 *)(MES2Local_Config_Information + 89);
    if ( !*(_BYTE *)(MES2Local_Config_Information + 89) && json_array_remove(v124, 1u) )
    {
      v4 = v118;
      printf("Can't remove asic sensors template %s\n", "/mnt/card/MES_system_submit_result_template.ini");
      break;
    }
    v130 = json_array_size(v124);
    if ( v130 )
    {
      for ( i = 0; (_DWORD *)i != v130; ++i )
      {
        v38 = json_array_get(v124, i);
        v39 = v38;
        if ( !v38 || *v38 )
        {
          v4 = v118;
          v1 = 0;
          printf("Can't read out sensors[%d] in sensor\n", i);
          goto LABEL_4;
        }
        v40 = (_DWORD *)json_object_get(v38, "name");
        v41 = v40;
        if ( !v40 || *v40 != 2 )
        {
          v4 = v118;
          v1 = 0;
          printf("Can't read out name in sensors[%d]\n", i);
          goto LABEL_4;
        }
        v42 = (_DWORD *)json_object_get(v39, "datas");
        v131 = v42;
        if ( !v42 || *v42 != 1 )
        {
          v4 = v118;
          v1 = 0;
          printf("Can't read out datas in sensors_array[%d]\n", i);
          goto LABEL_4;
        }
        v132 = json_array_size(v42);
        if ( v132 )
        {
          v121 = i;
          v43 = 0;
          v125 = 0;
          v44 = v127;
          do
          {
            v45 = json_array_get(v131, v43);
            v46 = v45;
            if ( !v45 || *v45 )
            {
              v4 = v118;
              v1 = 0;
              printf("Can't read out sensors[%d]->datas[%d]\n", v121, v43);
              goto LABEL_4;
            }
            v47 = (_DWORD *)json_object_get(v45, "id");
            if ( !v47 || *v47 != 3 )
            {
              v4 = v118;
              v1 = 0;
              printf("Can't read out id in sensors[%d]->datas[%d]\n", v121, v43);
              goto LABEL_4;
            }
            json_integer_set((int)v47, __SPAIR64__(v125, v43));
            v48 = (_DWORD *)json_object_get(v46, "type");
            v49 = v48;
            if ( !v48 || *v48 != 2 )
            {
              v4 = v118;
              v1 = 0;
              printf("Can't read out type in sensors[%d]->datas[%d]\n", v121, v43);
              goto LABEL_4;
            }
            v50 = json_string_value(v41);
            if ( *v50 == 80 && v50[1] == 73 && v50[2] == 67 && !v50[3] )
              json_string_set(v49, byte_3B5950);
            v51 = (const char *)json_string_value(v41);
            if ( !strcmp(v51, "CHIP") )
              json_string_set(v49, byte_3B5950);
            v52 = (_DWORD *)json_object_get(v46, "code");
            if ( !v52 || *v52 != 2 )
            {
              v4 = v118;
              v1 = 0;
              printf("Can't read out code in sensors[%d]->datas[%d]\n", v121, v43);
              goto LABEL_4;
            }
            json_string_set(v52, "0");
            v53 = (_DWORD *)json_object_get(v46, "msg");
            v54 = v53;
            if ( !v53 || *v53 != 2 )
            {
              v4 = v118;
              v1 = 0;
              printf("Can't read out msg in sensors[%d]->datas[%d]\n", v121, v43);
              goto LABEL_4;
            }
            v55 = json_string_value(v41);
            if ( *v55 == 80 && v55[1] == 73 && v55[2] == 67 && !v55[3] )
            {
              if ( (v119 & 8) != 0 )
                json_string_set(v54, "ok");
              else
                json_string_set(v54, "ng");
            }
            v56 = (const char *)json_string_value(v41);
            if ( !strcmp(v56, "ASIC") )
            {
              if ( (v119 & 0x10) != 0 )
                json_string_set(v54, "ok");
              else
                json_string_set(v54, "ng");
            }
            v57 = (_DWORD *)json_object_get(v46, "values");
            v58 = v57;
            if ( !v57 || *v57 != 1 )
            {
              v4 = v118;
              v1 = 0;
              printf("Can't read out values in sensors[%d]->datas[%d]\n", v121, v43);
              goto LABEL_4;
            }
            v59 = json_array_size(v57);
            if ( v59 )
            {
              for ( j = 0; (_DWORD *)j != v59; ++j )
              {
                v62 = json_array_get(v58, j);
                v63 = (int)v62;
                if ( !v62 || *v62 != 3 )
                {
                  v64 = j;
                  v4 = v118;
                  v1 = 0;
                  printf("Can't find values[%d] in sensors[%d]->datas[%d]\n", v64, v121, v43);
                  goto LABEL_4;
                }
                v61 = json_string_value(v41);
                if ( *(_BYTE *)v61 == 80
                  && *((_BYTE *)v61 + 1) == 73
                  && *((_BYTE *)v61 + 2) == 67
                  && !*((_BYTE *)v61 + 3) )
                {
                  json_integer_set(v63, v44[8]);
                  v61 = json_string_value(v41);
                }
                if ( !strcmp((const char *)v61, "CHIP") )
                {
                  if ( j )
                  {
                    if ( j == 1 )
                      json_integer_set(v63, v44[4]);
                  }
                  else
                  {
                    json_integer_set(v63, *v44);
                  }
                }
              }
            }
            ++v44;
            v65 = (__PAIR64__(v125, v43++) + 1) >> 32;
            v125 = v65;
          }
          while ( (unsigned int)v132 > v43 );
          i = v121;
        }
      }
    }
    v66 = (_DWORD *)json_object_get(v123, "pattern");
    v67 = v66;
    if ( !v66 || *v66 )
    {
      v4 = v118;
      v1 = 0;
      printf("Can't read out pattern in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
      break;
    }
    v68 = (_DWORD *)json_object_get(v66, "nonce_rate");
    if ( !v68 || *v68 != 3 )
    {
      v4 = v118;
      v1 = 0;
      puts("Can't read out nonce_rate in pattern");
      break;
    }
    HIDWORD(v69) = 0;
    LODWORD(v69) = (unsigned int)(*((double *)v120 + 1) * 100.0);
    json_integer_set((int)v68, v69);
    v70 = (_DWORD *)json_object_get(v67, "code");
    if ( !v70 || *v70 != 2 )
    {
      v4 = v118;
      v1 = 0;
      puts("Can't read out code in pattern");
      break;
    }
    json_string_set(v70, "0");
    v71 = (_DWORD *)json_object_get(v67, "msg");
    if ( !v71 || *v71 != 2 )
    {
      v4 = v118;
      v1 = 0;
      puts("Can't read out msg in pattern");
      break;
    }
    v72 = (unsigned __int8)v120[265796];
    if ( v72 == 240 )
      LOWORD(v73) = -32596;
    else
      LOWORD(v73) = 21876;
    if ( v72 == 240 )
      HIWORD(v73) = 15;
    else
      HIWORD(v73) = 16;
    json_string_set(v71, v73);
    v74 = (_DWORD *)json_object_get(v67, "asic_number");
    v75 = (int)v74;
    if ( !v74 || *v74 != 3 )
    {
      v4 = v118;
      v1 = 0;
      puts("Can't read out asic_number in pattern");
      break;
    }
    json_integer_set((int)v74, *(unsigned int *)(MES2Local_Config_Information + 64));
    v76 = (_DWORD *)json_object_get(v67, "asic_nonces");
    v77 = v76;
    if ( !v76 || *v76 != 1 )
    {
      v4 = v118;
      v1 = 0;
      puts("Can't read out asic_nonces in pattern");
      break;
    }
    v78 = 0;
    v79 = json_array_size(v76);
    while ( (_DWORD *)v78 != v79 )
    {
      v80 = json_array_get(v77, v78);
      if ( !v80 || *v80 != 3 )
      {
        v4 = v118;
        v1 = 0;
        printf("Can't find asic_nonces[%d] in pattern\n", v78);
        goto LABEL_4;
      }
      ++v78;
    }
    while ( v78 < (unsigned int)json_integer_value(v75) )
    {
      v81 = json_integer(v78);
      v82 = v81;
      if ( !v81 )
        goto LABEL_173;
      if ( *((_DWORD *)v81 + 1) != -1 )
      {
        v83 = (unsigned int *)v81 + 1;
        do
          v84 = __ldrex(v83);
        while ( __strex(v84 + 1, v83) );
        __dmb(0xBu);
      }
      if ( *v77 != 1 || v81 == (_QWORD *)v77 )
      {
        if ( *((_DWORD *)v81 + 1) == -1 )
          goto LABEL_173;
        v85 = (unsigned int *)v81 + 1;
        __dmb(0xBu);
        do
        {
          v86 = __ldrex(v85);
          v87 = v86 - 1;
        }
        while ( __strex(v87, v85) );
        goto LABEL_171;
      }
      v92 = *((_QWORD *)v77 + 1);
      v93 = (void *)v77[4];
      if ( HIDWORD(v92) + 1 <= (unsigned int)v92 )
        goto LABEL_206;
      v101 = 2 * v92;
      if ( 2 * (int)v92 < (unsigned int)(v92 + 1) )
        v101 = v92 + 1;
      if ( 4 * v101 )
      {
        v102 = off_12A258(4 * v101);
        if ( v102 )
        {
          v103 = v77[3];
          v77[2] = v101;
          v77[4] = v102;
          memcpy(v102, v93, 4 * v103);
          jsonp_free(v93);
          v93 = (void *)v77[4];
LABEL_206:
          if ( v93 )
          {
            v94 = v77[3];
            *((_DWORD *)v93 + v94) = v82;
            v77[3] = v94 + 1;
            goto LABEL_173;
          }
        }
      }
      if ( v82[1] == -1 )
        goto LABEL_173;
      v99 = v82 + 1;
      __dmb(0xBu);
      do
      {
        v100 = __ldrex(v99);
        v87 = v100 - 1;
      }
      while ( __strex(v87, v99) );
LABEL_171:
      if ( !v87 )
        json_delete(v82);
LABEL_173:
      ++v78;
    }
    v95 = 0;
    v96 = json_array_size(v77);
    while ( (_DWORD *)v95 != v96 )
    {
      v97 = json_array_get(v77, v95);
      if ( !v97 || (v98 = v129 + 4 * v95 + 262184, *v97 != 3) )
      {
        v4 = v118;
        v1 = 0;
        printf("Can't find asic_nonces[%d] in pattern\n", v95);
        goto LABEL_4;
      }
      ++v95;
      json_integer_set((int)v97, *(unsigned int *)&gHistory_Result[v98]);
    }
    v104 = (_DWORD *)json_object_get(v123, "commons");
    v105 = v104;
    if ( v104 && *v104 == 1 )
    {
      v106 = json_array_size(v104);
      for ( k = 0; (_DWORD *)k != v106; ++k )
      {
        v108 = json_array_get(v105, k);
        v109 = v108;
        if ( !v108 || *v108 )
        {
          v4 = v118;
          v1 = 0;
          printf("Can't read out commons[%d]\n", k);
          goto LABEL_4;
        }
        v110 = (_DWORD *)json_object_get(v108, "name");
        v111 = v110;
        if ( !v110 || *v110 != 2 )
        {
          v4 = v118;
          v1 = 0;
          printf("Can't read out name in commons[%d]\n", k);
          goto LABEL_4;
        }
        v112 = (_DWORD *)json_object_get(v109, "code");
        if ( !v112 || *v112 != 2 )
        {
          v4 = v118;
          v1 = 0;
          printf("Can't read out code in commons[%d]\n", k);
          goto LABEL_4;
        }
        json_string_set(v112, "0");
        v113 = (_DWORD *)json_object_get(v109, "msg");
        v114 = v113;
        if ( !v113 || *v113 != 2 )
        {
          v4 = v118;
          v1 = 0;
          printf("Can't read out msg in commons[%d]\n", k);
          goto LABEL_4;
        }
        v115 = (const char *)json_string_value(v111);
        if ( !strcmp(v115, "eeprom") )
        {
          if ( (v119 & 4) != 0 )
            json_string_set(v114, "ok");
          else
            json_string_set(v114, "ng");
        }
        v116 = json_string_value(v111);
        if ( *v116 == 112 && v116[1] == 105 && v116[2] == 99 && !v116[3] )
        {
          if ( gHistory_Result[((_DWORD)&loc_40E46 + 2) * dword_3B57B0 + 6] )
            json_string_set(v114, "ok");
          else
            json_string_set(v114, "ng");
        }
        v117 = (const char *)json_string_value(v111);
        if ( !strcmp(v117, "power") )
        {
          if ( gHistory_Result[((_DWORD)&loc_40E46 + 2) * dword_3B57B0 + 5] )
            json_string_set(v114, "ok");
          else
            json_string_set(v114, "ng");
        }
      }
      if ( v128 != (_DWORD *)++v122 )
        continue;
      v4 = v118;
LABEL_196:
      v89 = json_dumps(v4, 0);
      v90 = strlen(v89);
      v91 = v89;
      mes_system_submit_result_file_length = v90;
      v1 = 1;
      memcpy(submit_result_handshake_information, v91, v90);
      printf("size: %d, content: %s\n", v90, submit_result_handshake_information);
    }
    else
    {
      v4 = v118;
      v1 = 0;
      printf("Can't read out commons in %s\n", "/mnt/card/MES_system_submit_result_template.ini");
    }
    break;
  }
LABEL_4:
  if ( v4[1] != -1 )
    sub_A8E50(v4);
  return v1;
}
