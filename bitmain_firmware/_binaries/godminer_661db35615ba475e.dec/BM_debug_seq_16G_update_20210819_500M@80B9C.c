int __fastcall BM_debug_seq_16G_update_20210819_500M(int a1, int a2, int a3, int a4)
{
  bool v4; // zf
  int v5; // r6
  int v6; // r1
  int v7; // r3
  int v8; // r12
  int v9; // r7
  int v10; // r1
  int v11; // r3
  int v12; // r12
  int v13; // r3
  int v14; // lr
  int v15; // r1
  char v16; // r5
  int v17; // r10
  int v18; // lr
  int v19; // r12
  int v20; // r1
  int v22; // r10
  int v23; // lr
  int v24; // r12
  int v25; // r10
  int v26; // r3
  int v27; // lr
  int v28; // r9
  int v29; // r11
  int v30; // r8
  int v32; // [sp+10h] [bp-1064h]
  int v33; // [sp+14h] [bp-1060h]
  int v34; // [sp+18h] [bp-105Ch]
  int v35; // [sp+20h] [bp-1054h]
  int v36; // [sp+24h] [bp-1050h]
  int v37; // [sp+28h] [bp-104Ch]
  int v38; // [sp+2Ch] [bp-1048h]
  int v39; // [sp+30h] [bp-1044h]
  int v40; // [sp+34h] [bp-1040h]
  int v41; // [sp+38h] [bp-103Ch]
  int v42; // [sp+3Ch] [bp-1038h]
  int v43; // [sp+40h] [bp-1034h]
  int v44; // [sp+44h] [bp-1030h]
  int v45; // [sp+48h] [bp-102Ch]
  int v46; // [sp+4Ch] [bp-1028h]
  int v47; // [sp+50h] [bp-1024h]
  int v48; // [sp+54h] [bp-1020h]
  int v49; // [sp+58h] [bp-101Ch]
  int v50; // [sp+5Ch] [bp-1018h]
  int v51; // [sp+60h] [bp-1014h]
  int v52; // [sp+64h] [bp-1010h]
  int v53; // [sp+68h] [bp-100Ch]
  int v54; // [sp+6Ch] [bp-1008h]
  char v55[4100]; // [sp+70h] [bp-1004h] BYREF

  v4 = a4 == 8;
  v5 = 61590;
  if ( a4 != 8 )
    v5 = 150;
  v51 = v5;
  v6 = 61622;
  if ( a4 == 8 )
    v5 = 61442;
  v7 = 61566;
  if ( !v4 )
  {
    v6 = 182;
    v7 = 126;
  }
  v8 = 61514;
  if ( !v4 )
    v8 = 74;
  v9 = 61564;
  v50 = v6;
  if ( !v4 )
    v9 = 124;
  v49 = v7;
  v10 = 61556;
  v48 = v8;
  v11 = 61472;
  if ( !v4 )
  {
    v10 = 116;
    v11 = 32;
  }
  v12 = 61474;
  if ( !v4 )
    v12 = 34;
  v52 = v9;
  v46 = v11;
  if ( v4 )
    v9 = 61448;
  v13 = 61459;
  v14 = 61458;
  if ( !v4 )
  {
    v13 = 19;
    v14 = 18;
  }
  v45 = v10;
  v44 = v12;
  v15 = 61457;
  if ( !v4 )
    v15 = 17;
  v16 = a3;
  v41 = v13;
  if ( v4 )
  {
    a3 = 61579;
    v13 = 61550;
  }
  v17 = 61606;
  v47 = v14;
  if ( !v4 )
    v17 = 166;
  v18 = 61465;
  v40 = v15;
  if ( !v4 )
    v18 = 25;
  v19 = 61551;
  v20 = 61511;
  if ( !v4 )
  {
    v19 = 111;
    v20 = 71;
  }
  v53 = v17;
  v43 = v18;
  v22 = 61453;
  if ( !v4 )
  {
    v13 = 110;
    v22 = 13;
  }
  v38 = v19;
  v23 = 61553;
  v24 = 61510;
  if ( !v4 )
  {
    v23 = 113;
    v24 = 70;
  }
  v33 = v20;
  v36 = v24;
  if ( v4 )
    v24 = 61466;
  else
    a3 = 139;
  if ( !v4 )
    v24 = 26;
  v42 = v22;
  v39 = v13;
  v25 = 61470;
  v26 = 61469;
  v37 = v23;
  if ( !v4 )
    v25 = 30;
  v27 = 61509;
  if ( !v4 )
  {
    v26 = 29;
    v27 = 69;
  }
  v28 = 61441;
  v35 = v27;
  if ( !v4 )
    v28 = 1;
  v32 = v24;
  v29 = 61580;
  v30 = 61630;
  if ( !v4 )
  {
    v29 = 140;
    v30 = 190;
    v9 = 8;
    v5 = 2;
  }
  v54 = a3;
  v34 = v26;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v55, 0x1000u, 0, "%s ...", "BM_debug_seq_16G_update_20210819_500M");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "BM_debug_seq_16G_update_20210819_500M",
    37,
    3679,
    60,
    v55);
  sub_1325F4(a1, v16, v28, 0xDFFFFFFF);
  sub_1325F4(a1, v16, v32, 0x20000000u);
  sub_1325F4(a1, v16, v28, 0xFFFFFFFB);
  sub_1325F4(a1, v16, v34, 0);
  sub_1325F4(a1, v16, v28, 0xFFFFFFFB);
  sub_1325F4(a1, v16, v25, 4u);
  sub_1325F4(a1, v16, v28, 0xFFFBFFFF);
  sub_1325F4(a1, v16, v35, 0x40000u);
  sub_1325F4(a1, v16, v28, 0xFFFBFFFF);
  sub_1325F4(a1, v16, v36, 0x40000u);
  sub_1325F4(a1, v16, v28, 0xFFF7FFFF);
  sub_1325F4(a1, v16, v33, 0x80000u);
  sub_1325F4(a1, v16, v28, 0xFFFFFFDF);
  sub_1325F4(a1, v16, v37, 0x20u);
  sub_1325F4(a1, v16, v28, 0x7FFFFFFFu);
  sub_1325F4(a1, v16, v38, 0x80000000);
  sub_1325F4(a1, v16, v28, 0xFFFBFFFF);
  sub_1325F4(a1, v16, v39, 0);
  sub_1325F4(a1, v16, v28, 0xFFFFFFFB);
  sub_1325F4(a1, v16, v39, 0);
  sub_1325F4(a1, v16, v28, 0x7FFFFFFFu);
  sub_1325F4(a1, v16, v32, 0);
  sub_1325F4(a1, v16, v28, 0xFFFFFBFF);
  sub_1325F4(a1, v16, v33, 0);
  sub_1325F4(a1, v16, v28, 0xFFFFFFFB);
  sub_1325F4(a1, v16, v40, 0);
  sub_1325F4(a1, v16, v28, 0xFC0FFFFF);
  sub_1325F4(a1, v16, v41, 0x2000000u);
  sub_8F7C8(a1, v16, 144, -7340033);
  sub_8F7C8(a1, v16, 145, -2147450879);
  sub_8F7C8(a1, v16, 144, 0x200000);
  sub_8F7C8(a1, v16, 145, -2147450872);
  sub_8F7C8(a1, v16, 144, -57345);
  sub_8F7C8(a1, v16, 145, -2147450879);
  sub_8F7C8(a1, v16, 144, 40960);
  sub_8F7C8(a1, v16, 145, -2147450871);
  sub_8F7C8(a1, v16, 144, -9);
  sub_8F7C8(a1, v16, 145, -2147442687);
  sub_8F7C8(a1, v16, 144, 8);
  sub_8F7C8(a1, v16, 145, -2147442686);
  sub_8F7C8(a1, v16, 144, -4097);
  sub_8F7C8(a1, v16, 145, -2147442687);
  sub_8F7C8(a1, v16, 144, 4096);
  sub_8F7C8(a1, v16, 145, -2147442650);
  sub_1325F4(a1, v16, v28, 0xFFFBFFFF);
  sub_1325F4(a1, v16, v42, 0x40000u);
  sub_8F7C8(a1, v16, 144, 0x7FFFFFFF);
  sub_8F7C8(a1, v16, 145, -2147450879);
  sub_8F7C8(a1, v16, 144, 0x80000000);
  sub_8F7C8(a1, v16, 145, -2147450853);
  sub_8F7C8(a1, v16, 144, -2);
  sub_8F7C8(a1, v16, 145, -2147450879);
  sub_8F7C8(a1, v16, 144, 0);
  sub_8F7C8(a1, v16, 145, -2147450852);
  sub_8F7C8(a1, v16, 144, -100663297);
  sub_8F7C8(a1, v16, 145, -2147450879);
  sub_8F7C8(a1, v16, 144, 0x2000000);
  sub_8F7C8(a1, v16, 145, -2147450820);
  sub_1325F4(a1, v16, v28, 0xFFFFFFFC);
  sub_1325F4(a1, v16, v43, 1u);
  sub_1325F4(a1, v16, v28, 0xF3FFFFFF);
  sub_1325F4(a1, v16, v44, 0x4000000u);
  sub_1325F4(a1, v16, v28, 0xCFFFFFFF);
  sub_1325F4(a1, v16, v45, 0x10000000u);
  sub_1325F4(a1, v16, v28, 0xFBFFFFFF);
  sub_1325F4(a1, v16, v46, 0x4000000u);
  sub_8F7C8(a1, v16, 144, -131073);
  sub_8F7C8(a1, v16, 145, -2147450879);
  sub_8F7C8(a1, v16, 144, 0);
  sub_8F7C8(a1, v16, 145, -2147450818);
  sub_1325F4(a1, v16, v28, 0xFFFBFFFF);
  sub_1325F4(a1, v16, v47, 0x40000u);
  sub_1325F4(a1, v16, v28, 0xFFFFFBFF);
  sub_1325F4(a1, v16, v48, 0x400u);
  sub_1325F4(a1, v16, v28, 0xFF7FFFFF);
  sub_1325F4(a1, v16, v49, 0x800000u);
  sub_1325F4(a1, v16, v28, 0xFFFFFFFu);
  sub_1325F4(a1, v16, v50, 0x60000000u);
  sub_8F7C8(a1, v16, 144, -1009);
  sub_8F7C8(a1, v16, 145, -2147450879);
  sub_8F7C8(a1, v16, 144, 576);
  sub_8F7C8(a1, v16, 145, -2147450787);
  sub_8F7C8(a1, v16, 144, -258049);
  sub_8F7C8(a1, v16, 145, -2147450879);
  sub_8F7C8(a1, v16, 144, 147456);
  sub_8F7C8(a1, v16, 145, -2147450787);
  sub_8F7C8(a1, v16, 144, -66060289);
  sub_8F7C8(a1, v16, 145, -2147450879);
  sub_8F7C8(a1, v16, 144, 37748736);
  sub_8F7C8(a1, v16, 145, -2147450787);
  sub_8F7C8(a1, v16, 144, 0xFFFFFFF);
  sub_8F7C8(a1, v16, 145, -2147450879);
  sub_8F7C8(a1, v16, 144, 0x40000000);
  sub_8F7C8(a1, v16, 145, -2147450787);
  sub_8F7C8(a1, v16, 144, -4);
  sub_8F7C8(a1, v16, 145, -2147450879);
  sub_8F7C8(a1, v16, 144, 2);
  sub_8F7C8(a1, v16, 145, -2147450786);
  sub_8F7C8(a1, v16, 144, -1009);
  sub_8F7C8(a1, v16, 145, -2147450879);
  sub_8F7C8(a1, v16, 144, 64);
  sub_8F7C8(a1, v16, 145, -2147450786);
  sub_8F7C8(a1, v16, 144, -258049);
  sub_8F7C8(a1, v16, 145, -2147450879);
  sub_8F7C8(a1, v16, 144, 0x4000);
  sub_8F7C8(a1, v16, 145, -2147450786);
  sub_8F7C8(a1, v16, 144, -66060289);
  sub_8F7C8(a1, v16, 145, -2147450879);
  sub_8F7C8(a1, v16, 144, 0x400000);
  sub_8F7C8(a1, v16, 145, -2147450786);
  sub_8F7C8(a1, v16, 144, 0xFFFFFFF);
  sub_8F7C8(a1, v16, 145, -2147450879);
  sub_8F7C8(a1, v16, 144, 0x40000000);
  sub_8F7C8(a1, v16, 145, -2147450786);
  sub_8F7C8(a1, v16, 144, -4);
  sub_8F7C8(a1, v16, 145, -2147450879);
  sub_8F7C8(a1, v16, 144, 0);
  sub_8F7C8(a1, v16, 145, -2147450785);
  sub_8F7C8(a1, v16, 144, -1009);
  sub_8F7C8(a1, v16, 145, -2147450879);
  sub_8F7C8(a1, v16, 144, 32);
  sub_8F7C8(a1, v16, 145, -2147450878);
  sub_1325F4(a1, v16, v28, 0xFFFCFFFF);
  sub_1325F4(a1, v16, v5, 0);
  sub_1325F4(a1, v16, v28, 0xFFFFFFFC);
  sub_1325F4(a1, v16, v9, 0);
  sub_1325F4(a1, v16, v28, 0xFFFCFFFF);
  sub_1325F4(a1, v16, v9, 0x10000u);
  sub_8F7C8(a1, v16, 144, -786433);
  sub_8F7C8(a1, v16, 145, -2147450879);
  sub_8F7C8(a1, v16, 144, 786432);
  sub_8F7C8(a1, v16, 145, -2147450818);
  sub_8F7C8(a1, v16, 144, -8388609);
  sub_8F7C8(a1, v16, 145, -2147450879);
  sub_8F7C8(a1, v16, 144, 0x800000);
  sub_8F7C8(a1, v16, 145, -2147450808);
  sub_8F7C8(a1, v16, 144, -805306369);
  sub_8F7C8(a1, v16, 145, -2147450879);
  sub_8F7C8(a1, v16, 144, 805306368);
  sub_8F7C8(a1, v16, 145, -2147450804);
  sub_1325F4(a1, v16, v28, 0xFFFFCFFF);
  sub_1325F4(a1, v16, v51, 0x2000u);
  sub_1325F4(a1, v16, v28, 0xFFBFFFFF);
  sub_1325F4(a1, v16, v52, 0x400000u);
  sub_1325F4(a1, v16, v28, 0xFFFFFE0F);
  sub_1325F4(a1, v16, v30, 0x180u);
  sub_1325F4(a1, v16, v28, 0xFFFFFF1F);
  sub_1325F4(a1, v16, v53, 0);
  sub_1325F4(a1, v16, v28, 0xFFFF0FFF);
  sub_1325F4(a1, v16, v30, 0x4000u);
  sub_1325F4(a1, v16, v28, 0xFFFF7FFF);
  sub_1325F4(a1, v16, v54, 0x8000u);
  sub_1325F4(a1, v16, v28, 0xFFFEFFFF);
  sub_1325F4(a1, v16, v29, 0x10000u);
  sub_1325F4(a1, v16, v28, 0xFFFDFFFF);
  sub_1325F4(a1, v16, v29, 0x20000u);
  sub_1325F4(a1, v16, v28, 0xFFFF000F);
  sub_1325F4(a1, v16, v5, 0x8000u);
  sub_8F7C8(a1, v16, 144, -2);
  sub_8F7C8(a1, v16, 145, -2147450879);
  sub_8F7C8(a1, v16, 144, 0);
  sub_8F7C8(a1, v16, 145, -2147450878);
  sub_1325F4(a1, v16, v28, 0);
  sub_8F7C8(a1, v16, 144, 0);
  sub_8F7C8(a1, v16, 145, -2147450879);
  return 0;
}
