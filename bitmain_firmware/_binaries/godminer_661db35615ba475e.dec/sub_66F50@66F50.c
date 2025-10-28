int __fastcall sub_66F50(int a1, _DWORD *a2, int a3)
{
  int *v3; // r10
  int v4; // r5
  int v5; // r6
  unsigned int v6; // r4
  const char **v7; // r3
  int v8; // r0
  const char **v9; // lr
  int v10; // r1
  const char *v11; // r3
  const char *v12; // r1
  const char *v13; // r2
  const char *v14; // r3
  int v15; // r5
  int v16; // r3
  int v17; // r3
  _DWORD *v18; // lr
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r5
  int v23; // r3
  int v24; // r0
  int v25; // r6
  int v26; // r3
  int v27; // r2
  int v28; // r2
  bool v29; // cc
  int v30; // r3
  int v31; // r4
  _DWORD *v32; // r7
  int v33; // r8
  pthread_mutex_t *v34; // r11
  int v35; // r6
  int v36; // r5
  int kind; // r0
  int v38; // r3
  bool v39; // nf
  int *v41; // r2
  int v42; // r12
  char v43; // [sp+20h] [bp-190Ch] BYREF
  char *v44; // [sp+40h] [bp-18ECh]
  const char *v45; // [sp+44h] [bp-18E8h]
  char *format; // [sp+4Ch] [bp-18E0h]
  int *v47; // [sp+50h] [bp-18DCh]
  __int64 v48; // [sp+54h] [bp-18D8h]
  int *v49; // [sp+5Ch] [bp-18D0h]
  int v50; // [sp+60h] [bp-18CCh]
  int v51; // [sp+64h] [bp-18C8h]
  int v52; // [sp+68h] [bp-18C4h]
  const char **v53; // [sp+6Ch] [bp-18C0h]
  int *v54; // [sp+70h] [bp-18BCh]
  char *v55; // [sp+74h] [bp-18B8h]
  const char *v56; // [sp+78h] [bp-18B4h]
  const char *v57; // [sp+7Ch] [bp-18B0h]
  const char **v58; // [sp+80h] [bp-18ACh]
  int v59; // [sp+84h] [bp-18A8h]
  int v60; // [sp+88h] [bp-18A4h]
  int v61; // [sp+8Ch] [bp-18A0h]
  int *v62; // [sp+90h] [bp-189Ch]
  _DWORD *v63; // [sp+94h] [bp-1898h]
  int v64; // [sp+98h] [bp-1894h]
  pthread_mutex_t *v65; // [sp+9Ch] [bp-1890h]
  int *v66; // [sp+A0h] [bp-188Ch]
  int v67; // [sp+A4h] [bp-1888h]
  const char *v68; // [sp+A8h] [bp-1884h]
  int v69; // [sp+ACh] [bp-1880h]
  int v70; // [sp+B0h] [bp-187Ch]
  int v71; // [sp+B4h] [bp-1878h]
  int v72; // [sp+B8h] [bp-1874h]
  int v73; // [sp+BCh] [bp-1870h]
  int v74; // [sp+C0h] [bp-186Ch]
  int v75; // [sp+C4h] [bp-1868h]
  const char *v76; // [sp+C8h] [bp-1864h]
  int v77; // [sp+CCh] [bp-1860h]
  int v78; // [sp+D0h] [bp-185Ch]
  int v79; // [sp+D4h] [bp-1858h]
  int v80; // [sp+D8h] [bp-1854h]
  int v81; // [sp+DCh] [bp-1850h]
  int v82; // [sp+E0h] [bp-184Ch]
  int v83; // [sp+E4h] [bp-1848h]
  const char *v84; // [sp+E8h] [bp-1844h] BYREF
  int v85; // [sp+ECh] [bp-1840h]
  int v86; // [sp+F0h] [bp-183Ch]
  const char *v87; // [sp+F4h] [bp-1838h]
  const char *v88; // [sp+F8h] [bp-1834h]
  const char *v89; // [sp+FCh] [bp-1830h]
  const char *v90; // [sp+100h] [bp-182Ch]
  const char *v91; // [sp+104h] [bp-1828h]
  const char *v92; // [sp+108h] [bp-1824h]
  int v93; // [sp+10Ch] [bp-1820h]
  int v94; // [sp+110h] [bp-181Ch]
  int v95; // [sp+114h] [bp-1818h]
  int v96; // [sp+118h] [bp-1814h]
  int v97; // [sp+11Ch] [bp-1810h]
  int v98; // [sp+120h] [bp-180Ch]
  int v99; // [sp+124h] [bp-1808h]
  char s[2040]; // [sp+128h] [bp-1804h] BYREF
  int v101[1025]; // [sp+928h] [bp-1004h] BYREF

  v65 = &stru_190E30;
  v67 = a1;
  v63 = a2;
  v64 = a3;
  if ( !fan_inited )
  {
    if ( !platform_inited )
    {
      strcpy(s, "please init platform first!!\n");
      V_LOCK();
      logfmt_raw((char *)v101, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/7007/7007_fan.c",
        164,
        "fan_init",
        8,
        25,
        100,
        v101);
    }
    v65[152].__size[8] = 1;
  }
  v66 = &dword_18F48C;
  v60 = dword_18F4B0;
  if ( dword_18F4B0 <= 0 )
  {
    v30 = *(_DWORD *)(v64 + 32);
    v63[21] = 0;
  }
  else
  {
    v49 = &dword_197BD4;
    v48 = 0;
    v61 = 0;
    v53 = &v84;
    v56 = "fanid";
    v57 = "fanspeed";
    v55 = "%s";
    v62 = &g_fan_zc;
    format = "FAN_SPEED fpga value = 0x%x\n";
    v47 = (int *)"fan_get_realtime_speed";
    v58 = (const char **)&v43;
    v54 = &dword_197C8C;
    do
    {
      v3 = v54;
      v4 = 8;
      v5 = v48;
      v59 = v48;
      while ( 1 )
      {
        v6 = *(_DWORD *)(*v3 + 4);
        snprintf(s, 0x800u, format, v6);
        pthread_mutex_lock(&stru_197BB8);
        logfmt_raw((char *)v101, 0x1000u, 0, s);
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/platform/7007/7007_fan.c",
          164,
          v47,
          22,
          56,
          20,
          v101);
        if ( v5 == ((v6 >> 8) & 7) )
          break;
        usleep(0x2710u);
        if ( !--v4 )
        {
          v54 = v3;
          v51 = -1;
          v52 = -1;
          v50 = -1;
          goto LABEL_8;
        }
      }
      v52 = 0;
      v54 = v3;
      v50 = 120 * (unsigned __int8)v6;
      v51 = v50;
LABEL_8:
      pthread_mutex_lock(&stru_197BB8);
      v7 = v53;
      v8 = v52;
      v85 = 8;
      v53[4] = (const char *)v51;
      v7[5] = (const char *)v8;
      v53 = &v84;
      v9 = v58;
      v84 = v57;
      v86 = 3;
      v10 = v85;
      v11 = v87;
      v45 = "update_fanspeed";
      v44 = v55;
      v90 = 0;
      *v58 = v57;
      v9[1] = (const char *)v10;
      v9[2] = (const char *)3;
      v9[3] = v11;
      v9 += 4;
      v94 = 3;
      v92 = v56;
      v12 = v89;
      v13 = v90;
      v14 = v91;
      v15 = *v49;
      v98 = 0;
      *v9 = v88;
      v9[1] = v12;
      v9[2] = v13;
      v9[3] = v14;
      v16 = HIDWORD(v48);
      *v49 = v15 + 2;
      v93 = 5;
      v97 = v16;
      v96 = v48;
      logfmt_raw((char *)v101, 0x1000u, 0, v99, v92, 5, v94, v95, (_DWORD)v48, v16, v98, v99);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        *v62,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
        183,
        "update_fanspeed",
        15,
        34,
        40,
        v101);
      if ( v50 != -1 )
      {
        pthread_mutex_lock(&stru_197BB8);
        v70 = 3;
        v68 = v57;
        v69 = 8;
        v72 = v51;
        v45 = "update_fanspeed";
        v73 = v52;
        v44 = v55;
        v17 = v71;
        v18 = v58;
        v76 = v56;
        v74 = 0;
        v77 = 5;
        *v58 = v57;
        v18[1] = 8;
        v18[2] = 3;
        v18[3] = v17;
        v18 += 4;
        v82 = 0;
        v19 = v73;
        v20 = v74;
        v21 = v75;
        v22 = *v49 + 2;
        v78 = 3;
        *v18 = v72;
        v18[1] = v19;
        v18[2] = v20;
        v18[3] = v21;
        v23 = HIDWORD(v48);
        *v49 = v22;
        v81 = v23;
        v80 = v48;
        logfmt_raw((char *)v101, 0x1000u, 0, v83, v76, v77, v78, v79, (_DWORD)v48, v23, v82, v83);
        pthread_mutex_unlock(&stru_197BB8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
          183,
          "update_fanspeed",
          15,
          36,
          20,
          v101);
        v24 = v61;
        v25 = v50;
        v26 = 4 * v61;
        v27 = v63[22];
        *(_DWORD *)(v63[23] + 4 * v61) = v59;
        *(_DWORD *)(v27 + v26) = v25;
        v61 = v24 + 1;
      }
      ++v48;
    }
    while ( v60 > (int)v48 );
    v28 = v61;
    v29 = v61 < v60;
    v63[21] = v61;
    if ( !v29 || (v30 = *(_DWORD *)(v64 + 32) | 2, *(_DWORD *)(v64 + 32) = v30, v28) )
    {
      HIDWORD(v48) = &g_zc;
      LODWORD(v48) = s;
      format = (char *)458129845;
      v31 = 0;
      v47 = &dword_195D2C;
      v32 = v63;
      v33 = v64;
      v34 = v65;
      do
      {
        while ( 1 )
        {
          v35 = *(_DWORD *)(v32[22] + 4 * v31);
          if ( v35 )
          {
            v36 = v66[10];
            if ( v34[152].__size[9] )
            {
              kind = v34[152].__kind;
            }
            else
            {
              v49 = (int *)platform_inited;
              kind = 1;
              if ( platform_inited )
              {
                v41 = v47;
                *v47 = 1;
                *((_BYTE *)v41 + 4) = 1;
              }
              else
              {
                v42 = v48;
                *(_DWORD *)v48 = *(_DWORD *)"please init platform first!!\n";
                strcpy((char *)(v42 + 4), "se init platform first!!\n");
                V_LOCK();
                logfmt_raw((char *)v101, 0x1000u, (int)v49, (_DWORD)v48);
                V_UNLOCK();
                zlog(
                  *(_DWORD *)HIDWORD(v48),
                  "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/backend/device/hal/platform/7007/7007_pwm.c",
                  164,
                  "pwm_init",
                  8,
                  25,
                  100,
                  v101);
                kind = -2;
              }
              v34[152].__kind = kind;
              v34[152].__size[9] = 1;
            }
            pwm_get(kind, v101);
            if ( v35 >= ((int)((unsigned __int64)(v36 * v101[0] * (__int64)(int)format) >> 32) >> 4)
                      - ((v36 * v101[0]) >> 31) )
              break;
          }
          ++v31;
          *(_DWORD *)(v33 + 32) |= 1u;
          if ( v31 >= v32[21] )
            goto LABEL_21;
        }
        ++v31;
      }
      while ( v31 < v32[21] );
LABEL_21:
      v30 = *(_DWORD *)(v64 + 32);
    }
  }
  if ( (v30 & 3) != 0 )
  {
    v38 = v65[152].__nusers + 1;
    v39 = (signed int)(v65[152].__nusers - 14) < 0;
    v65[152].__nusers = v38;
    if ( !(v39 ^ __OFSUB__(v38, 15) | (v38 == 15)) )
    {
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw((char *)v101, 0x1000u, 0, "fan_error_num: %d fan_num %d", v65[152].__nusers, v63[21]);
      pthread_mutex_unlock(&stru_197BB8);
      if ( !*(_BYTE *)(v67 + 130) )
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
          183,
          "update_fanspeed",
          15,
          55,
          20,
          v101);
      *(_DWORD *)(v64 + 32) |= 4u;
    }
  }
  else
  {
    v65[152].__nusers = 0;
  }
  return v64 + 32;
}
