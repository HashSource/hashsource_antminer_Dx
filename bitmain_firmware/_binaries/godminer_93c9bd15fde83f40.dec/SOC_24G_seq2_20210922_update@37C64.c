int __fastcall SOC_24G_seq2_20210922_update(int a1, int a2, char a3, int a4)
{
  int v7; // r6
  int v8; // r7
  bool v9; // zf
  int v10; // r12
  int v11; // lr
  int v12; // r12
  int v13; // r12
  int v14; // r12
  int v15; // r12
  int v16; // lr
  int v17; // lr
  int v18; // r12
  int v19; // lr
  int v20; // lr
  int v21; // lr
  int v22; // r12
  int v23; // r12
  int v24; // lr
  int v25; // r12
  int v26; // lr
  int v27; // lr
  int v28; // r12
  int v29; // lr
  int v30; // r12
  int v31; // lr
  int v32; // r12
  int v33; // r12
  int v34; // lr
  int v35; // r12
  int v36; // r12
  int v37; // r3
  int v38; // lr
  int v39; // r12
  int v40; // lr
  int v41; // lr
  int v42; // r12
  int v43; // lr
  int v44; // r12
  int v45; // r12
  int v46; // r12
  int v47; // lr
  int v48; // r12
  int v49; // lr
  int v50; // lr
  int v51; // r12
  int v52; // lr
  int v53; // r12
  int v54; // lr
  int v55; // r12
  int v56; // lr
  int v57; // lr
  int v58; // r12
  int v59; // r12
  int v60; // r12
  int v61; // lr
  int v62; // r8
  int v63; // r11
  int v64; // r10
  int v65; // r9
  int v67; // [sp+10h] [bp-E0h]
  int v68; // [sp+14h] [bp-DCh]
  int v69; // [sp+18h] [bp-D8h]
  int v70; // [sp+1Ch] [bp-D4h]
  int v71; // [sp+20h] [bp-D0h]
  int v72; // [sp+24h] [bp-CCh]
  int v73; // [sp+28h] [bp-C8h]
  int v74; // [sp+2Ch] [bp-C4h]
  int v75; // [sp+30h] [bp-C0h]
  int v76; // [sp+34h] [bp-BCh]
  int v77; // [sp+38h] [bp-B8h]
  int v78; // [sp+3Ch] [bp-B4h]
  int v79; // [sp+40h] [bp-B0h]
  int v80; // [sp+44h] [bp-ACh]
  int v81; // [sp+48h] [bp-A8h]
  int v82; // [sp+4Ch] [bp-A4h]
  int v83; // [sp+50h] [bp-A0h]
  int v84; // [sp+54h] [bp-9Ch]
  int v85; // [sp+58h] [bp-98h]
  int v86; // [sp+5Ch] [bp-94h]
  int v87; // [sp+60h] [bp-90h]
  int v88; // [sp+64h] [bp-8Ch]
  int v89; // [sp+68h] [bp-88h]
  int v90; // [sp+6Ch] [bp-84h]
  int v91; // [sp+70h] [bp-80h]
  int v92; // [sp+74h] [bp-7Ch]
  int v93; // [sp+78h] [bp-78h]
  int v94; // [sp+7Ch] [bp-74h]
  int v95; // [sp+80h] [bp-70h]
  int v96; // [sp+84h] [bp-6Ch]
  int v97; // [sp+88h] [bp-68h]
  int v98; // [sp+8Ch] [bp-64h]
  int v99; // [sp+90h] [bp-60h]
  int v100; // [sp+94h] [bp-5Ch]
  int v101; // [sp+98h] [bp-58h]
  int v102; // [sp+9Ch] [bp-54h]
  int v103; // [sp+A0h] [bp-50h]
  int v104; // [sp+A4h] [bp-4Ch]
  int v105; // [sp+A8h] [bp-48h]
  int v106; // [sp+ACh] [bp-44h]
  int v107; // [sp+B0h] [bp-40h]
  int v108; // [sp+B4h] [bp-3Ch]
  int v109; // [sp+B8h] [bp-38h]
  int v110; // [sp+BCh] [bp-34h]
  int v111; // [sp+C0h] [bp-30h]
  int v112; // [sp+C4h] [bp-2Ch]
  int v113; // [sp+C8h] [bp-28h]
  int v114; // [sp+CCh] [bp-24h]
  int v115; // [sp+D0h] [bp-20h]
  int v116; // [sp+D4h] [bp-1Ch]
  int v117; // [sp+D8h] [bp-18h]
  int v118; // [sp+DCh] [bp-14h]
  int v119; // [sp+E0h] [bp-10h]
  int v120; // [sp+E4h] [bp-Ch]
  int v121; // [sp+E8h] [bp-8h]
  int v122; // [sp+ECh] [bp-4h]
  char v123[4100]; // [sp+F0h] [bp+0h] BYREF

  V_LOCK();
  logfmt_raw(v123, 0x1000u, 0, 1560772, "SOC_24G_seq2_20210922_update");
  V_UNLOCK();
  v7 = 61441;
  v8 = 61512;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "SOC_24G_seq2_20210922_update",
    28,
    5499,
    60,
    v123);
  v9 = a4 == 8;
  v10 = 61497;
  if ( a4 != 8 )
    v10 = 57;
  v11 = 61447;
  v122 = v10;
  v12 = 61495;
  if ( a4 != 8 )
  {
    v12 = 55;
    v11 = 7;
  }
  v121 = v12;
  v13 = 61542;
  if ( a4 != 8 )
    v13 = 102;
  v118 = v11;
  v120 = v13;
  v14 = 61541;
  if ( a4 != 8 )
  {
    v14 = 101;
    v11 = 54;
  }
  v119 = v14;
  v15 = 61494;
  if ( a4 == 8 )
    v11 = 61494;
  else
    v15 = 53;
  v117 = v11;
  if ( a4 == 8 )
    v15 = 61493;
  v16 = 61492;
  if ( a4 != 8 )
    v16 = 52;
  v116 = v15;
  v115 = v16;
  v17 = 61490;
  if ( a4 != 8 )
    v17 = 50;
  v18 = 61484;
  v114 = v17;
  v19 = 61446;
  if ( a4 != 8 )
  {
    v19 = 6;
    v18 = 44;
  }
  v113 = v19;
  v112 = v18;
  if ( a4 == 8 )
    v18 = 61483;
  v20 = 61481;
  if ( a4 != 8 )
  {
    v20 = 41;
    v18 = 43;
  }
  v110 = v20;
  v21 = 61480;
  if ( a4 != 8 )
    v21 = 40;
  v111 = v18;
  v22 = 61479;
  v109 = v21;
  if ( a4 != 8 )
    v22 = 39;
  v108 = v22;
  if ( a4 == 8 )
    v23 = 61510;
  else
    v23 = 70;
  v24 = 61523;
  if ( a4 != 8 )
    v24 = 83;
  v74 = v23;
  v25 = 61547;
  v107 = v24;
  if ( a4 != 8 )
    v25 = 107;
  v26 = 61546;
  if ( a4 != 8 )
    v26 = 106;
  v84 = v26;
  v27 = 61459;
  v106 = v25;
  if ( a4 != 8 )
    v27 = 19;
  v28 = 61449;
  if ( a4 != 8 )
    v28 = 9;
  v105 = v27;
  v29 = 61592;
  v104 = v28;
  if ( a4 != 8 )
    v29 = 152;
  v30 = 61591;
  if ( a4 != 8 )
    v30 = 151;
  v103 = v29;
  v31 = 61599;
  v83 = v30;
  if ( a4 != 8 )
    v31 = 159;
  v102 = v31;
  if ( a4 == 8 )
    v31 = 61598;
  v32 = 61596;
  if ( a4 != 8 )
  {
    v32 = 156;
    v31 = 158;
  }
  v81 = v32;
  v33 = 61597;
  if ( a4 != 8 )
    v33 = 157;
  v82 = v31;
  v73 = v33;
  v34 = 61615;
  if ( a4 != 8 )
    v34 = 175;
  v101 = v34;
  if ( a4 == 8 )
    v34 = 61450;
  v35 = 61445;
  if ( a4 != 8 )
  {
    v35 = 5;
    v34 = 10;
  }
  v100 = v35;
  v36 = 61520;
  if ( a4 != 8 )
    v36 = 80;
  v37 = 61550;
  v72 = v34;
  if ( a4 != 8 )
    v37 = 110;
  v71 = v36;
  v38 = 61556;
  v39 = 61474;
  if ( a4 != 8 )
  {
    v38 = 116;
    v39 = 34;
  }
  v67 = v37;
  if ( a4 != 8 )
    v7 = 1;
  v99 = v38;
  v40 = 61545;
  v98 = v39;
  if ( a4 != 8 )
    v40 = 105;
  v97 = v40;
  if ( a4 == 8 )
    v41 = 61580;
  else
    v41 = 140;
  v42 = 61579;
  if ( a4 != 8 )
    v42 = 139;
  v80 = v41;
  v43 = 61630;
  v96 = v42;
  if ( a4 != 8 )
    v43 = 190;
  v44 = 61606;
  if ( a4 != 8 )
    v44 = 166;
  v95 = v44;
  v45 = 61564;
  v79 = v43;
  if ( a4 != 8 )
    v45 = 124;
  v94 = v45;
  if ( a4 == 8 )
    v46 = 61590;
  else
    v46 = 150;
  v47 = 61443;
  if ( a4 != 8 )
    v47 = 3;
  v78 = v46;
  v48 = 61442;
  v93 = v47;
  if ( a4 != 8 )
    v48 = 2;
  v49 = 61448;
  if ( a4 != 8 )
    v49 = 8;
  v70 = v49;
  v50 = 61622;
  v69 = v48;
  if ( a4 != 8 )
    v50 = 182;
  v51 = 61566;
  if ( a4 != 8 )
    v51 = 126;
  v92 = v50;
  v52 = 61458;
  v91 = v51;
  if ( a4 != 8 )
    v52 = 18;
  v53 = 61472;
  if ( a4 != 8 )
    v53 = 32;
  v68 = v52;
  v54 = 61469;
  v90 = v53;
  if ( a4 != 8 )
    v54 = 29;
  v55 = 61466;
  if ( a4 != 8 )
    v55 = 26;
  v89 = v54;
  v56 = 61467;
  v77 = v55;
  if ( a4 != 8 )
    v56 = 27;
  v88 = v56;
  if ( a4 == 8 )
    v57 = 61465;
  else
    v57 = 25;
  v58 = 61488;
  if ( a4 != 8 )
    v58 = 48;
  v76 = v57;
  v87 = v58;
  v59 = 61487;
  if ( a4 != 8 )
    v59 = 47;
  v86 = v59;
  if ( a4 == 8 )
    v60 = 61482;
  else
    v60 = 42;
  v61 = 61551;
  if ( a4 != 8 )
    v61 = 111;
  v75 = v60;
  v62 = 61511;
  v85 = v61;
  if ( !v9 )
  {
    v8 = 72;
    v62 = 71;
  }
  v63 = 61513;
  v64 = 61496;
  if ( !v9 )
    v63 = 73;
  v65 = 61514;
  if ( !v9 )
  {
    v64 = 56;
    v65 = 74;
  }
  sub_BF774(a1, a3, v7, 0xFFFFFFF7);
  sub_BF774(a1, a3, v67, 0);
  sub_DAF1C(a1, a3, 144, -520093697);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 251658240);
  sub_DAF1C(a1, a3, 145, -2147438529);
  sub_DAF1C(a1, a3, 144, -520093697);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 251658240);
  sub_DAF1C(a1, a3, 145, -2147434433);
  sub_DAF1C(a1, a3, 144, -1048321);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 256);
  sub_DAF1C(a1, a3, 145, -2147438530);
  sub_DAF1C(a1, a3, 144, -1048321);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 256);
  sub_DAF1C(a1, a3, 145, -2147434434);
  sub_DAF1C(a1, a3, 144, -4096);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 4);
  sub_DAF1C(a1, a3, 145, -2147438529);
  sub_DAF1C(a1, a3, 144, -4096);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 4);
  sub_DAF1C(a1, a3, 145, -2147434433);
  sub_BF774(a1, a3, v7, 0xFFFFFFFD);
  sub_BF774(a1, a3, v67, 0);
  sub_BF774(a1, a3, v7, 0x7FFFFFFFu);
  sub_BF774(a1, a3, v85, 0x80000000);
  sub_BF774(a1, a3, v7, 0xFFFBFFFF);
  sub_BF774(a1, a3, v67, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFFFB);
  sub_BF774(a1, a3, v67, 0);
  sub_DAF1C(a1, a3, 144, 0xFFFFFF);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 838860800);
  sub_DAF1C(a1, a3, 145, -2147438590);
  sub_DAF1C(a1, a3, 144, 0xFFFFFF);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 838860800);
  sub_DAF1C(a1, a3, 145, -2147434494);
  sub_DAF1C(a1, a3, 144, -4);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147438589);
  sub_DAF1C(a1, a3, 144, -4);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147434493);
  sub_DAF1C(a1, a3, 144, 0xFFFFFFF);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 0x20000000);
  sub_DAF1C(a1, a3, 145, -2147438587);
  sub_DAF1C(a1, a3, 144, 0xFFFFFFF);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 0x20000000);
  sub_DAF1C(a1, a3, 145, -2147434491);
  sub_DAF1C(a1, a3, 144, -64);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 3);
  sub_DAF1C(a1, a3, 145, -2147438586);
  sub_DAF1C(a1, a3, 144, -64);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 3);
  sub_DAF1C(a1, a3, 145, -2147434490);
  sub_BF774(a1, a3, v7, 0xFFFFFC00);
  sub_BF774(a1, a3, v75, 0x32u);
  sub_BF774(a1, a3, v7, 0xFFFFFFu);
  sub_BF774(a1, a3, v86, 0x32000000u);
  sub_BF774(a1, a3, v7, 0xFFFFFFFC);
  sub_BF774(a1, a3, v87, 0);
  sub_BF774(a1, a3, v7, 0xFFFFF7FF);
  sub_BF774(a1, a3, v76, 0);
  sub_BF774(a1, a3, v7, 0xFFDFFFFF);
  sub_BF774(a1, a3, v88, 0);
  sub_BF774(a1, a3, v7, 0xDFFFFFFF);
  sub_BF774(a1, a3, v77, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFFFB);
  sub_BF774(a1, a3, v89, 4u);
  sub_BF774(a1, a3, v7, 0x7FFFFFFFu);
  sub_BF774(a1, a3, v77, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFBFF);
  sub_BF774(a1, a3, v62, 0);
  sub_DAF1C(a1, a3, 144, -7340033);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0x200000);
  sub_DAF1C(a1, a3, 145, -2147450872);
  sub_DAF1C(a1, a3, 144, -57345);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 40960);
  sub_DAF1C(a1, a3, 145, -2147450871);
  sub_BF774(a1, a3, v7, 0xFBFFFFFF);
  sub_BF774(a1, a3, v90, 0x4000000u);
  sub_DAF1C(a1, a3, 144, -131073);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450818);
  sub_BF774(a1, a3, v7, 0xFFFBFFFF);
  sub_BF774(a1, a3, v68, 0x40000u);
  sub_BF774(a1, a3, v7, 0xFFFFFBFF);
  sub_BF774(a1, a3, v65, 0x400u);
  sub_BF774(a1, a3, v7, 0xFF7FFFFF);
  sub_BF774(a1, a3, v91, 0x800000u);
  sub_BF774(a1, a3, v7, 0xFFFFFFFu);
  sub_BF774(a1, a3, v92, 0xA0000000);
  sub_DAF1C(a1, a3, 144, -1009);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 576);
  sub_DAF1C(a1, a3, 145, -2147450787);
  sub_DAF1C(a1, a3, 144, -258049);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 147456);
  sub_DAF1C(a1, a3, 145, -2147450787);
  sub_DAF1C(a1, a3, 144, -66060289);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 37748736);
  sub_DAF1C(a1, a3, 145, -2147450787);
  sub_DAF1C(a1, a3, 144, 0xFFFFFFF);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0x40000000);
  sub_DAF1C(a1, a3, 145, -2147450787);
  sub_DAF1C(a1, a3, 144, -4);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 2);
  sub_DAF1C(a1, a3, 145, -2147450786);
  sub_DAF1C(a1, a3, 144, -1009);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 64);
  sub_DAF1C(a1, a3, 145, -2147450786);
  sub_DAF1C(a1, a3, 144, -258049);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0x4000);
  sub_DAF1C(a1, a3, 145, -2147450786);
  sub_DAF1C(a1, a3, 144, -66060289);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0x400000);
  sub_DAF1C(a1, a3, 145, -2147450786);
  sub_DAF1C(a1, a3, 144, 0xFFFFFFF);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0x40000000);
  sub_DAF1C(a1, a3, 145, -2147450786);
  sub_DAF1C(a1, a3, 144, -4);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450785);
  sub_DAF1C(a1, a3, 144, -524289);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450815);
  sub_DAF1C(a1, a3, 144, -1009);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 64);
  sub_DAF1C(a1, a3, 145, -2147450878);
  sub_BF774(a1, a3, v7, 0xFFFCFFFF);
  sub_BF774(a1, a3, v69, 0x30000u);
  sub_BF774(a1, a3, v7, 0xFFFFFFFC);
  sub_BF774(a1, a3, v70, 3u);
  sub_BF774(a1, a3, v7, 0xFFFCFFFF);
  sub_BF774(a1, a3, v70, 0x30000u);
  sub_BF774(a1, a3, v7, 0xFFFCFFFF);
  sub_BF774(a1, a3, v93, 0x30000u);
  sub_DAF1C(a1, a3, 144, -786433);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 786432);
  sub_DAF1C(a1, a3, 145, -2147450818);
  sub_DAF1C(a1, a3, 144, -2);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 1);
  sub_DAF1C(a1, a3, 145, -2147450878);
  sub_DAF1C(a1, a3, 144, -8388609);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0x800000);
  sub_DAF1C(a1, a3, 145, -2147450808);
  sub_DAF1C(a1, a3, 144, -805306369);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0x20000000);
  sub_DAF1C(a1, a3, 145, -2147450804);
  sub_DAF1C(a1, a3, 144, -97);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 32);
  sub_DAF1C(a1, a3, 145, -2147450868);
  sub_BF774(a1, a3, v7, 0xFFFFCFFF);
  sub_BF774(a1, a3, v78, 0x2000u);
  sub_BF774(a1, a3, v7, 0xFFBFFFFF);
  sub_BF774(a1, a3, v94, 0x400000u);
  sub_BF774(a1, a3, v7, 0xFFFFFE0F);
  sub_BF774(a1, a3, v79, 0x180u);
  sub_BF774(a1, a3, v7, 0xFFFFFF1F);
  sub_BF774(a1, a3, v95, 0);
  sub_BF774(a1, a3, v7, 0xFFFF0FFF);
  sub_BF774(a1, a3, v79, 0x4000u);
  sub_BF774(a1, a3, v7, 0xFFFF7FFF);
  sub_BF774(a1, a3, v96, 0x8000u);
  sub_BF774(a1, a3, v7, 0xFFFEFFFF);
  sub_BF774(a1, a3, v80, 0x10000u);
  sub_BF774(a1, a3, v7, 0xFFFDFFFF);
  sub_BF774(a1, a3, v80, 0x20000u);
  sub_BF774(a1, a3, v7, 0xFFFF000F);
  sub_BF774(a1, a3, v69, 0x8000u);
  sub_BF774(a1, a3, v7, 0xFFFFFFF3);
  sub_BF774(a1, a3, v97, 8u);
  sub_BF774(a1, a3, v7, 0xFFFFF9FF);
  sub_BF774(a1, a3, v8, 0x400u);
  sub_DAF1C(a1, a3, 144, -13);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 8);
  sub_DAF1C(a1, a3, 145, -2147450878);
  sub_DAF1C(a1, a3, 144, -100663297);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0x2000000);
  sub_DAF1C(a1, a3, 145, -2147450820);
  sub_DAF1C(a1, a3, 144, 0x7FFFFFFF);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0x80000000);
  sub_DAF1C(a1, a3, 145, -2147450853);
  sub_DAF1C(a1, a3, 144, -2);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450852);
  sub_BF774(a1, a3, v7, 0xFFFFFFFC);
  sub_BF774(a1, a3, v76, 1u);
  sub_BF774(a1, a3, v7, 0xF3FFFFFF);
  sub_BF774(a1, a3, v98, 0x4000000u);
  sub_BF774(a1, a3, v7, 0xCFFFFFFF);
  sub_BF774(a1, a3, v99, 0x10000000u);
  sub_DAF1C(a1, a3, 144, -28673);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 12288);
  sub_DAF1C(a1, a3, 145, -2147450860);
  sub_BF774(a1, a3, v7, 0xFFFFFFF7);
  sub_BF774(a1, a3, v71, 8u);
  sub_BF774(a1, a3, v7, 0xFFF7FFFF);
  sub_BF774(a1, a3, v100, 0x80000u);
  sub_BF774(a1, a3, v7, 0xF8FFFFFF);
  sub_BF774(a1, a3, v72, 0x7000000u);
  sub_BF774(a1, a3, v7, 0xFFFFFFFB);
  sub_BF774(a1, a3, v71, 4u);
  sub_BF774(a1, a3, v7, 0xC0FFFFFF);
  sub_BF774(a1, a3, v101, 0x4000000u);
  sub_BF774(a1, a3, v7, 0xFFFFFF80);
  sub_BF774(a1, a3, v73, 2u);
  sub_BF774(a1, a3, v7, 0xF80FFFFF);
  sub_BF774(a1, a3, v73, 0x100000u);
  sub_BF774(a1, a3, v7, 0xF00FFFFF);
  sub_BF774(a1, a3, v81, 0x200000u);
  sub_BF774(a1, a3, v7, 0xFFFF000F);
  sub_BF774(a1, a3, v81, 0x100u);
  sub_BF774(a1, a3, v7, 0xFFFFFFu);
  sub_BF774(a1, a3, v82, 0x10000000u);
  sub_BF774(a1, a3, v7, 0xFFFFF00F);
  sub_BF774(a1, a3, v102, 0x300u);
  sub_BF774(a1, a3, v7, 0xF000FFFF);
  sub_BF774(a1, a3, v78, 0x1F20000u);
  sub_BF774(a1, a3, v7, 0xFFFFF000);
  sub_BF774(a1, a3, v83, 0x3E8u);
  sub_BF774(a1, a3, v7, 0xF000FFFF);
  sub_BF774(a1, a3, v83, 0x620000u);
  sub_BF774(a1, a3, v7, 0xFFFFF000);
  sub_BF774(a1, a3, v103, 0xC8u);
  sub_DAF1C(a1, a3, 144, -1056964609);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 0x4000000);
  sub_DAF1C(a1, a3, 145, -2147438533);
  sub_DAF1C(a1, a3, 144, -1056964609);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 0x4000000);
  sub_DAF1C(a1, a3, 145, -2147434437);
  sub_DAF1C(a1, a3, 144, -64);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 4);
  sub_DAF1C(a1, a3, 145, -2147438532);
  sub_DAF1C(a1, a3, 144, -64);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 4);
  sub_DAF1C(a1, a3, 145, -2147434436);
  sub_DAF1C(a1, a3, 144, -16129);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 1024);
  sub_DAF1C(a1, a3, 145, -2147438532);
  sub_DAF1C(a1, a3, 144, -16129);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 1024);
  sub_DAF1C(a1, a3, 145, -2147434436);
  sub_DAF1C(a1, a3, 144, -4128769);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 0x40000);
  sub_DAF1C(a1, a3, 145, -2147438532);
  sub_DAF1C(a1, a3, 144, -4128769);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 0x40000);
  sub_DAF1C(a1, a3, 145, -2147434436);
  sub_DAF1C(a1, a3, 144, -1056964609);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 603979776);
  sub_DAF1C(a1, a3, 145, -2147438532);
  sub_DAF1C(a1, a3, 144, -1056964609);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 603979776);
  sub_DAF1C(a1, a3, 145, -2147434436);
  sub_DAF1C(a1, a3, 144, -64);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 36);
  sub_DAF1C(a1, a3, 145, -2147438531);
  sub_DAF1C(a1, a3, 144, -64);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 36);
  sub_DAF1C(a1, a3, 145, -2147434435);
  sub_DAF1C(a1, a3, 144, -16129);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 9216);
  sub_DAF1C(a1, a3, 145, -2147438531);
  sub_DAF1C(a1, a3, 144, -16129);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 9216);
  sub_DAF1C(a1, a3, 145, -2147434435);
  sub_DAF1C(a1, a3, 144, -4128769);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 2359296);
  sub_DAF1C(a1, a3, 145, -2147438531);
  sub_DAF1C(a1, a3, 144, -4128769);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 2359296);
  sub_DAF1C(a1, a3, 145, -2147434435);
  sub_DAF1C(a1, a3, 144, -393217);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 0x20000);
  sub_DAF1C(a1, a3, 145, -2147438564);
  sub_DAF1C(a1, a3, 144, -393217);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 0x20000);
  sub_DAF1C(a1, a3, 145, -2147434468);
  sub_DAF1C(a1, a3, 144, -100663297);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 0x2000000);
  sub_DAF1C(a1, a3, 145, -2147438564);
  sub_DAF1C(a1, a3, 144, -100663297);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 0x2000000);
  sub_DAF1C(a1, a3, 145, -2147434468);
  sub_DAF1C(a1, a3, 144, -7);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 2);
  sub_DAF1C(a1, a3, 145, -2147438563);
  sub_DAF1C(a1, a3, 144, -7);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 2);
  sub_DAF1C(a1, a3, 145, -2147434467);
  sub_DAF1C(a1, a3, 144, -1537);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 512);
  sub_DAF1C(a1, a3, 145, -2147438563);
  sub_DAF1C(a1, a3, 144, -1537);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 512);
  sub_DAF1C(a1, a3, 145, -2147434467);
  sub_DAF1C(a1, a3, 144, -393217);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 0x20000);
  sub_DAF1C(a1, a3, 145, -2147438563);
  sub_DAF1C(a1, a3, 144, -393217);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 0x20000);
  sub_DAF1C(a1, a3, 145, -2147434467);
  sub_DAF1C(a1, a3, 144, -100663297);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 0x2000000);
  sub_DAF1C(a1, a3, 145, -2147438563);
  sub_DAF1C(a1, a3, 144, -100663297);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 0x2000000);
  sub_DAF1C(a1, a3, 145, -2147434467);
  sub_DAF1C(a1, a3, 144, -7);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 2);
  sub_DAF1C(a1, a3, 145, -2147438562);
  sub_DAF1C(a1, a3, 144, -7);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 2);
  sub_DAF1C(a1, a3, 145, -2147434466);
  sub_DAF1C(a1, a3, 144, -1537);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 512);
  sub_DAF1C(a1, a3, 145, -2147438562);
  sub_DAF1C(a1, a3, 144, -1537);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 512);
  sub_DAF1C(a1, a3, 145, -2147434466);
  sub_BF774(a1, a3, v7, 0xFFFFF3FF);
  sub_BF774(a1, a3, v72, 0x800u);
  sub_BF774(a1, a3, v7, 0xFFFFFFFC);
  sub_BF774(a1, a3, v72, 1u);
  sub_BF774(a1, a3, v7, 0xFFFFFFF8);
  sub_BF774(a1, a3, v104, 1u);
  sub_BF774(a1, a3, v7, 0xFFFE0FFF);
  sub_BF774(a1, a3, v68, 0x4000u);
  sub_BF774(a1, a3, v7, 0xFFFFFFFu);
  sub_BF774(a1, a3, v68, 0x80000000);
  sub_BF774(a1, a3, v7, 0xFFFFFFFE);
  sub_BF774(a1, a3, v105, 0);
  sub_DAF1C(a1, a3, 144, -33);
  sub_DAF1C(a1, a3, 145, -2147442687);
  sub_DAF1C(a1, a3, 144, 32);
  sub_DAF1C(a1, a3, 145, -2147442683);
  sub_DAF1C(a1, a3, 144, -2);
  sub_DAF1C(a1, a3, 145, -2147442687);
  sub_DAF1C(a1, a3, 144, 1);
  sub_DAF1C(a1, a3, 145, -2147442681);
  sub_DAF1C(a1, a3, 144, -67108865);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147438555);
  sub_DAF1C(a1, a3, 144, -67108865);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147434459);
  sub_DAF1C(a1, a3, 144, -134217729);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147438555);
  sub_DAF1C(a1, a3, 144, -134217729);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147434459);
  sub_DAF1C(a1, a3, 144, -134217729);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 0x8000000);
  sub_DAF1C(a1, a3, 145, -2147438552);
  sub_DAF1C(a1, a3, 144, -134217729);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 0x8000000);
  sub_DAF1C(a1, a3, 145, -2147434456);
  sub_DAF1C(a1, a3, 144, -17);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 16);
  sub_DAF1C(a1, a3, 145, -2147438551);
  sub_DAF1C(a1, a3, 144, -17);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 16);
  sub_DAF1C(a1, a3, 145, -2147434455);
  sub_DAF1C(a1, a3, 144, -65537);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 0x10000);
  sub_DAF1C(a1, a3, 145, -2147438551);
  sub_DAF1C(a1, a3, 144, -65537);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 0x10000);
  sub_DAF1C(a1, a3, 145, -2147434455);
  sub_DAF1C(a1, a3, 144, -131073);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 0x20000);
  sub_DAF1C(a1, a3, 145, -2147438551);
  sub_DAF1C(a1, a3, 144, -131073);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 0x20000);
  sub_DAF1C(a1, a3, 145, -2147434455);
  sub_DAF1C(a1, a3, 144, -8388609);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 0x800000);
  sub_DAF1C(a1, a3, 145, -2147438547);
  sub_DAF1C(a1, a3, 144, -8388609);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 0x800000);
  sub_DAF1C(a1, a3, 145, -2147434451);
  sub_DAF1C(a1, a3, 144, -268435457);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 0x10000000);
  sub_DAF1C(a1, a3, 145, -2147438547);
  sub_DAF1C(a1, a3, 144, -268435457);
  sub_DAF1C(a1, a3, 145, -2147434495);
  sub_DAF1C(a1, a3, 144, 0x10000000);
  sub_DAF1C(a1, a3, 145, -2147434451);
  sub_BF774(a1, a3, v7, 0xFFFCFFFF);
  sub_BF774(a1, a3, v70, 0x10000u);
  sub_BF774(a1, a3, v7, 0x8FFFFFFF);
  sub_BF774(a1, a3, v106, 0x30000000u);
  sub_BF774(a1, a3, v7, 0xFFFFFFFu);
  sub_BF774(a1, a3, v73, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFFF0);
  sub_BF774(a1, a3, v82, 8u);
  sub_BF774(a1, a3, v7, 0xBFFFFFFF);
  sub_BF774(a1, a3, v84, 0);
  sub_BF774(a1, a3, v7, 0xFFF3FFFF);
  sub_BF774(a1, a3, v71, 0);
  sub_BF774(a1, a3, v7, 0xFFFF7FFF);
  sub_BF774(a1, a3, v84, 0x8000u);
  sub_BF774(a1, a3, v7, 0xFFF8FFFF);
  sub_BF774(a1, a3, v107, 0x40000u);
  sub_DAF1C(a1, a3, 144, -2049);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450819);
  sub_DAF1C(a1, a3, 144, -524289);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450819);
  sub_BF774(a1, a3, v7, 0xFE0FFFFF);
  sub_BF774(a1, a3, v74, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFFFu);
  sub_BF774(a1, a3, v74, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFFFE);
  sub_BF774(a1, a3, v62, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFE0F);
  sub_BF774(a1, a3, v62, 0);
  sub_BF774(a1, a3, v7, 0xFFFE0FFF);
  sub_BF774(a1, a3, v62, 0);
  sub_BF774(a1, a3, v7, 0xFE0FFFFF);
  sub_BF774(a1, a3, v62, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFFFu);
  sub_BF774(a1, a3, v62, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFFFE);
  sub_BF774(a1, a3, v8, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFE0F);
  sub_BF774(a1, a3, v8, 0);
  sub_BF774(a1, a3, v7, 0xFFFE0FFF);
  sub_BF774(a1, a3, v8, 0);
  sub_BF774(a1, a3, v7, 0xFE0FFFFF);
  sub_BF774(a1, a3, v8, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFFFu);
  sub_BF774(a1, a3, v8, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFFFE);
  sub_BF774(a1, a3, v63, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFE0F);
  sub_BF774(a1, a3, v63, 0);
  sub_BF774(a1, a3, v7, 0xFFFE0FFF);
  sub_BF774(a1, a3, v63, 0);
  sub_BF774(a1, a3, v7, 0xFE0FFFFF);
  sub_BF774(a1, a3, v63, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFFFu);
  sub_BF774(a1, a3, v63, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFFFE);
  sub_BF774(a1, a3, v65, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFE0F);
  sub_BF774(a1, a3, v65, 0);
  sub_BF774(a1, a3, v7, 0xFFFE0FFF);
  sub_BF774(a1, a3, v65, 0);
  sub_BF774(a1, a3, v7, 0xFFF1FFFF);
  sub_BF774(a1, a3, v108, 0);
  sub_BF774(a1, a3, v7, 0xF1FFFFFF);
  sub_BF774(a1, a3, v108, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFFF1);
  sub_BF774(a1, a3, v109, 0);
  sub_BF774(a1, a3, v7, 0xFFFFF1FF);
  sub_BF774(a1, a3, v109, 0);
  sub_BF774(a1, a3, v7, 0xFFF1FFFF);
  sub_BF774(a1, a3, v109, 0);
  sub_BF774(a1, a3, v7, 0xF1FFFFFF);
  sub_BF774(a1, a3, v109, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFFF1);
  sub_BF774(a1, a3, v110, 0);
  sub_BF774(a1, a3, v7, 0xFFFFF1FF);
  sub_BF774(a1, a3, v110, 0);
  sub_BF774(a1, a3, v7, 0xFFF1FFFF);
  sub_BF774(a1, a3, v110, 0);
  sub_BF774(a1, a3, v7, 0xFFF1FFFF);
  sub_BF774(a1, a3, v75, 0);
  sub_BF774(a1, a3, v7, 0xF1FFFFFF);
  sub_BF774(a1, a3, v75, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFFF8);
  sub_BF774(a1, a3, v111, 0);
  sub_BF774(a1, a3, v7, 0xFFFFF8FF);
  sub_BF774(a1, a3, v111, 0);
  sub_BF774(a1, a3, v7, 0xFFF1FFFF);
  sub_BF774(a1, a3, v111, 0);
  sub_BF774(a1, a3, v7, 0xF1FFFFFF);
  sub_BF774(a1, a3, v111, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFFF1);
  sub_BF774(a1, a3, v112, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFF0F);
  sub_BF774(a1, a3, v113, 0x60u);
  sub_BF774(a1, a3, v7, 0xFFFFFFFC);
  sub_BF774(a1, a3, v69, 2u);
  sub_BF774(a1, a3, v7, 0xFFFFDFFF);
  sub_BF774(a1, a3, v114, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFBFF);
  sub_BF774(a1, a3, v115, 0);
  sub_BF774(a1, a3, v7, 0xFFFFFFF7);
  sub_BF774(a1, a3, v116, 8u);
  sub_BF774(a1, a3, v7, 0xF7FFFFFF);
  sub_BF774(a1, a3, v117, 0x8000000u);
  sub_BF774(a1, a3, v7, 0xFFFFFFFE);
  sub_BF774(a1, a3, v74, 0);
  sub_BF774(a1, a3, v7, 0xFFCFFFFF);
  sub_BF774(a1, a3, v118, 0x200000u);
  sub_BF774(a1, a3, v7, 0xFFFFFFFu);
  sub_BF774(a1, a3, v119, 0xF0000000);
  sub_BF774(a1, a3, v7, 0xFFFFFFF0);
  sub_BF774(a1, a3, v120, 8u);
  sub_BF774(a1, a3, v7, 0xF1FFFFFF);
  sub_BF774(a1, a3, v121, 0x8000000u);
  sub_BF774(a1, a3, v7, 0xFFFFFFF8);
  sub_BF774(a1, a3, v64, 6u);
  sub_BF774(a1, a3, v7, 0xFFFFF8FF);
  sub_BF774(a1, a3, v64, 0x300u);
  sub_BF774(a1, a3, v7, 0xFFF8FFFF);
  sub_BF774(a1, a3, v64, 0x60000u);
  sub_BF774(a1, a3, v7, 0xF8FFFFFF);
  sub_BF774(a1, a3, v64, 0x2000000u);
  sub_BF774(a1, a3, v7, 0xFFFFFFF8);
  sub_BF774(a1, a3, v122, 6u);
  sub_BF774(a1, a3, v7, 0xFF7FFFFF);
  sub_BF774(a1, a3, v114, 0x800000u);
  sub_BF774(a1, a3, v7, 0xFFFFF7FF);
  sub_BF774(a1, a3, v116, 0x800u);
  sub_BF774(a1, a3, v7, 0);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147442687);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147438591);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147434495);
  return 0;
}
