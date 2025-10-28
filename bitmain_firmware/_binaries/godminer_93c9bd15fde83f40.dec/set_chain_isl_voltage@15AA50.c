int __fastcall set_chain_isl_voltage(unsigned __int8 a1, int a2)
{
  int v2; // r2
  int v3; // r2
  int v4; // r6
  int v5; // r5
  int v6; // r0
  int v7; // r2
  int v8; // r6
  int v9; // r4
  int v10; // r0
  int v11; // r2
  int v12; // r4
  int *v14; // r6
  int v15; // r8
  int v16; // r9
  _DWORD *v17; // r10
  int v18; // r5
  size_t v19; // r8
  void *v20; // r0
  void *v21; // r4
  int v22; // r8
  _DWORD *v23; // r3
  int v24; // r0
  int v25; // r2
  int *v26; // r6
  int v27; // r7
  int v28; // r8
  int v29; // r7
  _DWORD *v30; // r10
  int v31; // r4
  size_t v32; // r9
  void *v33; // r0
  void *v34; // r5
  int v35; // r4
  _DWORD *v36; // r3
  int v37; // r0
  int v38; // r2
  int v39; // r5
  size_t v40; // r7
  _DWORD *v41; // r0
  _DWORD *v42; // r10
  int v43; // r5
  unsigned int v44; // r8
  int v45; // r3
  int v46; // r8
  int v47; // r5
  int v48; // r5
  int v49; // r2
  int v50; // r4
  int v51; // r5
  int v52; // r4
  size_t v53; // r5
  _DWORD *v54; // r0
  _DWORD *v55; // r10
  unsigned int v56; // r9
  int v57; // r5
  int v58; // r3
  int v59; // r8
  int v60; // r5
  int v61; // r5
  int v62; // r2
  int v63; // r4
  int v64; // r5
  int v65; // [sp+28h] [bp-878h]
  int v66; // [sp+34h] [bp-86Ch]
  int v67; // [sp+38h] [bp-868h]
  int v68; // [sp+40h] [bp-860h]
  int v69; // [sp+44h] [bp-85Ch]
  unsigned int v70; // [sp+4Ch] [bp-854h]
  char v71; // [sp+50h] [bp-850h]
  unsigned int v72; // [sp+54h] [bp-84Ch]
  char v73; // [sp+5Ch] [bp-844h]
  char v74; // [sp+60h] [bp-840h]
  char *v76; // [sp+70h] [bp-830h]
  unsigned int v78; // [sp+78h] [bp-828h]
  int v79; // [sp+7Ch] [bp-824h]
  int v80; // [sp+80h] [bp-820h] BYREF
  int v81; // [sp+84h] [bp-81Ch] BYREF
  int v82; // [sp+88h] [bp-818h] BYREF
  int v83; // [sp+8Ch] [bp-814h] BYREF
  int v84; // [sp+90h] [bp-810h]
  int v85; // [sp+94h] [bp-80Ch]
  int v86; // [sp+98h] [bp-808h] BYREF
  int v87; // [sp+9Ch] [bp-804h]
  int v88; // [sp+A0h] [bp-800h]
  int v89; // [sp+A4h] [bp-7FCh]
  char s[2040]; // [sp+A8h] [bp-7F8h] BYREF
  _WORD v91[2050]; // [sp+8A8h] [bp+8h] BYREF

  v78 = a2 - 810;
  if ( (unsigned int)(a2 - 810) > 0xB4 )
    v2 = 900;
  else
    v2 = a2;
  v67 = v2;
  v73 = BYTE1(v2);
  v65 = a1;
  v79 = (v2 >> 8) + (unsigned __int8)v2;
  v76 = "PQT";
  v74 = v2;
  do
  {
    v68 = (unsigned __int8)*v76++;
    if ( v78 > 0xB4 )
    {
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw((char *)v91, 0x1000u, 0, "illegal voltage [%d, %d], set default voltage %d", 810, 990, 900);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/drv_pic/isl68127.c",
        158,
        "ISL_set_voltage_dynamic",
        23,
        154,
        60,
        v91);
    }
    v3 = (unsigned __int8)(2 * v68);
    v72 = (unsigned int)(v3 + 312) >> 8;
    v70 = (unsigned int)(v3 + v79 + 91) >> 8;
    v71 = v3 + v79 + 91;
    LOBYTE(v66) = 4;
    do
    {
      v82 = 255;
      v83 = 0;
      v84 = 0;
      v85 = 0;
      v86 = 0;
      v87 = 0;
      v88 = 0;
      v89 = 0;
      pthread_mutex_lock(&i2c_mutex_all);
      v86 = 839363157;
      *(_WORD *)((char *)&v87 + 1) = -256;
      LOBYTE(v87) = 2 * v68;
      HIBYTE(v87) = v72;
      LOBYTE(v88) = 2 * v68 + 56;
      v4 = g_bitmain_pic_state[2 * v65];
      if ( pthread_mutex_lock(&stru_1A8A58) )
      {
        strcpy(s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)v91, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_iic.c",
          164,
          "iic_write",
          9,
          103,
          100,
          v91);
LABEL_10:
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)v91, 0x1000u, 0, "%s write iic err", "write_dc_dc");
        pthread_mutex_unlock(&stru_1A8A24);
        v6 = g_zc;
        v7 = 61;
        goto LABEL_11;
      }
      v5 = i2c_write(v4, (int)&v86, 9);
      pthread_mutex_unlock(&stru_1A8A58);
      if ( v5 != 9 )
        goto LABEL_10;
      v26 = &v82;
      usleep((__useconds_t)&loc_30D40);
      v82 = 0;
      v83 = 0;
      v84 = 0;
      v85 = 0;
      v27 = g_bitmain_pic_state[2 * v65];
      if ( pthread_mutex_lock(&stru_1A8A58) )
      {
        strcpy(s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)v91, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_iic.c",
          164,
          "iic_read",
          8,
          83,
          100,
          v91);
        goto LABEL_46;
      }
      v80 = v27;
      if ( pthread_mutex_lock(&stru_1A8A70) )
      {
        strcpy(s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)v91, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_i2c.c",
          164,
          "i2c_read",
          8,
          127,
          100,
          v91);
        pthread_mutex_unlock(&stru_1A8A58);
        goto LABEL_46;
      }
      if ( !dword_1A8A88 )
      {
LABEL_44:
        snprintf(s, 0x800u, "ctx %d not inited\n", v80);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)v91, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_1A8A24);
        v37 = g_zc;
        v38 = 159;
