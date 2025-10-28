int __fastcall BM_debug_seq_update_20210805_500M(int a1, int a2, int a3, int a4)
{
  bool v4; // zf
  int v5; // r12
  int v6; // r9
  int v7; // r6
  int v8; // r3
  int v9; // r1
  int v10; // r1
  int v11; // r12
  int v12; // r12
  char v13; // r5
  int v14; // r12
  int v16; // r12
  int v17; // r12
  int v18; // r12
  int v19; // r12
  int v20; // r12
  int v21; // lr
  int v22; // r12
  int v23; // r12
  int v24; // r12
  int v25; // r12
  int v26; // r7
  int v27; // r12
  int v28; // r12
  int v29; // r12
  int v30; // r10
  int v31; // r8
  int v33; // [sp+14h] [bp-1070h]
  int v34; // [sp+18h] [bp-106Ch]
  int v35; // [sp+1Ch] [bp-1068h]
  int v36; // [sp+20h] [bp-1064h]
  int v37; // [sp+24h] [bp-1060h]
  int v38; // [sp+28h] [bp-105Ch]
  int v39; // [sp+2Ch] [bp-1058h]
  int v40; // [sp+30h] [bp-1054h]
  int v41; // [sp+34h] [bp-1050h]
  int v42; // [sp+38h] [bp-104Ch]
  int v43; // [sp+3Ch] [bp-1048h]
  int v44; // [sp+40h] [bp-1044h]
  int v45; // [sp+44h] [bp-1040h]
  int v46; // [sp+48h] [bp-103Ch]
  int v47; // [sp+4Ch] [bp-1038h]
  int v48; // [sp+50h] [bp-1034h]
  int v49; // [sp+54h] [bp-1030h]
  int v50; // [sp+58h] [bp-102Ch]
  int v51; // [sp+60h] [bp-1024h]
  int v52; // [sp+64h] [bp-1020h]
  int v53; // [sp+6Ch] [bp-1018h]
  int v54; // [sp+70h] [bp-1014h]
  int v55; // [sp+74h] [bp-1010h]
  int v56; // [sp+78h] [bp-100Ch]
  int v57; // [sp+7Ch] [bp-1008h]
  char v58[4100]; // [sp+80h] [bp-1004h] BYREF

  v4 = a4 == 8;
  v5 = 61590;
  if ( a4 != 8 )
    v5 = 150;
  v6 = 61606;
  v7 = 61448;
  if ( a4 != 8 )
    v6 = 166;
  v53 = v5;
  v8 = 61622;
  v55 = v6;
  if ( v4 )
    v6 = 61448;
  else
    v8 = 182;
  v9 = 61442;
  if ( v4 )
    v7 = 61514;
  else
    v9 = 2;
  v52 = v8;
  v35 = v9;
  if ( v4 )
    v8 = 61458;
  v10 = 61566;
  if ( !v4 )
    v10 = 126;
  v51 = v10;
  if ( v4 )
    v10 = 61472;
  v11 = 61556;
  if ( !v4 )
    v11 = 116;
  v48 = v11;
  v12 = 61474;
  if ( !v4 )
    v12 = 34;
  v13 = a3;
  v47 = v12;
  v14 = 61465;
  if ( !v4 )
    v14 = 25;
  v46 = v14;
  v16 = 61453;
  if ( v4 )
    a3 = 61580;
  else
    v16 = 13;
  v45 = v16;
  v17 = 61459;
  if ( !v4 )
  {
    v17 = 19;
    a3 = 140;
  }
  v44 = v17;
  v18 = 61457;
  if ( !v4 )
    v18 = 17;
  v43 = v18;
  v19 = 61550;
  if ( !v4 )
    v19 = 110;
  v42 = v19;
  v20 = 61551;
  if ( !v4 )
    v20 = 111;
  v21 = 61564;
  v41 = v20;
  v22 = 61553;
  if ( !v4 )
  {
    v22 = 113;
    v21 = 124;
  }
  v40 = v22;
  v23 = 61511;
  if ( !v4 )
    v23 = 71;
  v57 = a3;
  v34 = v23;
  v24 = 61510;
  if ( v4 )
    a3 = 61579;
  else
    v24 = 70;
  v39 = v24;
  v25 = 61509;
  if ( !v4 )
    v25 = 69;
  v26 = 61443;
  v38 = v25;
  v27 = 61470;
  if ( !v4 )
  {
    v27 = 30;
    a3 = 139;
  }
  v37 = v27;
  v28 = 61469;
  if ( !v4 )
  {
    v28 = 29;
    v26 = 3;
    v7 = 74;
    v8 = 18;
    v10 = 32;
  }
  v36 = v28;
  v29 = 61466;
  if ( !v4 )
    v29 = 26;
  v30 = 61441;
  v54 = v21;
  if ( !v4 )
    v30 = 1;
  v33 = v29;
  v31 = 61630;
  if ( !v4 )
  {
    v6 = 8;
    v31 = 190;
  }
  v56 = a3;
  v50 = v8;
  v49 = v10;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v58, 0x1000u, 0, "%s ...", "BM_debug_seq_update_20210805_500M");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "BM_debug_seq_update_20210805_500M",
    33,
    3818,
    60,
    v58);
  sub_D19C4(a1, v13, v30, 0xDFFFFFFF);
  sub_D19C4(a1, v13, v33, 0x20000000u);
  sub_D19C4(a1, v13, v30, 0xFFFFFFFB);
  sub_D19C4(a1, v13, v36, 0);
  sub_D19C4(a1, v13, v30, 0xFFFFFFFB);
  sub_D19C4(a1, v13, v37, 4u);
  sub_D19C4(a1, v13, v30, 0xFFFBFFFF);
  sub_D19C4(a1, v13, v38, 0x40000u);
  sub_D19C4(a1, v13, v30, 0xFFFBFFFF);
  sub_D19C4(a1, v13, v39, 0x40000u);
  sub_D19C4(a1, v13, v30, 0xFFF7FFFF);
  sub_D19C4(a1, v13, v34, 0x80000u);
  sub_D19C4(a1, v13, v30, 0xFFFFFFDF);
  sub_D19C4(a1, v13, v40, 0x20u);
  sub_D19C4(a1, v13, v30, 0x7FFFFFFFu);
  sub_D19C4(a1, v13, v41, 0x80000000);
  sub_D19C4(a1, v13, v30, 0xFFFBFFFF);
  sub_D19C4(a1, v13, v42, 0);
  sub_D19C4(a1, v13, v30, 0xFFFFFFFB);
  sub_D19C4(a1, v13, v42, 0);
  sub_D19C4(a1, v13, v30, 0x7FFFFFFFu);
  sub_D19C4(a1, v13, v33, 0);
  sub_D19C4(a1, v13, v30, 0xFFFFFBFF);
  sub_D19C4(a1, v13, v34, 0);
  sub_D19C4(a1, v13, v30, 0xFFFFFFFB);
  sub_D19C4(a1, v13, v43, 0);
  sub_D19C4(a1, v13, v30, 0xFC0FFFFF);
  sub_D19C4(a1, v13, v44, 0x2000000u);
  sub_70324(a1, v13, 144, -7340033);
  sub_70324(a1, v13, 145, -2147450879);
  sub_70324(a1, v13, 144, 0x200000);
  sub_70324(a1, v13, 145, -2147450872);
  sub_70324(a1, v13, 144, -57345);
  sub_70324(a1, v13, 145, -2147450879);
  sub_70324(a1, v13, 144, 40960);
  sub_70324(a1, v13, 145, -2147450871);
  sub_70324(a1, v13, 144, -9);
  sub_70324(a1, v13, 145, -2147442687);
  sub_70324(a1, v13, 144, 8);
  sub_70324(a1, v13, 145, -2147442686);
  sub_70324(a1, v13, 144, -4097);
  sub_70324(a1, v13, 145, -2147442687);
  sub_70324(a1, v13, 144, 4096);
  sub_70324(a1, v13, 145, -2147442650);
  sub_D19C4(a1, v13, v30, 0xFFFBFFFF);
  sub_D19C4(a1, v13, v45, 0x40000u);
  sub_70324(a1, v13, 144, 0x7FFFFFFF);
  sub_70324(a1, v13, 145, -2147450879);
  sub_70324(a1, v13, 144, 0x80000000);
  sub_70324(a1, v13, 145, -2147450853);
  sub_70324(a1, v13, 144, -2);
  sub_70324(a1, v13, 145, -2147450879);
  sub_70324(a1, v13, 144, 0);
  sub_70324(a1, v13, 145, -2147450852);
  sub_70324(a1, v13, 144, -100663297);
  sub_70324(a1, v13, 145, -2147450879);
  sub_70324(a1, v13, 144, 0x2000000);
  sub_70324(a1, v13, 145, -2147450820);
  sub_D19C4(a1, v13, v30, 0xFFFFFFFC);
  sub_D19C4(a1, v13, v46, 1u);
  sub_D19C4(a1, v13, v30, 0xF3FFFFFF);
  sub_D19C4(a1, v13, v47, 0x4000000u);
  sub_D19C4(a1, v13, v30, 0xCFFFFFFF);
  sub_D19C4(a1, v13, v48, 0x10000000u);
  sub_D19C4(a1, v13, v30, 0xFBFFFFFF);
  sub_D19C4(a1, v13, v49, 0x4000000u);
  sub_70324(a1, v13, 144, -131073);
  sub_70324(a1, v13, 145, -2147450879);
  sub_70324(a1, v13, 144, 0);
  sub_70324(a1, v13, 145, -2147450818);
  sub_D19C4(a1, v13, v30, 0xFFFBFFFF);
  sub_D19C4(a1, v13, v50, 0x40000u);
  sub_D19C4(a1, v13, v30, 0xFFFFFBFF);
  sub_D19C4(a1, v13, v7, 0x400u);
  sub_D19C4(a1, v13, v30, 0xFF7FFFFF);
  sub_D19C4(a1, v13, v51, 0x800000u);
  sub_D19C4(a1, v13, v30, 0xFFFFFFFu);
  sub_D19C4(a1, v13, v52, 0x60000000u);
  sub_70324(a1, v13, 144, -1009);
  sub_70324(a1, v13, 145, -2147450879);
  sub_70324(a1, v13, 144, 576);
  sub_70324(a1, v13, 145, -2147450787);
  sub_70324(a1, v13, 144, -258049);
  sub_70324(a1, v13, 145, -2147450879);
  sub_70324(a1, v13, 144, 147456);
  sub_70324(a1, v13, 145, -2147450787);
  sub_70324(a1, v13, 144, -66060289);
  sub_70324(a1, v13, 145, -2147450879);
  sub_70324(a1, v13, 144, 37748736);
  sub_70324(a1, v13, 145, -2147450787);
  sub_70324(a1, v13, 144, 0xFFFFFFF);
  sub_70324(a1, v13, 145, -2147450879);
  sub_70324(a1, v13, 144, 0x40000000);
  sub_70324(a1, v13, 145, -2147450787);
  sub_70324(a1, v13, 144, -4);
  sub_70324(a1, v13, 145, -2147450879);
  sub_70324(a1, v13, 144, 2);
  sub_70324(a1, v13, 145, -2147450786);
  sub_70324(a1, v13, 144, -1009);
  sub_70324(a1, v13, 145, -2147450879);
  sub_70324(a1, v13, 144, 64);
  sub_70324(a1, v13, 145, -2147450786);
  sub_70324(a1, v13, 144, -258049);
  sub_70324(a1, v13, 145, -2147450879);
  sub_70324(a1, v13, 144, 0x4000);
  sub_70324(a1, v13, 145, -2147450786);
  sub_70324(a1, v13, 144, -66060289);
  sub_70324(a1, v13, 145, -2147450879);
  sub_70324(a1, v13, 144, 0x400000);
  sub_70324(a1, v13, 145, -2147450786);
  sub_70324(a1, v13, 144, 0xFFFFFFF);
  sub_70324(a1, v13, 145, -2147450879);
  sub_70324(a1, v13, 144, 0x40000000);
  sub_70324(a1, v13, 145, -2147450786);
  sub_70324(a1, v13, 144, -4);
  sub_70324(a1, v13, 145, -2147450879);
  sub_70324(a1, v13, 144, 0);
  sub_70324(a1, v13, 145, -2147450785);
  sub_70324(a1, v13, 144, -1009);
  sub_70324(a1, v13, 145, -2147450879);
  sub_70324(a1, v13, 144, 96);
  sub_70324(a1, v13, 145, -2147450878);
  sub_D19C4(a1, v13, v30, 0xFFFCFFFF);
  sub_D19C4(a1, v13, v35, 0);
  sub_D19C4(a1, v13, v30, 0xFFFFFFFC);
  sub_D19C4(a1, v13, v6, 0);
  sub_D19C4(a1, v13, v30, 0xFFFCFFFF);
  sub_D19C4(a1, v13, v6, 0x30000u);
  sub_D19C4(a1, v13, v30, 0xFFFCFFFF);
  sub_D19C4(a1, v13, v26, 0x30000u);
  sub_70324(a1, v13, 144, -786433);
  sub_70324(a1, v13, 145, -2147450879);
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v58, 0x1000u, 0, "change list 202100807");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "BM_debug_seq_update_20210805_500M",
    33,
    3952,
    60,
    v58);
  sub_70324(a1, v13, 144, 0);
  sub_70324(a1, v13, 145, -2147450818);
  sub_70324(a1, v13, 144, -8388609);
  sub_70324(a1, v13, 145, -2147450879);
  sub_70324(a1, v13, 144, 0x800000);
  sub_70324(a1, v13, 145, -2147450808);
  sub_70324(a1, v13, 144, -805306369);
  sub_70324(a1, v13, 145, -2147450879);
  sub_70324(a1, v13, 144, 0);
  sub_70324(a1, v13, 145, -2147450804);
  sub_D19C4(a1, v13, v30, 0xFFFFCFFF);
  sub_D19C4(a1, v13, v53, 0x3000u);
  sub_D19C4(a1, v13, v30, 0xFFBFFFFF);
  sub_D19C4(a1, v13, v54, 0x400000u);
  sub_D19C4(a1, v13, v30, 0xFFFFFE0F);
  sub_D19C4(a1, v13, v31, 0x180u);
  sub_D19C4(a1, v13, v30, 0xFFFFFF1F);
  sub_D19C4(a1, v13, v55, 0);
  sub_D19C4(a1, v13, v30, 0xFFFF0FFF);
  sub_D19C4(a1, v13, v31, 0x4000u);
  sub_D19C4(a1, v13, v30, 0xFFFF7FFF);
  sub_D19C4(a1, v13, v56, 0x8000u);
  sub_D19C4(a1, v13, v30, 0xFFFEFFFF);
  sub_D19C4(a1, v13, v57, 0x10000u);
  sub_D19C4(a1, v13, v30, 0xFFFDFFFF);
  sub_D19C4(a1, v13, v57, 0x20000u);
  sub_D19C4(a1, v13, v30, 0xFFFF000F);
  sub_D19C4(a1, v13, v35, 0x8000u);
  sub_70324(a1, v13, 144, -100663297);
  sub_70324(a1, v13, 145, -2147450879);
  sub_70324(a1, v13, 144, 100663296);
  sub_70324(a1, v13, 145, -2147450820);
  sub_D19C4(a1, v13, v30, 0);
  sub_70324(a1, v13, 144, 0);
  sub_70324(a1, v13, 145, -2147450879);
  sub_70324(a1, v13, 144, 0);
  sub_70324(a1, v13, 145, -2147442687);
  return 0;
}
