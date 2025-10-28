int __fastcall SOC_24G_seq1_20210922_update(int a1, int a2, char a3, int a4)
{
  int v7; // r11
  bool v8; // zf
  int v9; // r12
  int v10; // r12
  int v11; // r3
  int v12; // r12
  int v13; // r7
  int v14; // r12
  int v15; // r12
  int v16; // r12
  int v17; // r12
  int v18; // r12
  int v19; // lr
  int v20; // r12
  int v21; // r12
  int v22; // r12
  int v23; // r12
  int v24; // r11
  int v25; // r12
  int v26; // r12
  int v27; // r1
  int v28; // r12
  int v29; // r12
  int v30; // r12
  int v31; // r12
  int v32; // r12
  int v33; // r12
  int v34; // r12
  int v35; // r12
  int v36; // r6
  int v37; // r12
  int v38; // r12
  int v39; // r12
  int v40; // r12
  int v41; // r12
  int v42; // r12
  int v43; // r8
  int v44; // r12
  int v45; // r12
  int v46; // r9
  int v47; // r12
  int v48; // r12
  int v49; // r12
  int v50; // r12
  int v51; // r12
  int v52; // r12
  int v53; // r12
  int v54; // r12
  int v55; // r7
  void (__fastcall *v56)(int, int *); // r3
  void (__fastcall *v57)(int, int *); // r3
  void (__fastcall *v58)(int, int *); // r3
  void (__fastcall *v59)(int, int *); // r3
  void (__fastcall *v60)(int, int *); // r3
  void (__fastcall *v61)(int, int *); // r3
  void (__fastcall *v62)(int, int *); // r3
  void (__fastcall *v63)(int, int *); // r3
  int v65; // [sp+14h] [bp-10B0h]
  int v66; // [sp+18h] [bp-10ACh]
  int v67; // [sp+1Ch] [bp-10A8h]
  int v68; // [sp+20h] [bp-10A4h]
  int v69; // [sp+24h] [bp-10A0h]
  int v70; // [sp+28h] [bp-109Ch]
  int v71; // [sp+2Ch] [bp-1098h]
  int v72; // [sp+30h] [bp-1094h]
  int v73; // [sp+34h] [bp-1090h]
  int v74; // [sp+38h] [bp-108Ch]
  int v75; // [sp+3Ch] [bp-1088h]
  int v76; // [sp+40h] [bp-1084h]
  int v77; // [sp+44h] [bp-1080h]
  int v78; // [sp+48h] [bp-107Ch]
  int v79; // [sp+4Ch] [bp-1078h]
  int v80; // [sp+50h] [bp-1074h]
  int v81; // [sp+54h] [bp-1070h]
  int v82; // [sp+58h] [bp-106Ch]
  int v83; // [sp+5Ch] [bp-1068h]
  int v84; // [sp+60h] [bp-1064h]
  int v85; // [sp+64h] [bp-1060h]
  int v86; // [sp+68h] [bp-105Ch]
  int v87; // [sp+6Ch] [bp-1058h]
  int v88; // [sp+70h] [bp-1054h]
  int v89; // [sp+74h] [bp-1050h]
  int v90; // [sp+78h] [bp-104Ch]
  int v91; // [sp+7Ch] [bp-1048h]
  int v92; // [sp+80h] [bp-1044h]
  int v93; // [sp+84h] [bp-1040h]
  int v94; // [sp+88h] [bp-103Ch]
  int v95; // [sp+8Ch] [bp-1038h]
  int v96; // [sp+90h] [bp-1034h]
  int v97; // [sp+94h] [bp-1030h]
  int v98; // [sp+98h] [bp-102Ch]
  int v99; // [sp+9Ch] [bp-1028h]
  int v100; // [sp+A0h] [bp-1024h]
  int v101; // [sp+A4h] [bp-1020h]
  int v102; // [sp+A8h] [bp-101Ch]
  int v103; // [sp+ACh] [bp-1018h]
  int v104; // [sp+B0h] [bp-1014h]
  int v105; // [sp+B4h] [bp-1010h]
  int v106; // [sp+B8h] [bp-100Ch]
  int v107; // [sp+BCh] [bp-1008h]
  int v108; // [sp+C0h] [bp-1004h] BYREF
  int v109; // [sp+C4h] [bp-1000h]
  int v110; // [sp+C8h] [bp-FFCh]
  int v111; // [sp+CCh] [bp-FF8h]

  V_LOCK();
  logfmt_raw((char *)&v108, 0x1000u, 0, "%s...", "SOC_24G_seq1_20210922_update");
  V_UNLOCK();
  LOWORD(v7) = -3906;
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "SOC_24G_seq1_20210922_update",
    28,
    5145,
    60,
    &v108);
  v8 = a4 == 8;
  v9 = 61541;
  if ( a4 != 8 )
    v9 = 101;
  HIWORD(v7) = 0x8000;
  v103 = v9;
  v10 = 61447;
  if ( a4 != 8 )
    v10 = 7;
  LOWORD(v11) = 190;
  v102 = v10;
  v12 = 61494;
  if ( a4 != 8 )
    v12 = 54;
  v13 = 61497;
  v101 = v12;
  v14 = 61493;
  if ( !v8 )
  {
    v14 = 53;
    v13 = 57;
  }
  v100 = v14;
  v15 = 61492;
  if ( !v8 )
    v15 = 52;
  HIWORD(v11) = 0x8000;
  v99 = v15;
  v16 = 61490;
  if ( v8 )
    v11 = v7;
  else
    v16 = 50;
  v98 = v16;
  v17 = 61446;
  if ( !v8 )
    v17 = 6;
  v97 = v17;
  v18 = 61484;
  if ( !v8 )
    v18 = 44;
  v19 = 61542;
  v96 = v18;
  v20 = 61483;
  if ( !v8 )
  {
    v20 = 43;
    v19 = 102;
  }
  v95 = v20;
  v21 = 61481;
  if ( !v8 )
    v21 = 41;
  v107 = v13;
  v94 = v21;
  v22 = 61480;
  if ( v8 )
    v13 = 61496;
  else
    v22 = 40;
  v93 = v22;
  v23 = 61479;
  if ( !v8 )
    v23 = 39;
  v24 = 61495;
  v92 = v23;
  v25 = 61513;
  if ( !v8 )
  {
    v25 = 73;
    v24 = 55;
  }
  v91 = v25;
  v26 = 61510;
  if ( !v8 )
    v26 = 70;
  v27 = 61550;
  v69 = v26;
  v28 = 61556;
  if ( !v8 )
  {
    v28 = 116;
    v27 = 110;
  }
  v90 = v28;
  v29 = 61474;
  if ( !v8 )
  {
    v29 = 34;
    v13 = 56;
  }
  v89 = v29;
  v30 = 61512;
  if ( !v8 )
    v30 = 72;
  v104 = v19;
  v76 = v30;
  v31 = 61545;
  if ( !v8 )
    v31 = 105;
  v105 = v24;
  v75 = v31;
  v32 = 61580;
  if ( !v8 )
    v32 = 140;
  v67 = v27;
  v88 = v32;
  v33 = 61579;
  if ( !v8 )
    v33 = 139;
  v66 = v11;
  v83 = v33;
  v34 = 61606;
  if ( !v8 )
    v34 = 166;
  v106 = v13;
  v85 = v34;
  v35 = 61630;
  if ( !v8 )
    v35 = 190;
  v36 = 61441;
  v65 = v35;
  v37 = 61564;
  if ( !v8 )
  {
    v37 = 124;
    v36 = 1;
  }
  v87 = v37;
  v38 = 61590;
  if ( !v8 )
    v38 = 150;
  v81 = v38;
  v39 = 61443;
  if ( !v8 )
    v39 = 3;
  v82 = v39;
  v40 = 61448;
  if ( !v8 )
    v40 = 8;
  v70 = v40;
  v41 = 61442;
  if ( !v8 )
    v41 = 2;
  v68 = v41;
  v42 = 61622;
  if ( !v8 )
    v42 = 182;
  v43 = 61466;
  v79 = v42;
  v44 = 61566;
  if ( !v8 )
  {
    v44 = 126;
    v43 = 26;
  }
  v80 = v44;
  v45 = 61514;
  if ( !v8 )
    v45 = 74;
  v46 = 61487;
  v71 = v45;
  v47 = 61458;
  if ( !v8 )
  {
    v47 = 18;
    v24 = 27;
  }
  v86 = v47;
  v48 = 61472;
  if ( !v8 )
  {
    v48 = 32;
    v46 = 47;
  }
  v78 = v48;
  v49 = 61511;
  if ( !v8 )
    v49 = 71;
  v73 = v49;
  v50 = 61469;
  if ( !v8 )
    v50 = 29;
  v77 = v50;
  if ( v8 )
    v24 = 61467;
  v51 = 61465;
  if ( !v8 )
    v51 = 25;
  v72 = v51;
  v52 = 61488;
  if ( !v8 )
    v52 = 48;
  v84 = v52;
  v53 = 61482;
  if ( !v8 )
    v53 = 42;
  v74 = v53;
  v54 = 61551;
  if ( !v8 )
    v54 = 111;
  v55 = v54;
  sub_D19C4(a1, a3, v36, 0xFFFFFFF7);
  sub_D19C4(a1, a3, v67, 0);
  sub_70324(a1, a3, 144, -520093697);
  sub_70324(a1, a3, 145, -2147438591);
  sub_70324(a1, a3, 144, 251658240);
  sub_70324(a1, a3, 145, -2147438529);
  sub_70324(a1, a3, 144, -520093697);
  sub_70324(a1, a3, 145, -2147434495);
  sub_70324(a1, a3, 144, 251658240);
  sub_70324(a1, a3, 145, -2147434433);
  sub_70324(a1, a3, 144, -1048321);
  sub_70324(a1, a3, 145, -2147438591);
  sub_70324(a1, a3, 144, 256);
  sub_70324(a1, a3, 145, -2147438530);
  sub_70324(a1, a3, 144, -1048321);
  sub_70324(a1, a3, 145, -2147434495);
  sub_70324(a1, a3, 144, 256);
  sub_70324(a1, a3, 145, -2147434434);
  sub_70324(a1, a3, 144, -4096);
  sub_70324(a1, a3, 145, -2147438591);
  sub_70324(a1, a3, 144, 4);
  sub_70324(a1, a3, 145, -2147438529);
  sub_70324(a1, a3, 144, -4096);
  sub_70324(a1, a3, 145, -2147434495);
  sub_70324(a1, a3, 144, 4);
  sub_70324(a1, a3, 145, -2147434433);
  sub_D19C4(a1, a3, v36, 0xFFFFFFFD);
  sub_D19C4(a1, a3, v67, 0);
  sub_D19C4(a1, a3, v36, 0x7FFFFFFFu);
  sub_D19C4(a1, a3, v55, 0x80000000);
  sub_D19C4(a1, a3, v36, 0xFFFBFFFF);
  sub_D19C4(a1, a3, v67, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFFFFB);
  sub_D19C4(a1, a3, v67, 0);
  sub_70324(a1, a3, 144, 0xFFFFFF);
  sub_70324(a1, a3, 145, -2147438591);
  sub_70324(a1, a3, 144, 838860800);
  sub_70324(a1, a3, 145, -2147438590);
  sub_70324(a1, a3, 144, 0xFFFFFF);
  sub_70324(a1, a3, 145, -2147434495);
  sub_70324(a1, a3, 144, 838860800);
  sub_70324(a1, a3, 145, -2147434494);
  sub_70324(a1, a3, 144, -4);
  sub_70324(a1, a3, 145, -2147438591);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147438589);
  sub_70324(a1, a3, 144, -4);
  sub_70324(a1, a3, 145, -2147434495);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147434493);
  sub_70324(a1, a3, 144, 0xFFFFFFF);
  sub_70324(a1, a3, 145, -2147438591);
  sub_70324(a1, a3, 144, 0x20000000);
  sub_70324(a1, a3, 145, -2147438587);
  sub_70324(a1, a3, 144, 0xFFFFFFF);
  sub_70324(a1, a3, 145, -2147434495);
  sub_70324(a1, a3, 144, 0x20000000);
  sub_70324(a1, a3, 145, -2147434491);
  sub_70324(a1, a3, 144, -64);
  sub_70324(a1, a3, 145, -2147438591);
  sub_70324(a1, a3, 144, 3);
  sub_70324(a1, a3, 145, -2147438586);
  sub_70324(a1, a3, 144, -64);
  sub_70324(a1, a3, 145, -2147434495);
  sub_70324(a1, a3, 144, 3);
  sub_70324(a1, a3, 145, -2147434490);
  sub_D19C4(a1, a3, v36, 0xFFFFFC00);
  sub_D19C4(a1, a3, v74, 0x32u);
  sub_D19C4(a1, a3, v36, 0xFFFFFFu);
  sub_D19C4(a1, a3, v46, 0x32000000u);
  sub_D19C4(a1, a3, v36, 0xFFFFFFFC);
  sub_D19C4(a1, a3, v84, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFF7FF);
  sub_D19C4(a1, a3, v72, 0);
  sub_D19C4(a1, a3, v36, 0xFFDFFFFF);
  sub_D19C4(a1, a3, v24, 0);
  sub_D19C4(a1, a3, v36, 0xDFFFFFFF);
  sub_D19C4(a1, a3, v43, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFFFFB);
  sub_D19C4(a1, a3, v77, 4u);
  sub_D19C4(a1, a3, v36, 0x7FFFFFFFu);
  sub_D19C4(a1, a3, v43, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFFBFF);
  sub_D19C4(a1, a3, v73, 0);
  sub_70324(a1, a3, 144, -7340033);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0x200000);
  sub_70324(a1, a3, 145, -2147450872);
  sub_70324(a1, a3, 144, -57345);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 40960);
  sub_70324(a1, a3, 145, -2147450871);
  sub_D19C4(a1, a3, v36, 0xFBFFFFFF);
  sub_D19C4(a1, a3, v78, 0x4000000u);
  sub_70324(a1, a3, 144, -131073);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147450818);
  sub_D19C4(a1, a3, v36, 0xFFFBFFFF);
  sub_D19C4(a1, a3, v86, 0x40000u);
  sub_D19C4(a1, a3, v36, 0xFFFFFBFF);
  sub_D19C4(a1, a3, v71, 0x400u);
  sub_D19C4(a1, a3, v36, 0xFF7FFFFF);
  sub_D19C4(a1, a3, v80, 0x800000u);
  sub_D19C4(a1, a3, v36, 0xFFFFFFFu);
  sub_D19C4(a1, a3, v79, 0xA0000000);
  sub_70324(a1, a3, 144, -1009);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 576);
  sub_70324(a1, a3, 145, -2147450787);
  sub_70324(a1, a3, 144, -258049);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 147456);
  sub_70324(a1, a3, 145, -2147450787);
  sub_70324(a1, a3, 144, -66060289);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 37748736);
  sub_70324(a1, a3, 145, -2147450787);
  sub_70324(a1, a3, 144, 0xFFFFFFF);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0x40000000);
  sub_70324(a1, a3, 145, -2147450787);
  sub_70324(a1, a3, 144, -4);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 2);
  sub_70324(a1, a3, 145, -2147450786);
  sub_70324(a1, a3, 144, -1009);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 64);
  sub_70324(a1, a3, 145, -2147450786);
  sub_70324(a1, a3, 144, -258049);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0x4000);
  sub_70324(a1, a3, 145, -2147450786);
  sub_70324(a1, a3, 144, -66060289);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0x400000);
  sub_70324(a1, a3, 145, -2147450786);
  sub_70324(a1, a3, 144, 0xFFFFFFF);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0x40000000);
  sub_70324(a1, a3, 145, -2147450786);
  sub_70324(a1, a3, 144, -4);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147450785);
  sub_70324(a1, a3, 144, -524289);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147450815);
  sub_70324(a1, a3, 144, -1009);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 64);
  sub_70324(a1, a3, 145, -2147450878);
  sub_D19C4(a1, a3, v36, 0xFFFCFFFF);
  sub_D19C4(a1, a3, v68, 0x30000u);
  sub_D19C4(a1, a3, v36, 0xFFFFFFFC);
  sub_D19C4(a1, a3, v70, 3u);
  sub_D19C4(a1, a3, v36, 0xFFFCFFFF);
  sub_D19C4(a1, a3, v70, 0x30000u);
  sub_D19C4(a1, a3, v36, 0xFFFCFFFF);
  sub_D19C4(a1, a3, v82, 0x30000u);
  sub_70324(a1, a3, 144, -786433);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 786432);
  sub_70324(a1, a3, 145, -2147450818);
  sub_70324(a1, a3, 144, -2);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 1);
  sub_70324(a1, a3, 145, -2147450878);
  sub_70324(a1, a3, 144, -8388609);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0x800000);
  sub_70324(a1, a3, 145, -2147450808);
  sub_70324(a1, a3, 144, -805306369);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0x20000000);
  sub_70324(a1, a3, 145, -2147450804);
  sub_70324(a1, a3, 144, -97);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 32);
  sub_70324(a1, a3, 145, -2147450868);
  sub_D19C4(a1, a3, v36, 0xFFFFCFFF);
  sub_D19C4(a1, a3, v81, 0x2000u);
  sub_D19C4(a1, a3, v36, 0xFFBFFFFF);
  sub_D19C4(a1, a3, v87, 0x400000u);
  sub_D19C4(a1, a3, v36, 0xFFFFFE0F);
  sub_D19C4(a1, a3, v65, 0x180u);
  sub_D19C4(a1, a3, v36, 0xFFFFFF1F);
  sub_D19C4(a1, a3, v85, 0);
  sub_D19C4(a1, a3, v36, 0xFFFF0FFF);
  sub_D19C4(a1, a3, v65, 0x4000u);
  v110 = 0;
  v111 = 0;
  v109 = 0;
  v56 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v108 = 24576;
  BYTE1(v110) = 1;
  HIWORD(v110) = 144;
  LOBYTE(v111) = 7;
  v56(a1, &v108);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v108 = v66;
  v110 = 0;
  v111 = 0;
  v109 = 0;
  v57 = *(void (__fastcall **)(int, int *))(a1 + 144);
  BYTE1(v110) = 1;
  LOBYTE(v111) = 7;
  HIWORD(v110) = 145;
  v57(a1, &v108);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  serdes_apb_write_1_chip(a1, 1, 6, v65, 0x5000u);
  serdes_apb_write_1_chip(a1, 2, 5, v65, 0x5000u);
  v110 = 1024;
  v111 = 0;
  v109 = 0;
  v108 = 24576;
  v58 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v110) = 144;
  LOBYTE(v111) = 7;
  v58(a1, &v108);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v110 = 9503744;
  v111 = 0;
  v109 = 0;
  v108 = v66;
  v59 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v111) = 7;
  v59(a1, &v108);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  serdes_apb_write_1_chip(a1, 4, 3, v65, 0x5000u);
  v110 = 1280;
  v111 = 0;
  v109 = 0;
  v108 = 24576;
  v60 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v110) = 144;
  LOBYTE(v111) = 7;
  v60(a1, &v108);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v110 = 9504000;
  v111 = 0;
  v109 = 0;
  v108 = v66;
  v61 = *(void (__fastcall **)(int, int *))(a1 + 144);
  LOBYTE(v111) = 7;
  v61(a1, &v108);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  serdes_apb_write_1_chip(a1, 5, 15, v65, 0x5000u);
  v110 = 1536;
  v111 = 0;
  v109 = 0;
  v108 = 24576;
  v62 = *(void (__fastcall **)(int, int *))(a1 + 144);
  HIWORD(v110) = 144;
  LOBYTE(v111) = 7;
  v62(a1, &v108);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  v63 = *(void (__fastcall **)(int, int *))(a1 + 144);
  v108 = v66;
  v110 = 9504256;
  v109 = 0;
  v111 = 7;
  v63(a1, &v108);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  serdes_apb_write_1_chip(a1, 6, 15, v65, 0x5000u);
  sub_D19C4(a1, a3, v36, 0xFFFF7FFF);
  sub_D19C4(a1, a3, v83, 0x8000u);
  sub_D19C4(a1, a3, v36, 0xFFFEFFFF);
  sub_D19C4(a1, a3, v88, 0x10000u);
  sub_D19C4(a1, a3, v36, 0xFFFDFFFF);
  sub_D19C4(a1, a3, v88, 0x20000u);
  sub_D19C4(a1, a3, v36, 0xFFFF000F);
  sub_D19C4(a1, a3, v68, 0x8000u);
  sub_D19C4(a1, a3, v36, 0xFFFFFFF3);
  sub_D19C4(a1, a3, v75, 8u);
  sub_D19C4(a1, a3, v36, 0xFFFFF9FF);
  sub_D19C4(a1, a3, v76, 0x400u);
  sub_70324(a1, a3, 144, -13);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 8);
  sub_70324(a1, a3, 145, -2147450878);
  sub_70324(a1, a3, 144, -100663297);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 100663296);
  sub_70324(a1, a3, 145, -2147450820);
  sub_70324(a1, a3, 144, 0x7FFFFFFF);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147450853);
  sub_70324(a1, a3, 144, -2);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147450852);
  sub_D19C4(a1, a3, v36, 0xFFFFFFFC);
  sub_D19C4(a1, a3, v72, 1u);
  sub_D19C4(a1, a3, v36, 0xF3FFFFFF);
  sub_D19C4(a1, a3, v89, 0x4000000u);
  sub_D19C4(a1, a3, v36, 0xCFFFFFFF);
  sub_D19C4(a1, a3, v90, 0x10000000u);
  sub_70324(a1, a3, 144, -28673);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 12288);
  sub_70324(a1, a3, 145, -2147450860);
  sub_D19C4(a1, a3, v36, 0xFE0FFFFF);
  sub_D19C4(a1, a3, v69, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFFFFu);
  sub_D19C4(a1, a3, v69, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFFFFE);
  sub_D19C4(a1, a3, v73, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFFE0F);
  sub_D19C4(a1, a3, v73, 0);
  sub_D19C4(a1, a3, v36, 0xFFFE0FFF);
  sub_D19C4(a1, a3, v73, 0);
  sub_D19C4(a1, a3, v36, 0xFE0FFFFF);
  sub_D19C4(a1, a3, v73, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFFFFu);
  sub_D19C4(a1, a3, v73, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFFFFE);
  sub_D19C4(a1, a3, v76, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFFE0F);
  sub_D19C4(a1, a3, v76, 0);
  sub_D19C4(a1, a3, v36, 0xFFFE0FFF);
  sub_D19C4(a1, a3, v76, 0);
  sub_D19C4(a1, a3, v36, 0xFE0FFFFF);
  sub_D19C4(a1, a3, v76, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFFFFu);
  sub_D19C4(a1, a3, v76, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFFFFE);
  sub_D19C4(a1, a3, v91, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFFE0F);
  sub_D19C4(a1, a3, v91, 0);
  sub_D19C4(a1, a3, v36, 0xFFFE0FFF);
  sub_D19C4(a1, a3, v91, 0);
  sub_D19C4(a1, a3, v36, 0xFE0FFFFF);
  sub_D19C4(a1, a3, v91, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFFFFu);
  sub_D19C4(a1, a3, v91, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFFFFE);
  sub_D19C4(a1, a3, v71, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFFE0F);
  sub_D19C4(a1, a3, v71, 0);
  sub_D19C4(a1, a3, v36, 0xFFFE0FFF);
  sub_D19C4(a1, a3, v71, 0);
  sub_D19C4(a1, a3, v36, 0xFFF1FFFF);
  sub_D19C4(a1, a3, v92, 0);
  sub_D19C4(a1, a3, v36, 0xF1FFFFFF);
  sub_D19C4(a1, a3, v92, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFFFF1);
  sub_D19C4(a1, a3, v93, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFF1FF);
  sub_D19C4(a1, a3, v93, 0);
  sub_D19C4(a1, a3, v36, 0xFFF1FFFF);
  sub_D19C4(a1, a3, v93, 0);
  sub_D19C4(a1, a3, v36, 0xF1FFFFFF);
  sub_D19C4(a1, a3, v93, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFFFF1);
  sub_D19C4(a1, a3, v94, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFF1FF);
  sub_D19C4(a1, a3, v94, 0);
  sub_D19C4(a1, a3, v36, 0xFFF1FFFF);
  sub_D19C4(a1, a3, v94, 0);
  sub_D19C4(a1, a3, v36, 0xFFF1FFFF);
  sub_D19C4(a1, a3, v74, 0);
  sub_D19C4(a1, a3, v36, 0xF1FFFFFF);
  sub_D19C4(a1, a3, v74, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFFFF8);
  sub_D19C4(a1, a3, v95, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFF8FF);
  sub_D19C4(a1, a3, v95, 0);
  sub_D19C4(a1, a3, v36, 0xFFF1FFFF);
  sub_D19C4(a1, a3, v95, 0);
  sub_D19C4(a1, a3, v36, 0xF1FFFFFF);
  sub_D19C4(a1, a3, v95, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFFFF1);
  sub_D19C4(a1, a3, v96, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFFF0F);
  sub_D19C4(a1, a3, v97, 0x60u);
  sub_D19C4(a1, a3, v36, 0xFFFFFFFC);
  sub_D19C4(a1, a3, v68, 2u);
  sub_D19C4(a1, a3, v36, 0xFFFFDFFF);
  sub_D19C4(a1, a3, v98, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFFBFF);
  sub_D19C4(a1, a3, v99, 0);
  sub_D19C4(a1, a3, v36, 0xFFFFFFF7);
  sub_D19C4(a1, a3, v100, 8u);
  sub_D19C4(a1, a3, v36, 0xF7FFFFFF);
  sub_D19C4(a1, a3, v101, 0x8000000u);
  sub_D19C4(a1, a3, v36, 0xFFFFFFFE);
  sub_D19C4(a1, a3, v69, 0);
  sub_D19C4(a1, a3, v36, 0xFFCFFFFF);
  sub_D19C4(a1, a3, v102, 0x200000u);
  sub_D19C4(a1, a3, v36, 0xFFFFFFFu);
  sub_D19C4(a1, a3, v103, 0xF0000000);
  sub_D19C4(a1, a3, v36, 0xFFFFFFF0);
  sub_D19C4(a1, a3, v104, 8u);
  sub_D19C4(a1, a3, v36, 0xF1FFFFFF);
  sub_D19C4(a1, a3, v105, 0x8000000u);
  sub_D19C4(a1, a3, v36, 0xFFFFFFF8);
  sub_D19C4(a1, a3, v106, 6u);
  sub_D19C4(a1, a3, v36, 0xFFFFF8FF);
  sub_D19C4(a1, a3, v106, 0x300u);
  sub_D19C4(a1, a3, v36, 0xFFF8FFFF);
  sub_D19C4(a1, a3, v106, 0x60000u);
  sub_D19C4(a1, a3, v36, 0xF8FFFFFF);
  sub_D19C4(a1, a3, v106, 0x2000000u);
  sub_D19C4(a1, a3, v36, 0xFFFFFFF8);
  sub_D19C4(a1, a3, v107, 6u);
  sub_D19C4(a1, a3, v36, 0xFF7FFFFF);
  sub_D19C4(a1, a3, v98, 0x800000u);
  sub_D19C4(a1, a3, v36, 0xFFFFF7FF);
  sub_D19C4(a1, a3, v100, 0x800u);
  sub_D19C4(a1, a3, v36, 0);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147442687);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147438591);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147434495);
  return 0;
}