LABEL_45:
        zlog(
          v37,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_i2c.c",
          164,
          "i2c_read",
          8,
          v38,
          100,
          v91);
        pthread_mutex_unlock(&stru_1A8A70);
        pthread_mutex_unlock(&stru_1A8A58);
LABEL_46:
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)v91, 0x1000u, 0, "%s read iic err", "write_dc_dc");
        pthread_mutex_unlock(&stru_1A8A24);
        v6 = g_zc;
        v7 = 68;
LABEL_11:
        zlog(
          v6,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/drv_pic/isl68127.c",
          158,
          "write_dc_dc",
          11,
          v7,
          100,
          v91);
        goto LABEL_12;
      }
      v28 = *(_DWORD *)dword_1A8A88;
      v29 = *(_DWORD *)dword_1A8A88 + 4;
      v30 = **(_DWORD ***)dword_1A8A88;
      while ( 1 )
      {
        if ( (_DWORD *)v29 == v30 )
          goto LABEL_44;
        v31 = v30[4];
        v32 = *(_DWORD *)(v31 + 4);
        v33 = malloc(v32);
        v34 = v33;
        if ( v33 )
          memcpy(v33, *(const void **)v31, v32);
        v35 = (*(int (__fastcall **)(int *, void *))(v28 + 36))(&v80, v34);
        free(v34);
        if ( !v35 )
          break;
        v36 = (_DWORD *)*v30;
        v30 = (_DWORD *)v30[1];
        if ( v35 < 0 )
          v30 = v36;
      }
      v39 = v30[5];
      v40 = *(_DWORD *)(v39 + 4);
      v41 = malloc(v40);
      v42 = v41;
      if ( !v41 )
