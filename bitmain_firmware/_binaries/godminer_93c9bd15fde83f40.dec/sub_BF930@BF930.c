int __fastcall sub_BF930(int a1, unsigned __int8 *a2, unsigned int a3, unsigned __int8 *a4)
{
  int v4; // r9
  int v5; // r7
  _DWORD *v6; // r10
  int v7; // r5
  size_t v8; // r8
  void *v9; // r0
  void *v10; // r4
  int v11; // r8
  _DWORD *v12; // r3
  unsigned __int8 *v13; // r10
  int v14; // r7
  _DWORD *v15; // r9
  int v16; // r5
  size_t v17; // r8
  void *v18; // r0
  void *v19; // r4
  int v20; // r8
  _DWORD *v21; // r3
  int v22; // r2
  int v23; // r0
  int v24; // r3
  int v25; // r0
  int v26; // r2
  int v27; // r4
  unsigned __int8 *v28; // r7
  int v29; // t1
  int v30; // r3
  int v31; // r4
  int v33; // r4
  _DWORD *v34; // r0
  _DWORD *v35; // r10
  const void *v36; // r1
  int v37; // r4
  int v38; // r7
  unsigned int v39; // r5
  int v40; // r5
  int v41; // r4
  _DWORD *v42; // r0
  _DWORD *v43; // r9
  const void *v44; // r1
  int v45; // r4
  unsigned int v46; // r7
  int v47; // r5
  int v48; // r7
  int v49; // r3
  int v50; // r4
  int v51; // r3
  int v52; // r0
  int v53; // r2
  bool v54; // zf
  _BOOL4 v55; // r3
  int v56; // [sp+0h] [bp-840h]
  size_t n; // [sp+14h] [bp-82Ch]
  size_t na; // [sp+14h] [bp-82Ch]
  size_t nb; // [sp+14h] [bp-82Ch]
  size_t nc; // [sp+14h] [bp-82Ch]
  unsigned __int8 v62; // [sp+20h] [bp-820h]
  int v66; // [sp+34h] [bp-80Ch]
  int v67; // [sp+38h] [bp-808h] BYREF
  int v68; // [sp+3Ch] [bp-804h] BYREF
  char s[2048]; // [sp+40h] [bp-800h] BYREF
  char v70[4100]; // [sp+840h] [bp+0h] BYREF

  v66 = 0;
  pthread_mutex_lock(&power_mutex);
  while ( 1 )
  {
    v4 = 0;
    v62 = 0;
    do
    {
      if ( pthread_mutex_lock(&stru_1A8A58) )
      {
        strcpy(s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(v70, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_iic.c",
          164,
          "iic_write_reg",
          13,
          146,
          100,
          v70);
      }
      else
      {
        v67 = a1;
        if ( pthread_mutex_lock(&stru_1A8A70) )
        {
          strcpy(s, "failed to i2c lock\n");
          pthread_mutex_lock(&stru_1A8A24);
          logfmt_raw(v70, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/7007/7007_i2c.c",
            164,
            "i2c_write_reg",
            13,
            288,
            100,
            v70);
        }
        else
        {
          if ( dword_1A8A88 )
          {
            v5 = *(_DWORD *)dword_1A8A88;
            v6 = **(_DWORD ***)dword_1A8A88;
            n = *(_DWORD *)dword_1A8A88 + 4;
            while ( v6 != (_DWORD *)n )
            {
              v7 = v6[4];
              v8 = *(_DWORD *)(v7 + 4);
              v9 = malloc(v8);
              v10 = v9;
              if ( v9 )
                memcpy(v9, *(const void **)v7, v8);
              v11 = (*(int (__fastcall **)(int *, void *))(v5 + 36))(&v67, v10);
              free(v10);
              if ( !v11 )
              {
                v33 = v6[5];
                nb = *(_DWORD *)(v33 + 4);
                v34 = malloc(nb);
                v35 = v34;
                if ( !v34 )
                  __und(0);
                v36 = *(const void **)v33;
                v37 = 601;
                memcpy(v34, v36, nb);
                v38 = *v35;
                v39 = v35[1];
                snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v35, v39);
                pthread_mutex_lock(&stru_1A8A24);
                logfmt_raw(v70, 0x1000u, 0, s);
                pthread_mutex_unlock(&stru_1A8A24);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
                  164,
                  "i2c_write_reg",
                  13,
                  295,
                  20,
                  v70);
                v40 = a2[v4] | 0x1000000 | (v38 << 26) | (v39 >> 4 << 20) | (v39 << 15) & 0x70000;
                do
                {
                  if ( *(int *)(dword_1A8A8C + 48) < 0 )
                  {
                    *(_DWORD *)(dword_1A8A8C + 48) = v40;
                    free(v35);
                    pthread_mutex_unlock(&stru_1A8A70);
                    goto LABEL_14;
                  }
                  usleep(0x1388u);
                  --v37;
                }
                while ( v37 );
                strcpy(s, "iic not ready 4 write\n");
                pthread_mutex_lock(&stru_1A8A24);
                logfmt_raw(v70, 0x1000u, 0, s);
                pthread_mutex_unlock(&stru_1A8A24);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
                  164,
                  "i2c_write_reg",
                  13,
                  303,
                  100,
                  v70);
                free(v35);
                pthread_mutex_unlock(&stru_1A8A70);
                goto LABEL_14;
              }
              v12 = (_DWORD *)*v6;
              v6 = (_DWORD *)v6[1];
              if ( v11 < 0 )
                v6 = v12;
            }
          }
          snprintf(s, 0x800u, "ctx %d not inited\n", v67);
          pthread_mutex_lock(&stru_1A8A24);
          logfmt_raw(v70, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/7007/7007_i2c.c",
            164,
            "i2c_write_reg",
            13,
            313,
            100,
            v70);
          pthread_mutex_unlock(&stru_1A8A70);
        }
LABEL_14:
        pthread_mutex_unlock(&stru_1A8A58);
      }
      v4 = ++v62;
    }
    while ( v62 < a3 );
    v13 = a4;
    usleep((__useconds_t)&loc_61A80);
    do
    {
      if ( pthread_mutex_lock(&stru_1A8A58) )
      {
        strcpy(s, "failed to i2c lock\n");
        pthread_mutex_lock(&stru_1A8A24);
        logfmt_raw(v70, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_1A8A24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_iic.c",
          164,
          "iic_read_reg",
          12,
          124,
          100,
          v70);
      }
      else
      {
        v68 = a1;
        if ( pthread_mutex_lock(&stru_1A8A70) )
        {
          strcpy(s, "failed to i2c lock\n");
          pthread_mutex_lock(&stru_1A8A24);
          logfmt_raw(v70, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/7007/7007_i2c.c",
            164,
            "i2c_read_reg",
            12,
            229,
            100,
            v70);
        }
        else
        {
          if ( dword_1A8A88 )
          {
            v14 = *(_DWORD *)dword_1A8A88;
            v15 = **(_DWORD ***)dword_1A8A88;
            na = *(_DWORD *)dword_1A8A88 + 4;
            while ( (_DWORD *)na != v15 )
            {
              v16 = v15[4];
              v17 = *(_DWORD *)(v16 + 4);
              v18 = malloc(v17);
              v19 = v18;
              if ( v18 )
                memcpy(v18, *(const void **)v16, v17);
              v20 = (*(int (__fastcall **)(int *, void *))(v14 + 36))(&v68, v19);
              free(v19);
              if ( !v20 )
              {
                v41 = v15[5];
                nc = *(_DWORD *)(v41 + 4);
                v42 = malloc(nc);
                v43 = v42;
                if ( !v42 )
                  __und(0);
                v44 = *(const void **)v41;
                v45 = 601;
                memcpy(v42, v44, nc);
                v46 = v43[1];
                v47 = *v43 << 26;
                snprintf(s, 0x800u, "i2c read master = %d, slave = %d\n", *v43, v46);
                pthread_mutex_lock(&stru_1A8A24);
                logfmt_raw(v70, 0x1000u, 0, s);
                pthread_mutex_unlock(&stru_1A8A24);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
                  164,
                  "i2c_read_reg",
                  12,
                  236,
                  20,
                  v70);
                v48 = v47 | 0x3000000 | (v46 >> 4 << 20) | (v46 << 15) & 0x70000;
                while ( 1 )
                {
                  v49 = dword_1A8A8C;
                  if ( *(int *)(dword_1A8A8C + 48) < 0 )
                    break;
                  usleep(0x1388u);
                  if ( !--v45 )
                  {
                    strcpy(s, "iic not ready 4 read1\n");
                    pthread_mutex_lock(&stru_1A8A24);
                    logfmt_raw(v70, 0x1000u, 0, s);
                    pthread_mutex_unlock(&stru_1A8A24);
                    v52 = g_zc;
                    v53 = 243;
                    goto LABEL_55;
                  }
                }
                *(_DWORD *)(dword_1A8A8C + 48) = v48;
                v50 = 601;
                while ( 1 )
                {
                  v51 = *(_DWORD *)(v49 + 48);
                  if ( v51 < 0 )
                  {
                    *v13 = v51;
                    free(v43);
                    pthread_mutex_unlock(&stru_1A8A70);
                    goto LABEL_28;
                  }
                  usleep(0x1388u);
                  if ( !--v50 )
                    break;
                  v49 = dword_1A8A8C;
                }
                strcpy(s, "iic failed to read data\n");
                pthread_mutex_lock(&stru_1A8A24);
                logfmt_raw(v70, 0x1000u, 0, s);
                pthread_mutex_unlock(&stru_1A8A24);
                v52 = g_zc;
                v53 = 254;
LABEL_55:
                zlog(
                  v52,
                  "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/device/hal/platform/7007/7007_i2c.c",
                  164,
                  "i2c_read_reg",
                  12,
                  v53,
                  100,
                  v70);
                free(v43);
                pthread_mutex_unlock(&stru_1A8A70);
                goto LABEL_28;
              }
              v21 = (_DWORD *)*v15;
              v15 = (_DWORD *)v15[1];
              if ( v20 < 0 )
                v15 = v21;
            }
          }
          snprintf(s, 0x800u, "ctx %d not inited\n", v68);
          pthread_mutex_lock(&stru_1A8A24);
          logfmt_raw(v70, 0x1000u, 0, s);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/platform/7007/7007_i2c.c",
            164,
            "i2c_read_reg",
            12,
            262,
            100,
            v70);
          pthread_mutex_unlock(&stru_1A8A70);
        }
