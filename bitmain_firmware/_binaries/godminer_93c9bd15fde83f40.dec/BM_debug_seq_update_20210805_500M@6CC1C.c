int __fastcall BM_debug_seq_update_20210805_500M(pthread_mutex_t *a1, int a2, int a3, int a4)
{
  bool v4; // zf
  int v5; // lr
  int v6; // r3
  int v7; // r6
  int v8; // lr
  int v9; // r3
  int v10; // r9
  int v11; // r7
  int v12; // r12
  int v13; // r1
  int v14; // r3
  char v15; // r5
  int v16; // r11
  int v17; // r9
  int v18; // r12
  int v19; // r1
  int v20; // lr
  int v21; // r7
  pthread_mutex_t *v22; // r4
  int v23; // r11
  int v24; // r1
  int v25; // r12
  int v26; // lr
  int v27; // lr
  int v28; // r12
  int v29; // r9
  int v30; // r11
  int v31; // r10
  int v32; // r8
  int v34; // [sp+14h] [bp-1070h]
  int v35; // [sp+18h] [bp-106Ch]
  int v36; // [sp+1Ch] [bp-1068h]
  int v37; // [sp+20h] [bp-1064h]
  int v38; // [sp+24h] [bp-1060h]
  int v39; // [sp+28h] [bp-105Ch]
  int v40; // [sp+38h] [bp-104Ch]
  int v41; // [sp+3Ch] [bp-1048h]
  int v42; // [sp+40h] [bp-1044h]
  int v43; // [sp+44h] [bp-1040h]
  int v44; // [sp+48h] [bp-103Ch]
  int v45; // [sp+4Ch] [bp-1038h]
  int v46; // [sp+50h] [bp-1034h]
  int v47; // [sp+54h] [bp-1030h]
  int v48; // [sp+58h] [bp-102Ch]
  int v49; // [sp+5Ch] [bp-1028h]
  int v50; // [sp+60h] [bp-1024h]
  int v51; // [sp+64h] [bp-1020h]
  int v52; // [sp+68h] [bp-101Ch]
  int v53; // [sp+6Ch] [bp-1018h]
  int v54; // [sp+70h] [bp-1014h]
  int v55; // [sp+74h] [bp-1010h]
  int v56; // [sp+78h] [bp-100Ch]
  int v57; // [sp+7Ch] [bp-1008h]
  char v58[4100]; // [sp+80h] [bp-1004h] BYREF

  v4 = a4 == 8;
  v5 = 61443;
  v6 = 61622;
  if ( !v4 )
  {
    v5 = 3;
    v6 = 182;
  }
  v7 = 61590;
  v52 = v5;
  if ( !v4 )
    v7 = 150;
  v51 = v6;
  v8 = 61556;
  v9 = 61514;
  if ( !v4 )
  {
    v8 = 116;
    v9 = 74;
  }
  v53 = v7;
  v10 = 61606;
  if ( v4 )
    v7 = 61442;
  v11 = 61564;
  v12 = 61448;
  if ( !v4 )
  {
    v10 = 166;
    v11 = 124;
    v12 = 8;
  }
  v13 = 61566;
  v49 = v9;
  if ( !v4 )
    v13 = 126;
  v14 = 61453;
  v46 = v8;
  if ( !v4 )
    v14 = 13;
  v15 = a3;
  v43 = v14;
  if ( v4 )
  {
    a3 = 61580;
    v14 = 61550;
  }
  v16 = 61579;
  v55 = v10;
  if ( !v4 )
    v16 = 139;
  v54 = v11;
  v17 = 61474;
  v37 = v12;
  if ( !v4 )
    v17 = 34;
  v50 = v13;
  v18 = 61472;
  v19 = 61458;
  if ( !v4 )
  {
    v18 = 32;
    v19 = 18;
  }
  v20 = 61551;
  v21 = 61553;
  if ( !v4 )
  {
    v20 = 111;
    v21 = 113;
  }
  v22 = a1;
  v56 = v16;
  LOWORD(a1) = -30172;
  v48 = v19;
  v23 = 61465;
  v24 = 61459;
  v47 = v18;
  if ( !v4 )
    v24 = 19;
  v45 = v17;
  if ( !v4 )
    v23 = 25;
  v25 = 61457;
  v40 = v20;
  if ( !v4 )
    v25 = 17;
  v26 = 61469;
  if ( !v4 )
    v26 = 29;
  v38 = v26;
  v42 = v24;
  if ( v4 )
    v27 = 61466;
  else
    v27 = 26;
  if ( v4 )
    v24 = 61511;
  else
    a3 = 140;
  v44 = v23;
  v41 = v25;
  if ( !v4 )
    v14 = 110;
  v28 = 61470;
  if ( !v4 )
  {
    v24 = 71;
    v28 = 30;
  }
  v29 = 61510;
  v30 = 61509;
  if ( !v4 )
  {
    v29 = 70;
    v30 = 69;
  }
  HIWORD(a1) = 26;
  v31 = 61441;
  v34 = v27;
  if ( !v4 )
    v31 = 1;
  v39 = v28;
  v32 = 61630;
  if ( !v4 )
  {
    v7 = 2;
    v32 = 190;
  }
  v57 = a3;
  v36 = v14;
  v35 = v24;
  pthread_mutex_lock(a1);
  logfmt_raw(v58, 0x1000u, 0, 1513720, "BM_debug_seq_update_20210805_500M");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "BM_debug_seq_update_20210805_500M",
    33,
    3818,
    60,
    v58);
  sub_BF774((int)v22, v15, v31, 0xDFFFFFFF);
  sub_BF774((int)v22, v15, v34, 0x20000000u);
  sub_BF774((int)v22, v15, v31, 0xFFFFFFFB);
  sub_BF774((int)v22, v15, v38, 0);
  sub_BF774((int)v22, v15, v31, 0xFFFFFFFB);
  sub_BF774((int)v22, v15, v39, 4u);
  sub_BF774((int)v22, v15, v31, 0xFFFBFFFF);
  sub_BF774((int)v22, v15, v30, 0x40000u);
  sub_BF774((int)v22, v15, v31, 0xFFFBFFFF);
  sub_BF774((int)v22, v15, v29, 0x40000u);
  sub_BF774((int)v22, v15, v31, 0xFFF7FFFF);
  sub_BF774((int)v22, v15, v35, 0x80000u);
  sub_BF774((int)v22, v15, v31, 0xFFFFFFDF);
  sub_BF774((int)v22, v15, v21, 0x20u);
  sub_BF774((int)v22, v15, v31, 0x7FFFFFFFu);
  sub_BF774((int)v22, v15, v40, 0x80000000);
  sub_BF774((int)v22, v15, v31, 0xFFFBFFFF);
  sub_BF774((int)v22, v15, v36, 0);
  sub_BF774((int)v22, v15, v31, 0xFFFFFFFB);
  sub_BF774((int)v22, v15, v36, 0);
  sub_BF774((int)v22, v15, v31, 0x7FFFFFFFu);
  sub_BF774((int)v22, v15, v34, 0);
  sub_BF774((int)v22, v15, v31, 0xFFFFFBFF);
  sub_BF774((int)v22, v15, v35, 0);
  sub_BF774((int)v22, v15, v31, 0xFFFFFFFB);
  sub_BF774((int)v22, v15, v41, 0);
  sub_BF774((int)v22, v15, v31, 0xFC0FFFFF);
  sub_BF774((int)v22, v15, v42, 0x2000000u);
  sub_DAF1C((int)v22, v15, 144, -7340033);
  sub_DAF1C((int)v22, v15, 145, -2147450879);
  sub_DAF1C((int)v22, v15, 144, 0x200000);
  sub_DAF1C((int)v22, v15, 145, -2147450872);
  sub_DAF1C((int)v22, v15, 144, -57345);
  sub_DAF1C((int)v22, v15, 145, -2147450879);
  sub_DAF1C((int)v22, v15, 144, 40960);
  sub_DAF1C((int)v22, v15, 145, -2147450871);
  sub_DAF1C((int)v22, v15, 144, -9);
  sub_DAF1C((int)v22, v15, 145, -2147442687);
  sub_DAF1C((int)v22, v15, 144, 8);
  sub_DAF1C((int)v22, v15, 145, -2147442686);
  sub_DAF1C((int)v22, v15, 144, -4097);
  sub_DAF1C((int)v22, v15, 145, -2147442687);
  sub_DAF1C((int)v22, v15, 144, 4096);
  sub_DAF1C((int)v22, v15, 145, -2147442650);
  sub_BF774((int)v22, v15, v31, 0xFFFBFFFF);
  sub_BF774((int)v22, v15, v43, 0x40000u);
  sub_DAF1C((int)v22, v15, 144, 0x7FFFFFFF);
  sub_DAF1C((int)v22, v15, 145, -2147450879);
  sub_DAF1C((int)v22, v15, 144, 0x80000000);
  sub_DAF1C((int)v22, v15, 145, -2147450853);
  sub_DAF1C((int)v22, v15, 144, -2);
  sub_DAF1C((int)v22, v15, 145, -2147450879);
  sub_DAF1C((int)v22, v15, 144, 0);
  sub_DAF1C((int)v22, v15, 145, -2147450852);
  sub_DAF1C((int)v22, v15, 144, -100663297);
  sub_DAF1C((int)v22, v15, 145, -2147450879);
  sub_DAF1C((int)v22, v15, 144, 0x2000000);
  sub_DAF1C((int)v22, v15, 145, -2147450820);
  sub_BF774((int)v22, v15, v31, 0xFFFFFFFC);
  sub_BF774((int)v22, v15, v44, 1u);
  sub_BF774((int)v22, v15, v31, 0xF3FFFFFF);
  sub_BF774((int)v22, v15, v45, 0x4000000u);
  sub_BF774((int)v22, v15, v31, 0xCFFFFFFF);
  sub_BF774((int)v22, v15, v46, 0x10000000u);
  sub_BF774((int)v22, v15, v31, 0xFBFFFFFF);
  sub_BF774((int)v22, v15, v47, 0x4000000u);
  sub_DAF1C((int)v22, v15, 144, -131073);
  sub_DAF1C((int)v22, v15, 145, -2147450879);
  sub_DAF1C((int)v22, v15, 144, 0);
  sub_DAF1C((int)v22, v15, 145, -2147450818);
  sub_BF774((int)v22, v15, v31, 0xFFFBFFFF);
  sub_BF774((int)v22, v15, v48, 0x40000u);
  sub_BF774((int)v22, v15, v31, 0xFFFFFBFF);
  sub_BF774((int)v22, v15, v49, 0x400u);
  sub_BF774((int)v22, v15, v31, 0xFF7FFFFF);
  sub_BF774((int)v22, v15, v50, 0x800000u);
  sub_BF774((int)v22, v15, v31, 0xFFFFFFFu);
  sub_BF774((int)v22, v15, v51, 0x60000000u);
  sub_DAF1C((int)v22, v15, 144, -1009);
  sub_DAF1C((int)v22, v15, 145, -2147450879);
  sub_DAF1C((int)v22, v15, 144, 576);
  sub_DAF1C((int)v22, v15, 145, -2147450787);
  sub_DAF1C((int)v22, v15, 144, -258049);
  sub_DAF1C((int)v22, v15, 145, -2147450879);
  sub_DAF1C((int)v22, v15, 144, 147456);
  sub_DAF1C((int)v22, v15, 145, -2147450787);
  sub_DAF1C((int)v22, v15, 144, -66060289);
  sub_DAF1C((int)v22, v15, 145, -2147450879);
  sub_DAF1C((int)v22, v15, 144, 37748736);
  sub_DAF1C((int)v22, v15, 145, -2147450787);
  sub_DAF1C((int)v22, v15, 144, 0xFFFFFFF);
  sub_DAF1C((int)v22, v15, 145, -2147450879);
  sub_DAF1C((int)v22, v15, 144, 0x40000000);
  sub_DAF1C((int)v22, v15, 145, -2147450787);
  sub_DAF1C((int)v22, v15, 144, -4);
  sub_DAF1C((int)v22, v15, 145, -2147450879);
  sub_DAF1C((int)v22, v15, 144, 2);
  sub_DAF1C((int)v22, v15, 145, -2147450786);
  sub_DAF1C((int)v22, v15, 144, -1009);
  sub_DAF1C((int)v22, v15, 145, -2147450879);
  sub_DAF1C((int)v22, v15, 144, 64);
  sub_DAF1C((int)v22, v15, 145, -2147450786);
  sub_DAF1C((int)v22, v15, 144, -258049);
  sub_DAF1C((int)v22, v15, 145, -2147450879);
  sub_DAF1C((int)v22, v15, 144, 0x4000);
  sub_DAF1C((int)v22, v15, 145, -2147450786);
  sub_DAF1C((int)v22, v15, 144, -66060289);
  sub_DAF1C((int)v22, v15, 145, -2147450879);
  sub_DAF1C((int)v22, v15, 144, 0x400000);
  sub_DAF1C((int)v22, v15, 145, -2147450786);
  sub_DAF1C((int)v22, v15, 144, 0xFFFFFFF);
  sub_DAF1C((int)v22, v15, 145, -2147450879);
  sub_DAF1C((int)v22, v15, 144, 0x40000000);
  sub_DAF1C((int)v22, v15, 145, -2147450786);
  sub_DAF1C((int)v22, v15, 144, -4);
  sub_DAF1C((int)v22, v15, 145, -2147450879);
  sub_DAF1C((int)v22, v15, 144, 0);
  sub_DAF1C((int)v22, v15, 145, -2147450785);
  sub_DAF1C((int)v22, v15, 144, -1009);
  sub_DAF1C((int)v22, v15, 145, -2147450879);
  sub_DAF1C((int)v22, v15, 144, 96);
  sub_DAF1C((int)v22, v15, 145, -2147450878);
  sub_BF774((int)v22, v15, v31, 0xFFFCFFFF);
  sub_BF774((int)v22, v15, v7, 0);
  sub_BF774((int)v22, v15, v31, 0xFFFFFFFC);
  sub_BF774((int)v22, v15, v37, 0);
  sub_BF774((int)v22, v15, v31, 0xFFFCFFFF);
  sub_BF774((int)v22, v15, v37, 0x30000u);
  sub_BF774((int)v22, v15, v31, 0xFFFCFFFF);
  sub_BF774((int)v22, v15, v52, 0x30000u);
  sub_DAF1C((int)v22, v15, 144, -786433);
  sub_DAF1C((int)v22, v15, 145, -2147450879);
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v58, 0x1000u, 0, 1530336);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "BM_debug_seq_update_20210805_500M",
    33,
    3952,
    60,
    v58);
  sub_DAF1C((int)v22, v15, 144, 0);
  sub_DAF1C((int)v22, v15, 145, -2147450818);
  sub_DAF1C((int)v22, v15, 144, -8388609);
  sub_DAF1C((int)v22, v15, 145, -2147450879);
  sub_DAF1C((int)v22, v15, 144, 0x800000);
  sub_DAF1C((int)v22, v15, 145, -2147450808);
  sub_DAF1C((int)v22, v15, 144, -805306369);
  sub_DAF1C((int)v22, v15, 145, -2147450879);
  sub_DAF1C((int)v22, v15, 144, 0);
  sub_DAF1C((int)v22, v15, 145, -2147450804);
  sub_BF774((int)v22, v15, v31, 0xFFFFCFFF);
  sub_BF774((int)v22, v15, v53, 0x3000u);
  sub_BF774((int)v22, v15, v31, 0xFFBFFFFF);
  sub_BF774((int)v22, v15, v54, 0x400000u);
  sub_BF774((int)v22, v15, v31, 0xFFFFFE0F);
  sub_BF774((int)v22, v15, v32, 0x180u);
  sub_BF774((int)v22, v15, v31, 0xFFFFFF1F);
  sub_BF774((int)v22, v15, v55, 0);
  sub_BF774((int)v22, v15, v31, 0xFFFF0FFF);
  sub_BF774((int)v22, v15, v32, 0x4000u);
  sub_BF774((int)v22, v15, v31, 0xFFFF7FFF);
  sub_BF774((int)v22, v15, v56, 0x8000u);
  sub_BF774((int)v22, v15, v31, 0xFFFEFFFF);
  sub_BF774((int)v22, v15, v57, 0x10000u);
  sub_BF774((int)v22, v15, v31, 0xFFFDFFFF);
  sub_BF774((int)v22, v15, v57, 0x20000u);
  sub_BF774((int)v22, v15, v31, 0xFFFF000F);
  sub_BF774((int)v22, v15, v7, 0x8000u);
  sub_DAF1C((int)v22, v15, 144, -100663297);
  sub_DAF1C((int)v22, v15, 145, -2147450879);
  sub_DAF1C((int)v22, v15, 144, 100663296);
  sub_DAF1C((int)v22, v15, 145, -2147450820);
  sub_BF774((int)v22, v15, v31, 0);
  sub_DAF1C((int)v22, v15, 144, 0);
  sub_DAF1C((int)v22, v15, 145, -2147450879);
  sub_DAF1C((int)v22, v15, 144, 0);
  sub_DAF1C((int)v22, v15, 145, -2147442687);
  return 0;
}
