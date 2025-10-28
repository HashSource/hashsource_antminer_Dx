int __fastcall SOC_24G_seq1_20210922_update(int a1, int a2, char a3, int a4)
{
  int v7; // r8
  int v8; // r6
  bool v9; // zf
  int v10; // r3
  int v11; // lr
  int v12; // r12
  int v13; // r12
  int v14; // lr
  int v15; // r12
  int v16; // lr
  int v17; // r12
  int v18; // lr
  int v19; // r12
  int v20; // r12
  int v21; // lr
  int v22; // lr
  int v23; // r12
  int v24; // r12
  int v25; // lr
  int v26; // r12
  int v27; // lr
  int v28; // r12
  int v29; // lr
  int v30; // r12
  int v31; // lr
  int v32; // lr
  int v33; // r12
  int v34; // r12
  int v35; // r12
  int v36; // lr
  int v37; // r12
  int v38; // lr
  int v39; // lr
  int v40; // lr
  int v41; // r12
  int v42; // r12
  int v43; // lr
  int v44; // r12
  int v45; // lr
  int v46; // lr
  int v47; // r12
  int v48; // r12
  int v49; // r12
  int v50; // lr
  int v51; // lr
  int v52; // r9
  int v53; // lr
  int v54; // r7
  void (__fastcall *v55)(int, int *); // r3
  void (__fastcall *v56)(int, int *); // r3
  void (__fastcall *v57)(int, int *); // r3
  int v59; // [sp+10h] [bp-B0h]
  int v60; // [sp+14h] [bp-ACh]
  int v61; // [sp+18h] [bp-A8h]
  int v62; // [sp+1Ch] [bp-A4h]
  int v63; // [sp+20h] [bp-A0h]
  int v64; // [sp+24h] [bp-9Ch]
  int v65; // [sp+28h] [bp-98h]
  int v66; // [sp+2Ch] [bp-94h]
  int v67; // [sp+30h] [bp-90h]
  int v68; // [sp+34h] [bp-8Ch]
  int v69; // [sp+38h] [bp-88h]
  int v70; // [sp+3Ch] [bp-84h]
  int v71; // [sp+40h] [bp-80h]
  int v72; // [sp+44h] [bp-7Ch]
  int v73; // [sp+48h] [bp-78h]
  int v74; // [sp+4Ch] [bp-74h]
  int v75; // [sp+50h] [bp-70h]
  int v76; // [sp+54h] [bp-6Ch]
  int v77; // [sp+58h] [bp-68h]
  int v78; // [sp+5Ch] [bp-64h]
  int v79; // [sp+60h] [bp-60h]
  int v80; // [sp+64h] [bp-5Ch]
  int v81; // [sp+68h] [bp-58h]
  int v82; // [sp+6Ch] [bp-54h]
  int v83; // [sp+70h] [bp-50h]
  int v84; // [sp+74h] [bp-4Ch]
  int v85; // [sp+78h] [bp-48h]
  int v86; // [sp+7Ch] [bp-44h]
  int v87; // [sp+80h] [bp-40h]
  int v88; // [sp+84h] [bp-3Ch]
  int v89; // [sp+88h] [bp-38h]
  int v90; // [sp+8Ch] [bp-34h]
  int v91; // [sp+90h] [bp-30h]
  int v92; // [sp+94h] [bp-2Ch]
  int v93; // [sp+98h] [bp-28h]
  int v94; // [sp+9Ch] [bp-24h]
  int v95; // [sp+A0h] [bp-20h]
  int v96; // [sp+A4h] [bp-1Ch]
  int v97; // [sp+A8h] [bp-18h]
  int v98; // [sp+ACh] [bp-14h]
  int v99; // [sp+B0h] [bp-10h]
  int v100; // [sp+B4h] [bp-Ch]
  int v101; // [sp+B8h] [bp-8h]
  int v102; // [sp+BCh] [bp-4h]
  int v103; // [sp+C0h] [bp+0h] BYREF
  int v104; // [sp+C4h] [bp+4h]
  int v105; // [sp+C8h] [bp+8h]
  int v106; // [sp+CCh] [bp+Ch]

  v7 = 61466;
  V_LOCK();
  logfmt_raw((char *)&v103, 0x1000u, 0, "%s...", "SOC_24G_seq1_20210922_update");
  V_UNLOCK();
  v8 = 61441;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "SOC_24G_seq1_20210922_update",
    28,
    5145,
    60,
    &v103);
  v9 = a4 == 8;
  v10 = -2147483458;
  v11 = 61541;
  if ( a4 == 8 )
    v10 = -2147422018;
  else
    v11 = 101;
  v12 = 61497;
  if ( a4 != 8 )
    v12 = 57;
  v102 = v12;
  v13 = 61496;
  v98 = v11;
  if ( a4 != 8 )
    v13 = 56;
  v14 = 61447;
  if ( a4 != 8 )
    v14 = 7;
  v101 = v13;
  v15 = 61495;
  v97 = v14;
  if ( a4 != 8 )
    v15 = 55;
  v16 = 61494;
  if ( a4 != 8 )
    v16 = 54;
  v100 = v15;
  v17 = 61542;
  v96 = v16;
  if ( a4 != 8 )
    v17 = 102;
  v18 = 61493;
  if ( a4 != 8 )
    v18 = 53;
  v99 = v17;
  v19 = 61492;
  v95 = v18;
  if ( a4 != 8 )
    v19 = 52;
  v94 = v19;
  if ( a4 == 8 )
    v20 = 61490;
  else
    v20 = 50;
  v21 = 61446;
  if ( a4 != 8 )
    v21 = 6;
  v93 = v20;
  v92 = v21;
  v22 = 61484;
  if ( a4 != 8 )
    v22 = 44;
  v60 = v10;
  v91 = v22;
  if ( a4 == 8 )
    v22 = 61483;
  v23 = 61481;
  if ( a4 != 8 )
  {
    v23 = 41;
    v22 = 43;
  }
  v89 = v23;
  v24 = 61480;
  if ( a4 != 8 )
    v24 = 40;
  v90 = v22;
  v25 = 61479;
  v88 = v24;
  if ( a4 != 8 )
    v25 = 39;
  v26 = 61513;
  if ( a4 != 8 )
    v26 = 73;
  v87 = v25;
  v27 = 61510;
  v86 = v26;
  if ( a4 != 8 )
    v27 = 70;
  v28 = 61556;
  if ( a4 != 8 )
    v28 = 116;
  v62 = v27;
  v29 = 61474;
  v85 = v28;
  if ( a4 != 8 )
    v29 = 34;
  v30 = 61512;
  if ( a4 != 8 )
    v30 = 72;
  v84 = v29;
  v31 = 61545;
  v69 = v30;
  if ( a4 != 8 )
    v31 = 105;
  v68 = v31;
  if ( a4 == 8 )
    v32 = 61580;
  else
    v32 = 140;
  v33 = 61579;
  if ( a4 != 8 )
    v33 = 139;
  v83 = v32;
  v77 = v33;
  v34 = 61606;
  if ( a4 != 8 )
  {
    v34 = 166;
    v8 = 1;
  }
  v79 = v34;
  if ( a4 == 8 )
    v35 = 61630;
  else
    v35 = 190;
  v36 = 61564;
  if ( a4 != 8 )
    v36 = 124;
  v59 = v35;
  v82 = v36;
  v37 = 61443;
  v38 = 61590;
  if ( a4 != 8 )
  {
    v37 = 3;
    v38 = 150;
  }
  v76 = v37;
  v75 = v38;
  v39 = 61448;
  if ( a4 != 8 )
    v39 = 8;
  v63 = v39;
  if ( a4 == 8 )
    v40 = 61442;
  else
    v40 = 2;
  v41 = 61622;
  if ( a4 != 8 )
    v41 = 182;
  v61 = v40;
  v73 = v41;
  v42 = 61566;
  if ( a4 != 8 )
    v42 = 126;
  v43 = 61514;
  v74 = v42;
  if ( a4 != 8 )
    v43 = 74;
  v44 = 61458;
  if ( a4 != 8 )
    v44 = 18;
  v64 = v43;
  v45 = 61472;
  v81 = v44;
  if ( a4 != 8 )
    v45 = 32;
  v72 = v45;
  if ( a4 == 8 )
    v46 = 61511;
  else
    v46 = 71;
  v47 = 61469;
  if ( a4 != 8 )
    v47 = 29;
  v66 = v46;
  v71 = v47;
  v48 = 61467;
  if ( a4 != 8 )
    v48 = 27;
  v70 = v48;
  if ( a4 == 8 )
    v49 = 61465;
  else
    v49 = 25;
  v50 = 61488;
  if ( a4 != 8 )
    v50 = 48;
  v65 = v49;
  v78 = v50;
  v51 = 61487;
  if ( a4 != 8 )
    v51 = 47;
  v80 = v51;
  if ( a4 == 8 )
  {
    v52 = 61550;
    v53 = 61482;
  }
  else
  {
    v53 = 42;
    v52 = 110;
  }
  v67 = v53;
  if ( a4 != 8 )
    v7 = 26;
  v54 = 61551;
  if ( !v9 )
    v54 = 111;
  sub_BF774(a1, a3, v8, 0xFFFFFFF7);
  sub_BF774(a1, a3, v52, 0);
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
  sub_BF774(a1, a3, v8, 0xFFFFFFFD);
  sub_BF774(a1, a3, v52, 0);
  sub_BF774(a1, a3, v8, 0x7FFFFFFFu);
  sub_BF774(a1, a3, v54, 0x80000000);
  sub_BF774(a1, a3, v8, 0xFFFBFFFF);
  sub_BF774(a1, a3, v52, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFFFB);
  sub_BF774(a1, a3, v52, 0);
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
  sub_BF774(a1, a3, v8, 0xFFFFFC00);
  sub_BF774(a1, a3, v67, 0x32u);
  sub_BF774(a1, a3, v8, 0xFFFFFFu);
  sub_BF774(a1, a3, v80, 0x32000000u);
  sub_BF774(a1, a3, v8, 0xFFFFFFFC);
  sub_BF774(a1, a3, v78, 0);
  sub_BF774(a1, a3, v8, 0xFFFFF7FF);
  sub_BF774(a1, a3, v65, 0);
  sub_BF774(a1, a3, v8, 0xFFDFFFFF);
  sub_BF774(a1, a3, v70, 0);
  sub_BF774(a1, a3, v8, 0xDFFFFFFF);
  sub_BF774(a1, a3, v7, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFFFB);
  sub_BF774(a1, a3, v71, 4u);
  sub_BF774(a1, a3, v8, 0x7FFFFFFFu);
  sub_BF774(a1, a3, v7, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFBFF);
  sub_BF774(a1, a3, v66, 0);
  sub_DAF1C(a1, a3, 144, -7340033);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0x200000);
  sub_DAF1C(a1, a3, 145, -2147450872);
  sub_DAF1C(a1, a3, 144, -57345);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 40960);
  sub_DAF1C(a1, a3, 145, -2147450871);
  sub_BF774(a1, a3, v8, 0xFBFFFFFF);
  sub_BF774(a1, a3, v72, 0x4000000u);
  sub_DAF1C(a1, a3, 144, -131073);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450818);
  sub_BF774(a1, a3, v8, 0xFFFBFFFF);
  sub_BF774(a1, a3, v81, 0x40000u);
  sub_BF774(a1, a3, v8, 0xFFFFFBFF);
  sub_BF774(a1, a3, v64, 0x400u);
  sub_BF774(a1, a3, v8, 0xFF7FFFFF);
  sub_BF774(a1, a3, v74, 0x800000u);
  sub_BF774(a1, a3, v8, 0xFFFFFFFu);
  sub_BF774(a1, a3, v73, 0xA0000000);
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
  sub_BF774(a1, a3, v8, 0xFFFCFFFF);
  sub_BF774(a1, a3, v61, 0x30000u);
  sub_BF774(a1, a3, v8, 0xFFFFFFFC);
  sub_BF774(a1, a3, v63, 3u);
  sub_BF774(a1, a3, v8, 0xFFFCFFFF);
  sub_BF774(a1, a3, v63, 0x30000u);
  sub_BF774(a1, a3, v8, 0xFFFCFFFF);
  sub_BF774(a1, a3, v76, 0x30000u);
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
  sub_BF774(a1, a3, v8, 0xFFFFCFFF);
  sub_BF774(a1, a3, v75, 0x2000u);
  sub_BF774(a1, a3, v8, 0xFFBFFFFF);
  sub_BF774(a1, a3, v82, 0x400000u);
  sub_BF774(a1, a3, v8, 0xFFFFFE0F);
  sub_BF774(a1, a3, v59, 0x180u);
  sub_BF774(a1, a3, v8, 0xFFFFFF1F);
  sub_BF774(a1, a3, v79, 0);
  sub_BF774(a1, a3, v8, 0xFFFF0FFF);
  sub_BF774(a1, a3, v59, 0x4000u);
  v105 = 9437440;
  v106 = 7;
  v104 = 0;
  v103 = 24576;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v103);
  usleep((__useconds_t)&stru_18694.st_info);
  v105 = 9502976;
  v106 = 7;
  v103 = v60;
  v104 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v103);
  usleep((__useconds_t)&stru_18694.st_info);
  serdes_apb_write_1_chip(a1, 1, 6, v59, 0x5000u);
  serdes_apb_write_1_chip(a1, 2, 5, v59, 0x5000u);
  v105 = 9438208;
  v106 = 7;
  v104 = 0;
  v103 = 24576;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v103);
  usleep((__useconds_t)&stru_18694.st_info);
  v105 = 1024;
  v106 = 7;
  v104 = 0;
  v103 = v60;
  v55 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v105) = 145;
  v55(a1, &v103);
  usleep((__useconds_t)&stru_18694.st_info);
  serdes_apb_write_1_chip(a1, 4, 3, v59, 0x5000u);
  v105 = 9438464;
  v106 = 7;
  v104 = 0;
  v103 = 24576;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v103);
  usleep((__useconds_t)&stru_18694.st_info);
  v105 = 1280;
  v106 = 7;
  v104 = 0;
  v103 = v60;
  v56 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v105) = 145;
  v56(a1, &v103);
  usleep((__useconds_t)&stru_18694.st_info);
  serdes_apb_write_1_chip(a1, 5, 15, v59, 0x5000u);
  v105 = 9438720;
  v106 = 7;
  v104 = 0;
  v103 = 24576;
  (*(void (__fastcall **)(int, int *))(a1 + 156))(a1, &v103);
  usleep((__useconds_t)&stru_18694.st_info);
  v106 = 7;
  v105 = 1536;
  v104 = 0;
  v103 = v60;
  v57 = *(void (__fastcall **)(int, int *))(a1 + 156);
  HIWORD(v105) = 145;
  v57(a1, &v103);
  usleep((__useconds_t)&stru_18694.st_info);
  serdes_apb_write_1_chip(a1, 6, 15, v59, 0x5000u);
  sub_BF774(a1, a3, v8, 0xFFFF7FFF);
  sub_BF774(a1, a3, v77, 0x8000u);
  sub_BF774(a1, a3, v8, 0xFFFEFFFF);
  sub_BF774(a1, a3, v83, 0x10000u);
  sub_BF774(a1, a3, v8, 0xFFFDFFFF);
  sub_BF774(a1, a3, v83, 0x20000u);
  sub_BF774(a1, a3, v8, 0xFFFF000F);
  sub_BF774(a1, a3, v61, 0x8000u);
  sub_BF774(a1, a3, v8, 0xFFFFFFF3);
  sub_BF774(a1, a3, v68, 8u);
  sub_BF774(a1, a3, v8, 0xFFFFF9FF);
  sub_BF774(a1, a3, v69, 0x400u);
  sub_DAF1C(a1, a3, 144, -13);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 8);
  sub_DAF1C(a1, a3, 145, -2147450878);
  sub_DAF1C(a1, a3, 144, -100663297);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 100663296);
  sub_DAF1C(a1, a3, 145, -2147450820);
  sub_DAF1C(a1, a3, 144, 0x7FFFFFFF);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450853);
  sub_DAF1C(a1, a3, 144, -2);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450852);
  sub_BF774(a1, a3, v8, 0xFFFFFFFC);
  sub_BF774(a1, a3, v65, 1u);
  sub_BF774(a1, a3, v8, 0xF3FFFFFF);
  sub_BF774(a1, a3, v84, 0x4000000u);
  sub_BF774(a1, a3, v8, 0xCFFFFFFF);
  sub_BF774(a1, a3, v85, 0x10000000u);
  sub_DAF1C(a1, a3, 144, -28673);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 12288);
  sub_DAF1C(a1, a3, 145, -2147450860);
  sub_BF774(a1, a3, v8, 0xFE0FFFFF);
  sub_BF774(a1, a3, v62, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFFFu);
  sub_BF774(a1, a3, v62, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFFFE);
  sub_BF774(a1, a3, v66, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFE0F);
  sub_BF774(a1, a3, v66, 0);
  sub_BF774(a1, a3, v8, 0xFFFE0FFF);
  sub_BF774(a1, a3, v66, 0);
  sub_BF774(a1, a3, v8, 0xFE0FFFFF);
  sub_BF774(a1, a3, v66, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFFFu);
  sub_BF774(a1, a3, v66, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFFFE);
  sub_BF774(a1, a3, v69, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFE0F);
  sub_BF774(a1, a3, v69, 0);
  sub_BF774(a1, a3, v8, 0xFFFE0FFF);
  sub_BF774(a1, a3, v69, 0);
  sub_BF774(a1, a3, v8, 0xFE0FFFFF);
  sub_BF774(a1, a3, v69, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFFFu);
  sub_BF774(a1, a3, v69, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFFFE);
  sub_BF774(a1, a3, v86, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFE0F);
  sub_BF774(a1, a3, v86, 0);
  sub_BF774(a1, a3, v8, 0xFFFE0FFF);
  sub_BF774(a1, a3, v86, 0);
  sub_BF774(a1, a3, v8, 0xFE0FFFFF);
  sub_BF774(a1, a3, v86, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFFFu);
  sub_BF774(a1, a3, v86, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFFFE);
  sub_BF774(a1, a3, v64, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFE0F);
  sub_BF774(a1, a3, v64, 0);
  sub_BF774(a1, a3, v8, 0xFFFE0FFF);
  sub_BF774(a1, a3, v64, 0);
  sub_BF774(a1, a3, v8, 0xFFF1FFFF);
  sub_BF774(a1, a3, v87, 0);
  sub_BF774(a1, a3, v8, 0xF1FFFFFF);
  sub_BF774(a1, a3, v87, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFFF1);
  sub_BF774(a1, a3, v88, 0);
  sub_BF774(a1, a3, v8, 0xFFFFF1FF);
  sub_BF774(a1, a3, v88, 0);
  sub_BF774(a1, a3, v8, 0xFFF1FFFF);
  sub_BF774(a1, a3, v88, 0);
  sub_BF774(a1, a3, v8, 0xF1FFFFFF);
  sub_BF774(a1, a3, v88, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFFF1);
  sub_BF774(a1, a3, v89, 0);
  sub_BF774(a1, a3, v8, 0xFFFFF1FF);
  sub_BF774(a1, a3, v89, 0);
  sub_BF774(a1, a3, v8, 0xFFF1FFFF);
  sub_BF774(a1, a3, v89, 0);
  sub_BF774(a1, a3, v8, 0xFFF1FFFF);
  sub_BF774(a1, a3, v67, 0);
  sub_BF774(a1, a3, v8, 0xF1FFFFFF);
  sub_BF774(a1, a3, v67, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFFF8);
  sub_BF774(a1, a3, v90, 0);
  sub_BF774(a1, a3, v8, 0xFFFFF8FF);
  sub_BF774(a1, a3, v90, 0);
  sub_BF774(a1, a3, v8, 0xFFF1FFFF);
  sub_BF774(a1, a3, v90, 0);
  sub_BF774(a1, a3, v8, 0xF1FFFFFF);
  sub_BF774(a1, a3, v90, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFFF1);
  sub_BF774(a1, a3, v91, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFF0F);
  sub_BF774(a1, a3, v92, 0x60u);
  sub_BF774(a1, a3, v8, 0xFFFFFFFC);
  sub_BF774(a1, a3, v61, 2u);
  sub_BF774(a1, a3, v8, 0xFFFFDFFF);
  sub_BF774(a1, a3, v93, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFBFF);
  sub_BF774(a1, a3, v94, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFFF7);
  sub_BF774(a1, a3, v95, 8u);
  sub_BF774(a1, a3, v8, 0xF7FFFFFF);
  sub_BF774(a1, a3, v96, 0x8000000u);
  sub_BF774(a1, a3, v8, 0xFFFFFFFE);
  sub_BF774(a1, a3, v62, 0);
  sub_BF774(a1, a3, v8, 0xFFCFFFFF);
  sub_BF774(a1, a3, v97, 0x200000u);
  sub_BF774(a1, a3, v8, 0xFFFFFFFu);
  sub_BF774(a1, a3, v98, 0xF0000000);
  sub_BF774(a1, a3, v8, 0xFFFFFFF0);
  sub_BF774(a1, a3, v99, 8u);
  sub_BF774(a1, a3, v8, 0xF1FFFFFF);
  sub_BF774(a1, a3, v100, 0x8000000u);
  sub_BF774(a1, a3, v8, 0xFFFFFFF8);
  sub_BF774(a1, a3, v101, 6u);
  sub_BF774(a1, a3, v8, 0xFFFFF8FF);
  sub_BF774(a1, a3, v101, 0x300u);
  sub_BF774(a1, a3, v8, 0xFFF8FFFF);
  sub_BF774(a1, a3, v101, 0x60000u);
  sub_BF774(a1, a3, v8, 0xF8FFFFFF);
  sub_BF774(a1, a3, v101, 0x2000000u);
  sub_BF774(a1, a3, v8, 0xFFFFFFF8);
  sub_BF774(a1, a3, v102, 6u);
  sub_BF774(a1, a3, v8, 0xFF7FFFFF);
  sub_BF774(a1, a3, v93, 0x800000u);
  sub_BF774(a1, a3, v8, 0xFFFFF7FF);
  sub_BF774(a1, a3, v95, 0x800u);
  sub_BF774(a1, a3, v8, 0);
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
