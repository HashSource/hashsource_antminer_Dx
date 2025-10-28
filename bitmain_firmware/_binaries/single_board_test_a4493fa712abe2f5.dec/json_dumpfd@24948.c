int __fastcall json_dumpfd(char *a1, int a2, int a3)
{
  int v4; // r7
  char *v5; // r5
  char *v6; // r0
  unsigned int v7; // r8
  int v8; // r9
  unsigned int v9; // r12
  _DWORD *v10; // r3
  unsigned int v11; // r2
  char *v12; // r3
  ssize_t v13; // r0
  int v14; // r7
  _DWORD *v15; // r5
  _DWORD *v16; // r0
  int *v17; // r6
  unsigned int *v18; // r3
  unsigned int v19; // r2
  unsigned int v20; // r2
  void *v22; // r2
  int v23; // r3
  ssize_t v24; // r0
  signed int v25; // r7
  ssize_t v26; // r0
  ssize_t v27; // r0
  char *v28; // r11
  unsigned int v29; // r10
  size_t v30; // r5
  ssize_t v31; // r0
  char *v32; // r6
  char *v33; // r7
  char *v34; // r5
  size_t v35; // r0
  unsigned int v36; // r6
  size_t v37; // r11
  ssize_t v38; // r0
  unsigned int v39; // r7
  size_t v40; // r11
  ssize_t v41; // r0
  unsigned int v42; // r11
  _DWORD *v43; // r0
  unsigned int v44; // r6
  size_t v45; // r9
  ssize_t v46; // r0
  ssize_t v47; // r0
  size_t v48; // r6
  char *v49; // r0
  char *v50; // r10
  char *v51; // r3
  char *v52; // r2
  _DWORD *v53; // r1
  unsigned int v54; // r11
  char *v56; // r7
  size_t v57; // r0
  size_t n; // [sp+14h] [bp-B8h]
  size_t na; // [sp+14h] [bp-B8h]
  int v60; // [sp+18h] [bp-B4h]
  int v61; // [sp+18h] [bp-B4h]
  void *buf; // [sp+1Ch] [bp-B0h]
  int v63; // [sp+20h] [bp-ACh]
  int v64; // [sp+20h] [bp-ACh]
  char *v65; // [sp+20h] [bp-ACh]
  char *v66; // [sp+28h] [bp-A4h]
  char *v67; // [sp+2Ch] [bp-A0h]
  _DWORD *v68; // [sp+2Ch] [bp-A0h]
  void *v69; // [sp+30h] [bp-9Ch]
  void *v70; // [sp+30h] [bp-9Ch]
  int v71; // [sp+3Ch] [bp-90h]
  int fd; // [sp+44h] [bp-88h] BYREF
  int v73; // [sp+48h] [bp-84h] BYREF
  void *v74; // [sp+4Ch] [bp-80h]
  int v75; // [sp+50h] [bp-7Ch]
  int v76; // [sp+54h] [bp-78h] BYREF
  void *ptr; // [sp+58h] [bp-74h]
  _DWORD v78[2]; // [sp+5Ch] [bp-70h] BYREF
  char s[104]; // [sp+64h] [bp-68h] BYREF

  fd = a2;
  if ( (a3 & 0x200) == 0 && (!a1 || *(_DWORD *)a1 > 1u) )
    return -1;
  v4 = 0;
  v5 = a1;
  v73 = 0;
  v75 = 3;
  v6 = (char *)off_12A258(0x40u);
  v74 = v6;
  if ( !v6 )
    return -1;
  ptr = &v76;
  v7 = a3 & 0xFFFEFFFF;
  v76 = (int)&v76;
  v8 = a3 & 0x10000;
  v9 = 1 << v75;
  v78[0] = v78;
  v78[1] = v78;
  if ( 1 << v75 )
  {
    if ( v9 <= 4 )
    {
      v11 = 0;
    }
    else
    {
      v10 = v6;
      v11 = ((v9 - 5) & 0xFFFFFFFC) + 4;
      do
      {
        v4 += 4;
        __pld(v10 + 59);
        *v10 = &v76;
        v10[1] = &v76;
        v10[2] = &v76;
        v10[3] = &v76;
        v10[4] = &v76;
        v10[5] = &v76;
        v10[6] = &v76;
        v10[7] = &v76;
        v10 += 8;
      }
      while ( v4 != v11 );
    }
    v12 = &v6[8 * v11];
    do
    {
      *((_DWORD *)v12 + 1) = &v76;
      v12 += 8;
      *(_DWORD *)&v6[8 * v11++] = &v76;
    }
    while ( v11 < v9 );
    if ( v5 )
    {
      switch ( *(_DWORD *)v5 )
      {
        case 0:
          goto LABEL_26;
        case 1:
          goto LABEL_31;
        case 2:
          goto LABEL_38;
        case 3:
          goto LABEL_39;
        case 4:
          goto LABEL_43;
        case 5:
          goto LABEL_45;
        case 6:
          goto LABEL_48;
        case 7:
          goto LABEL_13;
        default:
          goto LABEL_30;
      }
    }
    goto LABEL_30;
  }
  if ( !v5 )
  {
    v14 = -1;
LABEL_24:
    off_12A254(v6);
    return v14;
  }
  switch ( *(_DWORD *)v5 )
  {
    case 0:
LABEL_26:
      v63 = a3 & 0x20;
      if ( (a3 & 0x20) != 0 )
      {
        LOWORD(v22) = 28180;
        v23 = 1;
      }
      else
      {
        v23 = 2;
        LOWORD(v22) = -7820;
      }
      HIWORD(v22) = 16;
      n = v23;
      v60 = v23;
      buf = v22;
      v14 = sub_D1A38(&v73, v5, s);
      if ( v14 )
        goto LABEL_30;
      if ( *(_DWORD *)v5 || (v28 = (char *)*((_DWORD *)v5 + 8), v67 = v5 + 28, v28 == v5 + 28) )
      {
        if ( v8 )
          goto LABEL_113;
        if ( write(fd, "{", 1u) != 1 )
          goto LABEL_30;
        goto LABEL_109;
      }
      if ( v8 )
      {
        if ( !v28 )
          goto LABEL_113;
        goto LABEL_60;
      }
      if ( write(fd, "{", 1u) != 1 )
        goto LABEL_30;
      if ( !v28 )
      {
LABEL_109:
        hashtable_del(&v73, s);
        v47 = write(fd, "}", 1u);
        v14 = v47 - 1;
        if ( v47 != 1 )
          v14 = -1;
        goto LABEL_15;
      }
LABEL_60:
      v69 = (void *)(a3 & 0x1F);
      if ( (a3 & 0x1F) != 0 )
      {
        if ( write(fd, "\n", 1u) != 1 )
          goto LABEL_30;
        v29 = a3 & 0x1F;
        v66 = v5;
        do
        {
          v30 = v29;
          if ( v29 >= 0x20 )
            v30 = 32;
          v31 = write(fd, "                                ", v30);
          if ( v31 != v30 )
            goto LABEL_30;
          v29 -= v31;
        }
        while ( v29 );
        v5 = v66;
      }
      if ( (a3 & 0x80) == 0 )
      {
        v71 = a3 & 0x10000;
        v32 = v28;
        v33 = v5;
        while ( 1 )
        {
          if ( *(_DWORD *)v33 )
          {
            v34 = 0;
          }
          else
          {
            v34 = (char *)*((_DWORD *)v32 + 1);
            if ( v67 == v34 )
              v34 = 0;
          }
          v35 = strlen(v32 + 16);
          sub_20128(
            (unsigned __int8 *)v32 + 16,
            v35,
            (int (__fastcall *)(unsigned __int8 *, int, int))sub_20450,
            (int)&fd,
            v7);
          if ( v60 != write(fd, buf, n) || sub_23BB0(*((_DWORD **)v32 + 3), v7, 1, &v73, __SPAIR64__(&fd, sub_20450)) )
            goto LABEL_30;
          if ( !v34 )
          {
            v8 = v71;
            v14 = 0;
            if ( !sub_1FFC4(v7, 0, 0, (int (__fastcall *)(char *, int, int))sub_20450, (int)&fd) )
              goto LABEL_146;
            goto LABEL_30;
          }
          if ( write(fd, ",", 1u) != 1 )
            goto LABEL_30;
          v36 = (unsigned int)v69;
          if ( v69 )
          {
            if ( write(fd, "\n", 1u) != 1 )
              goto LABEL_30;
            while ( 1 )
            {
              v37 = v36;
              if ( v36 >= 0x20 )
                v37 = 32;
              v38 = write(fd, "                                ", v37);
              if ( v38 != v37 )
                goto LABEL_30;
              v36 -= v38;
              if ( !v36 )
                goto LABEL_83;
            }
          }
          if ( v63 )
          {
LABEL_83:
            v32 = v34;
          }
          else
          {
            if ( sub_20450(" ", 1u, &fd) )
              goto LABEL_30;
            v32 = v34;
          }
        }
      }
      v48 = (size_t)json_object_size(v5);
      v49 = (char *)jsonp_malloc((void *)(4 * v48));
      v50 = v49;
      if ( !v49 )
        goto LABEL_30;
      if ( *(_DWORD *)v5 )
      {
        *(_DWORD *)v49 = v28 + 16;
      }
      else
      {
        v51 = v49 - 4;
        v52 = v28;
        do
        {
          v53 = v52 + 16;
          v52 = (char *)*((_DWORD *)v52 + 1);
          *((_DWORD *)v51 + 1) = v53;
          v51 += 4;
        }
        while ( v67 != v52 && v52 );
      }
      qsort(v49, v48, 4u, (__compar_fn_t)sub_20120);
      if ( v48 )
      {
        v65 = v50 - 4;
        v54 = 0;
        do
        {
          v56 = (char *)*((_DWORD *)v65 + 1);
          v65 += 4;
          v68 = (_DWORD *)json_object_get(v5, v56);
          v57 = strlen(v56);
          sub_20128(
            (unsigned __int8 *)v56,
            v57,
            (int (__fastcall *)(unsigned __int8 *, int, int))sub_20450,
            (int)&fd,
            v7);
          if ( v60 != write(fd, buf, n) || sub_23BB0(v68, v7, 1, &v73, __SPAIR64__(&fd, sub_20450)) )
          {
LABEL_136:
            v14 = -1;
            jsonp_free(v50);
            goto LABEL_15;
          }
          if ( v48 - 1 > v54++ )
          {
            if ( write(fd, ",", 1u) != 1
              || sub_1FFC4(v7, 1, 1, (int (__fastcall *)(char *, int, int))sub_20450, (int)&fd) )
            {
              goto LABEL_136;
            }
          }
          else if ( sub_1FFC4(v7, 0, 0, (int (__fastcall *)(char *, int, int))sub_20450, (int)&fd) )
          {
            goto LABEL_136;
          }
        }
        while ( v48 != v54 );
        v14 = 0;
      }
      jsonp_free(v50);
LABEL_146:
      hashtable_del(&v73, s);
      if ( !v8 )
        v14 = sub_20450("}", 1u, &fd);
LABEL_15:
      v15 = ptr;
      if ( ptr != &v76 )
      {
        do
        {
          v16 = (_DWORD *)v15[5];
          v17 = (int *)v15[1];
          if ( v16 )
          {
            v18 = v16 + 1;
            if ( v16[1] != -1 )
            {
              __dmb(0xBu);
              do
              {
                v19 = __ldrex(v18);
                v20 = v19 - 1;
              }
              while ( __strex(v20, v18) );
              if ( !v20 )
                json_delete(v16);
            }
          }
          off_12A254(v15);
          v15 = v17;
        }
        while ( v17 != &v76 );
      }
LABEL_23:
      v6 = (char *)v74;
      if ( v74 )
        goto LABEL_24;
      return v14;
    case 1:
LABEL_31:
      v14 = sub_D1A38(&v73, v5, s);
      if ( v14 )
        goto LABEL_30;
      if ( *(_DWORD *)v5 != 1 )
      {
        if ( !v8 )
        {
          if ( write(fd, "[", 1u) != 1 )
            goto LABEL_30;
LABEL_35:
          hashtable_del(&v73, s);
          v24 = write(fd, &word_106544, 1u);
          v14 = v24 - 1;
          if ( v24 != 1 )
            v14 = -1;
          goto LABEL_15;
        }
LABEL_113:
        hashtable_del(&v73, s);
        goto LABEL_15;
      }
      na = *((_DWORD *)v5 + 3);
      if ( v8 )
      {
        if ( !*((_DWORD *)v5 + 3) )
          goto LABEL_113;
      }
      else
      {
        if ( write(fd, "[", 1u) != 1 )
          goto LABEL_30;
        if ( !na )
          goto LABEL_35;
      }
      v61 = a3 & 0x1F;
      if ( (a3 & 0x1F) != 0 )
      {
        if ( write(fd, "\n", 1u) != 1 )
          goto LABEL_30;
        v39 = a3 & 0x1F;
        do
        {
          v40 = v39;
          if ( v39 >= 0x20 )
            v40 = 32;
          v41 = write(fd, "                                ", v40);
          if ( v41 != v40 )
            goto LABEL_30;
          v39 -= v41;
        }
        while ( v39 );
      }
      v42 = 0;
      v64 = a3 & 0x20;
      v70 = (void *)(a3 & 0x10000);
      while ( 1 )
      {
        v43 = json_array_get(v5, v42);
        v14 = sub_23BB0(v43, v7, 1, &v73, __SPAIR64__(&fd, sub_20450));
        if ( v14 )
          goto LABEL_30;
        if ( na - 1 <= v42 )
        {
          if ( sub_1FFC4(v7, 0, 0, (int (__fastcall *)(char *, int, int))sub_20450, (int)&fd) )
            goto LABEL_30;
        }
        else
        {
          if ( write(fd, ",", 1u) != 1 )
            goto LABEL_30;
          v44 = v61;
          if ( v61 )
          {
            if ( write(fd, "\n", 1u) != 1 )
              goto LABEL_30;
            while ( 1 )
            {
              v45 = v44;
              if ( v44 >= 0x20 )
                v45 = 32;
              v46 = write(fd, "                                ", v45);
              if ( v46 != v45 )
                break;
              v44 -= v46;
              if ( !v44 )
                goto LABEL_104;
            }
LABEL_30:
            v14 = -1;
            goto LABEL_15;
          }
          if ( !v64 && sub_20450(" ", 1u, &fd) )
            goto LABEL_30;
        }
LABEL_104:
        if ( ++v42 == na )
        {
          hashtable_del(&v73, s);
          if ( !v70 )
            v14 = sub_20450(&word_106544, 1u, &fd);
          goto LABEL_15;
        }
      }
    case 2:
LABEL_38:
      v14 = sub_20128(
              *((unsigned __int8 **)v5 + 2),
              *((_DWORD *)v5 + 3),
              (int (__fastcall *)(unsigned __int8 *, int, int))sub_20450,
              (int)&fd,
              a3 & 0xFFFEFFFF);
      goto LABEL_15;
    case 3:
LABEL_39:
      v25 = snprintf(s, 0x64u, "%lld", *((_QWORD *)v5 + 1));
      if ( (unsigned int)v25 > 0x63 )
        goto LABEL_30;
      goto LABEL_40;
    case 4:
LABEL_43:
      v25 = jsonp_dtostr(s, 0x64u, (unsigned __int16)a3 >> 11);
      if ( v25 < 0 )
        goto LABEL_30;
LABEL_40:
      v14 = v25 - write(fd, s, v25);
      if ( v14 )
        v14 = -1;
      goto LABEL_15;
    case 5:
LABEL_45:
      v26 = write(fd, "true", 4u);
      v14 = v26 - 4;
      if ( v26 != 4 )
        v14 = -1;
      goto LABEL_15;
    case 6:
LABEL_48:
      v27 = write(fd, "false", 5u);
      v14 = v27 - 5;
      if ( v27 != 5 )
        v14 = -1;
      goto LABEL_15;
    case 7:
LABEL_13:
      v13 = write(fd, "null", 4u);
      v14 = v13 - 4;
      if ( v13 != 4 )
        v14 = -1;
      goto LABEL_15;
    default:
      v14 = -1;
      goto LABEL_23;
  }
}