LABEL_60:
        __und(0);
      memcpy(v41, *(const void **)v39, v40);
      v43 = *v42;
      v44 = v42[1];
      snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v42, v44);
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw((char *)v91, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        "i2c_read",
        8,
        134,
        20,
        v91);
      v45 = dword_1A8A8C;
      v46 = (v43 << 26) | 0x2000000 | (v44 >> 4 << 20) | (v44 << 15) & 0x70000;
      while ( 2 )
      {
        v47 = 601;
        while ( *(int *)(v45 + 48) >= 0 )
        {
          usleep(0x1388u);
          if ( !--v47 )
          {
            free(v42);
            strcpy(s, "iic not ready 4 read1\n");
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw((char *)v91, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_1A8A24);
            v37 = g_zc;
            v38 = 141;
            goto LABEL_45;
          }
          v45 = dword_1A8A8C;
        }
        *(_DWORD *)(v45 + 48) = v46;
        v48 = 601;
        while ( 1 )
        {
          v49 = *(_DWORD *)(v45 + 48);
          if ( v49 < 0 )
            break;
          usleep(0x1388u);
          if ( !--v48 )
          {
            free(v42);
            strcpy(s, "iic not ready 4 read2\n");
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw((char *)v91, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_1A8A24);
            v37 = g_zc;
            v38 = 152;
            goto LABEL_45;
          }
          v45 = dword_1A8A8C;
        }
        *(_BYTE *)v26 = v49;
        v26 = (int *)((char *)v26 + 1);
        if ( (int *)((char *)&v83 + 1) != v26 )
          continue;
        break;
      }
      free(v42);
      pthread_mutex_unlock(&stru_1A8A70);
      pthread_mutex_unlock(&stru_1A8A58);
      v50 = BYTE1(v82);
      v51 = BYTE2(v82);
      if ( __PAIR64__(BYTE2(v82), BYTE1(v82)) != 0x100000032LL )
      {
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(
          (char *)v91,
          0x1000u,
          0,
          "--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x, read_back_data[3] = 0x%02x",
          "write_dc_dc",
          (unsigned __int8)v82,
          v50,
          v51,
          HIBYTE(v82));
        pthread_mutex_unlock(&stru_1A8A24);
        v6 = g_zc;
        v7 = 75;
        goto LABEL_11;
      }
LABEL_12:
      pthread_mutex_unlock(&i2c_mutex_all);
      usleep((__useconds_t)&stru_18694.st_info);
      v82 = 255;
      v83 = 0;
      v84 = 0;
      v85 = 0;
      v86 = 0;
      v87 = 0;
      v88 = 0;
      v89 = 0;
      pthread_mutex_lock(&i2c_mutex_all);
      BYTE1(v87) = 33;
      v86 = 839428693;
      LOBYTE(v87) = 2 * v68;
      BYTE2(v87) = v74;
      HIBYTE(v87) = v73;
      LOBYTE(v88) = v70;
      BYTE1(v88) = v71;
      v8 = g_bitmain_pic_state[2 * v65];
      if ( pthread_mutex_lock(&stru_1A8A58) )
      {
        strcpy(s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)v91, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_iic.c",
          164,
          "iic_write",
          9,
          103,
          100,
          v91);
LABEL_14:
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)v91, 0x1000u, 0, "%s write iic err", "write_dc_dc");
        pthread_mutex_unlock(&stru_1A8A24);
        v10 = g_zc;
        v11 = 61;
        goto LABEL_15;
      }
      v9 = i2c_write(v8, (int)&v86, 10);
      pthread_mutex_unlock(&stru_1A8A58);
      if ( v9 != 10 )
        goto LABEL_14;
      v14 = &v82;
      usleep((__useconds_t)&loc_30D40);
      v82 = 0;
      v83 = 0;
      v84 = 0;
      v85 = 0;
      v15 = g_bitmain_pic_state[2 * v65];
      if ( pthread_mutex_lock(&stru_1A8A58) )
      {
        strcpy(s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)v91, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_iic.c",
          164,
          "iic_read",
          8,
          83,
          100,
          v91);
        goto LABEL_33;
      }
      v81 = v15;
      if ( pthread_mutex_lock(&stru_1A8A70) )
      {
        strcpy(s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)v91, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_i2c.c",
          164,
          "i2c_read",
          8,
          127,
          100,
          v91);
        pthread_mutex_unlock(&stru_1A8A58);
        goto LABEL_33;
      }
      if ( !dword_1A8A88 )
      {
LABEL_31:
        snprintf(s, 0x800u, "ctx %d not inited\n", v81);
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)v91, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_1A8A24);
        v24 = g_zc;
        v25 = 159;
LABEL_32:
        zlog(
          v24,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_i2c.c",
          164,
          "i2c_read",
          8,
          v25,
          100,
          v91);
        pthread_mutex_unlock(&stru_1A8A70);
        pthread_mutex_unlock(&stru_1A8A58);
LABEL_33:
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw((char *)v91, 0x1000u, 0, "%s read iic err", "write_dc_dc");
        pthread_mutex_unlock(&stru_1A8A24);
        v10 = g_zc;
        v11 = 68;
