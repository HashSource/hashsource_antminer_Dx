int __fastcall sub_9C1D0(int a1)
{
  int *v1; // r10
  pthread_t v2; // r0
  int v3; // r6
  _DWORD *v4; // r2
  size_t v5; // r0
  int v6; // s17
  _BYTE *v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r2
  int v14; // r0
  int v15; // r4
  int v16; // r3
  int v17; // r10
  void (__fastcall *v18)(int, int); // r2
  int v19; // r4
  int v20; // r3
  int v21; // r8
  int v22; // r2
  int v23; // r2
  int v24; // r5
  float v25; // s16
  __useconds_t v26; // r5
  int v27; // r3
  int v28; // r2
  bool v30; // zf
  float v31; // s14
  int v32; // s16
  _DWORD *v33; // r1
  int v34; // r6
  int v35; // r2
  int v36; // r4
  int v37; // r8
  int v38; // r5
  int v39; // r2
  int v40; // r4
  float v41; // s9
  double v42; // d5
  int v43; // r1
  int v44; // r3
  int v45; // r3
  int v46; // r2
  int v47; // r0
  int v48; // r4
  float v49; // s11
  _BYTE *v50; // r0
  int v51; // r2
  int v52; // r5
  int v53; // r1
  double v54; // d6
  int v55; // r2
  float v56; // s14
  int v57; // r2
  int v58; // r1
  int v59; // r4
  int v60; // r3
  int v61; // r2
  int v62; // r1
  unsigned int v63; // r2
  int v64; // r0
  int v65; // r2
  int *v66; // [sp+14h] [bp-158h]
  int v67; // [sp+18h] [bp-154h]
  int v68; // [sp+1Ch] [bp-150h]
  int v69; // [sp+20h] [bp-14Ch]
  _BYTE *ptr; // [sp+2Ch] [bp-140h]
  int v72; // [sp+30h] [bp-13Ch]
  int v73; // [sp+34h] [bp-138h]
  struct timespec tp; // [sp+38h] [bp-134h] BYREF
  struct timespec v75; // [sp+40h] [bp-12Ch] BYREF
  char src[32]; // [sp+48h] [bp-124h] BYREF
  char s[260]; // [sp+68h] [bp-104h] BYREF

  v1 = g_config_info;
  v2 = pthread_self();
  pthread_detach(v2);
  v3 = g_config_info[0];
  v4 = *(_DWORD **)(g_config_info[0] + 8);
  v72 = v4[3];
  v73 = v4[4];
  v69 = v4[2];
  v5 = *(_DWORD *)(g_config_info[0] + 40) * v72;
  v6 = v73 * v5;
  v7 = calloc(v5, 1u);
  v8 = dword_3B52A4;
  v9 = dword_3B5788;
  ptr = v7;
  *(_DWORD *)(dword_3B52A4 + 132) = 327775;
  *(_DWORD *)(v8 + 160) = 327775;
  v10 = *(_DWORD *)(v3 + 76);
  if ( v9 < v10 )
  {
    do
    {
      printf("Wait for temp to start temp :%d, board max %d \n", v10, v9);
      sleep(2u);
      v3 = g_config_info[0];
      v9 = dword_3B5788;
      v10 = *(_DWORD *)(g_config_info[0] + 76);
    }
    while ( dword_3B5788 < v10 );
  }
  v11 = *(_DWORD *)(v3 + 100);
  if ( (unsigned int)(v11 - 3) > 0x61 )
  {
    puts("warning: fan speed range only support [3, 100], otherwise set default value 50");
    v12 = 3276850;
  }
  else
  {
    v12 = (100 - v11) | (v11 << 16);
  }
  v13 = dword_3B52A4;
  *(_DWORD *)(dword_3B52A4 + 132) = v12;
  *(_DWORD *)(v13 + 160) = v12;
  puts("Reach start temp, start test");
  *(_DWORD *)s = 0;
  if ( *(int *)(g_config_info[0] + 40) > 0 )
  {
    do
    {
      if ( off_3B57C4(s) )
      {
        v14 = off_3B57C8(s);
        v15 = *v1;
        v68 = v14;
        if ( v14 > 0 )
        {
          v66 = v1;
          v67 = 0;
          v16 = *(_DWORD *)(*(_DWORD *)(v15 + 8) + 16);
          do
          {
            if ( v16 > 0 )
            {
              if ( !g_pcba_info )
              {
LABEL_20:
                puts("stop send work by other errors");
                goto LABEL_21;
              }
              v17 = 0;
              while ( 1 )
              {
                v18 = (void (__fastcall *)(int, int))off_3B57C0;
                v19 = 101;
                v20 = v17 + v16 * (v67 + *(_DWORD *)s * v68);
                v21 = v69 + 104 * v20;
                v66[1] = v20;
                v18(a1, v21);
                v22 = *v66;
                need_pattern = 0;
                v23 = *(_DWORD *)(v22 + 8);
                ++dword_3B57AC;
                v24 = 1000 * *(_DWORD *)(v23 + 20);
                clock_gettime(1, &tp);
                v25 = (float)v24;
                v26 = v24 / 100;
                do
                {
                  usleep(v26);
                  clock_gettime(1, &v75);
                  if ( (float)((int)&loc_F4240 * (__int64)(v75.tv_sec - tp.tv_sec) + (v75.tv_nsec - tp.tv_nsec) / 1000) > v25 )
                    break;
                  if ( need_pattern )
                    break;
                  --v19;
                }
                while ( v19 );
                v15 = *v66;
                v27 = *(_DWORD *)(*v66 + 8);
                if ( *(_DWORD *)(v21 + 100) )
                {
                  v28 = v67 + *(_DWORD *)s * *(_DWORD *)(v27 + 12);
                  ++dword_3B57A8;
                  ++ptr[v28];
                }
                v16 = *(_DWORD *)(v27 + 16);
                if ( v16 <= ++v17 )
                  break;
                if ( !g_pcba_info )
                  goto LABEL_20;
              }
            }
            v30 = v68 == ++v67;
            v31 = (double)dword_3B57A8 * 100.0 * (1.0 / (double)v6);
            flt_3B57A4 = v31;
          }
          while ( !v30 );
          v1 = v66;
        }
      }
      else
      {
        v15 = *v1;
      }
      ++*(_DWORD *)s;
    }
    while ( *(int *)s < *(_DWORD *)(v15 + 40) );
  }
  v32 = v73 * v72;
  puts("------------------------------------------------------------------------------------------------");
  puts("                                     Result");
  v33 = (_DWORD *)*v1;
  if ( *(int *)(*v1 + 40) <= 0 )
  {
    v45 = dword_3B57B0;
  }
  else
  {
    v34 = 0;
    do
    {
      memset(s, 0, 0x100u);
      sprintf(s, "ASIC-%03d ", v34);
      v35 = *(_DWORD *)(*v1 + 8);
      v36 = *(_DWORD *)(v35 + 12);
      if ( v36 <= 0 )
      {
        v40 = 0;
        v41 = 0.0;
        v38 = 0;
        v42 = 0.0;
      }
      else
      {
        v37 = 0;
        v38 = 0;
        do
        {
          memset(src, 0, sizeof(src));
          v39 = (unsigned __int8)ptr[v34 * v36 + v37++];
          v38 += v39;
          sprintf(src, "%d ", v39);
          strcat(s, src);
          v35 = *(_DWORD *)(*v1 + 8);
          v36 = *(_DWORD *)(v35 + 12);
        }
        while ( v36 > v37 );
        v40 = v38;
        v41 = 100.0 / (double)v32 * (double)v38;
        v42 = v41;
      }
      if ( flt_3B57A4 * 0.01 * *(float *)(v35 + 76) <= v42 )
      {
        if ( *(float *)(v35 + 72) > v41 )
          ++*(_DWORD *)&gHistory_Result[((_DWORD)&loc_40E46 + 2) * dword_3B57B0 + 263208];
      }
      else
      {
        v43 = *(_DWORD *)&gHistory_Result[((_DWORD)&loc_40E46 + 2) * dword_3B57B0 + 263212];
        v44 = v43 + ((_DWORD)&elf_hash_bucket[117] + 2) * dword_3B57B0;
        *(_DWORD *)&gHistory_Result[((_DWORD)&loc_40E46 + 2) * dword_3B57B0 + 263212] = v43 + 1;
        *(_DWORD *)&gHistory_Result[4 * v44 + 263216] = v34;
        *(float *)&gHistory_Result[4 * v44 + 264240] = v41;
      }
      printf("%s   %d\n", s, v38);
      v45 = dword_3B57B0;
      v33 = (_DWORD *)*v1;
      v46 = v34 + ((_DWORD)&elf_hash_bucket[117] + 2) * dword_3B57B0;
      v47 = *(_DWORD *)(*v1 + 40);
      ++v34;
      *(_DWORD *)&gHistory_Result[4 * v46 + 262184] = v40;
    }
    while ( v47 > v34 );
  }
  if ( *(int *)&gHistory_Result[265800 * v45 + 263212] > 0 )
  {
    puts("------------------------------------------------------------------------------------------------");
    puts("Bad ASIC list:");
    v45 = dword_3B57B0;
    if ( *(int *)&gHistory_Result[265800 * dword_3B57B0 + 263212] > 0 )
    {
      v59 = 0;
      do
      {
        v60 = ((_DWORD)&elf_hash_bucket[117] + 2) * v45;
        v61 = v60 + v59++;
        v62 = *(_DWORD *)&gHistory_Result[4 * v61 + 263216];
        v63 = *(_DWORD *)&gHistory_Result[4 * v60 + 262184 + 4 * v62];
        printf("ASIC[%02d] get nonce %d, nonce rate %0.2f\n", v62, v63, (double)v63 * (100.0 / (double)v32));
        v45 = dword_3B57B0;
      }
      while ( *(_DWORD *)&gHistory_Result[265800 * dword_3B57B0 + 263212] > v59 );
    }
    v33 = (_DWORD *)*v1;
  }
  v48 = v33[2];
  v49 = flt_3B57A4;
  v50 = &gHistory_Result[((_DWORD)&loc_40E46 + 2) * v45];
  v51 = *(_DWORD *)(v33[12] + 4 * v45);
  v52 = *(_DWORD *)(v48 + 24);
  v53 = v33[8];
  v54 = flt_3B57A4;
  *((_DWORD *)v50 + 5) = v51;
  v55 = *(_DWORD *)(v52 + 4 * v45);
  *((double *)v50 + 1) = v54;
  *((_DWORD *)v50 + 7) = v55;
  if ( v53 )
    v56 = (double)*(unsigned int *)(v1[4] + 212) * 0.01;
  else
    v56 = *(double *)(*(_DWORD *)(v48 + 36) + 8 * v45);
  if ( v49 >= v56 && *(int *)&gHistory_Result[265800 * v45 + 263212] <= 0 )
  {
    printf("\nPattern Test Success %0.4f match nocnes %d total nonces %d\n", v54, dword_3B57A8, v6);
    printf("patten test pass level %d is done %d\n", dword_3B57B0, (unsigned __int8)byte_3B57B4);
    v64 = dword_3B57B0;
    v65 = *v1;
    gHistory_Result[265800 * dword_3B57B0 + 265796] = *(_DWORD *)&gHistory_Result[265800 * dword_3B57B0 + 263208] > 0;
    if ( (unsigned int)(*(_DWORD *)(*(_DWORD *)(v65 + 8) + 4) - 6) <= 1 )
    {
      g_lcd_result_with_data = 1;
      strcpy(byte_3B565C, "Wait for submit");
    }
    else if ( pcba_save_config_to_pic(v64) >= 0 )
    {
      g_lcd_result_with_data = 1;
      sub_9B308();
    }
    else
    {
      g_lcd_result_with_data = 21;
    }
  }
  else
  {
    printf("\nPattern Test Failed %0.4f match nocnes %d total nonces %d\n", v54, dword_3B57A8, v6);
    printf("patten test fail level %d\n", dword_3B57B0 + 1);
    v57 = dword_3B57B0;
    v58 = *v1;
    gHistory_Result[265800 * dword_3B57B0 + 265796] = -16;
    if ( v57 < *(_DWORD *)(*(_DWORD *)(v58 + 8) + 28) - 1 )
    {
      byte_3B57B4 = 0;
      sub_9B308();
    }
    else
    {
      strcpy(byte_3B565C, "Wait for submit");
    }
  }
  g_pcba_info = 0;
  puts("send test pattern done");
LABEL_21:
  free(ptr);
  printf("%s[%d] quit\n", "pcba_send_func", 549);
  return 0;
}
