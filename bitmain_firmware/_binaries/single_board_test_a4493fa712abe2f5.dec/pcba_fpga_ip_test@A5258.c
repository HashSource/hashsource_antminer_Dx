int __fastcall pcba_fpga_ip_test(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  int v3; // r6
  int v4; // r5
  _DWORD *v5; // r8
  int v6; // r7
  _DWORD *v7; // r4
  int v8; // r2
  int v9; // r1
  int v10; // r3
  bool v11; // nf
  int v12; // r2
  const char *v13; // r0
  int v14; // r4
  __int16 v15; // r1
  int v16; // r0
  _DWORD *v17; // r4
  int v18; // r9
  _DWORD *v19; // r6
  int v20; // r12
  int v21; // r7
  int v22; // r3
  unsigned int v23; // r2
  char v24; // r3
  int v25; // r6
  _DWORD *v26; // r10
  int v27; // r5
  __int16 v28; // r1
  int v29; // r0
  signed int v30; // r7
  _DWORD *v31; // r4
  int v32; // r2
  int v33; // r1
  int v34; // r3
  bool v35; // nf
  int v36; // r2
  const char *v37; // r0
  int v38; // r5
  _DWORD *v39; // r9
  __int16 v40; // r1
  int v41; // r4
  int v42; // r0
  bool v43; // zf
  char *v44; // r6
  char *v45; // r4
  _DWORD *v46; // r5
  int v47; // r8
  unsigned int v48; // r3
  int v49; // r1
  int v50; // r12
  int v51; // r7
  int v52; // r3
  int v53; // r1
  int v54; // r7
  const char *v55; // r1
  unsigned int v56; // r2
  unsigned int v57; // r9
  int v58; // r2
  _DWORD *v59; // r4
  _DWORD *v60; // r7
  int v61; // r12
  int v62; // r6
  int v63; // r3
  int v65; // r2
  int v66; // r6
  int v67; // r5
  char *v68; // r0
  char *v69; // r8
  int v70; // r11
  int v71; // r7
  char *v72; // r4
  int v73; // r2
  int v74; // r3
  bool v75; // nf
  const char *v76; // r0
  int v77; // r2
  int v78; // r4
  _DWORD *v79; // r9
  __int16 v80; // r1
  int v81; // r0
  _DWORD *v82; // r5
  int v83; // r6
  char *v84; // r4
  char *v85; // r10
  int v86; // r3
  int v87; // r12
  int v88; // r7
  char v89; // r3
  unsigned int v90; // r3
  int v91; // r7
  int v92; // r5
  char *v93; // r4
  const char *v94; // r1
  int v95; // r2
  unsigned int v96; // r3
  char *v97; // r7
  char *v98; // r4
  int v99; // r10
  int v100; // r12
  int v101; // r6
  int v102; // r3
  int v103; // r2
  int v104; // [sp+0h] [bp-60h]
  int v105; // [sp+0h] [bp-60h]
  int v106; // [sp+4h] [bp-5Ch]
  int v107; // [sp+4h] [bp-5Ch]
  int v108; // [sp+4h] [bp-5Ch]
  int v109; // [sp+4h] [bp-5Ch]
  int v110; // [sp+8h] [bp-58h]
  int v111; // [sp+8h] [bp-58h]
  int v112; // [sp+Ch] [bp-54h]
  int v113; // [sp+Ch] [bp-54h]
  int v114; // [sp+10h] [bp-50h]
  int v115; // [sp+10h] [bp-50h]
  char *v116; // [sp+18h] [bp-48h]
  char *v117; // [sp+18h] [bp-48h]
  char v118; // [sp+1Ch] [bp-44h]
  unsigned int v119; // [sp+1Ch] [bp-44h]
  int format; // [sp+20h] [bp-40h]
  char *formata; // [sp+20h] [bp-40h]
  char *v122; // [sp+24h] [bp-3Ch]
  int v123; // [sp+2Ch] [bp-34h]
  int v124; // [sp+2Ch] [bp-34h]
  _DWORD *v125; // [sp+3Ch] [bp-24h]
  _DWORD v126[8]; // [sp+40h] [bp-20h] BYREF

  v126[1] = 0;
  LOWORD(v126[2]) = 0;
  HIWORD(v126[3]) = 0;
  v126[0] = dword_1298B0;
  *(_DWORD *)((char *)&v126[2] + 2) = (unsigned __int8)byte_1298AC;
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 140);
  LOBYTE(v126[2]) = 1;
  v3 = 30;
  v2(a1, v126);
  usleep((__useconds_t)&loc_30D40);
  v126[1] = 0;
  HIWORD(v126[3]) = 0;
  *(_DWORD *)((char *)&v126[2] + 2) = (unsigned __int8)byte_129840;
  LOWORD(v126[2]) = 1;
  v126[0] = dword_129844;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 140))(a1, v126);
  usleep(0x30D40u);
  v126[1] = 0;
  HIWORD(v126[3]) = 0;
  *(_DWORD *)((char *)&v126[2] + 2) = (unsigned __int8)byte_129864;
  LOWORD(v126[2]) = 1;
  v126[0] = dword_129868;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 140))(a1, v126);
  usleep(0x30D40u);
  v126[1] = 0;
  HIWORD(v126[3]) = 0;
  *(_DWORD *)((char *)&v126[2] + 2) = (unsigned __int8)byte_129888;
  LOWORD(v126[2]) = 1;
  v126[0] = dword_12988C;
  v116 = (char *)a1;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 140))(a1, v126);
  usleep(0x30D40u);
  v126[1] = 0;
  HIWORD(v126[2]) = (unsigned __int8)byte_1298D0;
  LOWORD(v126[2]) = 1;
  v126[3] = 0;
  v126[0] = dword_1298D4;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 140))(a1, v126);
  usleep(0x30D40u);
  v4 = *(_DWORD *)(a1 + 180);
  v123 = 2 * v4;
  v5 = calloc(v4, 8u);
  do
  {
    if ( v4 == sub_A2D1C((int)v116, (unsigned __int8)byte_1298AC, v4, (int)v5) )
    {
      if ( v4 > 0 )
      {
        v7 = v5 + 11;
        v6 = 0;
        do
        {
          v8 = *(v7 - 10);
          v9 = *((unsigned __int8 *)v7 - 43);
          v10 = *((unsigned __int8 *)v7 - 44);
          __pld(v7);
          v7 += 2;
          v106 = v8;
          v8 <<= 7;
          v11 = v8 < 0;
          if ( v8 < 0 )
          {
            v12 = 325;
            v13 = "%s[%d] chip-%02x is still testing [%02x, %08x]\n";
          }
          else
          {
            v12 = 323;
            v13 = "%s[%d] chip-%02x test done [%02x, %08x]\n";
          }
          if ( !v11 )
            ++v6;
          printf(v13, "pcba_gpio_test", v12, v10, v9, v106);
        }
        while ( &v5[2 * v4 + 11] != v7 );
      }
      else
      {
        v6 = 0;
      }
      if ( v4 == v6 )
      {
        v14 = 30;
        while ( 1 )
        {
          v15 = (unsigned __int8)byte_1298AD;
          *v5 = 0;
          v16 = sub_A2D1C((int)v116, v15, v4, (int)v5);
          if ( v4 == v16 )
            break;
          printf("%s[%d] resp num not enough %d\n", "pcba_gpio_test", 352, v16);
          sleep(1u);
          if ( !--v14 )
          {
            free(v5);
LABEL_23:
            v25 = *((_DWORD *)v116 + 45);
            v26 = calloc(v25, 8u);
            format = 30;
            do
            {
              v27 = 0;
              v28 = (unsigned __int8)byte_129840;
              *v26 = 0;
              v29 = sub_A2D1C((int)v116, v28, v25, (int)v26);
              v30 = v29;
              if ( v25 == v29 )
              {
                if ( v25 > 0 )
                {
                  v31 = v26 + 11;
                  do
                  {
                    v32 = *(v31 - 10);
                    v33 = *((unsigned __int8 *)v31 - 43);
                    v34 = *((unsigned __int8 *)v31 - 44);
                    __pld(v31);
                    v31 += 2;
                    v107 = v32;
                    v32 <<= 7;
                    v35 = v32 < 0;
                    if ( v32 < 0 )
                    {
                      v36 = 690;
                      v37 = "%s[%d] chip%02x is still testing %02x %08x\n";
                    }
                    else
                    {
                      v36 = 688;
                      v37 = "%s[%d] chip%02x test done %02x %08x\n";
                    }
                    if ( !v35 )
                      ++v27;
                    printf(v37, "pcba_serdes_test", v36, v34, v33, v107);
                  }
                  while ( &v26[2 * v25 + 11] != v31 );
                }
                if ( v25 == v27 )
                {
                  v38 = 30;
                  v39 = calloc(v25, 8u);
                  while ( 1 )
                  {
                    v40 = (unsigned __int8)byte_129840;
                    *v26 = 0;
                    *v39 = 0;
                    v41 = sub_A2D1C((int)v116, v40, v30, (int)v26);
                    v42 = sub_A2D1C((int)v116, (unsigned __int8)byte_129841, v30, (int)v39);
                    v43 = v30 == v41;
                    if ( v30 == v41 )
                      v43 = v30 == v42;
                    if ( v43 )
                      break;
                    printf("%s[%d] resp num %d, resp num tmp %d\n", "pcba_serdes_test", 729, v41, v42);
                    sleep(1u);
                    if ( !--v38 )
                    {
                      free(v26);
                      free(v39);
                      goto LABEL_135;
                    }
                  }
                  memset(ret_str, 0, 0x40u);
                  sprintf(ret_str, "%s:", aSerdes);
                  if ( v30 > 0 )
                  {
                    v44 = 0;
                    v45 = (char *)(v26 + 3);
                    v46 = v39 + 3;
                    v47 = 0;
                    formata = (char *)v30;
                    v125 = v39;
                    do
                    {
                      v49 = *((unsigned __int8 *)v46 - 11);
                      v50 = *((unsigned __int8 *)v46 - 12);
                      v51 = *(v46 - 2);
                      v52 = (unsigned __int8)*(v45 - 12);
                      __pld(v45);
                      v112 = v49;
                      v114 = v51;
                      v53 = (unsigned __int8)*(v45 - 11);
                      v110 = v50;
                      v54 = *((_DWORD *)v45 - 2);
                      __pld(v46);
                      __pld(v45);
                      printf(
                        "%s[%d] ctrl [%02x %02x %08x], result [%02x %02x %08x]\n",
                        "pcba_serdes_error_display",
                        583,
                        v52,
                        v53,
                        v54,
                        v110,
                        v112,
                        v114);
                      memset(v126, 0, sizeof(v126));
                      v56 = *((_DWORD *)v45 - 2);
                      v57 = bswap32(v56);
                      if ( v56 || *(v46 - 2) )
                      {
                        v58 = (unsigned __int8)*(v45 - 12);
                        if ( *(v45 - 12) )
                        {
                          if ( v58 == 64 )
                          {
                            strcpy((char *)v126, "[U67 ");
                          }
                          else if ( v58 == 128 )
                          {
                            strcpy((char *)v126, "[U76 ");
                          }
                          else
                          {
                            if ( v58 != 192 )
                            {
                              printf("%s unknow chip address\n", v55);
                              exit(1);
                            }
                            strcpy((char *)v126, "[U70 ");
                          }
                        }
                        else
                        {
                          strcpy((char *)v126, "[U73 ");
                        }
                        __pld(v46);
                        strcat(ret_str, (const char *)v126);
                        memset(v126, 0, sizeof(v126));
                        if ( (v57 & 0xF0000000) != 0 )
                          strcpy((char *)v126, "L1 ");
                        if ( (v57 & 0xF000000) != 0 )
                          v126[0] = &unk_203152;
                        strcat(ret_str, (const char *)v126);
                        memset(v126, 0, sizeof(v126));
                        if ( (v57 & 0x2000) != 0 )
                          strcpy((char *)v126, "L2 ");
                        if ( (v57 & 0x1000) != 0 )
                          v126[0] = &unk_203252;
                        strcat(ret_str, (const char *)v126);
                        memset(v126, 0, sizeof(v126));
                        if ( (v57 & 0x800) != 0 )
                          v126[0] = &unk_20334C;
                        if ( (v57 & 0x400) != 0 )
                          v126[0] = &unk_203352;
                        strcat(ret_str, (const char *)v126);
                        memset(v126, 0, sizeof(v126));
                        if ( (v57 & 0x200) != 0 )
                          v126[0] = &unk_20344C;
                        if ( (v57 & 0x100) != 0 )
                          v126[0] = &unk_203452;
                        strcat(ret_str, (const char *)v126);
                        memset(v126, 0, sizeof(v126));
                        v48 = bswap32(*(v46 - 2));
                        if ( HIWORD(v48) << 16 )
                          v126[0] = &unk_20354C;
                        if ( (_WORD)v48 )
                          v126[0] = &unk_203552;
                        ++v47;
                        strcat(ret_str, (const char *)v126);
                        *(_WORD *)&ret_str[strlen(ret_str)] = 93;
                      }
                      ++v44;
                      v45 += 8;
                      v46 += 2;
                    }
                    while ( formata != v44 );
                    v39 = v125;
                    if ( v47 )
                    {
                      printf("%s failed\n", aSerdes);
                      free(v26);
                      free(v125);
                      goto LABEL_135;
                    }
                  }
                  printf("%s success\n", aSerdes);
                  free(v26);
                  free(v39);
                  if ( sub_A2E04((int)v116, 1) )
                  {
                    if ( sub_A2E04((int)v116, 2) )
                    {
                      v66 = 30;
                      v67 = *((_DWORD *)v116 + 45);
                      v124 = 8 * v67;
                      v68 = (char *)calloc(v67, 8u);
                      v69 = &v68[8 * v67 + 44];
                      v122 = v68;
                      v70 = (int)v68;
                      do
                      {
                        if ( v67 == sub_A2D1C((int)v116, (unsigned __int8)byte_1298D0, v67, v70) )
                        {
                          if ( v67 > 0 )
                          {
                            v72 = (char *)(v70 + 44);
                            v71 = 0;
                            do
                            {
                              v73 = *((_DWORD *)v72 - 10);
                              v74 = (unsigned __int8)*(v72 - 44);
                              v75 = (v73 & 0x1000000) != 0;
                              __pld(v72);
                              if ( (v73 & 0x1000000) != 0 )
                                v76 = "%s[%d] chip-%02x is still testing [%02x, %08x]\n";
                              else
                                v76 = "%s[%d] chip-%02x test done [%02x, %08x]\n";
                              v104 = (unsigned __int8)*(v72 - 43);
                              v108 = *((_DWORD *)v72 - 10);
                              v72 += 8;
                              if ( (v73 & 0x1000000) != 0 )
                                v77 = 211;
                              else
                                v77 = 209;
                              if ( !v75 )
                                ++v71;
                              printf(v76, "pcba_hbm_test", v77, v74, v104, v108);
                            }
                            while ( v72 != v69 );
                          }
                          else
                          {
                            v71 = 0;
                          }
                          if ( v67 == v71 )
                          {
                            v78 = 30;
                            v79 = calloc(v67, 8u);
                            while ( 1 )
                            {
                              v80 = (unsigned __int8)byte_1298D1;
                              *v79 = 0;
                              v81 = sub_A2D1C((int)v116, v80, v67, (int)v79);
                              if ( v67 == v81 )
                                break;
                              printf("%s[%d] resp num not enough %d\n", "pcba_hbm_test", 239, v81);
                              sleep(1u);
                              if ( !--v78 )
                                goto LABEL_157;
                            }
                            memset(ret_str, 0, 0x40u);
                            sprintf(ret_str, "%s error:", "hbm");
                            if ( v67 <= 0 )
                            {
LABEL_156:
                              printf("%s success\n", "hbm");
LABEL_157:
                              free(v122);
                              free(v79);
                              return 0;
                            }
                            v82 = v79 + 5;
                            v83 = 0;
                            v84 = v122 + 20;
                            v85 = &v122[v124 + 20];
                            do
                            {
                              while ( 1 )
                              {
                                v86 = (unsigned __int8)*(v84 - 20);
                                v111 = *((unsigned __int8 *)v82 - 20);
                                v113 = *((unsigned __int8 *)v82 - 19);
                                v115 = *(v82 - 4);
                                v87 = (unsigned __int8)*(v84 - 19);
                                v88 = *((_DWORD *)v84 - 4);
                                __pld(v84);
                                v105 = v87;
                                v109 = v88;
                                __pld(v82);
                                printf(
                                  "%s[%d] ctrl [%02x %02x %08x], result [%02x %02x %08x]\n",
                                  "pcba_hbm_error_display",
                                  147,
                                  v86,
                                  v105,
                                  v109,
                                  v111,
                                  v113,
                                  v115);
                                memset(v126, 0, sizeof(v126));
                                v89 = bswap32(*((_DWORD *)v84 - 4));
                                if ( (v89 & 4) != 0 )
                                {
                                  ++v83;
                                  v118 = v89;
                                  sprintf((char *)v126, a02xS0, (unsigned __int8)*(v84 - 20));
                                  strcat(ret_str, (const char *)v126);
                                  v89 = v118;
                                }
                                if ( (v89 & 2) != 0 )
                                {
                                  ++v83;
                                  memset(v126, 0, sizeof(v126));
                                  sprintf((char *)v126, "[%02x s1]", (unsigned __int8)*(v84 - 20));
                                  strcat(ret_str, (const char *)v126);
                                }
                                v90 = bswap32(*(v82 - 4));
                                if ( !v90 )
                                  break;
                                v119 = v90;
                                memset(v126, 0, sizeof(v126));
                                v84 += 8;
                                sprintf((char *)v126, "[%02x c%08x]", *((unsigned __int8 *)v82 - 20), v119);
                                ++v83;
                                strcat(ret_str, (const char *)v126);
                                v82 += 2;
                                if ( v85 == v84 )
                                  goto LABEL_116;
                              }
                              v84 += 8;
                              v82 += 2;
                            }
                            while ( v84 != v85 );
                            if ( !v83 )
                              goto LABEL_156;
LABEL_116:
                            printf("%s failed\n", "hbm");
                            free(v122);
                            free(v79);
                            goto LABEL_153;
                          }
                        }
                        sleep(1u);
                        --v66;
                      }
                      while ( v66 );
                      printf("%s[%d] timeout\n", "pcba_hbm_test", 223);
                      memset(ret_str, 0, 0x40u);
                      sprintf(ret_str, "%s timeout:", "hbm");
                      if ( v67 <= 0 )
                      {
LABEL_158:
                        printf("%s success\n", "hbm");
                      }
                      else
                      {
                        v97 = &v122[v124 + 36];
                        v98 = v122 + 36;
                        v99 = 0;
                        do
                        {
                          while ( 1 )
                          {
                            v100 = (unsigned __int8)*(v98 - 35);
                            v101 = *((_DWORD *)v98 - 8);
                            v102 = (unsigned __int8)*(v98 - 36);
                            __pld(v98);
                            printf(
                              "%s[%d] chip-%02x ctrl [%02x %08x]\n",
                              "pcba_hbm_error_display",
                              130,
                              v102,
                              v100,
                              v101);
                            memset(v126, 0, sizeof(v126));
                            if ( (*((_DWORD *)v98 - 8) & 0x1000000) == 0 )
                              break;
                            v103 = (unsigned __int8)*(v98 - 36);
                            v98 += 8;
                            sprintf((char *)v126, "[%02x]", v103);
                            ++v99;
                            strcat(ret_str, (const char *)v126);
                            if ( v98 == v97 )
                              goto LABEL_151;
                          }
                          v98 += 8;
                        }
                        while ( v98 != v97 );
                        if ( !v99 )
                          goto LABEL_158;
LABEL_151:
                        printf("%s failed\n", "hbm");
                      }
                      free(v122);
LABEL_153:
                      puts("pcba hbm test failed");
                      return 5;
                    }
                    else
                    {
                      puts("pcba DDR1 test failed");
                      return 4;
                    }
                  }
                  else
                  {
                    puts("pcba DDR0 test failed");
                    return 3;
                  }
                }
              }
              else
              {
                printf("%s[%d] resp num not enough %d\n", "pcba_serdes_test", 702, v29);
              }
              sleep(1u);
              --format;
            }
            while ( format );
            printf("%s[%d] timeout\n", "pcba_serdes_test", 708);
            memset(ret_str, 0, 0x40u);
            sprintf(ret_str, "%s timeout:", aSerdes);
            if ( v25 <= 0 )
              goto LABEL_139;
            v91 = 0;
            v92 = 0;
            v93 = (char *)(v26 + 7);
            do
            {
              __pld(v93);
              memset(v126, 0, sizeof(v126));
              if ( (*((_DWORD *)v93 - 6) & 0x1000000) != 0 )
              {
                v96 = (unsigned __int8)*(v93 - 28);
                if ( v96 == 64 )
                {
                  sprintf((char *)v126, "[%s %02x]", "U67", 64);
                }
                else if ( v96 <= 0x40 )
                {
                  if ( *(v93 - 28) )
                  {
LABEL_160:
                    printf("%s[%d] unknow chip addr\n", v94, v95);
                    sleep(1u);
                    exit(1);
                  }
                  sprintf((char *)v126, "[%s %02x]", "U73", 0);
                }
                else if ( v96 == 128 )
                {
                  sprintf((char *)v126, "[%s %02x]", "U76", 128);
                }
                else
                {
                  if ( v96 != 192 )
                    goto LABEL_160;
                  sprintf((char *)v126, "[%s %02x]", "U70", 192);
                }
                ++v91;
                strcat(ret_str, (const char *)v126);
              }
              ++v92;
              v93 += 8;
            }
            while ( v25 != v92 );
            if ( v91 )
              printf("%s failed\n", aSerdes);
            else
LABEL_139:
              printf("%s success\n", aSerdes);
            free(v26);
LABEL_135:
            puts("pcba serdes test failed");
            return 1;
          }
        }
        memset(ret_str, 0, 0x40u);
        sprintf(ret_str, "%s error:", aGpio);
        if ( v4 <= 0 )
          goto LABEL_22;
        v17 = v5 + 9;
        v18 = 0;
        v19 = &v5[v123 + 9];
        do
        {
          while ( 1 )
          {
            v20 = *((unsigned __int8 *)v17 - 35);
            v21 = *(v17 - 8);
            v22 = *((unsigned __int8 *)v17 - 36);
            __pld(v17);
            printf("%s[%d] chip-%02x result [%02x %08x]\n", "pcba_gpio_error_display", 277, v22, v20, v21);
            memset(v126, 0, sizeof(v126));
            v23 = *(v17 - 8);
            v24 = bswap32(v23);
            if ( !(v23 << 27) )
              break;
            sprintf((char *)v126, "[%02x %x]", *((unsigned __int8 *)v17 - 36), v24 & 0x1F);
            v17 += 2;
            strcat(ret_str, (const char *)v126);
            ++v18;
            if ( v17 == v19 )
              goto LABEL_79;
          }
          v17 += 2;
        }
        while ( v19 != v17 );
        if ( !v18 )
        {
LABEL_22:
          printf("%s success\n", aGpio);
          free(v5);
          goto LABEL_23;
        }
LABEL_79:
        printf("%s failed\n", aGpio);
        goto LABEL_80;
      }
    }
    sleep(1u);
    --v3;
  }
  while ( v3 );
  printf("%s[%d] timeout\n", "pcba_gpio_test", 337);
  memset(ret_str, 0, 0x40u);
  sprintf(ret_str, "%s timeout:", aGpio);
  if ( v4 > 0 )
  {
    v59 = v5 + 9;
    v60 = &v5[v123 + 9];
    v117 = 0;
    do
    {
      while ( 1 )
      {
        v61 = *((unsigned __int8 *)v59 - 35);
        v62 = *(v59 - 8);
        v63 = *((unsigned __int8 *)v59 - 36);
        __pld(v59);
        printf("%s[%d] chip-%02x ctrl [%02x %08x]\n", "pcba_gpio_error_display", 261, v63, v61, v62);
        memset(v126, 0, sizeof(v126));
        if ( (*(v59 - 8) & 0x1000000) == 0 )
          break;
        v65 = *((unsigned __int8 *)v59 - 36);
        v59 += 2;
        sprintf((char *)v126, "[%02x]", v65);
        ++v117;
        strcat(ret_str, (const char *)v126);
        if ( v59 == v60 )
          goto LABEL_79;
      }
      v59 += 2;
    }
    while ( v60 != v59 );
    if ( v117 )
      goto LABEL_79;
  }
  printf("%s success\n", aGpio);
LABEL_80:
  free(v5);
  puts("pcba gpio test failed");
  return 2;
}
