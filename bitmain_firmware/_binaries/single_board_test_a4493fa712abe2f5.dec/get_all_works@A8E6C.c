int __fastcall get_all_works(_DWORD *a1)
{
  _DWORD *v2; // r5
  unsigned int v3; // r6
  unsigned int v4; // r7
  void *v5; // r0
  int v6; // r11
  _DWORD *v7; // r10
  unsigned int v8; // r6
  unsigned int v9; // r2
  _DWORD *v10; // r3
  int v11; // r1
  int v12; // r4
  char *v13; // r1
  size_t v14; // r0
  FILE *v15; // r0
  FILE *v16; // r7
  char *v17; // r1
  FILE *v18; // r2
  size_t v19; // r0
  _BYTE *v20; // r0
  _DWORD *v21; // r4
  void *v22; // r0
  char *v23; // r9
  char *v24; // r7
  __int64 v25; // kr08_8
  int v26; // r5
  const char *v27; // r2
  unsigned int core_works_from_txt; // r0
  int *v30; // r0
  char *v31; // r0
  int v32; // r0
  _DWORD *v33; // r4
  unsigned int v34; // r3
  _DWORD *v35; // r1
  unsigned int v36; // r8
  int v37; // r9
  char *v38; // r7
  unsigned int *v39; // r3
  unsigned int v40; // r2
  unsigned int v41; // r2
  char *src; // [sp+10h] [bp-1ACh]
  char v43[4]; // [sp+14h] [bp-1A8h]
  const char *v44; // [sp+18h] [bp-1A4h]
  char *v45; // [sp+1Ch] [bp-1A0h]
  char *format; // [sp+20h] [bp-19Ch]
  char *modes; // [sp+24h] [bp-198h]
  int *v48; // [sp+28h] [bp-194h]
  int v49; // [sp+2Ch] [bp-190h]
  char s[64]; // [sp+30h] [bp-18Ch] BYREF
  _DWORD v51[2]; // [sp+70h] [bp-14Ch] BYREF
  char v52; // [sp+78h] [bp-144h]
  int v53; // [sp+80h] [bp-13Ch]
  int v54; // [sp+84h] [bp-138h]
  int v55; // [sp+88h] [bp-134h]
  int v56; // [sp+8Ch] [bp-130h]
  int v57; // [sp+94h] [bp-128h]
  void *v58; // [sp+98h] [bp-124h]
  int v59; // [sp+9Ch] [bp-120h]
  int v60; // [sp+A0h] [bp-11Ch]
  int v61; // [sp+A4h] [bp-118h]
  int v62; // [sp+A8h] [bp-114h]
  int v63; // [sp+ACh] [bp-110h]
  void *ptr; // [sp+B0h] [bp-10Ch]
  int v65; // [sp+B4h] [bp-108h]
  int v66; // [sp+BCh] [bp-100h] BYREF
  int v67; // [sp+C0h] [bp-FCh]
  int v68; // [sp+C4h] [bp-F8h]
  char v69[3]; // [sp+C8h] [bp-F4h] BYREF
  char dest[77]; // [sp+CBh] [bp-F1h] BYREF
  char v71[164]; // [sp+118h] [bp-A4h] BYREF

  memset(s, 0, sizeof(s));
  printf(
    "%s, AsicNum %d, CoreNum %d, PatternNum %d\n",
    "get_all_works",
    a1[10],
    *(_DWORD *)(a1[2] + 12),
    *(_DWORD *)(a1[2] + 16));
  v2 = (_DWORD *)a1[2];
  v3 = a1[10];
  v4 = v2[3];
  v5 = malloc(104 * v2[4] * v4 * v3);
  v2[2] = v5;
  if ( v5 )
  {
    if ( !v3 )
      return 1;
    v6 = 0;
    v7 = a1;
    v44 = "core-";
    v48 = &stdin;
    while ( 1 )
    {
      if ( !v4 )
        goto LABEL_48;
      *(_DWORD *)v43 = "asic-";
      v8 = 0;
      v9 = v2[4];
      v10 = v2;
      format = "%s/%s/%s%02d/%s%02d.json";
      modes = "rb";
      do
      {
        v25 = *(_QWORD *)v10;
        v26 = v10[2] + 104 * v9 * (v8 + v4 * v6);
        v27 = (const char *)v7[3];
        if ( (unsigned int)(v10[1] - 6) > 1 )
        {
          sprintf(s, format, v27, (_DWORD)v25, *(_DWORD *)v43, v6, v44, v8);
          v11 = v7[2];
          v66 = -1;
          v12 = *(_DWORD *)(v11 + 4);
          v13 = *(char **)(v11 + 16);
          v68 = 0;
          v49 = v12;
          v45 = v13;
          v71[0] = 0;
          v67 = -1;
          v14 = strlen(s);
          if ( v14 > 0x4F )
          {
            memset(v69, 46, sizeof(v69));
            strncpy(dest, &s[v14 - 76], 0x4Du);
            v15 = fopen(s, modes);
            v16 = v15;
            if ( v15 )
              goto LABEL_8;
LABEL_23:
            v30 = _errno_location();
            v31 = strerror(*v30);
            sub_D1AD8((int)&v66, (int)v16, 3, "unable to open %s: %s", s, v31);
LABEL_16:
            v24 = 0;
            puts(v71);
LABEL_17:
            v10 = (_DWORD *)v7[2];
            v9 = v10[4];
            if ( v9 > (unsigned int)v24 )
              goto LABEL_21;
            goto LABEL_18;
          }
          strncpy(v69, s, v14 + 1);
          v15 = fopen(s, modes);
          v16 = v15;
          if ( !v15 )
            goto LABEL_23;
LABEL_8:
          v17 = "<stdin>";
          v71[0] = 0;
          v18 = (FILE *)*v48;
          v68 = 0;
          if ( v15 != v18 )
            v17 = "<stream>";
          v66 = -1;
          v67 = -1;
          src = v17;
          v19 = strlen(v17);
          strncpy(v69, src, v19 + 1);
          v51[0] = fgetc;
          v51[1] = v16;
          v52 = 0;
          v53 = 0;
          v54 = 0;
          v56 = 0;
          v57 = 0;
          v59 = 0;
          v55 = 1;
          v60 = 16;
          v20 = off_12A258(0x10u);
          v58 = v20;
          if ( v20 )
          {
            *v20 = 0;
            v62 = 0;
            v63 = -1;
            v61 = 0;
            sub_2236C((int)v51, (int)&v66);
            if ( (v63 & 0xFFFFFFDF) == 0x5B )
            {
              v21 = sub_22E08((int)v51, 0, (int)&v66);
              if ( v21 )
              {
                sub_2236C((int)v51, (int)&v66);
                if ( !v63 )
                {
                  v22 = v58;
                  v68 = v57;
                  if ( !v58 )
                  {
                    fclose(v16);
                    v23 = (char *)*v21;
                    if ( *v21 )
                      goto LABEL_16;
LABEL_32:
                    v24 = v45;
                    v32 = json_object_get(v21, "works");
                    v33 = (_DWORD *)v32;
                    if ( v32 && *(_DWORD *)v32 == 1 )
                    {
                      v34 = *(_DWORD *)(v32 + 12);
                      if ( v34 < (unsigned int)v45 )
                      {
                        v24 = v23;
                        printf("%s malloc failed!", "get_core_works");
                        printf(
                          "%s: file_path %s, actual pattern number is less than test pattern_num!\n",
                          "get_core_works",
                          s);
                      }
                      else if ( v45 )
                      {
                        if ( v34 )
                        {
                          v35 = **(_DWORD ***)(v32 + 16);
                          if ( v35 )
                          {
                            if ( *v35 )
                            {
                              v24 = v23;
                            }
                            else
                            {
                              src = v24;
                              v36 = 0;
                              v37 = v49;
                              v38 = v45;
                              do
                              {
                                if ( !get_work(v37, v35, v26, v36) )
                                  break;
                                ++v36;
                                v26 += 104;
                                if ( (char *)v36 != v38 && *v33 == 1 && v36 < v33[3] )
                                {
                                  v35 = *(_DWORD **)(v33[4] + 4 * v36);
                                  if ( v35 )
                                    continue;
                                }
                                v24 = src;
                                goto LABEL_17;
                              }
                              while ( !*v35 );
                              v24 = (char *)v36;
                            }
                            printf("file_path %s, get_work error!\n", s);
                          }
                        }
                      }
                    }
                    goto LABEL_17;
                  }
LABEL_30:
                  off_12A254(v22);
                  fclose(v16);
                  if ( !v21 )
                    goto LABEL_16;
                  v23 = (char *)*v21;
                  if ( *v21 )
                    goto LABEL_16;
                  goto LABEL_32;
                }
                sub_21104((int)&v66, (int)v51, 7, "end of file expected");
                if ( v21[1] != -1 )
                {
                  v39 = v21 + 1;
                  __dmb(0xBu);
                  do
                  {
                    v40 = __ldrex(v39);
                    v41 = v40 - 1;
                  }
                  while ( __strex(v41, v39) );
                  if ( !v41 )
                    json_delete(v21);
                }
              }
            }
            else
            {
              sub_21104((int)&v66, (int)v51, 8, "'[' or '{' expected");
            }
            if ( v63 == 256 )
            {
              if ( ptr )
                off_12A254(ptr);
              ptr = 0;
              v65 = 0;
            }
            v22 = v58;
            v21 = 0;
            if ( v58 )
              goto LABEL_30;
          }
          fclose(v16);
          goto LABEL_16;
        }
        sprintf(s, "%s/%s/%s%02d/%s%02d.txt", v27, (const char *)v25, *(const char **)v43, v6, v44, v8);
        core_works_from_txt = get_core_works_from_txt(*(_DWORD *)(v7[2] + 4), s, v26, *(_DWORD *)(v7[2] + 16));
        v10 = (_DWORD *)v7[2];
        v24 = (char *)core_works_from_txt;
        v9 = v10[4];
        if ( v9 > core_works_from_txt )
        {
LABEL_21:
          printf("which_asic %02x, which_core %02x, get core works %d, less than pattern_num %d\n", v6, v8, v24, v9);
          return 0;
        }
LABEL_18:
        v4 = v10[3];
        ++v8;
      }
      while ( v4 > v8 );
      v3 = v7[10];
      v2 = v10;
LABEL_48:
      if ( v3 <= ++v6 )
        return 1;
    }
  }
  printf("%s, malloc works sturct error!\n", "get_all_works");
  return 0;
}