LABEL_15:
        zlog(
          v10,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/drv_pic/isl68127.c",
          158,
          "write_dc_dc",
          11,
          v11,
          100,
          v91);
        goto LABEL_16;
      }
      v16 = *(_DWORD *)dword_1A8A88;
      v17 = **(_DWORD ***)dword_1A8A88;
      v69 = *(_DWORD *)dword_1A8A88 + 4;
      while ( 1 )
      {
        if ( v17 == (_DWORD *)v69 )
          goto LABEL_31;
        v18 = v17[4];
        v19 = *(_DWORD *)(v18 + 4);
        v20 = malloc(v19);
        v21 = v20;
        if ( v20 )
          memcpy(v20, *(const void **)v18, v19);
        v22 = (*(int (__fastcall **)(int *, void *))(v16 + 36))(&v81, v21);
        free(v21);
        if ( !v22 )
          break;
        v23 = (_DWORD *)*v17;
        v17 = (_DWORD *)v17[1];
        if ( v22 < 0 )
          v17 = v23;
      }
      v52 = v17[5];
      v53 = *(_DWORD *)(v52 + 4);
      v54 = malloc(v53);
      v55 = v54;
      if ( !v54 )
        goto LABEL_60;
      memcpy(v54, *(const void **)v52, v53);
      v56 = v55[1];
      v57 = *v55;
      snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v55, v56);
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw((char *)v91, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_i2c.c",
        164,
        "i2c_read",
        8,
        134,
        20,
        v91);
      v58 = dword_1A8A8C;
      v59 = (v57 << 26) | 0x2000000 | (v56 >> 4 << 20) | (v56 << 15) & 0x70000;
      while ( 2 )
      {
        v60 = 601;
        while ( *(int *)(v58 + 48) >= 0 )
        {
          usleep(0x1388u);
          if ( !--v60 )
          {
            free(v55);
            strcpy(s, "iic not ready 4 read1\n");
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw((char *)v91, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_1A8A24);
            v24 = g_zc;
            v25 = 141;
            goto LABEL_32;
          }
          v58 = dword_1A8A8C;
        }
        *(_DWORD *)(v58 + 48) = v59;
        v61 = 601;
        while ( 1 )
        {
          v62 = *(_DWORD *)(v58 + 48);
          if ( v62 < 0 )
            break;
          usleep(0x1388u);
          if ( !--v61 )
          {
            free(v55);
            strcpy(s, "iic not ready 4 read2\n");
            pthread_mutex_lock(&stru_1A8A24);
            logfmt_raw((char *)v91, 0x1000u, 0, s);
            pthread_mutex_unlock(&stru_1A8A24);
            v24 = g_zc;
            v25 = 152;
            goto LABEL_32;
          }
          v58 = dword_1A8A8C;
        }
        *(_BYTE *)v14 = v62;
        v14 = (int *)((char *)v14 + 1);
        if ( (int *)((char *)&v83 + 1) != v14 )
          continue;
        break;
      }
      free(v55);
      pthread_mutex_unlock(&stru_1A8A70);
      pthread_mutex_unlock(&stru_1A8A58);
      v63 = BYTE1(v82);
      v64 = BYTE2(v82);
      if ( BYTE1(v82) != 50 || BYTE2(v82) != 1 )
      {
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(
          (char *)v91,
          0x1000u,
          0,
          "--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x, read_back_data[3] = 0x%02x",
          "write_dc_dc",
          (unsigned __int8)v82,
          v63,
          v64,
          HIBYTE(v82));
        pthread_mutex_unlock(&stru_1A8A24);
        v10 = g_zc;
        v11 = 75;
        goto LABEL_15;
      }
LABEL_16:
      pthread_mutex_unlock(&i2c_mutex_all);
      usleep(0x30D40u);
      v91[0] = 0;
      sub_971C0(a1, v68, v91);
      v12 = LOBYTE(v91[0]) | (HIBYTE(v91[0]) << 8);
      if ( v67 - 9 <= v12 && v12 <= v67 + 9 )
        break;
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw((char *)v91, 0x1000u, 0, "set vol %d,  %d, set again!", v67, v12);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/drv_pic/isl68127.c",
        158,
        "ISL_set_voltage_dynamic",
        23,
        181,
        60,
        v91);
      usleep(0x30D40u);
      v66 = (unsigned __int8)(v66 - 1);
    }
    while ( v66 );
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw((char *)v91, 0x1000u, 0, "Set one chain ISL: domain addr = %x set vol %d, get vol %d", v68, a2, v12);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/drv_pic/isl68127.c",
      158,
      "set_chain_isl_voltage",
      21,
      215,
      60,
      v91);
  }
  while ( v76 != "" );
  return 1;
}
