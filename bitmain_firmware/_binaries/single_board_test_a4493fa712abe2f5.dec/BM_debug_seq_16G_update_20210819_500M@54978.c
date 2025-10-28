int __fastcall BM_debug_seq_16G_update_20210819_500M(int a1, int a2, char a3, int a4)
{
  bool v4; // zf
  int v5; // r12
  int v6; // r3
  int v7; // r1
  int v8; // r12
  int v10; // r12
  int v12; // r12
  int v13; // r2
  int v14; // r12
  int v15; // r12
  int v16; // r12
  int v17; // r12
  int v18; // r12
  int v19; // lr
  int v20; // r12
  int v21; // r12
  int v22; // r12
  int v23; // r2
  int v24; // r12
  int v25; // r12
  int v26; // r12
  int v27; // r9
  int v28; // r12
  int v29; // r11
  int v30; // r8
  int v31; // r7
  int v32; // r6
  int v33; // r10
  int v35; // [sp+14h] [bp-1060h]
  int v36; // [sp+18h] [bp-105Ch]
  int v37; // [sp+1Ch] [bp-1058h]
  int v38; // [sp+20h] [bp-1054h]
  int v39; // [sp+24h] [bp-1050h]
  int v40; // [sp+28h] [bp-104Ch]
  int v41; // [sp+2Ch] [bp-1048h]
  int v42; // [sp+30h] [bp-1044h]
  int v43; // [sp+34h] [bp-1040h]
  int v44; // [sp+38h] [bp-103Ch]
  int v45; // [sp+3Ch] [bp-1038h]
  int v46; // [sp+40h] [bp-1034h]
  int v47; // [sp+44h] [bp-1030h]
  int v48; // [sp+48h] [bp-102Ch]
  int v49; // [sp+4Ch] [bp-1028h]
  int v50; // [sp+50h] [bp-1024h]
  int v51; // [sp+54h] [bp-1020h]
  int v52; // [sp+58h] [bp-101Ch]
  int v53; // [sp+5Ch] [bp-1018h]
  int v54; // [sp+60h] [bp-1014h]
  int v55; // [sp+64h] [bp-1010h]
  int v56; // [sp+68h] [bp-100Ch]
  int v57; // [sp+6Ch] [bp-1008h]
  char v58[4100]; // [sp+70h] [bp-1004h] BYREF

  v4 = a4 == 8;
  v5 = 61590;
  if ( a4 != 8 )
    v5 = 150;
  v6 = 61566;
  v54 = v5;
  if ( !v4 )
    v6 = 126;
  v7 = 61622;
  v52 = v6;
  if ( v4 )
    v6 = 61514;
  else
    v7 = 182;
  v53 = v7;
  if ( v4 )
    v7 = 61458;
  v8 = 61472;
  if ( !v4 )
    v8 = 32;
  v49 = v8;
  v10 = 61556;
  if ( !v4 )
    v10 = 116;
  v48 = v10;
  v12 = 61474;
  if ( !v4 )
    v12 = 34;
  v13 = 61579;
  v47 = v12;
  v14 = 61465;
  if ( !v4 )
  {
    v14 = 25;
    v13 = 139;
  }
  v46 = v14;
  v15 = 61453;
  if ( !v4 )
    v15 = 13;
  v45 = v15;
  v16 = 61459;
  if ( !v4 )
  {
    v16 = 19;
    v6 = 74;
  }
  v44 = v16;
  v17 = 61457;
  if ( !v4 )
  {
    v17 = 17;
    v7 = 18;
  }
  v43 = v17;
  v18 = 61550;
  if ( !v4 )
    v18 = 110;
  v19 = 61564;
  v36 = v18;
  v20 = 61551;
  if ( !v4 )
  {
    v20 = 111;
    v19 = 124;
  }
  v42 = v20;
  v21 = 61553;
  if ( !v4 )
    v21 = 113;
  v57 = v13;
  v41 = v21;
  v22 = 61510;
  if ( !v4 )
    v22 = 70;
  v23 = 61606;
  v40 = v22;
  v24 = 61509;
  if ( !v4 )
  {
    v24 = 69;
    v23 = 166;
  }
  v39 = v24;
  v25 = 61470;
  if ( !v4 )
    v25 = 30;
  v38 = v25;
  v26 = 61469;
  if ( !v4 )
    v26 = 29;
  v27 = 61441;
  v37 = v26;
  v28 = 61466;
  if ( !v4 )
  {
    v28 = 26;
    v27 = 1;
  }
  v55 = v19;
  v29 = 61580;
  v35 = v28;
  if ( !v4 )
    v29 = 140;
  v30 = 61630;
  v31 = 61448;
  if ( !v4 )
  {
    v30 = 190;
    v31 = 8;
  }
  v32 = 61442;
  v33 = 61511;
  if ( !v4 )
  {
    v32 = 2;
    v33 = 71;
  }
  v56 = v23;
  v51 = v6;
  v50 = v7;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v58, 0x1000u, 0, "%s ...", "BM_debug_seq_16G_update_20210819_500M");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "BM_debug_seq_16G_update_20210819_500M",
    37,
    3679,
    60,
    v58);
  sub_D19C4(a1, a3, v27, 0xDFFFFFFF);
  sub_D19C4(a1, a3, v35, 0x20000000u);
  sub_D19C4(a1, a3, v27, 0xFFFFFFFB);
  sub_D19C4(a1, a3, v37, 0);
  sub_D19C4(a1, a3, v27, 0xFFFFFFFB);
  sub_D19C4(a1, a3, v38, 4u);
  sub_D19C4(a1, a3, v27, 0xFFFBFFFF);
  sub_D19C4(a1, a3, v39, 0x40000u);
  sub_D19C4(a1, a3, v27, 0xFFFBFFFF);
  sub_D19C4(a1, a3, v40, 0x40000u);
  sub_D19C4(a1, a3, v27, 0xFFF7FFFF);
  sub_D19C4(a1, a3, v33, 0x80000u);
  sub_D19C4(a1, a3, v27, 0xFFFFFFDF);
  sub_D19C4(a1, a3, v41, 0x20u);
  sub_D19C4(a1, a3, v27, 0x7FFFFFFFu);
  sub_D19C4(a1, a3, v42, 0x80000000);
  sub_D19C4(a1, a3, v27, 0xFFFBFFFF);
  sub_D19C4(a1, a3, v36, 0);
  sub_D19C4(a1, a3, v27, 0xFFFFFFFB);
  sub_D19C4(a1, a3, v36, 0);
  sub_D19C4(a1, a3, v27, 0x7FFFFFFFu);
  sub_D19C4(a1, a3, v35, 0);
  sub_D19C4(a1, a3, v27, 0xFFFFFBFF);
  sub_D19C4(a1, a3, v33, 0);
  sub_D19C4(a1, a3, v27, 0xFFFFFFFB);
  sub_D19C4(a1, a3, v43, 0);
  sub_D19C4(a1, a3, v27, 0xFC0FFFFF);
  sub_D19C4(a1, a3, v44, 0x2000000u);
  sub_70324(a1, a3, 144, -7340033);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0x200000);
  sub_70324(a1, a3, 145, -2147450872);
  sub_70324(a1, a3, 144, -57345);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 40960);
  sub_70324(a1, a3, 145, -2147450871);
  sub_70324(a1, a3, 144, -9);
  sub_70324(a1, a3, 145, -2147442687);
  sub_70324(a1, a3, 144, 8);
  sub_70324(a1, a3, 145, -2147442686);
  sub_70324(a1, a3, 144, -4097);
  sub_70324(a1, a3, 145, -2147442687);
  sub_70324(a1, a3, 144, 4096);
  sub_70324(a1, a3, 145, -2147442650);
  sub_D19C4(a1, a3, v27, 0xFFFBFFFF);
  sub_D19C4(a1, a3, v45, 0x40000u);
  sub_70324(a1, a3, 144, 0x7FFFFFFF);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0x80000000);
  sub_70324(a1, a3, 145, -2147450853);
  sub_70324(a1, a3, 144, -2);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147450852);
  sub_70324(a1, a3, 144, -100663297);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0x2000000);
  sub_70324(a1, a3, 145, -2147450820);
  sub_D19C4(a1, a3, v27, 0xFFFFFFFC);
  sub_D19C4(a1, a3, v46, 1u);
  sub_D19C4(a1, a3, v27, 0xF3FFFFFF);
  sub_D19C4(a1, a3, v47, 0x4000000u);
  sub_D19C4(a1, a3, v27, 0xCFFFFFFF);
  sub_D19C4(a1, a3, v48, 0x10000000u);
  sub_D19C4(a1, a3, v27, 0xFBFFFFFF);
  sub_D19C4(a1, a3, v49, 0x4000000u);
  sub_70324(a1, a3, 144, -131073);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147450818);
  sub_D19C4(a1, a3, v27, 0xFFFBFFFF);
  sub_D19C4(a1, a3, v50, 0x40000u);
  sub_D19C4(a1, a3, v27, 0xFFFFFBFF);
  sub_D19C4(a1, a3, v51, 0x400u);
  sub_D19C4(a1, a3, v27, 0xFF7FFFFF);
  sub_D19C4(a1, a3, v52, 0x800000u);
  sub_D19C4(a1, a3, v27, 0xFFFFFFFu);
  sub_D19C4(a1, a3, v53, 0x60000000u);
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
  sub_70324(a1, a3, 144, -1009);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 32);
  sub_70324(a1, a3, 145, -2147450878);
  sub_D19C4(a1, a3, v27, 0xFFFCFFFF);
  sub_D19C4(a1, a3, v32, 0);
  sub_D19C4(a1, a3, v27, 0xFFFFFFFC);
  sub_D19C4(a1, a3, v31, 0);
  sub_D19C4(a1, a3, v27, 0xFFFCFFFF);
  sub_D19C4(a1, a3, v31, 0x10000u);
  sub_70324(a1, a3, 144, -786433);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 786432);
  sub_70324(a1, a3, 145, -2147450818);
  sub_70324(a1, a3, 144, -8388609);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0x800000);
  sub_70324(a1, a3, 145, -2147450808);
  sub_70324(a1, a3, 144, -805306369);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 805306368);
  sub_70324(a1, a3, 145, -2147450804);
  sub_D19C4(a1, a3, v27, 0xFFFFCFFF);
  sub_D19C4(a1, a3, v54, 0x2000u);
  sub_D19C4(a1, a3, v27, 0xFFBFFFFF);
  sub_D19C4(a1, a3, v55, 0x400000u);
  sub_D19C4(a1, a3, v27, 0xFFFFFE0F);
  sub_D19C4(a1, a3, v30, 0x180u);
  sub_D19C4(a1, a3, v27, 0xFFFFFF1F);
  sub_D19C4(a1, a3, v56, 0);
  sub_D19C4(a1, a3, v27, 0xFFFF0FFF);
  sub_D19C4(a1, a3, v30, 0x4000u);
  sub_D19C4(a1, a3, v27, 0xFFFF7FFF);
  sub_D19C4(a1, a3, v57, 0x8000u);
  sub_D19C4(a1, a3, v27, 0xFFFEFFFF);
  sub_D19C4(a1, a3, v29, 0x10000u);
  sub_D19C4(a1, a3, v27, 0xFFFDFFFF);
  sub_D19C4(a1, a3, v29, 0x20000u);
  sub_D19C4(a1, a3, v27, 0xFFFF000F);
  sub_D19C4(a1, a3, v32, 0x8000u);
  sub_70324(a1, a3, 144, -2);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147450878);
  sub_D19C4(a1, a3, v27, 0);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147450879);
  return 0;
}
