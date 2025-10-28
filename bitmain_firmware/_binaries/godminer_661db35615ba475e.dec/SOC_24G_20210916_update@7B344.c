int __fastcall SOC_24G_20210916_update(int a1, int a2, char a3, int a4)
{
  int v4; // r9
  int v7; // r7
  int v9; // r10
  int v10; // r11
  int v11; // r6
  bool v12; // zf
  int v13; // r12
  int v14; // lr
  int v15; // r12
  int v16; // lr
  int v17; // r12
  int v18; // lr
  int v19; // r12
  int v20; // lr
  int v21; // r12
  int v22; // lr
  int v23; // r12
  int v24; // lr
  int v25; // r12
  int v26; // r12
  int v27; // lr
  int v28; // lr
  int v29; // r12
  int v30; // lr
  int v31; // r12
  int v32; // lr
  int v33; // lr
  int v34; // r12
  int v35; // r12
  int v36; // r12
  int v37; // lr
  int v38; // r12
  int v39; // r8
  int v41; // [sp+14h] [bp-74h]
  int v42; // [sp+18h] [bp-70h]
  int v43; // [sp+1Ch] [bp-6Ch]
  int v44; // [sp+20h] [bp-68h]
  int v45; // [sp+24h] [bp-64h]
  int v46; // [sp+28h] [bp-60h]
  int v47; // [sp+2Ch] [bp-5Ch]
  int v48; // [sp+30h] [bp-58h]
  int v49; // [sp+34h] [bp-54h]
  int v50; // [sp+38h] [bp-50h]
  int v51; // [sp+3Ch] [bp-4Ch]
  int v52; // [sp+40h] [bp-48h]
  int v53; // [sp+44h] [bp-44h]
  int v54; // [sp+48h] [bp-40h]
  int v55; // [sp+4Ch] [bp-3Ch]
  int v56; // [sp+50h] [bp-38h]
  int v57; // [sp+54h] [bp-34h]
  int v58; // [sp+58h] [bp-30h]
  int v59; // [sp+5Ch] [bp-2Ch]
  int v60; // [sp+60h] [bp-28h]
  int v61; // [sp+64h] [bp-24h]
  int v62; // [sp+68h] [bp-20h]
  int v63; // [sp+6Ch] [bp-1Ch]
  int v64; // [sp+70h] [bp-18h]
  int v65; // [sp+74h] [bp-14h]
  int v66; // [sp+78h] [bp-10h]
  int v67; // [sp+7Ch] [bp-Ch]
  int v68; // [sp+80h] [bp-8h]
  int v69; // [sp+84h] [bp-4h]
  char v70[4100]; // [sp+88h] [bp+0h] BYREF

  v7 = (int)v70;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v70, 0x1000u, 0, "%s...", "SOC_24G_20210916_update");
  v9 = 61483;
  v10 = 61480;
  pthread_mutex_unlock(&stru_197BB8);
  v11 = 61479;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "SOC_24G_20210916_update",
    23,
    4435,
    60,
    v70);
  v12 = a4 == 8;
  v13 = 61446;
  if ( a4 != 8 )
    v13 = 6;
  v14 = 61556;
  v69 = v13;
  v15 = 61484;
  if ( a4 != 8 )
  {
    v15 = 44;
    v14 = 116;
  }
  v68 = v15;
  v67 = v14;
  if ( a4 == 8 )
    v16 = 61474;
  else
    v16 = 34;
  v17 = 61512;
  v66 = v16;
  if ( a4 != 8 )
    v17 = 72;
  v18 = 61545;
  if ( a4 != 8 )
    v18 = 105;
  v65 = v17;
  v19 = 61580;
  v64 = v18;
  if ( a4 != 8 )
    v19 = 140;
  v20 = 61579;
  if ( a4 != 8 )
    v20 = 139;
  v63 = v19;
  v21 = 61606;
  v62 = v20;
  if ( a4 != 8 )
    v21 = 166;
  v22 = 61630;
  if ( a4 != 8 )
    v22 = 190;
  v61 = v21;
  v23 = 61564;
  v46 = v22;
  if ( a4 != 8 )
    v23 = 124;
  v24 = 61590;
  if ( a4 != 8 )
    v24 = 150;
  v60 = v23;
  v25 = 61443;
  v59 = v24;
  if ( a4 != 8 )
    v25 = 3;
  v58 = v25;
  if ( a4 == 8 )
    v26 = 61448;
  else
    v26 = 8;
  v45 = v26;
  if ( a4 == 8 )
    v26 = 61442;
  v27 = 61622;
  if ( a4 != 8 )
  {
    v27 = 182;
    v26 = 2;
  }
  v57 = v27;
  v28 = 61566;
  if ( a4 != 8 )
    v28 = 126;
  v44 = v26;
  v56 = v28;
  v29 = 61458;
  v30 = 61514;
  if ( a4 != 8 )
  {
    v29 = 18;
    v30 = 74;
  }
  v54 = v29;
  v55 = v30;
  v31 = 61511;
  v32 = 61472;
  if ( a4 != 8 )
  {
    v31 = 71;
    v32 = 32;
  }
  v49 = v31;
  v47 = v32;
  v33 = 61469;
  if ( a4 != 8 )
    v33 = 29;
  v48 = v33;
  if ( a4 == 8 )
    v33 = 61466;
  v34 = 61467;
  if ( a4 != 8 )
  {
    v34 = 27;
    v33 = 26;
  }
  v50 = v34;
  v41 = v33;
  if ( a4 == 8 )
    v33 = 61465;
  v35 = 61488;
  if ( a4 == 8 )
    v7 = 61441;
  else
    v35 = 48;
  if ( a4 != 8 )
  {
    v7 = 1;
    v33 = 25;
  }
  v52 = v35;
  v36 = 61487;
  if ( a4 == 8 )
    v4 = 61550;
  else
    v36 = 47;
  if ( a4 != 8 )
    v4 = 110;
  v42 = v33;
  v51 = v36;
  v37 = 61482;
  v38 = 61551;
  if ( a4 != 8 )
  {
    v37 = 42;
    v38 = 111;
  }
  v43 = v37;
  v53 = v38;
  if ( a4 != 8 )
  {
    v9 = 43;
    v10 = 40;
  }
  v39 = 61481;
  if ( !v12 )
  {
    v11 = 39;
    v39 = 41;
  }
  sub_1325F4(a1, a3, v7, 0xFFFFFFF7);
  sub_1325F4(a1, a3, v4, 0);
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
  sub_1325F4(a1, a3, v7, 0xFFFFFFFD);
  sub_1325F4(a1, a3, v4, 0);
  sub_1325F4(a1, a3, v7, 0x7FFFFFFFu);
  sub_1325F4(a1, a3, v53, 0x80000000);
  sub_1325F4(a1, a3, v7, 0xFFFBFFFF);
  sub_1325F4(a1, a3, v4, 0);
  sub_1325F4(a1, a3, v7, 0xFFFFFFFB);
  sub_1325F4(a1, a3, v4, 0);
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
  sub_1325F4(a1, a3, v7, 0xFFFFFC00);
  sub_1325F4(a1, a3, v43, 0x32u);
  sub_1325F4(a1, a3, v7, 0xFFFFFFu);
  sub_1325F4(a1, a3, v51, 0x32000000u);
  sub_1325F4(a1, a3, v7, 0xFFFFFFFC);
  sub_1325F4(a1, a3, v52, 0);
  sub_1325F4(a1, a3, v7, 0xFFFFF7FF);
  sub_1325F4(a1, a3, v42, 0);
  sub_1325F4(a1, a3, v7, 0xFFDFFFFF);
  sub_1325F4(a1, a3, v50, 0);
  sub_1325F4(a1, a3, v7, 0xDFFFFFFF);
  sub_1325F4(a1, a3, v41, 0);
  sub_1325F4(a1, a3, v7, 0xFFFFFFFB);
  sub_1325F4(a1, a3, v48, 4u);
  sub_1325F4(a1, a3, v7, 0x7FFFFFFFu);
  sub_1325F4(a1, a3, v41, 0);
  sub_1325F4(a1, a3, v7, 0xFFFFFBFF);
  sub_1325F4(a1, a3, v49, 0);
  sub_8F7C8(a1, a3, 144, -7340033);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0x200000);
  sub_8F7C8(a1, a3, 145, -2147450872);
  sub_8F7C8(a1, a3, 144, -57345);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 40960);
  sub_8F7C8(a1, a3, 145, -2147450871);
  sub_1325F4(a1, a3, v7, 0xFBFFFFFF);
  sub_1325F4(a1, a3, v47, 0x4000000u);
  sub_8F7C8(a1, a3, 144, -131073);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147450818);
  sub_1325F4(a1, a3, v7, 0xFFFBFFFF);
  sub_1325F4(a1, a3, v54, 0x40000u);
  sub_1325F4(a1, a3, v7, 0xFFFFFBFF);
  sub_1325F4(a1, a3, v55, 0x400u);
  sub_1325F4(a1, a3, v7, 0xFF7FFFFF);
  sub_1325F4(a1, a3, v56, 0x800000u);
  sub_1325F4(a1, a3, v7, 0xFFFFFFFu);
  sub_1325F4(a1, a3, v57, 0x60000000u);
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
  sub_1325F4(a1, a3, v7, 0xFFFCFFFF);
  sub_1325F4(a1, a3, v44, 0x20000u);
  sub_1325F4(a1, a3, v7, 0xFFFFFFFC);
  sub_1325F4(a1, a3, v45, 2u);
  sub_1325F4(a1, a3, v7, 0xFFFCFFFF);
  sub_1325F4(a1, a3, v45, 0x30000u);
  sub_1325F4(a1, a3, v7, 0xFFFCFFFF);
  sub_1325F4(a1, a3, v58, 0x30000u);
  sub_8F7C8(a1, a3, 144, -786433);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 786432);
  sub_8F7C8(a1, a3, 145, -2147450818);
  sub_8F7C8(a1, a3, 144, -2);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147450878);
  sub_8F7C8(a1, a3, 144, -8388609);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0x800000);
  sub_8F7C8(a1, a3, 145, -2147450808);
  sub_8F7C8(a1, a3, 144, -805306369);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 805306368);
  sub_8F7C8(a1, a3, 145, -2147450804);
  sub_8F7C8(a1, a3, 144, -97);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 96);
  sub_8F7C8(a1, a3, 145, -2147450868);
  sub_1325F4(a1, a3, v7, 0xFFFFCFFF);
  sub_1325F4(a1, a3, v59, 0x2000u);
  sub_1325F4(a1, a3, v7, 0xFFBFFFFF);
  sub_1325F4(a1, a3, v60, 0x400000u);
  sub_1325F4(a1, a3, v7, 0xFFFFFE0F);
  sub_1325F4(a1, a3, v46, 0x180u);
  sub_1325F4(a1, a3, v7, 0xFFFFFF1F);
  sub_1325F4(a1, a3, v61, 0);
  sub_1325F4(a1, a3, v7, 0xFFFF0FFF);
  sub_1325F4(a1, a3, v46, 0);
  sub_8F8C0(a1, 1, 7u, 144, 0x2000);
  sub_8F8C0(a1, 1, 7u, 145, -2147454786);
  serdes_apb_write_1_chip(a1, 1, 5, 20670, 0x6000u);
  sub_8F8C0(a1, 1, 7u, 144, 24576);
  sub_8F8C0(a1, 1, 7u, 145, -2147479362);
  sub_8F8C0(a1, 0, 7u, 144, 0x2000);
  sub_8F8C0(a1, 0, 7u, 145, -2147467074);
  sub_8F8C0(a1, 0, 7u, 144, 0x2000);
  sub_8F8C0(a1, 0, 7u, 145, -2147458882);
  sub_8F8C0(a1, 0, 7u, 144, 0x2000);
  sub_8F8C0(a1, 0, 7u, 145, -2147454786);
  sub_1325F4(a1, a3, v7, 0xFFFF7FFF);
  sub_1325F4(a1, a3, v62, 0x8000u);
  sub_1325F4(a1, a3, v7, 0xFFFEFFFF);
  sub_1325F4(a1, a3, v63, 0x10000u);
  sub_1325F4(a1, a3, v7, 0xFFFDFFFF);
  sub_1325F4(a1, a3, v63, 0x20000u);
  sub_1325F4(a1, a3, v7, 0xFFFF000F);
  sub_1325F4(a1, a3, v44, 0x8000u);
  sub_1325F4(a1, a3, v7, 0xFFFFFFF3);
  sub_1325F4(a1, a3, v64, 8u);
  sub_1325F4(a1, a3, v7, 0xFFFFF9FF);
  sub_1325F4(a1, a3, v65, 0x400u);
  sub_8F7C8(a1, a3, 144, -13);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 8);
  sub_8F7C8(a1, a3, 145, -2147450878);
  sub_8F7C8(a1, a3, 144, -100663297);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0x4000000);
  sub_8F7C8(a1, a3, 145, -2147450820);
  sub_8F7C8(a1, a3, 144, 0x7FFFFFFF);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147450853);
  sub_8F7C8(a1, a3, 144, -2);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 1);
  sub_8F7C8(a1, a3, 145, -2147450852);
  sub_1325F4(a1, a3, v7, 0xFFFFFFFC);
  sub_1325F4(a1, a3, v42, 2u);
  sub_1325F4(a1, a3, v7, 0xF3FFFFFF);
  sub_1325F4(a1, a3, v66, 0x8000000u);
  sub_1325F4(a1, a3, v7, 0xCFFFFFFF);
  sub_1325F4(a1, a3, v67, 0x20000000u);
  sub_8F7C8(a1, a3, 144, -28673);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 12288);
  sub_8F7C8(a1, a3, 145, -2147450860);
  sub_1325F4(a1, a3, v7, 0xFFF1FFFF);
  sub_1325F4(a1, a3, v11, 0);
  sub_1325F4(a1, a3, v7, 0xF1FFFFFF);
  sub_1325F4(a1, a3, v11, 0);
  sub_1325F4(a1, a3, v7, 0xFFFFFFF1);
  sub_1325F4(a1, a3, v10, 0);
  sub_1325F4(a1, a3, v7, 0xFFFFF1FF);
  sub_1325F4(a1, a3, v10, 0);
  sub_1325F4(a1, a3, v7, 0xFFF1FFFF);
  sub_1325F4(a1, a3, v10, 0);
  sub_1325F4(a1, a3, v7, 0xF1FFFFFF);
  sub_1325F4(a1, a3, v10, 0);
  sub_1325F4(a1, a3, v7, 0xFFFFFFF1);
  sub_1325F4(a1, a3, v39, 0);
  sub_1325F4(a1, a3, v7, 0xFFFFF1FF);
  sub_1325F4(a1, a3, v39, 0);
  sub_1325F4(a1, a3, v7, 0xFFF1FFFF);
  sub_1325F4(a1, a3, v39, 0);
  sub_1325F4(a1, a3, v7, 0xFFF1FFFF);
  sub_1325F4(a1, a3, v43, 0);
  sub_1325F4(a1, a3, v7, 0xF1FFFFFF);
  sub_1325F4(a1, a3, v43, 0);
  sub_1325F4(a1, a3, v7, 0xFFFFFFF8);
  sub_1325F4(a1, a3, v9, 0);
  sub_1325F4(a1, a3, v7, 0xFFFFF8FF);
  sub_1325F4(a1, a3, v9, 0);
  sub_1325F4(a1, a3, v7, 0xFFF1FFFF);
  sub_1325F4(a1, a3, v9, 0);
  sub_1325F4(a1, a3, v7, 0xF1FFFFFF);
  sub_1325F4(a1, a3, v9, 0);
  sub_1325F4(a1, a3, v7, 0xFFFFFFF1);
  sub_1325F4(a1, a3, v68, 0);
  sub_1325F4(a1, a3, v7, 0xFFFFFF0F);
  sub_1325F4(a1, a3, v69, 0x60u);
  sub_1325F4(a1, a3, v7, 0xFFFFFFFC);
  sub_1325F4(a1, a3, v44, 2u);
  sub_1325F4(a1, a3, v7, 0);
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