LABEL_28:
        pthread_mutex_unlock(&stru_1A8A58);
      }
      ++v13;
    }
    while ( v13 != a4 + 8 );
    usleep((__useconds_t)&stru_18694.st_info);
    v22 = a4[2];
    v23 = a4[3];
    v24 = v23 + v22 + a4[4] + a4[5];
    if ( v24 != (unsigned __int16)(a4[6] + (a4[7] << 8)) )
    {
      snprintf(
        s,
        0x800u,
        "power reply the bad crc, crc = 0x%04x, crc_read = 0x%04x\n",
        v24,
        (unsigned __int16)(a4[6] + (a4[7] << 8)));
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v70, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      v25 = g_zc;
      v26 = 88;
      goto LABEL_32;
    }
    if ( *a2 == *a4 && a2[1] == a4[1] )
    {
      v54 = v22 == 6;
      if ( v22 == 6 )
        v54 = a2[3] == v23;
      v55 = !v54;
      if ( v54 )
        break;
    }
    strcpy(s, "power reply the bad data\n");
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v70, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    v25 = g_zc;
    v26 = 94;
LABEL_32:
    zlog(
      v25,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/power/bitmain_power_APW9.c",
      166,
      "check_read_back_data",
      20,
      v26,
      100,
      v70);
    v27 = 0;
    v28 = a4 - 1;
    do
    {
      v29 = *++v28;
      v30 = v27++;
      snprintf(s, 0x800u, "read_back_data[%d] = 0x%02x", v30, v29);
      pthread_mutex_lock(&stru_1A8A24);
      logfmt_raw(v70, 0x1000u, 0, s);
      pthread_mutex_unlock(&stru_1A8A24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/power/bitmain_power_APW9.c",
        166,
        "check_read_back_data",
        20,
        100,
        100,
        v70);
    }
    while ( v27 != 8 );
    v56 = v66++;
    snprintf(s, 0x800u, "Send power cmd(0x%02x) failed, retry %d\n", a2[3], v56);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v70, 0x1000u, 0, s);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/power/bitmain_power_APW9.c",
      166,
      "exec_power_cmd",
      14,
      175,
      100,
      v70);
    if ( v66 == 3 )
    {
      v31 = -2147482880;
      goto LABEL_36;
    }
  }
  v31 = v55;
LABEL_36:
  pthread_mutex_unlock(&power_mutex);
  return v31;
}
