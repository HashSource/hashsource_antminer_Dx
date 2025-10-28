int __fastcall prepare_MES_system_handshake_information(int a1)
{
  _DWORD *file; // r0
  _DWORD *v4; // r4
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r5
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  char *v10; // r0
  _DWORD *v11; // r0
  char *v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r5
  _DWORD *v19; // r0
  _DWORD *v20; // r5
  _DWORD *v21; // r0
  _DWORD *v22; // r6
  _DWORD *v23; // r0
  _DWORD *v24; // r0
  char *v25; // r1
  char *v26; // r6
  int v27; // r5
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  int v33; // r7
  unsigned __int8 chip_bin; // r0
  _DWORD *v35; // r0
  _DWORD *v36; // r0
  _DWORD *v37; // r0
  char *v38; // r6
  _DWORD v39[3]; // [sp+0h] [bp-10Ch] BYREF
  _BYTE v40[256]; // [sp+Ch] [bp-100h] BYREF

  memset(v39, 0, 10);
  memset(download_configuration_handshake_information, 0, 0xC8u);
  if ( !a1 )
  {
    file = json_load_file("/mnt/card/MES_system_get_all_config_template.ini", 0, (int)v40);
    v4 = file;
    if ( !file )
    {
      printf("Can't read out %s file.\n", "/mnt/card/MES_system_get_all_config_template.ini");
      goto LABEL_5;
    }
    if ( *file )
    {
      printf("Can't read out %s file.\n", "/mnt/card/MES_system_get_all_config_template.ini");
      goto LABEL_9;
    }
    json_dumps(file, 0);
    v6 = (_DWORD *)json_object_get(v4, "params");
    v7 = v6;
    if ( !v6 || *v6 )
    {
      printf("Can't read out params in %s\n", "/mnt/card/MES_system_get_all_config_template.ini");
      goto LABEL_9;
    }
    v9 = (_DWORD *)json_object_get(v6, "software_commit_id");
    if ( !v9 || *v9 != 2 )
    {
      printf("Can't read out software_commit_id in %s\n", "/mnt/card/MES_system_get_all_config_template.ini");
      goto LABEL_9;
    }
    json_string_set(v9, "de4596f922f83549c2a74d28d2a7c6eb5979d316");
    v16 = (_DWORD *)json_object_get(v7, "config_ids");
    if ( !v16 || *v16 != 1 )
    {
      printf("Can't read out config_ids in %s\n", "/mnt/card/MES_system_get_all_config_template.ini");
      goto LABEL_9;
    }
    v21 = json_array_get(v16, 0);
    v22 = v21;
    if ( v21 && !*v21 )
    {
      v36 = (_DWORD *)json_object_get(v21, "miner_type");
      json_string_set(v36, (char *)(MES2Local_Config_Information + 16));
      v37 = (_DWORD *)json_object_get(v22, "board_name");
      json_string_set(v37, (char *)(MES2Local_Config_Information + 32));
      v38 = json_dumps(v4, 0);
      mes_system_handshake_file_length = strlen(v38);
      memcpy(download_configuration_handshake_information, v38, mes_system_handshake_file_length);
      goto LABEL_52;
    }
    printf("Can't read out array_table in config_ids in %s\n", "/mnt/card/MES_system_get_all_config_template.ini");
LABEL_9:
    if ( v4[1] != -1 )
      sub_A8E50(v4);
    goto LABEL_5;
  }
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
    {
      printf("Do not support get information type %d from MES system\n", a1);
LABEL_5:
      puts("prepare MES system handshake information fail");
      return 0;
    }
    v5 = json_load_file("/mnt/card/MES_system_get_version_template.ini", 0, (int)v40);
    v4 = v5;
    if ( !v5 )
    {
      printf("Can't read out %s file.\n", "/mnt/card/MES_system_get_version_template.ini");
      goto LABEL_5;
    }
    if ( *v5 )
    {
      printf("Can't read out %s file.\n", "/mnt/card/MES_system_get_version_template.ini");
      goto LABEL_9;
    }
    v10 = json_dumps(v5, 0);
    printf("content: %s\n", v10);
    v11 = (_DWORD *)json_object_get(v4, "params");
    if ( !v11 || *v11 )
    {
      printf("Can't read out params in %s\n", "/mnt/card/MES_system_get_version_template.ini");
      goto LABEL_9;
    }
    v14 = (_DWORD *)json_object_get(v11, "config_ids");
    if ( !v14 || *v14 != 1 )
    {
      printf("Can't read out configIds in %s\n", "/mnt/card/MES_system_get_version_template.ini");
      goto LABEL_9;
    }
    v17 = json_array_get(v14, 0);
    v18 = v17;
    if ( !v17 || *v17 )
    {
      printf("Can't read out array_table in configIds in %s\n", "/mnt/card/MES_system_get_version_template.ini");
      goto LABEL_9;
    }
    v23 = (_DWORD *)json_object_get(v17, "miner_type");
    json_string_set(v23, (char *)(MES2Local_Config_Information + 16));
    v24 = (_DWORD *)json_object_get(v18, "board_name");
    v25 = (char *)(MES2Local_Config_Information + 32);
    goto LABEL_51;
  }
  v8 = json_load_file("/mnt/card/MES_system_get_particular_config_template.ini", 0, (int)v40);
  v4 = v8;
  if ( !v8 )
  {
    printf("Can't read out %s file.\n", "/mnt/card/MES_system_get_particular_config_template.ini");
    goto LABEL_5;
  }
  if ( *v8 )
  {
    printf("Can't read out %s file.\n", "/mnt/card/MES_system_get_particular_config_template.ini");
    goto LABEL_9;
  }
  v12 = json_dumps(v8, 0);
  printf("content: %s\n", v12);
  v13 = (_DWORD *)json_object_get(v4, "params");
  if ( !v13 || *v13 )
  {
    printf("Can't read out params in %s\n", "/mnt/card/MES_system_get_particular_config_template.ini");
    goto LABEL_9;
  }
  v15 = (_DWORD *)json_object_get(v13, "config_ids");
  if ( !v15 || *v15 != 1 )
  {
    printf("Can't read out config_ids in %s\n", "/mnt/card/MES_system_get_particular_config_template.ini");
    goto LABEL_9;
  }
  v19 = json_array_get(v15, 0);
  v20 = v19;
  if ( !v19 || *v19 )
  {
    printf(
      "Can't read out array_table in config_ids in %s\n",
      "/mnt/card/MES_system_get_particular_config_template.ini");
    goto LABEL_9;
  }
  v28 = (_DWORD *)json_object_get(v19, "miner_type");
  json_string_set(v28, (char *)(MES2Local_Config_Information + 16));
  v29 = (_DWORD *)json_object_get(v20, "board_name");
  json_string_set(v29, (char *)(MES2Local_Config_Information + 32));
  v30 = (_DWORD *)json_object_get(v20, "sn");
  json_string_set(v30, dword_3B57DD);
  memset(v39, 48, 10);
  sub_CEA80(5, v39);
  v31 = (_DWORD *)json_object_get(v20, "chip_technology");
  json_string_set(v31, (char *)v39);
  v32 = (_DWORD *)json_object_get(v20, "ft_version");
  json_string_set(v32, src);
  v33 = json_object_get(v20, "bin");
  chip_bin = get_chip_bin((int)qr_code);
  json_integer_set(v33, chip_bin);
  memset(v39, 48, 10);
  sub_CEABC(v39);
  v35 = (_DWORD *)json_object_get(v20, "hardware_version");
  json_string_set(v35, (char *)v39);
  memset(v39, 48, 10);
  sub_CEA80(3, v39);
  v24 = (_DWORD *)json_object_get(v20, "bom_version");
  v25 = (char *)v39;
LABEL_51:
  json_string_set(v24, v25);
  v26 = json_dumps(v4, 0);
  v27 = strlen(v26);
  mes_system_handshake_file_length = v27;
  memcpy(download_configuration_handshake_information, v26, v27);
  printf("size: %d, content: %s\n", v27, download_configuration_handshake_information);
LABEL_52:
  if ( v4[1] != -1 )
    sub_A8E50(v4);
  return 1;
}
