int __fastcall json_dumpb(char *a1, int a2, unsigned int a3, int a4)
{
  int v4; // r6
  char *v5; // r5
  _DWORD *v6; // r0
  _DWORD *v7; // r12
  unsigned int v8; // r8
  int v9; // r9
  unsigned int v10; // r7
  int v11; // r0
  _DWORD *v12; // r3
  unsigned int v13; // r2
  _DWORD *v14; // r3
  int v16; // r3
  char *v17; // r3
  int v18; // r3
  int v19; // r7
  _DWORD *v20; // r5
  _DWORD *v21; // r0
  int *v22; // r6
  unsigned int *v23; // r3
  unsigned int v24; // r2
  unsigned int v25; // r2
  signed int v26; // r5
  int v27; // r3
  char *v28; // r3
  int v29; // r3
  unsigned int v30; // r1
  int v31; // r0
  bool v32; // cc
  char *v33; // r3
  unsigned int v34; // r5
  char *v35; // r11
  size_t v36; // r10
  unsigned int v37; // r7
  char *v38; // r10
  char *v39; // r6
  size_t v40; // r0
  size_t v41; // r12
  _DWORD *v42; // r0
  int v43; // r2
  unsigned int v44; // r1
  int v45; // r0
  unsigned int v46; // r6
  size_t v47; // r10
  unsigned int v48; // r11
  char *v49; // r10
  _DWORD *v50; // r0
  int v51; // r3
  int v52; // r0
  unsigned int v53; // r1
  unsigned int v54; // r9
  int v55; // r0
  size_t v56; // r6
  size_t v57; // r3
  int v58; // r2
  size_t v59; // r11
  char *v60; // r0
  char *v61; // r10
  char *v62; // r3
  char *v63; // r2
  _DWORD *v64; // r1
  unsigned int v65; // r6
  char *v66; // r9
  size_t v67; // r0
  char v68; // r0
  size_t n; // [sp+10h] [bp-B4h]
  size_t na; // [sp+10h] [bp-B4h]
  char *src; // [sp+14h] [bp-B0h]
  char *srca; // [sp+14h] [bp-B0h]
  void *srcb; // [sp+14h] [bp-B0h]
  char *v74; // [sp+18h] [bp-ACh]
  char v75; // [sp+18h] [bp-ACh]
  char *v76; // [sp+18h] [bp-ACh]
  __int64 v77; // [sp+1Ch] [bp-A8h]
  _DWORD *v78; // [sp+20h] [bp-A4h]
  char *v79; // [sp+24h] [bp-A0h]
  void *v80; // [sp+24h] [bp-A0h]
  int v81; // [sp+2Ch] [bp-98h]
  int v82; // [sp+2Ch] [bp-98h]
  __int64 v83; // [sp+34h] [bp-90h] BYREF
  int v84; // [sp+3Ch] [bp-88h]
  int v85; // [sp+40h] [bp-84h] BYREF
  void *v86; // [sp+44h] [bp-80h]
  int v87; // [sp+48h] [bp-7Ch]
  int v88; // [sp+4Ch] [bp-78h] BYREF
  void *ptr; // [sp+50h] [bp-74h]
  _DWORD v90[2]; // [sp+54h] [bp-70h] BYREF
  char s[104]; // [sp+5Ch] [bp-68h] BYREF

  v83 = a3;
  v84 = a2;
  if ( (a4 & 0x200) == 0 && (!a1 || *(_DWORD *)a1 > 1u) )
    return 0;
  v4 = a4;
  v5 = a1;
  v85 = 0;
  v87 = 3;
  v6 = off_12A258(0x40u);
  v7 = v6;
  v86 = v6;
  if ( !v6 )
    return 0;
  ptr = &v88;
  v8 = v4 & 0xFFFEFFFF;
  v88 = (int)&v88;
  v9 = v4 & 0x10000;
  v10 = 1 << v87;
  v90[0] = v90;
  v90[1] = v90;
  if ( 1 << v87 )
  {
    if ( v10 <= 4 )
    {
      v13 = 0;
    }
    else
    {
      v11 = 0;
      v12 = v7;
      v13 = ((v10 - 5) & 0xFFFFFFFC) + 4;
      do
      {
        v11 += 4;
        __pld(v12 + 59);
        *v12 = &v88;
        v12[1] = &v88;
        v12[2] = &v88;
        v12[3] = &v88;
        v12[4] = &v88;
        v12[5] = &v88;
        v12[6] = &v88;
        v12[7] = &v88;
        v12 += 8;
      }
      while ( v11 != v13 );
    }
    v14 = &v7[2 * v13];
    do
    {
      v14[1] = &v88;
      v14 += 2;
      v7[2 * v13++] = &v88;
    }
    while ( v10 > v13 );
    if ( v5 )
    {
      switch ( *(_DWORD *)v5 )
      {
        case 0:
          goto LABEL_16;
        case 1:
          goto LABEL_45;
        case 2:
          goto LABEL_53;
        case 3:
          goto LABEL_35;
        case 4:
          goto LABEL_39;
        case 5:
          goto LABEL_41;
        case 6:
          goto LABEL_43;
        case 7:
          goto LABEL_14;
        default:
          goto LABEL_22;
      }
    }
    goto LABEL_22;
  }
  if ( !v5 )
  {
    off_12A254(v6);
    return 0;
  }
  switch ( *(_DWORD *)v5 )
  {
    case 0:
LABEL_16:
      v17 = ":";
      if ( (v4 & 0x20) == 0 )
        v17 = ": ";
      src = v17;
      if ( (v4 & 0x20) != 0 )
        v18 = 1;
      else
        v18 = 2;
      n = v18;
      v19 = sub_D1A38(&v85, v5, s);
      if ( v19 )
        goto LABEL_22;
      if ( *(_DWORD *)v5 || (v28 = (char *)*((_DWORD *)v5 + 8), v79 = v5 + 28, v74 = v28, v28 == v5 + 28) )
      {
        if ( v9 )
          goto LABEL_136;
        if ( (unsigned int)v83 < HIDWORD(v83) + 1 )
        {
          ++HIDWORD(v83);
          hashtable_del(&v85, s);
          goto LABEL_127;
        }
        *(_BYTE *)(v84 + HIDWORD(v83)++) = 123;
        goto LABEL_141;
      }
      if ( v9 )
      {
        if ( !v28 )
        {
LABEL_136:
          hashtable_del(&v85, s);
          goto LABEL_23;
        }
        goto LABEL_63;
      }
      v29 = HIDWORD(v83) + 1;
      if ( HIDWORD(v83) + 1 <= (unsigned int)v83 )
      {
        *(_BYTE *)(v84 + HIDWORD(v83)) = 123;
        v29 = HIDWORD(v83) + 1;
      }
      HIDWORD(v83) = v29;
      if ( !v74 )
      {
LABEL_141:
        hashtable_del(&v85, s);
        goto LABEL_127;
      }
LABEL_63:
      if ( (v4 & 0x1F) != 0 )
      {
        v30 = v83;
        v31 = HIDWORD(v83) + 1;
        v32 = HIDWORD(v83) + 1 > (unsigned int)v83;
        if ( HIDWORD(v83) + 1 <= (unsigned int)v83 )
        {
          *(_BYTE *)(v84 + HIDWORD(v83)) = 10;
          v31 = HIDWORD(v83);
          v30 = v83;
        }
        v33 = v5;
        v34 = v4 & 0x1F;
        v35 = v33;
        if ( !v32 )
          ++v31;
        HIDWORD(v83) = v31;
        while ( 1 )
        {
          while ( 1 )
          {
            v36 = v34;
            if ( v34 >= 0x20 )
              v36 = 32;
            if ( v30 >= v36 + v31 )
              break;
            v34 -= v36;
            HIDWORD(v83) = v36 + v31;
            if ( !v34 )
              goto LABEL_74;
            v31 += v36;
          }
          memcpy((void *)(v31 + v84), "                                ", v36);
          v34 -= v36;
          v43 = HIDWORD(v83) + v36;
          HIDWORD(v83) += v36;
          if ( !v34 )
            break;
          v30 = v83;
          v31 = v43;
        }
LABEL_74:
        v5 = v35;
      }
      if ( (v4 & 0x80) == 0 )
      {
        v37 = v4 & 0xFFFEFFFF;
        v38 = v74;
        v81 = v4 & 0x10000;
        while ( 1 )
        {
          if ( *(_DWORD *)v5 )
          {
            v39 = 0;
          }
          else
          {
            v39 = (char *)*((_DWORD *)v38 + 1);
            if ( v39 == v79 )
              v39 = 0;
          }
          v40 = strlen(v38 + 16);
          sub_20128(
            (unsigned __int8 *)v38 + 16,
            v40,
            (int (__fastcall *)(unsigned __int8 *, int, int))sub_20038,
            (int)&v83,
            v37);
          v41 = n + HIDWORD(v83);
          if ( n + HIDWORD(v83) <= (unsigned int)v83 )
          {
            memcpy((void *)(v84 + HIDWORD(v83)), src, n);
            v41 = n + HIDWORD(v83);
          }
          v42 = (_DWORD *)*((_DWORD *)v38 + 3);
          HIDWORD(v83) = v41;
          if ( sub_23BB0(v42, v37, 1, &v85, __SPAIR64__(&v83, sub_20038)) )
            goto LABEL_22;
          if ( !v39 )
            break;
          if ( HIDWORD(v83) + 1 <= (unsigned int)v83 )
          {
            *(_BYTE *)(v84 + HIDWORD(v83)++) = 44;
            if ( sub_1FFC4(v37, 1, 1, (int (__fastcall *)(char *, int, int))sub_20038, (int)&v83) )
              goto LABEL_22;
            v38 = v39;
          }
          else
          {
            ++HIDWORD(v83);
            if ( sub_1FFC4(v37, 1, 1, (int (__fastcall *)(char *, int, int))sub_20038, (int)&v83) )
              goto LABEL_22;
            v38 = v39;
          }
        }
        v68 = v37;
        v19 = 0;
        v9 = v81;
        if ( sub_1FFC4(v68, 0, 0, (int (__fastcall *)(char *, int, int))sub_20038, (int)&v83) )
          goto LABEL_22;
LABEL_162:
        hashtable_del(&v85, s);
        if ( v9 )
          goto LABEL_23;
LABEL_127:
        v19 = sub_20038("}", 1u, &v83);
        goto LABEL_23;
      }
      v59 = (size_t)json_object_size(v5);
      v60 = (char *)jsonp_malloc((void *)(4 * v59));
      v61 = v60;
      if ( !v60 )
      {
LABEL_22:
        v19 = -1;
        goto LABEL_23;
      }
      if ( *(_DWORD *)v5 )
      {
        *(_DWORD *)v60 = v74 + 16;
      }
      else
      {
        v62 = v60 - 4;
        v63 = v74;
        do
        {
          v64 = v63 + 16;
          v63 = (char *)*((_DWORD *)v63 + 1);
          *((_DWORD *)v62 + 1) = v64;
          v62 += 4;
        }
        while ( v63 != v79 && v63 );
      }
      qsort(v60, v59, 4u, (__compar_fn_t)sub_20120);
      if ( !v59 )
      {
LABEL_165:
        jsonp_free(v61);
        goto LABEL_162;
      }
      v76 = v61 - 4;
      v82 = v4 & 0x10000;
      v65 = 0;
      while ( 1 )
      {
        v66 = (char *)*((_DWORD *)v76 + 1);
        v76 += 4;
        v78 = (_DWORD *)json_object_get(v5, v66);
        v67 = strlen(v66);
        sub_20128(
          (unsigned __int8 *)v66,
          v67,
          (int (__fastcall *)(unsigned __int8 *, int, int))sub_20038,
          (int)&v83,
          v8);
        if ( sub_20038(src, n, &v83) || sub_23BB0(v78, v8, 1, &v85, __SPAIR64__(&v83, sub_20038)) )
          break;
        v32 = v59 - 1 > v65++;
        if ( v32 )
        {
          if ( sub_20038(",", 1u, &v83)
            || sub_1FFC4(v8, 1, 1, (int (__fastcall *)(char *, int, int))sub_20038, (int)&v83) )
          {
            break;
          }
        }
        else if ( sub_1FFC4(v8, 0, 0, (int (__fastcall *)(char *, int, int))sub_20038, (int)&v83) )
        {
          break;
        }
        if ( v59 == v65 )
        {
          v9 = v82;
          goto LABEL_165;
        }
      }
      v19 = -1;
      jsonp_free(v61);
LABEL_23:
      v20 = ptr;
      if ( ptr != &v88 )
      {
        do
        {
          v21 = (_DWORD *)v20[5];
          v22 = (int *)v20[1];
          if ( v21 )
          {
            v23 = v21 + 1;
            if ( v21[1] != -1 )
            {
              __dmb(0xBu);
              do
              {
                v24 = __ldrex(v23);
                v25 = v24 - 1;
              }
              while ( __strex(v25, v23) );
              if ( !v25 )
                json_delete(v21);
            }
          }
          off_12A254(v20);
          v20 = v22;
        }
        while ( v22 != &v88 );
      }
LABEL_31:
      if ( v86 )
        off_12A254(v86);
      if ( v19 )
        return 0;
      return HIDWORD(v83);
    case 1:
LABEL_45:
      v19 = sub_D1A38(&v85, v5, s);
      if ( v19 )
        goto LABEL_22;
      if ( *(_DWORD *)v5 != 1 )
      {
        if ( v9 )
          goto LABEL_136;
        if ( (unsigned int)v83 < HIDWORD(v83) + 1 )
        {
          ++HIDWORD(v83);
          hashtable_del(&v85, s);
LABEL_50:
          v27 = HIDWORD(v83) + 1;
          if ( HIDWORD(v83) + 1 <= (unsigned int)v83 )
          {
            *(_BYTE *)(v84 + HIDWORD(v83)) = 93;
            v27 = HIDWORD(v83) + 1;
          }
          HIDWORD(v83) = v27;
          goto LABEL_23;
        }
        *(_BYTE *)(v84 + HIDWORD(v83)++) = 91;
LABEL_134:
        hashtable_del(&v85, s);
        goto LABEL_50;
      }
      srca = (char *)*((_DWORD *)v5 + 3);
      if ( v9 )
      {
        if ( !*((_DWORD *)v5 + 3) )
          goto LABEL_136;
      }
      else
      {
        v44 = v83;
        if ( HIDWORD(v83) + 1 > (unsigned int)v83 )
        {
          ++HIDWORD(v83);
          if ( !srca )
            goto LABEL_134;
          na = v4 & 0x1F;
          if ( (v4 & 0x1F) != 0 )
            goto LABEL_93;
          goto LABEL_102;
        }
        *(_BYTE *)(v84 + HIDWORD(v83)++) = 91;
        if ( !srca )
          goto LABEL_134;
      }
      na = v4 & 0x1F;
      if ( (v4 & 0x1F) != 0 )
      {
        v44 = v83;
LABEL_93:
        v75 = v4;
        v45 = HIDWORD(v83) + 1;
        v46 = na;
        if ( HIDWORD(v83) + 1 <= v44 )
        {
          *(_BYTE *)(v84 + HIDWORD(v83)) = 10;
          v44 = v83;
          v45 = HIDWORD(v83) + 1;
        }
        HIDWORD(v83) = v45;
        while ( 1 )
        {
          while ( 1 )
          {
            v47 = v46;
            if ( v46 >= 0x20 )
              v47 = 32;
            if ( v47 + v45 <= v44 )
              break;
            v46 -= v47;
            HIDWORD(v83) = v47 + v45;
            if ( !v46 )
              goto LABEL_101;
            v45 += v47;
          }
          memcpy((void *)(v45 + v84), "                                ", v47);
          v46 -= v47;
          v58 = HIDWORD(v83) + v47;
          HIDWORD(v83) += v47;
          if ( !v46 )
            break;
          v44 = v83;
          v45 = v58;
        }
LABEL_101:
        LOBYTE(v4) = v75;
      }
LABEL_102:
      LODWORD(v77) = sub_20038;
      v48 = 0;
      v49 = srca;
      v80 = (void *)(v4 & 0x20);
      HIDWORD(v77) = &v83;
      srcb = (void *)v9;
      do
      {
        v50 = json_array_get(v5, v48);
        if ( sub_23BB0(v50, v8, 1, &v85, v77) )
          goto LABEL_22;
        if ( (unsigned int)(v49 - 1) <= v48 )
        {
          if ( sub_1FFC4(v8, 0, 0, (int (__fastcall *)(char *, int, int))sub_20038, (int)&v83) )
            goto LABEL_22;
        }
        else
        {
          v51 = HIDWORD(v83);
          v52 = HIDWORD(v83) + 1;
          if ( HIDWORD(v83) + 1 <= (unsigned int)v83 )
          {
            *(_BYTE *)(v84 + HIDWORD(v83)) = 44;
            v51 = HIDWORD(v83);
            v52 = HIDWORD(v83) + 1;
          }
          HIDWORD(v83) = v52;
          if ( na )
          {
            v53 = v83;
            v54 = na;
            if ( v51 + 2 <= (unsigned int)v83 )
            {
              *(_BYTE *)(v84 + v52) = 10;
              v52 = HIDWORD(v83);
              v53 = v83;
            }
            v55 = v52 + 1;
            HIDWORD(v83) = v55;
            while ( 1 )
            {
              while ( 1 )
              {
                v56 = v54;
                if ( v54 >= 0x20 )
                  v56 = 32;
                if ( v56 + v55 <= v53 )
                  break;
                v54 -= v56;
                HIDWORD(v83) = v56 + v55;
                if ( !v54 )
                  goto LABEL_117;
                v55 += v56;
              }
              memcpy((void *)(v55 + v84), "                                ", v56);
              v54 -= v56;
              v57 = HIDWORD(v83) + v56;
              HIDWORD(v83) += v56;
              if ( !v54 )
                break;
              v53 = v83;
              v55 = v57;
            }
          }
          else if ( !v80 && sub_20038(" ", 1u, &v83) )
          {
            goto LABEL_22;
          }
        }
LABEL_117:
        ++v48;
      }
      while ( (char *)v48 != v49 );
      hashtable_del(&v85, s);
      if ( !srcb )
        v19 = sub_20038(&word_106544, 1u, &v83);
      goto LABEL_23;
    case 2:
LABEL_53:
      v19 = sub_20128(
              *((unsigned __int8 **)v5 + 2),
              *((_DWORD *)v5 + 3),
              (int (__fastcall *)(unsigned __int8 *, int, int))sub_20038,
              (int)&v83,
              v4 & 0xFFFEFFFF);
      goto LABEL_23;
    case 3:
LABEL_35:
      v26 = snprintf(s, 0x64u, "%lld", *((_QWORD *)v5 + 1));
      if ( (unsigned int)v26 > 0x63 )
        goto LABEL_22;
      goto LABEL_36;
    case 4:
LABEL_39:
      v26 = jsonp_dtostr(s, 0x64u, (unsigned __int16)v4 >> 11);
      if ( v26 < 0 )
        goto LABEL_22;
LABEL_36:
      v16 = v26 + HIDWORD(v83);
      if ( v26 + HIDWORD(v83) <= (unsigned int)v83 )
      {
        memcpy((void *)(HIDWORD(v83) + v84), s, v26);
        v16 = HIDWORD(v83) + v26;
      }
      goto LABEL_38;
    case 5:
LABEL_41:
      v16 = HIDWORD(v83) + 4;
      if ( HIDWORD(v83) + 4 <= (unsigned int)v83 )
      {
        *(_DWORD *)(v84 + HIDWORD(v83)) = *(_DWORD *)"true";
        v16 = HIDWORD(v83) + 4;
      }
      goto LABEL_38;
    case 6:
LABEL_43:
      v16 = HIDWORD(v83) + 5;
      if ( HIDWORD(v83) + 5 <= (unsigned int)v83 )
      {
        qmemcpy((void *)(v84 + HIDWORD(v83)), "false", 5);
        v16 = HIDWORD(v83) + 5;
      }
      goto LABEL_38;
    case 7:
LABEL_14:
      v16 = HIDWORD(v83) + 4;
      if ( HIDWORD(v83) + 4 <= (unsigned int)v83 )
      {
        *(_DWORD *)(v84 + HIDWORD(v83)) = *(_DWORD *)"null";
        v16 = HIDWORD(v83) + 4;
      }
LABEL_38:
      HIDWORD(v83) = v16;
      v19 = 0;
      goto LABEL_23;
    default:
      v19 = -1;
      goto LABEL_31;
  }
}
