int __fastcall read_config_ini(_DWORD *a1)
{
  double v1; // d0
  char *v3; // r0
  FILE *v4; // r4
  void *v5; // r5
  char *v6; // r0
  char *v7; // r5
  size_t v8; // r0
  void *v9; // r0
  int v10; // r2
  int v11; // r4
  int v12; // r3
  char *v14; // r0
  char *v15; // r5
  size_t v16; // r0
  void *v17; // r0
  char *v18; // r0
  char *v19; // r5
  size_t v20; // r0
  void *v21; // r0
  char *v22; // r0
  char *v23; // r5
  size_t v24; // r0
  void *v25; // r0
  char *v26; // r0
  char *v27; // r5
  size_t v28; // r0
  void *v29; // r0
  char *v30; // r0
  char *v31; // r0
  char *v32; // r0
  char *v33; // r0
  char *v34; // r10
  char *v35; // r5
  char *v36; // r10
  char *v37; // r0
  char *v38; // r0
  char *v39; // r0
  char *v40; // r0
  char *v41; // r0
  char *v42; // r0
  char *v43; // r0
  char *v44; // r5
  size_t v45; // r0
  void *v46; // r0
  char *v47; // r0
  char *v48; // r10
  _DWORD *v49; // r11
  void *v50; // r0
  char *v51; // r0
  char *v52; // r0
  char *v53; // r0
  char *v54; // r0
  char *v55; // r0
  char *v56; // r10
  _DWORD *v57; // r5
  char *v58; // r5
  int v59; // r5
  char *v60; // r0
  char *v61; // r0
  char *v62; // r0
  char *v63; // r0
  int v64; // r11
  char *v65; // r0
  char *v66; // r0
  char *v67; // r0
  char *v68; // r0
  char *v69; // r0
  size_t n; // [sp+Ch] [bp-308h]
  char v71[256]; // [sp+10h] [bp-304h] BYREF
  char s[256]; // [sp+110h] [bp-204h] BYREF
  char v73[260]; // [sp+210h] [bp-104h] BYREF

  memset(s, 0, sizeof(s));
  v3 = getenv("PCBA_CONFIG_PATH");
  if ( v3 )
    snprintf(v71, 0x100u, "%s/%s.ini", v3, "Config");
  else
    snprintf(v71, 0x100u, "/mnt/card/%s.ini", "Config");
  v4 = fopen(v71, "r");
  if ( v4 )
  {
    a1[1] = 1;
    v5 = calloc(0x50u, 1u);
    *a1 = v5;
    if ( v5 )
    {
LABEL_5:
      while ( fgets(s, 255, v4) )
      {
        while ( s[0] != 35 && s[1] != 35 )
        {
          v6 = strstr(s, "WorkPathPre=");
          if ( !v6 )
          {
            v14 = strstr(s, "Test_Process=");
            if ( v14 )
            {
              v15 = v14 + 13;
              v16 = strlen(v14 + 13);
              v17 = calloc(v16 + 1, 1u);
              a1[5] = v17;
              _isoc99_sscanf(v15, "%s", v17);
            }
            else
            {
              v18 = strstr(s, "Miner_Type=");
              if ( v18 )
              {
                v19 = v18 + 11;
                v20 = strlen(v18 + 11);
                v21 = calloc(v20 + 1, 1u);
                a1[6] = v21;
                _isoc99_sscanf(v19, "%s", v21);
              }
              else
              {
                v22 = strstr(s, "Board_Name=");
                if ( v22 )
                {
                  v23 = v22 + 11;
                  v24 = strlen(v22 + 11);
                  v25 = calloc(v24 + 1, 1u);
                  a1[7] = v25;
                  _isoc99_sscanf(v23, "%s", v25);
                }
                else
                {
                  v26 = strstr(s, "AsicType=");
                  if ( v26 )
                  {
                    v27 = v26 + 9;
                    v28 = strlen(v26 + 9);
                    v29 = calloc(v28 + 1, 1u);
                    a1[4] = v29;
                    _isoc99_sscanf(v27, "%s", v29);
                  }
                  else
                  {
                    v30 = strstr(s, "AsicNum=");
                    if ( v30 )
                    {
                      _isoc99_sscanf(v30 + 8, "%d", a1 + 10);
                    }
                    else
                    {
                      v31 = strstr(s, "Factory_Mode=");
                      if ( v31 )
                      {
                        _isoc99_sscanf(v31 + 13, "%d", a1 + 8);
                      }
                      else
                      {
                        v32 = strstr(s, "Bypass_Scan_Code_Gun=");
                        if ( v32 )
                        {
                          _isoc99_sscanf(v32 + 21, "%d", a1 + 9);
                        }
                        else
                        {
                          v33 = strstr(s, "OpenCoreGap=");
                          if ( v33 )
                          {
                            _isoc99_sscanf(v33 + 12, "%d", a1 + 11);
                          }
                          else
                          {
                            v34 = strstr(s, "Voltage=");
                            if ( v34 )
                            {
                              memset(v73, 0, 0x100u);
                              _isoc99_sscanf(v34 + 8, "%s", v73);
                              a1[13] = sub_32940(v73, a1 + 12);
                            }
                            else
                            {
                              v35 = strstr(s, "Power_version=");
                              if ( v35 )
                              {
                                memset(v73, 0, 0x100u);
                                _isoc99_sscanf(v35 + 14, "%s", v73);
                                a1[15] = sub_32940(v73, a1 + 14);
                              }
                              else
                              {
                                v36 = strstr(s, "TempSensor=");
                                if ( v36 )
                                {
                                  memset(v73, 0, 0x100u);
                                  _isoc99_sscanf(v36 + 11, "%s", v73);
                                  a1[18] = sub_32940(v73, a1 + 17);
                                }
                                else
                                {
                                  v37 = strstr(s, "StartTemp=");
                                  if ( v37 )
                                  {
                                    _isoc99_sscanf(v37 + 10, "%d", a1 + 19);
                                  }
                                  else
                                  {
                                    v38 = strstr(s, "AlarmTemp=");
                                    if ( v38 )
                                    {
                                      _isoc99_sscanf(v38 + 10, "%d", a1 + 20);
                                    }
                                    else
                                    {
                                      v39 = strstr(s, "TempWaitingTime=");
                                      if ( v39 )
                                      {
                                        _isoc99_sscanf(v39 + 16, "%d", a1 + 21);
                                      }
                                      else
                                      {
                                        v40 = strstr(s, "StartTestTempGap=");
                                        if ( v40 )
                                        {
                                          _isoc99_sscanf(v40 + 17, "%d", a1 + 22);
                                        }
                                        else
                                        {
                                          v41 = strstr(s, "TestMode=");
                                          if ( v41 )
                                          {
                                            _isoc99_sscanf(v41 + 9, "%d", a1 + 23);
                                          }
                                          else
                                          {
                                            v42 = strstr(s, "Baudrate=");
                                            if ( v42 )
                                            {
                                              _isoc99_sscanf(v42 + 9, "%d", a1 + 24);
                                            }
                                            else
                                            {
                                              v43 = strstr(s, "RepeatCtrl=");
                                              if ( v43 )
                                              {
                                                v44 = v43 + 11;
                                                v45 = strlen(v43 + 11);
                                                v46 = calloc(v45 + 1, 1u);
                                                a1[29] = v46;
                                                _isoc99_sscanf(v44, "%s", v46);
                                              }
                                              else
                                              {
                                                v47 = strstr(s, "Algo=");
                                                if ( v47 )
                                                {
                                                  v48 = v47 + 5;
                                                  v49 = (_DWORD *)*a1;
                                                  n = strlen(v47 + 5) + 1;
                                                  v50 = malloc(n);
                                                  *v49 = v50;
                                                  memset(v50, 0, n);
                                                  _isoc99_sscanf(v48, "%s", *v49);
                                                }
                                                else
                                                {
                                                  v51 = strstr(s, "CoreNum=");
                                                  if ( v51 )
                                                  {
                                                    _isoc99_sscanf(v51 + 8, "%d", *a1 + 12);
                                                  }
                                                  else
                                                  {
                                                    v52 = strstr(s, "PatternNum=");
                                                    if ( v52 )
                                                    {
                                                      _isoc99_sscanf(v52 + 11, "%d", *a1 + 16);
                                                    }
                                                    else
                                                    {
                                                      v53 = strstr(s, "Timeout=");
                                                      if ( v53 )
                                                      {
                                                        _isoc99_sscanf(v53 + 8, "%d", *a1 + 20);
                                                      }
                                                      else
                                                      {
                                                        v54 = strstr(s, "least_nonce_per_core=");
                                                        if ( v54 )
                                                        {
                                                          _isoc99_sscanf(v54 + 21, "%d", *a1 + 64);
                                                        }
                                                        else
                                                        {
                                                          v55 = strstr(s, "invalid_core_num=");
                                                          if ( v55 )
                                                          {
                                                            _isoc99_sscanf(v55 + 17, "%d", *a1 + 60);
                                                          }
                                                          else
                                                          {
                                                            v56 = strstr(s, "Frequence=");
                                                            if ( v56 )
                                                            {
                                                              memset(v73, 0, 0x100u);
                                                              _isoc99_sscanf(v56 + 10, "%s", v73);
                                                              v57 = (_DWORD *)*a1;
                                                              v57[7] = sub_32940(v73, (_DWORD *)(*a1 + 24));
                                                            }
                                                            else
                                                            {
                                                              v58 = strstr(s, "MinValidPatternPecent=");
                                                              if ( v58 )
                                                              {
                                                                memset(v73, 0, 0x100u);
                                                                _isoc99_sscanf(v58 + 22, "%s", v73);
                                                                v59 = *a1;
                                                                *(_DWORD *)(v59 + 40) = sub_32940(
                                                                                          v73,
                                                                                          (_DWORD *)(*a1 + 36));
                                                              }
                                                              else
                                                              {
                                                                v60 = strstr(s, "SecondPassPercent=");
                                                                if ( v60 )
                                                                {
                                                                  strtod(v60 + 18, 0);
                                                                  *(float *)&v1 = v1;
                                                                  *(_DWORD *)(*a1 + 68) = LODWORD(v1);
                                                                }
                                                                else
                                                                {
                                                                  v61 = strstr(s, "LooseStandardPercent=");
                                                                  if ( v61 )
                                                                  {
                                                                    strtod(v61 + 21, 0);
                                                                    *(float *)&v1 = v1;
                                                                    *(_DWORD *)(*a1 + 72) = LODWORD(v1);
                                                                  }
                                                                  else
                                                                  {
                                                                    v62 = strstr(s, "FailStandardPercent=");
                                                                    if ( v62 )
                                                                    {
                                                                      strtod(v62 + 20, 0);
                                                                      *(float *)&v1 = v1;
                                                                      *(_DWORD *)(*a1 + 76) = LODWORD(v1);
                                                                    }
                                                                    else
                                                                    {
                                                                      v63 = strstr(s, "MaxHWPecent=");
                                                                      if ( v63 )
                                                                      {
                                                                        v64 = *a1;
                                                                        strtod(v63 + 12, 0);
                                                                        *(double *)(v64 + 48) = v1;
                                                                      }
                                                                      else
                                                                      {
                                                                        v65 = strstr(s, "FanSpeed=");
                                                                        if ( v65 )
                                                                        {
                                                                          a1[25] = strtol(v65 + 9, 0, 10);
                                                                        }
                                                                        else
                                                                        {
                                                                          v66 = strstr(s, "DelayPowerDown=");
                                                                          if ( v66 )
                                                                          {
                                                                            a1[26] = strtol(v66 + 15, 0, 10);
                                                                          }
                                                                          else
                                                                          {
                                                                            v67 = strstr(s, "Clear_EEPROM_Data=");
                                                                            if ( v67 )
                                                                            {
                                                                              a1[27] = strtol(v67 + 18, 0, 10);
                                                                            }
                                                                            else
                                                                            {
                                                                              v68 = strstr(s, "isUseEEPROM=");
                                                                              if ( v68 )
                                                                              {
                                                                                a1[28] = strtol(v68 + 12, 0, 10);
                                                                              }
                                                                              else
                                                                              {
                                                                                v69 = strstr(s, "IsTest=");
                                                                                if ( v69 )
                                                                                {
                                                                                  *(_DWORD *)v73 = 0;
                                                                                  _isoc99_sscanf(v69 + 7, "%d", v73);
                                                                                  *(_BYTE *)(*a1 + 56) = *(_DWORD *)v73 == 1;
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LABEL_5;
          }
          v7 = v6 + 12;
          v8 = strlen(v6 + 12);
          v9 = calloc(v8 + 1, 1u);
          a1[3] = v9;
          _isoc99_sscanf(v7, "%s", v9);
          if ( !fgets(s, 255, v4) )
            goto LABEL_10;
        }
      }
LABEL_10:
      fclose(v4);
      printf("%s done=========\n ", "read_config_ini");
      v10 = a1[13];
      v11 = *(_DWORD *)(*a1 + 40);
      v12 = *(_DWORD *)(*a1 + 28);
      if ( v11 == v10 && v11 == v12 )
      {
        return 1;
      }
      else
      {
        printf("%s the level number is not equal: [%d %d %d]\n ", "read_config_ini", v10, v12, *(_DWORD *)(*a1 + 40));
        return 0;
      }
    }
    else
    {
      printf("app_conf->coins malloc failed!\n");
      return 0;
    }
  }
  else
  {
    printf("open %s failed\n", v71);
    return 0;
  }
}
