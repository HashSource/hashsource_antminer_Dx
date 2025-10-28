int save_MES_system_submit_result()
{
  int v0; // r6
  size_t v1; // r0
  size_t v2; // r0
  FILE *v3; // r6

  memset(submit_result_file, 0, 0xC8u);
  strcpy(submit_result_file, base_submit_result_file);
  v0 = MES2Local_Config_Information;
  strcat(submit_result_file, (const char *)(MES2Local_Config_Information + 16));
  v1 = strlen(submit_result_file);
  submit_result_file[v1] = 45;
  strcpy(&submit_result_file[v1 + 1], (const char *)(v0 + 32));
  v2 = strlen(submit_result_file);
  submit_result_file[v2] = 45;
  strcpy(&submit_result_file[v2 + 1], dword_3B57DD);
  printf("Save MES system config information into %s\n", submit_result_file);
  v3 = fopen(submit_result_file, "w");
  if ( v3 )
  {
    printf("Open %s success\n", submit_result_file);
    if ( fwrite(submit_result_handshake_information, mes_system_submit_result_file_length, 1u, v3) == 1 )
    {
      printf("Write %s success\n", submit_result_file);
      fclose(v3);
      system("sync");
      return 1;
    }
    else
    {
      printf("Write %s fail\n", submit_result_file);
      fclose(v3);
      return 0;
    }
  }
  else
  {
    printf("Open %s fail\n", submit_result_file);
    return 0;
  }
}
