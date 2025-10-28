int __fastcall SOC_24G_20210917_update(int a1, int a2, char a3, int a4)
{
  int v7; // r11
  int v8; // r6
  bool v9; // zf
  int v10; // r12
  int v11; // r11
  int v12; // r8
  int v13; // lr
  int v14; // r3
  int v15; // lr
  int v16; // r12
  int v17; // lr
  int v18; // r12
  int v19; // r12
  int v20; // lr
  int v21; // lr
  int v22; // r12
  int v23; // lr
  int v24; // lr
  int v25; // r12
  int v26; // r12
  int v27; // lr
  int v28; // r12
  int v29; // lr
  int v30; // lr
  int v31; // lr
  int v32; // r12
  int v33; // lr
  int v34; // r12
  int v35; // r12
  int v36; // r12
  int v37; // lr
  int v38; // lr
  int v39; // r12
  int v40; // lr
  int v41; // r12
  int v42; // r12
  int v43; // lr
  int v44; // r12
  int v45; // lr
  int v46; // lr
  int v47; // lr
  int v48; // r12
  int v49; // lr
  int v50; // r9
  int v51; // r7
  int v52; // r10
  int v54; // [sp+10h] [bp-B8h]
  int v55; // [sp+14h] [bp-B4h]
  int v56; // [sp+18h] [bp-B0h]
  int v57; // [sp+1Ch] [bp-ACh]
  int v58; // [sp+20h] [bp-A8h]
  int v59; // [sp+24h] [bp-A4h]
  int v60; // [sp+28h] [bp-A0h]
  int v61; // [sp+2Ch] [bp-9Ch]
  int v62; // [sp+30h] [bp-98h]
  int v63; // [sp+34h] [bp-94h]
  int v64; // [sp+38h] [bp-90h]
  int v65; // [sp+3Ch] [bp-8Ch]
  int v66; // [sp+40h] [bp-88h]
  int v67; // [sp+44h] [bp-84h]
  int v68; // [sp+48h] [bp-80h]
  int v69; // [sp+4Ch] [bp-7Ch]
  int v70; // [sp+50h] [bp-78h]
  int v71; // [sp+54h] [bp-74h]
  int v72; // [sp+58h] [bp-70h]
  int v73; // [sp+5Ch] [bp-6Ch]
  int v74; // [sp+60h] [bp-68h]
  int v75; // [sp+64h] [bp-64h]
  int v76; // [sp+68h] [bp-60h]
  int v77; // [sp+6Ch] [bp-5Ch]
  int v78; // [sp+70h] [bp-58h]
  int v79; // [sp+74h] [bp-54h]
  int v80; // [sp+78h] [bp-50h]
  int v81; // [sp+7Ch] [bp-4Ch]
  int v82; // [sp+80h] [bp-48h]
  int v83; // [sp+84h] [bp-44h]
  int v84; // [sp+88h] [bp-40h]
  int v85; // [sp+8Ch] [bp-3Ch]
  int v86; // [sp+90h] [bp-38h]
  int v87; // [sp+94h] [bp-34h]
  int v88; // [sp+98h] [bp-30h]
  int v89; // [sp+9Ch] [bp-2Ch]
  int v90; // [sp+A0h] [bp-28h]
  int v91; // [sp+A4h] [bp-24h]
  int v92; // [sp+A8h] [bp-20h]
  int v93; // [sp+ACh] [bp-1Ch]
  int v94; // [sp+B0h] [bp-18h]
  int v95; // [sp+B4h] [bp-14h]
  int v96; // [sp+B8h] [bp-10h]
  int v97; // [sp+BCh] [bp-Ch]
  int v98; // [sp+C0h] [bp-8h]
  int v99; // [sp+C4h] [bp-4h]
  char v100[4100]; // [sp+C8h] [bp+0h] BYREF

  V_LOCK();
  v7 = 61484;
  logfmt_raw(v100, 0x1000u, 0, "%s...", "SOC_24G_20210917_update");
  V_UNLOCK();
  v8 = 61441;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "SOC_24G_20210917_update",
    23,
    4685,
    60,
    v100);
  v9 = a4 == 8;
  if ( a4 != 8 )
    v7 = 44;
  v10 = 61510;
  v99 = v7;
  v11 = 61481;
  if ( a4 != 8 )
  {
    v11 = 41;
    v10 = 70;
  }
  v98 = v11;
  if ( a4 == 8 )
    v11 = 61480;
  v12 = 61479;
  if ( !v9 )
    v12 = 39;
  v72 = v10;
  v97 = v12;
  if ( v9 )
    v12 = 61513;
  v13 = 61523;
  if ( !v9 )
    v13 = 83;
  v14 = 61550;
  v96 = v13;
  if ( v9 )
    v15 = 61546;
  else
    v15 = 106;
  v16 = 61547;
  if ( !v9 )
    v16 = 107;
  v71 = v15;
  v95 = v16;
  v17 = 61449;
  v18 = 61459;
  if ( !v9 )
  {
    v17 = 9;
    v18 = 19;
  }
  v93 = v17;
  v94 = v18;
  v19 = 61592;
  if ( !v9 )
    v19 = 152;
  v92 = v19;
  if ( v9 )
    v19 = 61591;
  v20 = 61599;
  if ( !v9 )
  {
    v20 = 159;
    v19 = 151;
  }
  v91 = v20;
  v21 = 61598;
  if ( !v9 )
    v21 = 158;
  v70 = v19;
  v22 = 61596;
  v69 = v21;
  if ( !v9 )
    v22 = 156;
  v68 = v22;
  if ( v9 )
    v22 = 61597;
  v23 = 61615;
  if ( !v9 )
  {
    v23 = 175;
    v22 = 157;
  }
  v90 = v23;
  v24 = 61450;
  if ( !v9 )
    v24 = 10;
  v59 = v22;
  v58 = v24;
  v25 = 61445;
  if ( !v9 )
    v25 = 5;
  v89 = v25;
  if ( v9 )
    v26 = 61520;
  else
    v26 = 80;
  v27 = 61446;
  if ( !v9 )
    v27 = 6;
  v57 = v26;
  v88 = v27;
  v28 = 61474;
  v29 = 61556;
  if ( !v9 )
  {
    v28 = 34;
    v29 = 116;
  }
  v86 = v28;
  v87 = v29;
  v30 = 61545;
  if ( !v9 )
    v30 = 105;
  v85 = v30;
  if ( v9 )
    v31 = 61580;
  else
    v31 = 140;
  v32 = 61579;
  if ( !v9 )
    v32 = 139;
  v67 = v31;
  v84 = v32;
  v33 = 61630;
  v34 = 61606;
  if ( !v9 )
  {
    v33 = 190;
    v34 = 166;
  }
  v66 = v33;
  v83 = v34;
  v35 = 61564;
  if ( !v9 )
    v35 = 124;
  v82 = v35;
  if ( v9 )
    v36 = 61590;
  else
    v36 = 150;
  v37 = 61443;
  if ( !v9 )
    v37 = 3;
  v65 = v36;
  v81 = v37;
  v38 = 61448;
  if ( !v9 )
    v38 = 8;
  v64 = v38;
  if ( v9 )
    v38 = 61442;
  else
    v14 = 110;
  if ( !v9 )
    v38 = 2;
  v39 = 61622;
  if ( !v9 )
    v39 = 182;
  v54 = v14;
  if ( !v9 )
    v8 = 1;
  v56 = v38;
  v40 = 61472;
  v80 = v39;
  if ( !v9 )
    v40 = 32;
  v41 = 61566;
  if ( !v9 )
    v41 = 126;
  v79 = v41;
  v42 = 61514;
  v78 = v40;
  if ( !v9 )
    v42 = 74;
  v43 = 61458;
  if ( !v9 )
    v43 = 18;
  v63 = v42;
  v44 = 61469;
  v55 = v43;
  if ( !v9 )
    v44 = 29;
  v77 = v44;
  if ( v9 )
    v44 = 61466;
  v45 = 61467;
  if ( !v9 )
  {
    v45 = 27;
    v44 = 26;
  }
  v76 = v45;
  v62 = v44;
  if ( v9 )
    v44 = 61465;
  v46 = 61488;
  if ( !v9 )
  {
    v46 = 48;
    v44 = 25;
  }
  v75 = v46;
  v47 = 61487;
  if ( !v9 )
    v47 = 47;
  v61 = v44;
  v48 = 61482;
  v74 = v47;
  if ( !v9 )
    v48 = 42;
  v49 = 61551;
  if ( !v9 )
    v49 = 111;
  v60 = v48;
  v50 = 61512;
  v73 = v49;
  v51 = 61511;
  if ( !v9 )
  {
    v50 = 72;
    v51 = 71;
    v12 = 73;
  }
  v52 = 61483;
  if ( !v9 )
  {
    v11 = 40;
    v52 = 43;
  }
  sub_1325F4(a1, a3, v8, 0xFFFFFFF7);
  sub_1325F4(a1, a3, v54, 0);
  sub_8F7C8(a1, a3, 144, -520093697);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 251658240);
  sub_8F7C8(a1, a3, 145, -2147438529);
  sub_8F7C8(a1, a3, 144, -520093697);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 251658240);
  sub_8F7C8(a1, a3, 145, -2147434433);
  sub_8F7C8(a1, a3, 144, -1048321);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 256);
  sub_8F7C8(a1, a3, 145, -2147438530);
  sub_8F7C8(a1, a3, 144, -1048321);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 256);
  sub_8F7C8(a1, a3, 145, -2147434434);
  sub_8F7C8(a1, a3, 144, -4096);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 4);
  sub_8F7C8(a1, a3, 145, -2147438529);
  sub_8F7C8(a1, a3, 144, -4096);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 4);
  sub_8F7C8(a1, a3, 145, -2147434433);
  sub_1325F4(a1, a3, v8, 0xFFFFFFFD);
  sub_1325F4(a1, a3, v54, 0);
  sub_1325F4(a1, a3, v8, 0x7FFFFFFFu);
  sub_1325F4(a1, a3, v73, 0x80000000);
  sub_1325F4(a1, a3, v8, 0xFFFBFFFF);
  sub_1325F4(a1, a3, v54, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFFFFB);
  sub_1325F4(a1, a3, v54, 0);
  sub_8F7C8(a1, a3, 144, 0xFFFFFF);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 838860800);
  sub_8F7C8(a1, a3, 145, -2147438590);
  sub_8F7C8(a1, a3, 144, 0xFFFFFF);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 838860800);
  sub_8F7C8(a1, a3, 145, -2147434494);
  sub_8F7C8(a1, a3, 144, -4);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147438589);
  sub_8F7C8(a1, a3, 144, -4);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147434493);
  sub_8F7C8(a1, a3, 144, 0xFFFFFFF);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 0x20000000);
  sub_8F7C8(a1, a3, 145, -2147438587);
  sub_8F7C8(a1, a3, 144, 0xFFFFFFF);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 0x20000000);
  sub_8F7C8(a1, a3, 145, -2147434491);
  sub_8F7C8(a1, a3, 144, -64);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 3);
  sub_8F7C8(a1, a3, 145, -2147438586);
  sub_8F7C8(a1, a3, 144, -64);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 3);
  sub_8F7C8(a1, a3, 145, -2147434490);
  sub_1325F4(a1, a3, v8, 0xFFFFFC00);
  sub_1325F4(a1, a3, v60, 0x32u);
  sub_1325F4(a1, a3, v8, 0xFFFFFFu);
  sub_1325F4(a1, a3, v74, 0x32000000u);
  sub_1325F4(a1, a3, v8, 0xFFFFFFFC);
  sub_1325F4(a1, a3, v75, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFF7FF);
  sub_1325F4(a1, a3, v61, 0);
  sub_1325F4(a1, a3, v8, 0xFFDFFFFF);
  sub_1325F4(a1, a3, v76, 0);
  sub_1325F4(a1, a3, v8, 0xDFFFFFFF);
  sub_1325F4(a1, a3, v62, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFFFFB);
  sub_1325F4(a1, a3, v77, 4u);
  sub_1325F4(a1, a3, v8, 0x7FFFFFFFu);
  sub_1325F4(a1, a3, v62, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFFBFF);
  sub_1325F4(a1, a3, v51, 0);
  sub_1325F4(a1, a3, v8, 0xFFFBFFFF);
  sub_1325F4(a1, a3, v55, 0x40000u);
  sub_1325F4(a1, a3, v8, 0xFFFFFBFF);
  sub_1325F4(a1, a3, v63, 0x400u);
  sub_8F7C8(a1, a3, 144, -7340033);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0x200000);
  sub_8F7C8(a1, a3, 145, -2147450872);
  sub_8F7C8(a1, a3, 144, -57345);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 40960);
  sub_8F7C8(a1, a3, 145, -2147450871);
  sub_1325F4(a1, a3, v8, 0xFBFFFFFF);
  sub_1325F4(a1, a3, v78, 0x4000000u);
  sub_8F7C8(a1, a3, 144, -131073);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147450818);
  sub_1325F4(a1, a3, v8, 0xFFFBFFFF);
  sub_1325F4(a1, a3, v8, 0xFFFFFBFF);
  sub_1325F4(a1, a3, v8, 0xFF7FFFFF);
  sub_1325F4(a1, a3, v79, 0x800000u);
  sub_1325F4(a1, a3, v8, 0xFFFFFFFu);
  sub_1325F4(a1, a3, v80, 0x60000000u);
  sub_8F7C8(a1, a3, 144, -1009);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 576);
  sub_8F7C8(a1, a3, 145, -2147450787);
  sub_8F7C8(a1, a3, 144, -258049);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 147456);
  sub_8F7C8(a1, a3, 145, -2147450787);
  sub_8F7C8(a1, a3, 144, -66060289);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 37748736);
  sub_8F7C8(a1, a3, 145, -2147450787);
  sub_8F7C8(a1, a3, 144, 0xFFFFFFF);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0x40000000);
  sub_8F7C8(a1, a3, 145, -2147450787);
  sub_8F7C8(a1, a3, 144, -4);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 2);
  sub_8F7C8(a1, a3, 145, -2147450786);
  sub_8F7C8(a1, a3, 144, -1009);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 64);
  sub_8F7C8(a1, a3, 145, -2147450786);
  sub_8F7C8(a1, a3, 144, -258049);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0x4000);
  sub_8F7C8(a1, a3, 145, -2147450786);
  sub_8F7C8(a1, a3, 144, -66060289);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0x400000);
  sub_8F7C8(a1, a3, 145, -2147450786);
  sub_8F7C8(a1, a3, 144, 0xFFFFFFF);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0x40000000);
  sub_8F7C8(a1, a3, 145, -2147450786);
  sub_8F7C8(a1, a3, 144, -4);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147450785);
  sub_8F7C8(a1, a3, 144, -524289);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147450815);
  sub_8F7C8(a1, a3, 144, -1009);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 64);
  sub_8F7C8(a1, a3, 145, -2147450878);
  sub_1325F4(a1, a3, v8, 0xFFFCFFFF);
  sub_1325F4(a1, a3, v56, 0x30000u);
  sub_1325F4(a1, a3, v8, 0xFFFFFFFC);
  sub_1325F4(a1, a3, v64, 2u);
  sub_1325F4(a1, a3, v8, 0xFFFCFFFF);
  sub_1325F4(a1, a3, v8, 0xFFFCFFFF);
  sub_1325F4(a1, a3, v81, 0x30000u);
  sub_8F7C8(a1, a3, 144, -786433);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 786432);
  sub_8F7C8(a1, a3, 145, -2147450818);
  sub_8F7C8(a1, a3, 144, -2);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 1);
  sub_8F7C8(a1, a3, 145, -2147450878);
  sub_8F7C8(a1, a3, 144, -8388609);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0x800000);
  sub_8F7C8(a1, a3, 145, -2147450808);
  sub_8F7C8(a1, a3, 144, -805306369);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0x20000000);
  sub_8F7C8(a1, a3, 145, -2147450804);
  sub_8F7C8(a1, a3, 144, -97);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 32);
  sub_8F7C8(a1, a3, 145, -2147450868);
  sub_1325F4(a1, a3, v8, 0xFFFFCFFF);
  sub_1325F4(a1, a3, v65, 0x2000u);
  sub_1325F4(a1, a3, v8, 0xFFBFFFFF);
  sub_1325F4(a1, a3, v82, 0x400000u);
  sub_1325F4(a1, a3, v8, 0xFFFFFE0F);
  sub_1325F4(a1, a3, v66, 0x180u);
  sub_1325F4(a1, a3, v8, 0xFFFFFF1F);
  sub_1325F4(a1, a3, v83, 0);
  sub_1325F4(a1, a3, v8, 0xFFFF0FFF);
  sub_1325F4(a1, a3, v66, 0x4000u);
  sub_1325F4(a1, a3, v8, 0xFFFF7FFF);
  sub_1325F4(a1, a3, v84, 0x8000u);
  sub_1325F4(a1, a3, v8, 0xFFFEFFFF);
  sub_1325F4(a1, a3, v67, 0x10000u);
  sub_1325F4(a1, a3, v8, 0xFFFDFFFF);
  sub_1325F4(a1, a3, v67, 0x20000u);
  sub_1325F4(a1, a3, v8, 0xFFFF000F);
  sub_1325F4(a1, a3, v56, 0x8000u);
  sub_1325F4(a1, a3, v8, 0xFFFFFFF3);
  sub_1325F4(a1, a3, v85, 8u);
  sub_1325F4(a1, a3, v8, 0xFFFFF9FF);
  sub_1325F4(a1, a3, v50, 0x400u);
  sub_8F7C8(a1, a3, 144, -13);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 8);
  sub_8F7C8(a1, a3, 145, -2147450878);
  sub_8F7C8(a1, a3, 144, -100663297);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0x2000000);
  sub_8F7C8(a1, a3, 145, -2147450820);
  sub_8F7C8(a1, a3, 144, 0x7FFFFFFF);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0x80000000);
  sub_8F7C8(a1, a3, 145, -2147450853);
  sub_8F7C8(a1, a3, 144, -2);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147450852);
  sub_1325F4(a1, a3, v8, 0xFFFFFFFC);
  sub_1325F4(a1, a3, v61, 1u);
  sub_1325F4(a1, a3, v8, 0xF3FFFFFF);
  sub_1325F4(a1, a3, v86, 0x4000000u);
  sub_1325F4(a1, a3, v8, 0xCFFFFFFF);
  sub_1325F4(a1, a3, v87, 0x10000000u);
  sub_8F7C8(a1, a3, 144, -28673);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 12288);
  sub_8F7C8(a1, a3, 145, -2147450860);
  sub_1325F4(a1, a3, v8, 0xFFFFFF0F);
  sub_1325F4(a1, a3, v88, 0x60u);
  sub_1325F4(a1, a3, v8, 0xFFFFFFFC);
  sub_1325F4(a1, a3, v56, 2u);
  sub_1325F4(a1, a3, v8, 0xFFFFFFF7);
  sub_1325F4(a1, a3, v57, 8u);
  sub_1325F4(a1, a3, v8, 0xFFF7FFFF);
  sub_1325F4(a1, a3, v89, 0x80000u);
  sub_1325F4(a1, a3, v8, 0xF8FFFFFF);
  sub_1325F4(a1, a3, v58, 0x7000000u);
  sub_1325F4(a1, a3, v8, 0xFFFFFFFB);
  sub_1325F4(a1, a3, v57, 4u);
  sub_1325F4(a1, a3, v8, 0xC0FFFFFF);
  sub_1325F4(a1, a3, v90, 0x4000000u);
  sub_1325F4(a1, a3, v8, 0xFFFFFF80);
  sub_1325F4(a1, a3, v59, 2u);
  sub_1325F4(a1, a3, v8, 0xF80FFFFF);
  sub_1325F4(a1, a3, v59, 0x100000u);
  sub_1325F4(a1, a3, v8, 0xF00FFFFF);
  sub_1325F4(a1, a3, v68, 0x200000u);
  sub_1325F4(a1, a3, v8, 0xFFFF000F);
  sub_1325F4(a1, a3, v68, 0x100u);
  sub_1325F4(a1, a3, v8, 0xFFFFFFu);
  sub_1325F4(a1, a3, v69, 0x10000000u);
  sub_1325F4(a1, a3, v8, 0xFFFFF00F);
  sub_1325F4(a1, a3, v91, 0x300u);
  sub_1325F4(a1, a3, v8, 0xF000FFFF);
  sub_1325F4(a1, a3, v65, 0x620000u);
  sub_1325F4(a1, a3, v8, 0xFFFFF000);
  sub_1325F4(a1, a3, v70, 0xC8u);
  sub_1325F4(a1, a3, v8, 0xF000FFFF);
  sub_1325F4(a1, a3, v70, 0x300000u);
  sub_1325F4(a1, a3, v8, 0xFFFFF000);
  sub_1325F4(a1, a3, v92, 0x64u);
  sub_8F7C8(a1, a3, 144, -1056964609);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 0x4000000);
  sub_8F7C8(a1, a3, 145, -2147438533);
  sub_8F7C8(a1, a3, 144, -1056964609);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 0x4000000);
  sub_8F7C8(a1, a3, 145, -2147434437);
  sub_8F7C8(a1, a3, 144, -64);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 4);
  sub_8F7C8(a1, a3, 145, -2147438532);
  sub_8F7C8(a1, a3, 144, -64);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 4);
  sub_8F7C8(a1, a3, 145, -2147434436);
  sub_8F7C8(a1, a3, 144, -16129);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 1024);
  sub_8F7C8(a1, a3, 145, -2147438532);
  sub_8F7C8(a1, a3, 144, -16129);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 1024);
  sub_8F7C8(a1, a3, 145, -2147434436);
  sub_8F7C8(a1, a3, 144, -4128769);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 0x40000);
  sub_8F7C8(a1, a3, 145, -2147438532);
  sub_8F7C8(a1, a3, 144, -4128769);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 0x40000);
  sub_8F7C8(a1, a3, 145, -2147434436);
  sub_8F7C8(a1, a3, 144, -1056964609);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 603979776);
  sub_8F7C8(a1, a3, 145, -2147438532);
  sub_8F7C8(a1, a3, 144, -1056964609);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 603979776);
  sub_8F7C8(a1, a3, 145, -2147434436);
  sub_8F7C8(a1, a3, 144, -64);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 36);
  sub_8F7C8(a1, a3, 145, -2147438531);
  sub_8F7C8(a1, a3, 144, -64);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 36);
  sub_8F7C8(a1, a3, 145, -2147434435);
  sub_8F7C8(a1, a3, 144, -16129);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 9216);
  sub_8F7C8(a1, a3, 145, -2147438531);
  sub_8F7C8(a1, a3, 144, -16129);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 9216);
  sub_8F7C8(a1, a3, 145, -2147434435);
  sub_8F7C8(a1, a3, 144, -4128769);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 2359296);
  sub_8F7C8(a1, a3, 145, -2147438531);
  sub_8F7C8(a1, a3, 144, -4128769);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 2359296);
  sub_8F7C8(a1, a3, 145, -2147434435);
  sub_8F7C8(a1, a3, 144, -393217);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 0x20000);
  sub_8F7C8(a1, a3, 145, -2147438564);
  sub_8F7C8(a1, a3, 144, -393217);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 0x20000);
  sub_8F7C8(a1, a3, 145, -2147434468);
  sub_8F7C8(a1, a3, 144, -100663297);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 0x2000000);
  sub_8F7C8(a1, a3, 145, -2147438564);
  sub_8F7C8(a1, a3, 144, -100663297);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 0x2000000);
  sub_8F7C8(a1, a3, 145, -2147434468);
  sub_8F7C8(a1, a3, 144, -7);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 2);
  sub_8F7C8(a1, a3, 145, -2147438563);
  sub_8F7C8(a1, a3, 144, -7);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 2);
  sub_8F7C8(a1, a3, 145, -2147434467);
  sub_8F7C8(a1, a3, 144, -1537);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 512);
  sub_8F7C8(a1, a3, 145, -2147438563);
  sub_8F7C8(a1, a3, 144, -1537);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 512);
  sub_8F7C8(a1, a3, 145, -2147434467);
  sub_8F7C8(a1, a3, 144, -393217);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 0x20000);
  sub_8F7C8(a1, a3, 145, -2147438563);
  sub_8F7C8(a1, a3, 144, -393217);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 0x20000);
  sub_8F7C8(a1, a3, 145, -2147434467);
  sub_8F7C8(a1, a3, 144, -100663297);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 0x2000000);
  sub_8F7C8(a1, a3, 145, -2147438563);
  sub_8F7C8(a1, a3, 144, -100663297);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 0x2000000);
  sub_8F7C8(a1, a3, 145, -2147434467);
  sub_8F7C8(a1, a3, 144, -7);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 2);
  sub_8F7C8(a1, a3, 145, -2147438562);
  sub_8F7C8(a1, a3, 144, -7);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 2);
  sub_8F7C8(a1, a3, 145, -2147434466);
  sub_8F7C8(a1, a3, 144, -1537);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 512);
  sub_8F7C8(a1, a3, 145, -2147438562);
  sub_8F7C8(a1, a3, 144, -1537);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 512);
  sub_8F7C8(a1, a3, 145, -2147434466);
  sub_1325F4(a1, a3, v8, 0xFFFFF3FF);
  sub_1325F4(a1, a3, v58, 0x800u);
  sub_1325F4(a1, a3, v8, 0xFFFFFFFC);
  sub_1325F4(a1, a3, v58, 1u);
  sub_1325F4(a1, a3, v8, 0xFFFFFFF8);
  sub_1325F4(a1, a3, v93, 1u);
  sub_1325F4(a1, a3, v8, 0xFFFE0FFF);
  sub_1325F4(a1, a3, v55, 0x4000u);
  sub_1325F4(a1, a3, v8, 0xFFFFFFFu);
  sub_1325F4(a1, a3, v55, 0x80000000);
  sub_1325F4(a1, a3, v8, 0xFFFFFFFE);
  sub_1325F4(a1, a3, v94, 0);
  sub_8F7C8(a1, a3, 144, -33);
  sub_8F7C8(a1, a3, 145, -2147442687);
  sub_8F7C8(a1, a3, 144, 32);
  sub_8F7C8(a1, a3, 145, -2147442683);
  sub_8F7C8(a1, a3, 144, -2);
  sub_8F7C8(a1, a3, 145, -2147442687);
  sub_8F7C8(a1, a3, 144, 1);
  sub_8F7C8(a1, a3, 145, -2147442681);
  sub_8F7C8(a1, a3, 144, -67108865);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147438555);
  sub_8F7C8(a1, a3, 144, -67108865);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147434459);
  sub_8F7C8(a1, a3, 144, -134217729);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147438555);
  sub_8F7C8(a1, a3, 144, -134217729);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147434459);
  sub_8F7C8(a1, a3, 144, -134217729);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 0x8000000);
  sub_8F7C8(a1, a3, 145, -2147438552);
  sub_8F7C8(a1, a3, 144, -134217729);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 0x8000000);
  sub_8F7C8(a1, a3, 145, -2147434456);
  sub_8F7C8(a1, a3, 144, -17);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 16);
  sub_8F7C8(a1, a3, 145, -2147438551);
  sub_8F7C8(a1, a3, 144, -17);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 16);
  sub_8F7C8(a1, a3, 145, -2147434455);
  sub_8F7C8(a1, a3, 144, -65537);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 0x10000);
  sub_8F7C8(a1, a3, 145, -2147438551);
  sub_8F7C8(a1, a3, 144, -65537);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 0x10000);
  sub_8F7C8(a1, a3, 145, -2147434455);
  sub_8F7C8(a1, a3, 144, -131073);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 0x20000);
  sub_8F7C8(a1, a3, 145, -2147438551);
  sub_8F7C8(a1, a3, 144, -131073);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 0x20000);
  sub_8F7C8(a1, a3, 145, -2147434455);
  sub_8F7C8(a1, a3, 144, -8388609);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 0x800000);
  sub_8F7C8(a1, a3, 145, -2147438547);
  sub_8F7C8(a1, a3, 144, -8388609);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 0x800000);
  sub_8F7C8(a1, a3, 145, -2147434451);
  sub_8F7C8(a1, a3, 144, -268435457);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 0x10000000);
  sub_8F7C8(a1, a3, 145, -2147438547);
  sub_8F7C8(a1, a3, 144, -268435457);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 0x10000000);
  sub_8F7C8(a1, a3, 145, -2147434451);
  sub_1325F4(a1, a3, v8, 0xFFFCFFFF);
  sub_1325F4(a1, a3, v64, 0x10000u);
  sub_1325F4(a1, a3, v8, 0x8FFFFFFF);
  sub_1325F4(a1, a3, v95, 0x30000000u);
  sub_1325F4(a1, a3, v8, 0xFFFFFFFu);
  sub_1325F4(a1, a3, v59, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFFFF0);
  sub_1325F4(a1, a3, v69, 8u);
  sub_1325F4(a1, a3, v8, 0xBFFFFFFF);
  sub_1325F4(a1, a3, v71, 0);
  sub_1325F4(a1, a3, v8, 0xFFF3FFFF);
  sub_1325F4(a1, a3, v57, 0);
  sub_1325F4(a1, a3, v8, 0xFFFF7FFF);
  sub_1325F4(a1, a3, v71, 0x8000u);
  sub_1325F4(a1, a3, v8, 0xFFF8FFFF);
  sub_1325F4(a1, a3, v96, 0x40000u);
  sub_8F7C8(a1, a3, 144, -2049);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147450819);
  sub_8F7C8(a1, a3, 144, -524289);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147450819);
  sub_1325F4(a1, a3, v8, 0xFE0FFFFF);
  sub_1325F4(a1, a3, v72, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFFFFu);
  sub_1325F4(a1, a3, v72, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFFFFE);
  sub_1325F4(a1, a3, v51, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFFE0F);
  sub_1325F4(a1, a3, v51, 0);
  sub_1325F4(a1, a3, v8, 0xFFFE0FFF);
  sub_1325F4(a1, a3, v51, 0);
  sub_1325F4(a1, a3, v8, 0xFE0FFFFF);
  sub_1325F4(a1, a3, v51, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFFFFu);
  sub_1325F4(a1, a3, v51, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFFFFE);
  sub_1325F4(a1, a3, v50, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFFE0F);
  sub_1325F4(a1, a3, v50, 0);
  sub_1325F4(a1, a3, v8, 0xFFFE0FFF);
  sub_1325F4(a1, a3, v50, 0);
  sub_1325F4(a1, a3, v8, 0xFE0FFFFF);
  sub_1325F4(a1, a3, v50, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFFFFu);
  sub_1325F4(a1, a3, v50, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFFFFE);
  sub_1325F4(a1, a3, v12, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFFE0F);
  sub_1325F4(a1, a3, v12, 0);
  sub_1325F4(a1, a3, v8, 0xFFFE0FFF);
  sub_1325F4(a1, a3, v12, 0);
  sub_1325F4(a1, a3, v8, 0xFE0FFFFF);
  sub_1325F4(a1, a3, v12, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFFFFu);
  sub_1325F4(a1, a3, v12, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFFFFE);
  sub_1325F4(a1, a3, v63, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFFE0F);
  sub_1325F4(a1, a3, v63, 0);
  sub_1325F4(a1, a3, v8, 0xFFFE0FFF);
  sub_1325F4(a1, a3, v63, 0);
  sub_1325F4(a1, a3, v8, 0xFFF1FFFF);
  sub_1325F4(a1, a3, v97, 0);
  sub_1325F4(a1, a3, v8, 0xF1FFFFFF);
  sub_1325F4(a1, a3, v97, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFFFF1);
  sub_1325F4(a1, a3, v11, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFF1FF);
  sub_1325F4(a1, a3, v11, 0);
  sub_1325F4(a1, a3, v8, 0xFFF1FFFF);
  sub_1325F4(a1, a3, v11, 0);
  sub_1325F4(a1, a3, v8, 0xF1FFFFFF);
  sub_1325F4(a1, a3, v11, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFFFF1);
  sub_1325F4(a1, a3, v98, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFF1FF);
  sub_1325F4(a1, a3, v98, 0);
  sub_1325F4(a1, a3, v8, 0xFFF1FFFF);
  sub_1325F4(a1, a3, v98, 0);
  sub_1325F4(a1, a3, v8, 0xFFF1FFFF);
  sub_1325F4(a1, a3, v60, 0);
  sub_1325F4(a1, a3, v8, 0xF1FFFFFF);
  sub_1325F4(a1, a3, v60, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFFFF8);
  sub_1325F4(a1, a3, v52, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFF8FF);
  sub_1325F4(a1, a3, v52, 0);
  sub_1325F4(a1, a3, v8, 0xFFF1FFFF);
  sub_1325F4(a1, a3, v52, 0);
  sub_1325F4(a1, a3, v8, 0xF1FFFFFF);
  sub_1325F4(a1, a3, v52, 0);
  sub_1325F4(a1, a3, v8, 0xFFFFFFF1);
  sub_1325F4(a1, a3, v99, 0);
  sub_1325F4(a1, a3, v8, 0);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147442687);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147434495);
  return 0;
}
