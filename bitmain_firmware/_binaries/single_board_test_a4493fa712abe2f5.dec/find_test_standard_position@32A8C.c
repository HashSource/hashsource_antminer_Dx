int __fastcall find_test_standard_position(
        _DWORD *a1,
        const char *a2,
        const char *a3,
        const char *a4,
        const char *a5,
        const char *a6,
        const char *a7,
        const char *a8,
        int a9)
{
  const char *v9; // r10
  char *v10; // r5
  char *v11; // r6
  int v12; // r9
  const char *v13; // r11
  int v14; // r4
  unsigned int v16; // r8
  int v17; // r1
  int v18; // r1
  int *v19; // r4
  int v20; // r6
  int v21; // t1
  unsigned int v22; // r1
  int v23; // r4
  const char *v24; // r8
  const char *v25; // r4
  const char *v26; // r1
  int v27; // r0
  char *v28; // r0
  int v29; // r1
  int v30; // r1
  int v31; // r3
  unsigned int v32; // r9
  const char *v33; // r5
  int v34; // t1
  int v35; // r4
  unsigned int v36; // r1
  int v37; // r2
  _DWORD *v38; // r4
  int v39; // r2
  int v40; // r8
  int v41; // r3
  int v42; // r2
  int v43; // r12
  int v44; // r2
  int v45; // r12
  int v46; // r2
  int v47; // r2
  int v48; // r12
  int v49; // r2
  int v50; // r2
  void *v51; // r0
  int v52; // r8
  void *v53; // r0
  unsigned int v54; // r1
  unsigned int v55; // r8
  int *v56; // r10
  _DWORD *v57; // r4
  int v58; // r2
  int v59; // r4
  char v60; // r8
  int v61; // r9
  int v62; // r3
  int v63; // r0
  int v64; // r4
  int v65; // r3
  int v67; // [sp+1Ch] [bp-40h]
  int v69; // [sp+28h] [bp-34h]
  int v70; // [sp+2Ch] [bp-30h]
  unsigned int v71; // [sp+2Ch] [bp-30h]
  int v72; // [sp+30h] [bp-2Ch]
  char *v74; // [sp+34h] [bp-28h]
  char *v75; // [sp+34h] [bp-28h]
  const char *v76; // [sp+3Ch] [bp-20h]
  int v77; // [sp+40h] [bp-1Ch]
  int v78; // [sp+4Ch] [bp-10h] BYREF
  int v79; // [sp+50h] [bp-Ch]
  __int16 v80; // [sp+54h] [bp-8h]

  v9 = a3;
  v79 = 0;
  v78 = 0;
  v80 = 0;
  printf("%s %s %s%s%s %s %s BIN%d\n", a2, a3, a5, a6, a7, a4, a8, a9);
  v10 = *(char **)(Mes_System_Config_File_Information + 100);
  if ( !v10 )
    return 0;
  v69 = 0;
  v11 = 0;
  v72 = 0;
  v12 = 0;
  v77 = 0;
  v70 = 0;
  v67 = 1;
  v13 = a4;
  while ( 1 )
  {
LABEL_4:
    if ( strcmp(v10, a2) )
      goto LABEL_3;
    v14 = *((_DWORD *)v10 + 6);
    if ( v14 )
      break;
LABEL_9:
    if ( v12 )
      goto LABEL_16;
    printf("can't find:: board_name: %s, asic_type: %s\n", v9, v13);
    v10 = (char *)*((_DWORD *)v10 + 12);
    if ( !v10 )
      return 0;
  }
  while ( strcmp((const char *)(v14 + 4), v9) || strcmp((const char *)(v14 + 28), v13) )
  {
    v14 = *(_DWORD *)(v14 + 96);
    if ( !v14 )
      goto LABEL_9;
  }
  v16 = 0;
  *(_DWORD *)(MES2Local_Config_Information + 64) = *(_DWORD *)(v14 + 52);
  printf("Asic_Num: %d\n");
  v17 = *(_DWORD *)(v14 + 56);
  *(_DWORD *)(MES2Local_Config_Information + 80) = v17;
  printf("Voltage_Domain: %d\n", v17);
  v18 = *(_DWORD *)(v14 + 60);
  *(_DWORD *)(MES2Local_Config_Information + 84) = v18;
  printf("Asic_Num_Per_Voltage_Domain: %d\n", v18);
  if ( gPower_version_array_size )
  {
    v74 = v11;
    v19 = (int *)(v14 + 64);
    v20 = 3889155;
    do
    {
      v21 = *v19++;
      v22 = v16++;
      *(_BYTE *)++v20 = v21;
      printf("APW_power_version[%d]: %d\n", v22, (unsigned __int8)v21);
    }
    while ( gPower_version_array_size > v16 );
    v11 = v74;
  }
LABEL_16:
  v23 = *((_DWORD *)v10 + 11);
  if ( v23 )
  {
    while ( strcmp((const char *)(v23 + 72), a8) || *(_DWORD *)(v23 + 96) != a9 )
    {
      v23 = *(_DWORD *)(v23 + 104);
      if ( !v23 )
        goto LABEL_20;
    }
    v24 = *(const char **)(v23 + 100);
    v25 = (const char *)*((_DWORD *)v24 + 23);
    v26 = v24;
    if ( v25 )
    {
      v27 = strcmp(v24, *((const char **)v24 + 23));
      v26 = v27 >= 0 ? v24 : v25;
      if ( v27 < 0 )
        v24 = v26;
    }
    v28 = strcpy((char *)(MES2Local_Config_Information + 442), v26);
    printf("version: %s\n", v28);
    v69 = *((_DWORD *)v24 + 6);
    printf("pattern_id: %d\n", v69);
    printf("asic_reg_id: %d\n", *((_DWORD *)v24 + 7));
    printf("test_method_id: %d\n", *((_DWORD *)v24 + 8));
    v29 = *((_DWORD *)v24 + 9);
    *(_DWORD *)(MES2Local_Config_Information + 460) = v29;
    printf("version: %d\n", v29);
    v30 = *((_DWORD *)v24 + 10);
    *(_DWORD *)(MES2Local_Config_Information + 436) = v30;
    printf("Fan_Speed: %d\n", v30);
    gTest_loop_id_array_size = *((_DWORD *)v24 + 21);
    printf("gTest_loop_id_array_size: %d\n", gTest_loop_id_array_size);
    v31 = gTest_loop_id_array_size;
    if ( (unsigned int)gTest_loop_id_array_size > 0xA )
    {
      printf("gTest_loop_id_array_size is %d, bigger than %d\n", gTest_loop_id_array_size, 10);
      v12 = 1;
      goto LABEL_3;
    }
    gTest_loop = gTest_loop_id_array_size;
    *(_DWORD *)(a1[2] + 28) = gTest_loop_id_array_size;
    a1[13] = v31;
    printf("gTest_loop: %d\n", v31);
    if ( gTest_loop_id_array_size )
    {
      v32 = 0;
      v75 = v10;
      v33 = v24 + 40;
      do
      {
        v34 = *((_DWORD *)v33 + 1);
        v33 += 4;
        v35 = 16 * (v32 + 2);
        *(_DWORD *)(MES2Local_Config_Information + v35 + 192) = v34;
        printf("Test_Loop[%d]->Level: %d\n", v32, v34);
        v36 = v32;
        v37 = *((_DWORD *)v24 + 22);
        ++v32;
        *(_DWORD *)(v35 + MES2Local_Config_Information + 196) = v37;
        printf("Test_Loop[%d]->Pre_Open_Core_Voltage: %d\n", v36, v37);
      }
      while ( gTest_loop_id_array_size > v32 );
      v10 = v75;
    }
  }
  else
  {
LABEL_20:
    if ( !v70 )
    {
      v12 = 1;
      printf("can't find::  %s%s%s, %s, BIN%d\n", a5, a6, a7, a8, a9);
      goto LABEL_3;
    }
  }
  v38 = (_DWORD *)*((_DWORD *)v10 + 7);
  if ( v38 )
  {
    v39 = v69;
    if ( *v38 == v69 )
    {
      v40 = v72;
    }
    else
    {
      v41 = v72;
      do
      {
        v38 = (_DWORD *)v38[8];
        ++v41;
        if ( !v38 )
        {
          v72 = v41;
          goto LABEL_40;
        }
      }
      while ( *v38 != v69 );
      v39 = v69;
      v40 = v41;
      v72 = v41;
    }
    printf("pattern[%d]->id: %d\n", v40, v39);
    v42 = v38[1];
    v43 = a1[2];
    *(_DWORD *)(MES2Local_Config_Information + 200) = v42;
    *(_DWORD *)(v43 + 16) = v42;
    printf("pattern[%d]->Pattern_Number: %d\n", v40, v42);
    v44 = v38[2];
    v45 = a1[2];
    *(_DWORD *)(MES2Local_Config_Information + 204) = v44;
    *(_DWORD *)(v45 + 60) = v44;
    printf("pattern[%d]->Invalid_Core_Number: %d\n", v40, v44);
    v46 = v38[3];
    *(_DWORD *)(MES2Local_Config_Information + 220) = v46;
    printf("pattern[%d]->Most_HW_Num: %d\n", v40, v46);
    v47 = v38[4];
    v48 = a1[2];
    *(_DWORD *)(MES2Local_Config_Information + 208) = v47;
    *(_DWORD *)(v48 + 64) = v47;
    printf("pattern[%d]->Least_Nonce_Per_Core: %d\n", v40, v47);
    v49 = v38[5];
    *(_DWORD *)(MES2Local_Config_Information + 212) = v49;
    printf("pattern[%d]->Nonce_Rate: %d\n", v40, v49);
    v50 = v38[6];
    *(_DWORD *)(MES2Local_Config_Information + 216) = v50;
    printf("pattern[%d]->Min_nonce_rate_per_asic: %d\n", v40, v50);
  }
  else
  {
LABEL_40:
    if ( !v77 )
    {
      v70 = 1;
      v12 = 1;
      printf("can't find:: pattern_id: %d\n", v69);
      goto LABEL_3;
    }
  }
  v51 = (void *)a1[12];
  if ( v51 && *(_DWORD *)(a1[2] + 24) )
  {
    free(v51);
    free(*(void **)(a1[2] + 24));
    v71 = gTest_loop_id_array_size;
    a1[12] = malloc(4 * gTest_loop_id_array_size);
    v52 = a1[2];
    v53 = malloc(4 * v71);
    v54 = v71;
    *(_DWORD *)(v52 + 24) = v53;
  }
  else
  {
    v54 = gTest_loop_id_array_size;
  }
  if ( !v54 )
    goto LABEL_76;
  v76 = v9;
  v55 = 0;
  v56 = &v78;
  do
  {
    while ( 1 )
    {
      v57 = (_DWORD *)*((_DWORD *)v10 + 10);
      *(_BYTE *)v56 = 0;
      v56 = (int *)((char *)v56 + 1);
      if ( v57 )
        break;
LABEL_55:
      if ( ++v55 >= v54 )
        goto LABEL_56;
    }
    v58 = *(_DWORD *)(MES2Local_Config_Information + 16 * v55 + 224);
    while ( *v57 != v58 )
    {
      v57 = (_DWORD *)v57[3];
      ++v11;
      if ( !v57 )
        goto LABEL_55;
    }
    printf("test_loop[%d]->id: %d\n", v11);
    v61 = 16 * (v55 + 14);
    v62 = v57[1];
    v63 = *(_DWORD *)(a1[2] + 24);
    *(_DWORD *)(MES2Local_Config_Information + v61 + 12) = v62;
    *(_DWORD *)(v63 + 4 * v55) = v62;
    printf("test_loop[%d]->Frequence: %d\n", v11, v62);
    v64 = v57[2];
    v65 = a1[12];
    *(_DWORD *)(MES2Local_Config_Information + v61 + 8) = v64;
    *(_DWORD *)(v65 + 4 * v55++) = v64;
    printf("test_loop[%d]->Voltage: %d\n", v11, v64);
    *((_BYTE *)v56 - 1) = 1;
    v54 = gTest_loop_id_array_size;
  }
  while ( v55 < gTest_loop_id_array_size );
LABEL_56:
  v9 = v76;
  if ( !v54 )
    goto LABEL_76;
  v59 = (unsigned __int8)v78;
  v60 = v78 & v67;
  if ( !(_BYTE)v78 )
  {
    printf("can't find:: test_loop id: %d\n", *(_DWORD *)(MES2Local_Config_Information + 224));
    v54 = gTest_loop_id_array_size;
    if ( (unsigned int)gTest_loop_id_array_size <= 1 )
      goto LABEL_82;
    v59 = BYTE1(v78);
    v67 = (unsigned __int8)(v60 & BYTE1(v78));
    if ( !BYTE1(v78) )
      goto LABEL_85;
LABEL_60:
    if ( v54 != 2 )
      goto LABEL_61;
    goto LABEL_76;
  }
  if ( v54 == 1 )
    goto LABEL_76;
  v59 = BYTE1(v78);
  v67 = (unsigned __int8)(v60 & BYTE1(v78));
  if ( BYTE1(v78) )
    goto LABEL_60;
LABEL_85:
  printf("can't find:: test_loop id: %d\n", *(_DWORD *)(MES2Local_Config_Information + 240));
  v54 = gTest_loop_id_array_size;
  if ( (unsigned int)gTest_loop_id_array_size <= 2 )
  {
LABEL_82:
    v67 = v59;
    v77 = 1;
    v12 = 1;
    v70 = 1;
    goto LABEL_3;
  }
LABEL_61:
  v59 = BYTE2(v78);
  v67 = (unsigned __int8)(v67 & BYTE2(v78));
  if ( BYTE2(v78) )
  {
    if ( v54 != 3 )
      goto LABEL_63;
    goto LABEL_76;
  }
  printf("can't find:: test_loop id: %d\n", *(_DWORD *)(MES2Local_Config_Information + 256));
  v54 = gTest_loop_id_array_size;
  if ( (unsigned int)gTest_loop_id_array_size <= 3 )
    goto LABEL_82;
LABEL_63:
  v59 = HIBYTE(v78);
  v67 = (unsigned __int8)(v67 & HIBYTE(v78));
  if ( HIBYTE(v78) )
  {
    if ( v54 == 4 )
      goto LABEL_76;
  }
  else
  {
    printf("can't find:: test_loop id: %d\n", *(_DWORD *)(MES2Local_Config_Information + 272));
    v54 = gTest_loop_id_array_size;
    if ( (unsigned int)gTest_loop_id_array_size <= 4 )
      goto LABEL_82;
  }
  v59 = (unsigned __int8)v79;
  v67 = (unsigned __int8)(v67 & v79);
  if ( (_BYTE)v79 )
  {
    if ( v54 == 5 )
      goto LABEL_76;
  }
  else
  {
    printf("can't find:: test_loop id: %d\n", *(_DWORD *)(MES2Local_Config_Information + 288));
    v54 = gTest_loop_id_array_size;
    if ( (unsigned int)gTest_loop_id_array_size <= 5 )
      goto LABEL_82;
  }
  v59 = BYTE1(v79);
  v67 = (unsigned __int8)(v67 & BYTE1(v79));
  if ( BYTE1(v79) )
  {
    if ( v54 == 6 )
      goto LABEL_76;
  }
  else
  {
    printf("can't find:: test_loop id: %d\n", *(_DWORD *)(MES2Local_Config_Information + 304));
    v54 = gTest_loop_id_array_size;
    if ( (unsigned int)gTest_loop_id_array_size <= 6 )
      goto LABEL_82;
  }
  v59 = BYTE2(v79);
  v67 = (unsigned __int8)(v67 & BYTE2(v79));
  if ( BYTE2(v79) )
  {
    if ( v54 == 7 )
      goto LABEL_76;
  }
  else
  {
    printf("can't find:: test_loop id: %d\n", *(_DWORD *)(MES2Local_Config_Information + 320));
    v54 = gTest_loop_id_array_size;
    if ( (unsigned int)gTest_loop_id_array_size <= 7 )
      goto LABEL_82;
  }
  v59 = HIBYTE(v79);
  v67 = (unsigned __int8)(v67 & HIBYTE(v79));
  if ( HIBYTE(v79) )
  {
    if ( v54 == 8 )
      goto LABEL_76;
  }
  else
  {
    printf("can't find:: test_loop id: %d\n", *(_DWORD *)(MES2Local_Config_Information + 336));
    v54 = gTest_loop_id_array_size;
    if ( (unsigned int)gTest_loop_id_array_size <= 8 )
      goto LABEL_82;
  }
  v59 = (unsigned __int8)v80;
  v67 = (unsigned __int8)(v67 & v80);
  if ( (_BYTE)v80 )
  {
    if ( v54 == 9 )
      goto LABEL_76;
  }
  else
  {
    printf("can't find:: test_loop id: %d\n", *(_DWORD *)(MES2Local_Config_Information + 352));
    if ( (unsigned int)gTest_loop_id_array_size <= 9 )
      goto LABEL_82;
  }
  if ( !HIBYTE(v80) )
  {
    v77 = 1;
    v12 = 1;
    v67 = 0;
    v70 = 1;
    printf("can't find:: test_loop id: %d\n", *(_DWORD *)(MES2Local_Config_Information + 368));
LABEL_3:
    v10 = (char *)*((_DWORD *)v10 + 12);
    if ( !v10 )
      return 0;
    goto LABEL_4;
  }
LABEL_76:
  if ( !v67 )
  {
    v77 = 1;
    v12 = 1;
    v70 = 1;
    goto LABEL_3;
  }
  puts("find all test standard");
  return v67;
}
