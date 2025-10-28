int __fastcall SOC_28G_20210927_update(int a1, int a2, char a3, int a4)
{
  int v7; // r11
  int v8; // r10
  int v9; // r7
  int v10; // r6
  bool v11; // zf
  int v12; // r12
  int v13; // r11
  int v14; // r11
  int v15; // r11
  int v16; // r12
  int v17; // r11
  int v18; // lr
  int v19; // lr
  int v20; // lr
  int v21; // r12
  int v22; // lr
  int v23; // r12
  int v24; // lr
  int v25; // r12
  int v26; // lr
  int v27; // r3
  int v28; // r12
  int v29; // lr
  int v30; // r12
  int v31; // lr
  int v32; // r9
  int v34; // [sp+10h] [bp-58h]
  int v35; // [sp+14h] [bp-54h]
  int v36; // [sp+18h] [bp-50h]
  int v37; // [sp+1Ch] [bp-4Ch]
  int v38; // [sp+20h] [bp-48h]
  int v39; // [sp+24h] [bp-44h]
  int v40; // [sp+28h] [bp-40h]
  int v41; // [sp+2Ch] [bp-3Ch]
  int v42; // [sp+30h] [bp-38h]
  int v43; // [sp+34h] [bp-34h]
  int v44; // [sp+38h] [bp-30h]
  int v45; // [sp+3Ch] [bp-2Ch]
  int v46; // [sp+40h] [bp-28h]
  int v47; // [sp+44h] [bp-24h]
  int v48; // [sp+48h] [bp-20h]
  int v49; // [sp+4Ch] [bp-1Ch]
  int v50; // [sp+50h] [bp-18h]
  int v51; // [sp+54h] [bp-14h]
  int v52; // [sp+58h] [bp-10h]
  int v53; // [sp+5Ch] [bp-Ch]
  int v54; // [sp+60h] [bp-8h]
  int v55; // [sp+64h] [bp-4h]
  char v56[4100]; // [sp+68h] [bp+0h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v56, 0x1000u, 0, 1560772, "SOC_28G_20210927_update");
  v7 = 61446;
  v8 = 61580;
  pthread_mutex_unlock(&stru_1A8A24);
  v9 = 61442;
  v10 = 61466;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "SOC_28G_20210927_update",
    23,
    5982,
    60,
    v56);
  v11 = a4 == 8;
  if ( a4 != 8 )
    v7 = 6;
  v12 = 61564;
  v55 = v7;
  v13 = 61512;
  if ( a4 != 8 )
  {
    v13 = 72;
    v12 = 124;
  }
  v54 = v13;
  v14 = 61545;
  if ( a4 != 8 )
    v14 = 105;
  v50 = v12;
  v53 = v14;
  v15 = 61579;
  if ( a4 != 8 )
    v15 = 139;
  v16 = 61443;
  v52 = v15;
  v17 = 61606;
  if ( a4 != 8 )
  {
    v17 = 166;
    v16 = 3;
  }
  v51 = v17;
  if ( a4 == 8 )
    v17 = 61630;
  v18 = 61590;
  if ( a4 != 8 )
    v18 = 150;
  v49 = v18;
  v48 = v16;
  if ( a4 == 8 )
    v16 = 61448;
  v19 = 61622;
  if ( a4 != 8 )
  {
    v19 = 182;
    v16 = 8;
  }
  v46 = v19;
  v20 = 61566;
  if ( a4 != 8 )
    v20 = 126;
  v47 = v16;
  v21 = 61514;
  v45 = v20;
  if ( a4 != 8 )
    v21 = 74;
  v22 = 61458;
  if ( a4 != 8 )
    v22 = 18;
  v44 = v21;
  v23 = 61472;
  v43 = v22;
  if ( a4 != 8 )
    v23 = 32;
  v24 = 61511;
  if ( a4 != 8 )
    v24 = 71;
  v42 = v23;
  v41 = v24;
  v25 = 61469;
  v26 = 61467;
  if ( a4 == 8 )
  {
    a4 = 61441;
  }
  else
  {
    v25 = 29;
    v26 = 27;
  }
  if ( !v11 )
    a4 = 1;
  v27 = 61550;
  v40 = v25;
  if ( !v11 )
    v27 = 110;
  v39 = v26;
  v28 = 61488;
  v29 = 61487;
  if ( !v11 )
  {
    v28 = 48;
    v29 = 47;
  }
  v34 = v27;
  v38 = v28;
  v30 = 61482;
  v37 = v29;
  if ( !v11 )
    v30 = 42;
  v31 = 61551;
  if ( !v11 )
  {
    v31 = 111;
    v9 = 2;
    v8 = 140;
    v17 = 190;
    v10 = 26;
  }
  v36 = v30;
  v32 = 61465;
  v35 = v31;
  if ( !v11 )
    v32 = 25;
  sub_BF774(a1, a3, a4, 0xFFFFFFF7);
  sub_BF774(a1, a3, v34, 0);
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
  sub_BF774(a1, a3, a4, 0xFFFFFFFD);
  sub_BF774(a1, a3, v34, 0);
  sub_BF774(a1, a3, a4, 0x7FFFFFFFu);
  sub_BF774(a1, a3, v35, 0x80000000);
  sub_BF774(a1, a3, a4, 0xFFFBFFFF);
  sub_BF774(a1, a3, v34, 0);
  sub_BF774(a1, a3, a4, 0xFFFFFFFB);
  sub_BF774(a1, a3, v34, 0);
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
  sub_BF774(a1, a3, a4, 0xFFFFFC00);
  sub_BF774(a1, a3, v36, 0x32u);
  sub_BF774(a1, a3, a4, 0xFFFFFFu);
  sub_BF774(a1, a3, v37, 0x32000000u);
  sub_BF774(a1, a3, a4, 0xFFFFFFFC);
  sub_BF774(a1, a3, v38, 0);
  sub_BF774(a1, a3, a4, 0xFFFFF7FF);
  sub_BF774(a1, a3, v32, 0);
  sub_BF774(a1, a3, a4, 0xFFDFFFFF);
  sub_BF774(a1, a3, v39, 0);
  sub_BF774(a1, a3, a4, 0xDFFFFFFF);
  sub_BF774(a1, a3, v10, 0);
  sub_BF774(a1, a3, a4, 0xFFFFFFFB);
  sub_BF774(a1, a3, v40, 4u);
  sub_BF774(a1, a3, a4, 0x7FFFFFFFu);
  sub_BF774(a1, a3, v10, 0);
  sub_BF774(a1, a3, a4, 0xFFFFFBFF);
  sub_BF774(a1, a3, v41, 0);
  sub_DAF1C(a1, a3, 144, -7340033);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0x200000);
  sub_DAF1C(a1, a3, 145, -2147450872);
  sub_DAF1C(a1, a3, 144, -57345);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 40960);
  sub_DAF1C(a1, a3, 145, -2147450871);
  sub_BF774(a1, a3, a4, 0xFBFFFFFF);
  sub_BF774(a1, a3, v42, 0x4000000u);
  sub_DAF1C(a1, a3, 144, -131073);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450818);
  sub_BF774(a1, a3, a4, 0xFFFBFFFF);
  sub_BF774(a1, a3, v43, 0x40000u);
  sub_BF774(a1, a3, a4, 0xFFFFFBFF);
  sub_BF774(a1, a3, v44, 0x400u);
  sub_BF774(a1, a3, a4, 0xFF7FFFFF);
  sub_BF774(a1, a3, v45, 0x800000u);
  sub_BF774(a1, a3, a4, 0xFFFFFFFu);
  sub_BF774(a1, a3, v46, 0x60000000u);
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
  sub_DAF1C(a1, a3, 144, 80);
  sub_DAF1C(a1, a3, 145, -2147450878);
  sub_BF774(a1, a3, a4, 0xFFFCFFFF);
  sub_BF774(a1, a3, v9, 0x10000u);
  sub_BF774(a1, a3, a4, 0xFFFFFFFC);
  sub_BF774(a1, a3, v47, 1u);
  sub_BF774(a1, a3, a4, 0xFFFCFFFF);
  sub_BF774(a1, a3, v47, 0x30000u);
  sub_BF774(a1, a3, a4, 0xFFFCFFFF);
  sub_BF774(a1, a3, v48, 0x30000u);
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
  sub_BF774(a1, a3, a4, 0xFFFFCFFF);
  sub_BF774(a1, a3, v49, 0x3000u);
  sub_BF774(a1, a3, a4, 0xFFBFFFFF);
  sub_BF774(a1, a3, v50, 0x400000u);
  sub_BF774(a1, a3, a4, 0xFFFFFE0F);
  sub_BF774(a1, a3, v17, 0x180u);
  sub_BF774(a1, a3, a4, 0xFFFFFF1F);
  sub_BF774(a1, a3, v51, 0);
  sub_BF774(a1, a3, a4, 0xFFFF0FFF);
  sub_BF774(a1, a3, v17, 0x6000u);
  sub_BF774(a1, a3, a4, 0xFFFF7FFF);
  sub_BF774(a1, a3, v52, 0x8000u);
  sub_BF774(a1, a3, a4, 0xFFFEFFFF);
  sub_BF774(a1, a3, v8, 0x10000u);
  sub_BF774(a1, a3, a4, 0xFFFDFFFF);
  sub_BF774(a1, a3, v8, 0x20000u);
  sub_BF774(a1, a3, a4, 0xFFFF000F);
  sub_BF774(a1, a3, v9, 0x8000u);
  sub_BF774(a1, a3, a4, 0xFFFFFFF3);
  sub_BF774(a1, a3, v53, 8u);
  sub_BF774(a1, a3, a4, 0xFFFFF9FF);
  sub_BF774(a1, a3, v54, 0x400u);
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
  sub_DAF1C(a1, a3, 144, -28673);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 12288);
  sub_DAF1C(a1, a3, 145, -2147450860);
  sub_BF774(a1, a3, a4, 0xFFFFFF0F);
  sub_BF774(a1, a3, v55, 0x60u);
  sub_BF774(a1, a3, a4, 0xFFFFFFFC);
  sub_BF774(a1, a3, v9, 2u);
  sub_BF774(a1, a3, a4, 0xFFFFFFFC);
  sub_BF774(a1, a3, v32, 2u);
  sub_BF774(a1, a3, a4, 0);
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
