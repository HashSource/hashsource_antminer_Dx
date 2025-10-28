int __fastcall update_fanspeed(int a1, _DWORD *a2, int a3)
{
  int v6; // r3
  const char *v8; // r3
  char *v9; // r0
  char *v10; // r12
  int v11; // r5
  unsigned int v12; // r9
  int v13; // r1
  int v14; // r2
  int v15; // r3
  _DWORD *v16; // r11
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r0
  int v21; // r3
  int v22; // r2
  _DWORD *v23; // r3
  int realtime_speed; // r6
  _DWORD *v25; // r11
  int v26; // r1
  int v27; // r2
  int v28; // r3
  _DWORD *v29; // r8
  int v30; // r1
  int v31; // r2
  int v32; // r3
  int v33; // r3
  char *v34; // r6
  int v35; // r1
  int v36; // r2
  int v37; // r3
  char *v38; // r11
  _DWORD *v39; // r8
  int v40; // r1
  int v41; // r2
  int v42; // r3
  int v43; // r3
  int v44; // r2
  bool v45; // cc
  int v46; // r3
  int v47; // r5
  int v48; // r9
  int v49; // r10
  int fan_max_speed; // r6
  int v51; // r3
  bool v52; // nf
  int v53; // r3
  int v54; // r3
  int v55; // r3
  int v56; // r1
  __int64 v57; // r10
  int v58; // r1
  char *v59; // r0
  char *v60; // r12
  int v61; // lr
  int v62; // r9
  int v63; // r7
  _DWORD *v64; // r6
  int v65; // r1
  int v66; // r2
  int v67; // r3
  int v68; // r1
  int v69; // r2
  int v70; // r3
  _DWORD *v71; // r12
  char *v72; // lr
  int v73; // r1
  int v74; // r2
  int v75; // r3
  int v76; // r1
  int v77; // r2
  int v78; // r3
  int v79; // r3
  int v80; // r1
  _BYTE v81[32]; // [sp+20h] [bp-11C4h] BYREF
  char *v82; // [sp+40h] [bp-11A4h]
  const char *v83; // [sp+44h] [bp-11A0h]
  char *v84; // [sp+48h] [bp-119Ch]
  _DWORD *v85; // [sp+54h] [bp-1190h]
  char *s; // [sp+58h] [bp-118Ch]
  char *v87; // [sp+5Ch] [bp-1188h]
  const char *v88; // [sp+60h] [bp-1184h]
  char *v89; // [sp+64h] [bp-1180h]
  __int64 v90; // [sp+68h] [bp-117Ch]
  int v91; // [sp+70h] [bp-1174h]
  _DWORD *v92; // [sp+74h] [bp-1170h]
  int fan_num; // [sp+78h] [bp-116Ch]
  int *v94; // [sp+7Ch] [bp-1168h]
  int *v95; // [sp+80h] [bp-1164h]
  int v96; // [sp+84h] [bp-1160h]
  _DWORD *v97; // [sp+88h] [bp-115Ch]
  int v98; // [sp+8Ch] [bp-1158h]
  int v99; // [sp+90h] [bp-1154h]
  char *v100; // [sp+94h] [bp-1150h]
  int v101; // [sp+9Ch] [bp-1148h] BYREF
  _DWORD v102[7]; // [sp+A0h] [bp-1144h] BYREF
  int v103; // [sp+BCh] [bp-1128h]
  _DWORD v104[8]; // [sp+C0h] [bp-1124h] BYREF
  _DWORD v105[7]; // [sp+E0h] [bp-1104h] BYREF
  int v106; // [sp+FCh] [bp-10E8h]
  _DWORD v107[8]; // [sp+100h] [bp-10E4h] BYREF
  _DWORD v108[7]; // [sp+120h] [bp-10C4h] BYREF
  int v109; // [sp+13Ch] [bp-10A8h]
  _DWORD v110[8]; // [sp+140h] [bp-10A4h] BYREF
  _DWORD v111[7]; // [sp+160h] [bp-1084h] BYREF
  int v112; // [sp+17Ch] [bp-1068h]
  _DWORD v113[8]; // [sp+180h] [bp-1064h] BYREF
  _DWORD v114[7]; // [sp+1A0h] [bp-1044h] BYREF
  int v115; // [sp+1BCh] [bp-1028h]
  _DWORD v116[8]; // [sp+1C0h] [bp-1024h] BYREF
  char v117[4100]; // [sp+1E0h] [bp-1004h] BYREF

  v98 = a3;
  v101 = 0;
  v6 = *(_DWORD *)get_all_created_runtime(&v101);
  v96 = a3 + 32;
  v99 = v6;
  if ( v6 == a1 )
  {
    v100 = &fan_inited;
    if ( !fan_inited )
    {
      fan_init();
      *v100 = 1;
    }
    fan_num = platform_get_fan_num();
    if ( fan_num <= 0 )
    {
      v46 = *(_DWORD *)(v98 + 32);
      a2[23] = 0;
    }
    else
    {
      LOWORD(v8) = -28616;
      HIWORD(v8) = (unsigned int)"%.2f, nc %llu, new %llu, %.2f H/s" >> 16;
      v88 = v8;
      LOWORD(v9) = 31192;
      LOWORD(v10) = 31200;
      v11 = 0;
      v89 = "%s";
      HIWORD(v9) = (unsigned int)"ootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_heartbeat.c" >> 16;
      HIWORD(v10) = (unsigned int)"ildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_heartbeat.c" >> 16;
      v91 = 0;
      v12 = 0;
      v95 = &g_fan_zc;
      v94 = &g_zc;
      s = v9;
      v87 = v10;
      v92 = v81;
      v97 = a2;
      v85 = 0;
      do
      {
        realtime_speed = fan_get_realtime_speed(v11);
        V_LOCK();
        V_INT((int)v102, s, __SPAIR64__((unsigned int)v85, v12));
        v90 = realtime_speed;
        V_INT((int)v104, v87, realtime_speed);
        v25 = v92;
        v26 = v104[1];
        v27 = v104[2];
        v28 = v104[3];
        v29 = v92;
        v83 = v88;
        v82 = v89;
        *v92 = v104[0];
        v29[1] = v26;
        v29[2] = v27;
        v29[3] = v28;
        v29 += 4;
        v30 = v104[5];
        v31 = v104[6];
        v32 = v104[7];
        *v29 = v104[4];
        v29[1] = v30;
        v29[2] = v31;
        v29[3] = v32;
        logfmt_raw(v117, 0x1000u, 0, v103, v102[0], v102[1], v102[2], v102[3], v102[4], v102[5], v102[6], v103);
        V_UNLOCK();
        LOWORD(v33) = -28616;
        HIWORD(v33) = (unsigned int)"%.2f, nc %llu, new %llu, %.2f H/s" >> 16;
        zlog(
          *v95,
          "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
          189,
          v33,
          15,
          37,
          40,
          v117);
        V_LOCK();
        if ( realtime_speed == -1 )
        {
          LOWORD(v34) = 31212;
          V_INT((int)v108, s, __SPAIR64__((unsigned int)v85, v12));
          V_INT((int)v110, v87, 0);
          v35 = v110[1];
          v36 = v110[2];
          v37 = v110[3];
          HIWORD(v34) = (unsigned int)"release/build/godminer-origin_godminer-new/miner_util/check_heartbeat.c" >> 16;
          v38 = (&fan_name)[v11];
          v39 = v92;
          v82 = v34;
          v83 = (const char *)v11;
          v84 = v38;
          *v92 = v110[0];
          v39[1] = v35;
          v39[2] = v36;
          v39[3] = v37;
          v39 += 4;
          v40 = v110[5];
          v41 = v110[6];
          v42 = v110[7];
          *v39 = v110[4];
          v39[1] = v40;
          v39[2] = v41;
          v39[3] = v42;
          logfmt_raw(v117, 0x1000u, 0, v109, v108[0], v108[1], v108[2], v108[3], v108[4], v108[5], v108[6], v109);
          V_UNLOCK();
          LOWORD(v43) = -28616;
          HIWORD(v43) = (unsigned int)"%.2f, nc %llu, new %llu, %.2f H/s" >> 16;
          zlog(
            *v94,
            "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            189,
            v43,
            15,
            45,
            100,
            v117);
        }
        else
        {
          V_INT((int)v105, s, __SPAIR64__((unsigned int)v85, v12));
          V_INT((int)v107, v87, v90);
          v13 = v107[1];
          v14 = v107[2];
          v15 = v107[3];
          v83 = v88;
          v82 = v89;
          *v25 = v107[0];
          v25[1] = v13;
          v25[2] = v14;
          v25[3] = v15;
          v16 = v25 + 4;
          v17 = v107[5];
          v18 = v107[6];
          v19 = v107[7];
          *v16 = v107[4];
          v16[1] = v17;
          v16[2] = v18;
          v16[3] = v19;
          logfmt_raw(v117, 0x1000u, 0, v106, v105[0], v105[1], v105[2], v105[3], v105[4], v105[5], v105[6], v106);
          V_UNLOCK();
          zlog(
            *v94,
            "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            189,
            "update_fanspeed",
            15,
            39,
            20,
            v117);
          v20 = v91;
          v21 = 4 * v91;
          v22 = v97[24];
          *(_DWORD *)(v97[25] + 4 * v91) = v11;
          *(_DWORD *)(v22 + v21) = realtime_speed;
          v91 = v20 + 1;
        }
        ++v11;
        v23 = (_DWORD *)((__PAIR64__((unsigned int)v85, v12++) + 1) >> 32);
        v85 = v23;
      }
      while ( fan_num != v11 );
      v44 = v91;
      a2 = v97;
      v45 = v91 < fan_num;
      v97[23] = v91;
      if ( !v45 || (v46 = *(_DWORD *)(v98 + 32) | 2, *(_DWORD *)(v98 + 32) = v46, v44) )
      {
        v47 = 0;
        v48 = v98;
        do
        {
          while ( 1 )
          {
            v49 = *(_DWORD *)(a2[24] + 4 * v47);
            if ( v49 )
            {
              fan_max_speed = platform_get_fan_max_speed(v47);
              if ( v49 >= fan_pwm_get() * fan_max_speed / 150 )
                break;
            }
            ++v47;
            *(_DWORD *)(v48 + 32) |= 1u;
            if ( a2[23] <= v47 )
              goto LABEL_19;
          }
          ++v47;
        }
        while ( a2[23] > v47 );
LABEL_19:
        v46 = *(_DWORD *)(v98 + 32);
      }
    }
    if ( (v46 & 3) != 0 )
    {
      v51 = *((_DWORD *)v100 + 1) + 1;
      v52 = *((_DWORD *)v100 + 1) - 14 < 0;
      *((_DWORD *)v100 + 1) = v51;
      if ( !(v52 ^ __OFSUB__(v51, 15) | (v51 == 15)) )
      {
        V_LOCK();
        LOWORD(v53) = -28408;
        HIWORD(v53) = (unsigned int)"update_hashrate.c" >> 16;
        logfmt_raw(v117, 0x1000u, 0, v53, *((_DWORD *)v100 + 1), a2[23]);
        V_UNLOCK();
        if ( !*(_BYTE *)(v99 + 238) )
        {
          LOWORD(v79) = -28616;
          LOWORD(v80) = -28600;
          HIWORD(v79) = (unsigned int)"%.2f, nc %llu, new %llu, %.2f H/s" >> 16;
          HIWORD(v80) = (unsigned int)"ew %llu, %.2f H/s" >> 16;
          zlog(g_zc, v80, 189, v79, 15, 63, 20, v117);
        }
        if ( *((_DWORD *)v100 + 1) == 16 )
        {
          V_LOCK();
          LOWORD(v54) = 4784;
          HIWORD(v54) = (unsigned int)"ch" >> 16;
          v94 = &g_zc;
          logfmt_raw(v117, 0x1000u, 0, v54, "F:1");
          V_UNLOCK();
          LOWORD(v55) = -28616;
          LOWORD(v56) = -28600;
          HIWORD(v55) = (unsigned int)"%.2f, nc %llu, new %llu, %.2f H/s" >> 16;
          HIWORD(v56) = (unsigned int)"ew %llu, %.2f H/s" >> 16;
          zlog(g_zc, v56, 189, v55, 15, 67, 100, v117);
          v45 = fan_num <= 0;
          *(_DWORD *)(v98 + 32) |= 4u;
          if ( !v45 )
          {
            v57 = 0;
            v88 = "update_fanspeed";
            v85 = &unk_172CCC;
            LOWORD(v58) = 31212;
            LOWORD(v59) = 31192;
            LOWORD(v60) = 31200;
            LOWORD(v61) = -28600;
            v62 = 0;
            v89 = "%s";
            HIWORD(v58) = (unsigned int)"release/build/godminer-origin_godminer-new/miner_util/check_heartbeat.c" >> 16;
            HIWORD(v59) = (unsigned int)"ootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_heartbeat.c" >> 16;
            HIWORD(v60) = (unsigned int)"ildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/check_heartbeat.c" >> 16;
            HIWORD(v61) = (unsigned int)"ew %llu, %.2f H/s" >> 16;
            v95 = &g_fan_zc;
            v91 = v58;
            s = v59;
            v87 = v60;
            LODWORD(v90) = v61;
            v92 = v81;
            do
            {
              v63 = fan_get_realtime_speed(v62);
              V_LOCK();
              V_INT((int)v111, s, v57);
              v64 = v92;
              V_INT((int)v113, v87, v63);
              v83 = v88;
              v65 = v113[1];
              v66 = v113[2];
              v67 = v113[3];
              v82 = v89;
              *v64 = v113[0];
              v64[1] = v65;
              v64[2] = v66;
              v64[3] = v67;
              v64 += 4;
              v68 = v113[5];
              v69 = v113[6];
              v70 = v113[7];
              *v64 = v113[4];
              v64[1] = v68;
              v64[2] = v69;
              v64[3] = v70;
              logfmt_raw(v117, 0x1000u, 0, v112, v111[0], v111[1], v111[2], v111[3], v111[4], v111[5], v111[6], v112);
              V_UNLOCK();
              zlog(*v95, v90, 189, "update_fanspeed", 15, 71, 40, v117);
              V_LOCK();
              V_INT((int)v114, s, v57);
              V_INT((int)v116, v87, v63 & ~(v63 >> 31));
              v71 = v92;
              v72 = (char *)v85[1];
              ++v85;
              v73 = v116[1];
              v74 = v116[2];
              v75 = v116[3];
              v83 = (const char *)v62++;
              v84 = v72;
              v82 = (char *)v91;
              *v92 = v116[0];
              v71[1] = v73;
              v71[2] = v74;
              v71[3] = v75;
              v76 = v116[5];
              v77 = v116[6];
              v78 = v116[7];
              *v64 = v116[4];
              v64[1] = v76;
              v64[2] = v77;
              v64[3] = v78;
              logfmt_raw(v117, 0x1000u, 0, v115, v114[0], v114[1], v114[2], v114[3], v114[4], v114[5], v114[6], v115);
              V_UNLOCK();
              zlog(*v94, v90, 189, "update_fanspeed", 15, 72, 100, v117);
              ++v57;
            }
            while ( fan_num != v62 );
          }
        }
      }
    }
    else
    {
      *((_DWORD *)v100 + 1) = 0;
    }
  }
  return v96;
}
