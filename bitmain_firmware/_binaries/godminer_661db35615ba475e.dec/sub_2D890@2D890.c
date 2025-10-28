int __fastcall sub_2D890(_DWORD *a1, const char **a2)
{
  int v3; // r4
  int v4; // r7
  _DWORD *v5; // r6
  _DWORD *v6; // r5
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  size_t v11; // r6
  int *v12; // r11
  char *v13; // r4
  int *v14; // r5
  int *v15; // r10
  int v16; // t1
  char *v17; // r0
  unsigned __int64 v18; // r4
  double v19; // d0
  _DWORD *v20; // r0
  _DWORD *v21; // r10
  int v22; // r5
  void *v23; // r0
  _BYTE *v24; // r8
  _DWORD *v25; // r3
  _DWORD *v26; // r1
  size_t v27; // r4
  int v28; // r3
  size_t v29; // r4
  void *v30; // r0
  _BYTE *v31; // r7
  _DWORD *v32; // r0
  _DWORD *v33; // r2
  _DWORD *v34; // r0
  _DWORD *v35; // r5
  void *(*v36)(size_t); // r3
  int v37; // r0
  float *v38; // r11
  float v39; // s14
  __int64 v40; // r8
  _DWORD *v41; // r0
  _DWORD *v42; // r4
  _BOOL4 v43; // r2
  unsigned int *v44; // r2
  unsigned int v45; // r1
  unsigned int v46; // r1
  unsigned int v47; // r1
  void *v48; // r8
  int v49; // r2
  unsigned int v50; // r9
  unsigned int v51; // r1
  void *v52; // r0
  int v53; // r2
  unsigned int *v54; // r2
  unsigned int v55; // r1
  void *v56; // r0
  int v57; // [sp+14h] [bp-1058h]
  int *v58; // [sp+14h] [bp-1058h]
  int v59; // [sp+18h] [bp-1054h]
  _DWORD *v60; // [sp+18h] [bp-1054h]
  float *i; // [sp+1Ch] [bp-1050h]
  _DWORD *v62; // [sp+24h] [bp-1048h]
  int v63; // [sp+28h] [bp-1044h]
  int *v64; // [sp+2Ch] [bp-1040h]
  char *v66; // [sp+3Ch] [bp-1030h]
  int *ptr; // [sp+44h] [bp-1028h]
  _DWORD *v68; // [sp+48h] [bp-1024h]
  _DWORD *v69; // [sp+4Ch] [bp-1020h]
  double v70; // [sp+50h] [bp-101Ch] BYREF
  _DWORD v71[2]; // [sp+58h] [bp-1014h] BYREF
  char s[4]; // [sp+60h] [bp-100Ch] BYREF
  int v73; // [sp+64h] [bp-1008h]
  char dest[4100]; // [sp+68h] [bp-1004h] BYREF

  v73 = 0;
  *(_DWORD *)s = 0;
  v71[0] = 0;
  v71[1] = 0;
  pthread_mutex_lock(&stru_190E30);
  v3 = dword_190E48;
  pthread_mutex_unlock(&stru_190E30);
  v4 = dword_191C84;
  if ( !dword_191C84 )
  {
    V_LOCK();
    logfmt_raw(dest, 0x1000u, 0, "frontend runtime type not set");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_interface.c",
      150,
      "frontend_runtime_instance",
      25,
      67,
      100,
      dest);
  }
  if ( !a2 )
  {
    V_LOCK();
    logfmt_raw(dest, 0x1000u, 0, "%s: input bad api param\n", "get_rate");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_rate",
      8,
      727,
      100,
      dest);
    return -2147483646;
  }
  sub_2867C(a1, a2);
  sub_2856C(a1);
  if ( v3 > 0 )
  {
    v11 = v3;
    v12 = dword_190E4C;
    v59 = v3;
    v66 = (char *)malloc(208 * v3);
    v13 = v66 + 1664;
    v14 = (int *)malloc(v11 * 4);
    v15 = &v14[v11];
    ptr = v14;
    do
    {
      v16 = *v12++;
      __pld(v13);
      memcpy(dest, &dword_191398[52 * *(_DWORD *)(v16 + 120)], 0xD0u);
      v17 = v13 - 1664;
      v13 += 208;
      memcpy(v17, dest, 0xD0u);
      *v14++ = *(_DWORD *)(v16 + 124);
    }
    while ( v14 != v15 );
    v18 = *((_QWORD *)v66 + 25);
    v19 = *((double *)v66 + 6);
    if ( v18 > 0x18 )
      LODWORD(v18) = 24;
    v63 = v18;
    format_hashrate_double(*(const char **)(v4 + 84), &v70, (char *)v71);
    v69 = json_array();
    v68 = json_object();
    v20 = json_string((const char *)v71);
    json_object_set_new(v68, "unit", v20);
    v21 = json_array();
    if ( (_DWORD)v18 )
    {
      v57 = 15 * (v18 + 1);
      v22 = 15;
      do
      {
        *(_DWORD *)s = 0;
        v73 = 0;
        snprintf(s, 8u, "%dmin", v22);
        v27 = strlen(s);
        if ( utf8_check_string((int)s, v27) && (v23 = off_190780(v27 + 1), (v24 = v23) != 0) )
        {
          memcpy(v23, s, v27);
          v24[v27] = 0;
          v25 = off_190780(0x10u);
          v26 = v25;
          if ( v25 )
          {
            *v25 = 2;
            v25[1] = 1;
            v25[2] = v24;
            v25[3] = v27;
          }
          else
          {
            jsonp_free(v24);
            v26 = 0;
          }
        }
        else
        {
          v26 = 0;
        }
        v22 += 15;
        json_array_append_new((int)v21, v26);
      }
      while ( v57 != v22 );
    }
    v64 = &ptr[v59];
    json_object_set_new(v68, "xAxis", v21);
    v58 = ptr;
    v62 = json_array();
    for ( i = (float *)(v66 + 96); ; i += 52 )
    {
      v60 = json_object();
      v28 = *v58;
      *(_DWORD *)s = 0;
      v73 = 0;
      ++v58;
      snprintf(s, 8u, "chain%d", v28);
      v29 = strlen(s);
      if ( utf8_check_string((int)s, v29) && (v30 = off_190780(v29 + 1), (v31 = v30) != 0) )
      {
        memcpy(v30, s, v29);
        v31[v29] = 0;
        v32 = off_190780(0x10u);
        if ( v32 )
        {
          v33 = v32;
          v32[2] = v31;
          v32[3] = v29;
          *v32 = 2;
          v32[1] = 1;
        }
        else
        {
          jsonp_free(v31);
          v33 = 0;
        }
      }
      else
      {
        v33 = 0;
      }
      json_object_set_new(v60, "name", v33);
      v34 = off_190780(0x14u);
      v35 = v34;
      if ( v34 )
      {
        *v34 = 1;
        v34[1] = 1;
        v36 = off_190780;
        v34[3] = 0;
        v34[2] = 8;
        v37 = (int)v36(32);
        v35[4] = v37;
        if ( !v37 )
        {
          v56 = v35;
          v35 = 0;
          jsonp_free(v56);
        }
      }
      if ( v63 )
        break;
LABEL_43:
      json_object_set_new(v60, "data", v35);
      json_array_append_new((int)v62, v60);
      if ( v64 == v58 )
      {
        json_object_set_new(v68, "series", v62);
        json_array_append_new((int)v69, v68);
        json_object_set_new(a1, "RATE", v69);
        free(ptr);
        free(v66);
        return 0;
      }
    }
    v38 = i;
    while ( 1 )
    {
      v39 = *v38++;
      v70 = v39 * v19;
      v40 = (__int64)v70;
      v41 = off_190780(0x10u);
      v42 = v41;
      if ( v41 )
      {
        *v41 = 3;
        *((_QWORD *)v41 + 1) = v40;
        v41[1] = 1;
        if ( !v35 )
          goto LABEL_37;
        v43 = v35 == v41;
        if ( *v35 != 1 )
          v43 = 1;
        if ( !v43 )
        {
          v47 = v35[2];
          v48 = (void *)v35[4];
          if ( v35[3] + 1 > v47 )
          {
            v50 = 2 * v47;
            v51 = v47 + 1;
            if ( v50 < v51 )
              v50 = v51;
            if ( 4 * v50 )
            {
              v52 = off_190780(4 * v50);
              if ( v52 )
              {
                v53 = v35[3];
                v35[4] = v52;
                v35[2] = v50;
                memcpy(v52, v48, 4 * v53);
                off_190550(v48);
                v48 = (void *)v35[4];
                if ( v48 )
                {
LABEL_47:
                  v49 = v35[3];
                  *((_DWORD *)v48 + v49) = v42;
                  v35[3] = v49 + 1;
                  goto LABEL_42;
                }
              }
            }
          }
          else if ( v48 )
          {
            goto LABEL_47;
          }
          if ( v42[1] != -1 )
          {
            v54 = v42 + 1;
            __dmb(0xBu);
            do
            {
              v55 = __ldrex(v54);
              v46 = v55 - 1;
            }
            while ( __strex(v46, v54) );
LABEL_40:
            if ( !v46 )
              json_delete(v42);
          }
        }
        else
        {
LABEL_37:
          if ( v41[1] != -1 )
          {
            v44 = v41 + 1;
            __dmb(0xBu);
            do
            {
              v45 = __ldrex(v44);
              v46 = v45 - 1;
            }
            while ( __strex(v46, v44) );
            goto LABEL_40;
          }
        }
      }
LABEL_42:
      if ( &i[v63] == v38 )
        goto LABEL_43;
    }
  }
  v5 = json_array();
  v6 = json_object();
  if ( !v3 )
    format_hashrate_double(*(const char **)(v4 + 84), &v70, (char *)v71);
  v7 = json_string((const char *)v71);
  json_object_set_new(v6, "unit", v7);
  v8 = json_array();
  json_object_set_new(v6, "xAxis", v8);
  v9 = json_array();
  json_object_set_new(v6, "series", v9);
  json_array_append_new((int)v5, v6);
  json_object_set_new(a1, "RATE", v5);
  return 0;
}
