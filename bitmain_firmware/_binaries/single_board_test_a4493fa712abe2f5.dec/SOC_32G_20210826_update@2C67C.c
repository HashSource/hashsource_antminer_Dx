int __fastcall SOC_32G_20210826_update(int a1, int a2, char a3, int a4)
{
  int v6; // r9
  int v7; // r11
  int v8; // r6
  int v9; // r10
  int v10; // r7
  int v11; // r8
  int v13; // [sp+10h] [bp-1084h]
  int v14; // [sp+14h] [bp-1080h]
  int v15; // [sp+18h] [bp-107Ch]
  int v16; // [sp+1Ch] [bp-1078h]
  int v17; // [sp+20h] [bp-1074h]
  int v18; // [sp+24h] [bp-1070h]
  int v19; // [sp+28h] [bp-106Ch]
  int v20; // [sp+2Ch] [bp-1068h]
  int v21; // [sp+30h] [bp-1064h]
  int v22; // [sp+34h] [bp-1060h]
  int v23; // [sp+38h] [bp-105Ch]
  int v24; // [sp+3Ch] [bp-1058h]
  int v25; // [sp+40h] [bp-1054h]
  int v26; // [sp+44h] [bp-1050h]
  int v27; // [sp+48h] [bp-104Ch]
  int v28; // [sp+4Ch] [bp-1048h]
  int v29; // [sp+50h] [bp-1044h]
  int v30; // [sp+54h] [bp-1040h]
  int v31; // [sp+58h] [bp-103Ch]
  int v32; // [sp+5Ch] [bp-1038h]
  int v33; // [sp+60h] [bp-1034h]
  int v34; // [sp+64h] [bp-1030h]
  int v35; // [sp+68h] [bp-102Ch]
  int v36; // [sp+6Ch] [bp-1028h]
  int v37; // [sp+70h] [bp-1024h]
  int v38; // [sp+74h] [bp-1020h]
  int v39; // [sp+78h] [bp-101Ch]
  int v40; // [sp+7Ch] [bp-1018h]
  int v41; // [sp+80h] [bp-1014h]
  int v42; // [sp+84h] [bp-1010h]
  int v43; // [sp+88h] [bp-100Ch]
  int v44; // [sp+8Ch] [bp-1008h]
  char v45[4100]; // [sp+90h] [bp-1004h] BYREF

  if ( a4 == 8 )
  {
    v43 = 61545;
    v44 = 61512;
    v41 = 61579;
    v42 = 61580;
    v39 = 61630;
    v40 = 61606;
    v37 = 61590;
    v38 = 61564;
    v35 = 61622;
    v36 = 61448;
    v33 = 61514;
    v34 = 61566;
    v31 = 61472;
    v32 = 61458;
    v30 = 61551;
    v24 = 61511;
    v29 = 61465;
    v22 = 61487;
    v23 = 61488;
    v20 = 30726;
    v21 = 61446;
    v18 = 30725;
    v19 = 61445;
    v28 = 61482;
    v17 = 30723;
    v15 = 61469;
    v16 = 30722;
    v26 = 30782;
    v27 = 61502;
    v13 = 30783;
    v14 = 61503;
    v9 = 61466;
    v6 = 61443;
    v11 = 61442;
    v7 = 30721;
    v10 = 61550;
    v25 = 61553;
    v8 = 61441;
  }
  else
  {
    v21 = 6;
    v20 = 6;
    v43 = 105;
    v44 = 72;
    v6 = 3;
    v41 = 139;
    v42 = 140;
    v39 = 190;
    v40 = 166;
    v19 = 5;
    v17 = 3;
    v18 = 5;
    v37 = 150;
    v38 = 124;
    v27 = 62;
    v26 = 62;
    v14 = 63;
    v13 = 63;
    v35 = 182;
    v36 = 8;
    v33 = 74;
    v34 = 126;
    v31 = 32;
    v32 = 18;
    v30 = 111;
    v24 = 71;
    v29 = 25;
    v7 = 1;
    v22 = 47;
    v23 = 48;
    v8 = 1;
    v28 = 42;
    v9 = 26;
    v10 = 110;
    v11 = 2;
    v15 = 29;
    v16 = 2;
    v25 = 113;
  }
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v45, 0x1000u, 0, "%s ...", "SOC_32G_20210826_update");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "SOC_32G_20210826_update",
    23,
    6210,
    60,
    v45);
  sub_D19C4(a1, a3, v8, 0xFFFFFFDF);
  sub_D19C4(a1, a3, v25, 0x20u);
  sub_D19C4(a1, a3, v8, 0xFFFFFFF7);
  sub_D19C4(a1, a3, v10, 0);
  sub_D19C4(a1, a3, v7, 0xE0FFFFFF);
  sub_D19C4(a1, a3, v13, 0xF000000u);
  sub_D19C4(a1, a3, v8, 0xE0FFFFFF);
  sub_D19C4(a1, a3, v14, 0xF000000u);
  sub_D19C4(a1, a3, v7, 0xFFF000FF);
  sub_D19C4(a1, a3, v26, 0x100u);
  sub_D19C4(a1, a3, v8, 0xFFF000FF);
  sub_D19C4(a1, a3, v27, 0x100u);
  sub_D19C4(a1, a3, v7, 0xFFFFF000);
  sub_D19C4(a1, a3, v13, 4u);
  sub_D19C4(a1, a3, v8, 0xFFFFF000);
  sub_D19C4(a1, a3, v14, 4u);
  sub_D19C4(a1, a3, v8, 0xFFFBFFFF);
  sub_D19C4(a1, a3, v10, 0x40000u);
  sub_D19C4(a1, a3, v8, 0xFFFFFFFB);
  sub_D19C4(a1, a3, v10, 4u);
  sub_D19C4(a1, a3, v8, 0xFFFFFFFD);
  sub_D19C4(a1, a3, v10, 0);
  sub_D19C4(a1, a3, v8, 0xFFFFFFFB);
  sub_D19C4(a1, a3, v15, 0);
  sub_D19C4(a1, a3, v7, 0xFFFFFFu);
  sub_D19C4(a1, a3, v16, 0x32000000u);
  sub_D19C4(a1, a3, v8, 0xFFFFFFu);
  sub_D19C4(a1, a3, v11, 0x32000000u);
  sub_D19C4(a1, a3, v7, 0xFFFFFFFC);
  sub_D19C4(a1, a3, v17, 0);
  sub_D19C4(a1, a3, v8, 0xFFFFFFFC);
  sub_D19C4(a1, a3, v6, 0);
  sub_D19C4(a1, a3, v7, 0xFFFFFFu);
  sub_D19C4(a1, a3, v16, 0);
  sub_D19C4(a1, a3, v8, 0xFFFFFFu);
  sub_D19C4(a1, a3, v11, 0);
  sub_D19C4(a1, a3, v7, 0xFFFFFFFC);
  sub_D19C4(a1, a3, v17, 0);
  sub_D19C4(a1, a3, v8, 0xFFFFFFFC);
  sub_D19C4(a1, a3, v6, 0);
  sub_D19C4(a1, a3, v8, 0xFFFFFC00);
  sub_D19C4(a1, a3, v28, 0x32u);
  sub_D19C4(a1, a3, v7, 0xFFFFFFFu);
  sub_D19C4(a1, a3, v18, 0xF0000000);
  sub_D19C4(a1, a3, v8, 0xFFFFFFFu);
  sub_D19C4(a1, a3, v19, 0xF0000000);
  sub_D19C4(a1, a3, v7, 0xFFFFFFC0);
  sub_D19C4(a1, a3, v20, 0);
  sub_D19C4(a1, a3, v8, 0xFFFFFFC0);
  sub_D19C4(a1, a3, v21, 0);
  sub_D19C4(a1, a3, v7, 0xFFFFFFFu);
  sub_D19C4(a1, a3, v18, 0xF0000000);
  sub_D19C4(a1, a3, v8, 0xFFFFFFFu);
  sub_D19C4(a1, a3, v19, 0xF0000000);
  sub_D19C4(a1, a3, v7, 0xFFFFFFC0);
  sub_D19C4(a1, a3, v20, 1u);
  sub_D19C4(a1, a3, v8, 0xFFFFFFC0);
  sub_D19C4(a1, a3, v21, 1u);
  sub_D19C4(a1, a3, v8, 0xFFFFFFu);
  sub_D19C4(a1, a3, v22, 0xFF000000);
  sub_D19C4(a1, a3, v8, 0xFFFFFFFC);
  sub_D19C4(a1, a3, v23, 0);
  sub_D19C4(a1, a3, v8, 0xFFFFFFu);
  sub_D19C4(a1, a3, v22, 0);
  sub_D19C4(a1, a3, v8, 0xFFFFFFFC);
  sub_D19C4(a1, a3, v23, 0);
  sub_D19C4(a1, a3, v8, 0xFFFFF7FF);
  sub_D19C4(a1, a3, v29, 0x800u);
  sub_D19C4(a1, a3, v8, 0x7FFFFFFFu);
  sub_D19C4(a1, a3, v9, 0x80000000);
  sub_D19C4(a1, a3, v8, 0xFFFFFBFF);
  sub_D19C4(a1, a3, v24, 0x400u);
  sub_D19C4(a1, a3, v8, 0xDFFFFFFF);
  sub_D19C4(a1, a3, v9, 0x20000000u);
  sub_D19C4(a1, a3, v8, 0xFFFFFFFB);
  sub_D19C4(a1, a3, v15, 0);
  sub_D19C4(a1, a3, v8, 0x7FFFFFFFu);
  sub_D19C4(a1, a3, v30, 0x80000000);
  sub_D19C4(a1, a3, v8, 0xFFFBFFFF);
  sub_D19C4(a1, a3, v10, 0);
  sub_D19C4(a1, a3, v8, 0xFFFFFFFB);
  sub_D19C4(a1, a3, v10, 0);
  sub_D19C4(a1, a3, v8, 0x7FFFFFFFu);
  sub_D19C4(a1, a3, v9, 0);
  sub_D19C4(a1, a3, v8, 0xFFFFFBFF);
  sub_D19C4(a1, a3, v24, 0);
  sub_70324(a1, a3, 144, -7340033);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 3145728);
  sub_70324(a1, a3, 145, -2147450872);
  sub_70324(a1, a3, 144, -57345);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0x8000);
  sub_70324(a1, a3, 145, -2147450871);
  sub_D19C4(a1, a3, v8, 0xFBFFFFFF);
  sub_D19C4(a1, a3, v31, 0x4000000u);
  sub_70324(a1, a3, 144, -131073);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147450818);
  sub_D19C4(a1, a3, v8, 0xFFFBFFFF);
  sub_D19C4(a1, a3, v32, 0x40000u);
  sub_D19C4(a1, a3, v8, 0xFFFFFBFF);
  sub_D19C4(a1, a3, v33, 0x400u);
  sub_D19C4(a1, a3, v8, 0xFF7FFFFF);
  sub_D19C4(a1, a3, v34, 0x800000u);
  sub_D19C4(a1, a3, v8, 0xFFFFFFFu);
  sub_D19C4(a1, a3, v35, 0x60000000u);
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
  sub_70324(a1, a3, 144, 80);
  sub_70324(a1, a3, 145, -2147450786);
  sub_70324(a1, a3, 144, -258049);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 20480);
  sub_70324(a1, a3, 145, -2147450786);
  sub_70324(a1, a3, 144, -66060289);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 5242880);
  sub_70324(a1, a3, 145, -2147450786);
  sub_70324(a1, a3, 144, 0xFFFFFFF);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 1342177280);
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
  sub_70324(a1, a3, 144, 96);
  sub_70324(a1, a3, 145, -2147450878);
  sub_D19C4(a1, a3, v8, 0xFFFCFFFF);
  sub_D19C4(a1, a3, v11, 0);
  sub_D19C4(a1, a3, v8, 0xFFFFFFFC);
  sub_D19C4(a1, a3, v36, 0);
  sub_D19C4(a1, a3, v8, 0xFFFCFFFF);
  sub_D19C4(a1, a3, v36, 0x30000u);
  sub_D19C4(a1, a3, v8, 0xFFFCFFFF);
  sub_D19C4(a1, a3, v6, 0x30000u);
  sub_70324(a1, a3, 144, -786433);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147450818);
  sub_70324(a1, a3, 144, -8388609);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0x800000);
  sub_70324(a1, a3, 145, -2147450808);
  sub_70324(a1, a3, 144, -805306369);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0x10000000);
  sub_70324(a1, a3, 145, -2147450804);
  sub_70324(a1, a3, 144, -97);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 96);
  sub_70324(a1, a3, 145, -2147450868);
  sub_D19C4(a1, a3, v8, 0xFFFFCFFF);
  sub_D19C4(a1, a3, v37, 0x3000u);
  sub_D19C4(a1, a3, v8, 0xFFBFFFFF);
  sub_D19C4(a1, a3, v38, 0x400000u);
  sub_D19C4(a1, a3, v8, 0xFFFFFE0F);
  sub_D19C4(a1, a3, v39, 0x180u);
  sub_D19C4(a1, a3, v8, 0xFFFFFF1F);
  sub_D19C4(a1, a3, v40, 0);
  sub_D19C4(a1, a3, v8, 0xFFFF0FFF);
  sub_D19C4(a1, a3, v39, 0x4000u);
  sub_D19C4(a1, a3, v8, 0xFFFF7FFF);
  sub_D19C4(a1, a3, v41, 0x8000u);
  sub_D19C4(a1, a3, v8, 0xFFFEFFFF);
  sub_D19C4(a1, a3, v42, 0x10000u);
  sub_D19C4(a1, a3, v8, 0xFFFDFFFF);
  sub_D19C4(a1, a3, v42, 0x20000u);
  sub_D19C4(a1, a3, v8, 0xFFFF000F);
  sub_D19C4(a1, a3, v11, 0x8000u);
  sub_D19C4(a1, a3, v8, 0xFFFFFFF3);
  sub_D19C4(a1, a3, v43, 8u);
  sub_D19C4(a1, a3, v8, 0xFFFFF9FF);
  sub_D19C4(a1, a3, v44, 0x400u);
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
  sub_70324(a1, a3, 144, -28673);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 12288);
  sub_70324(a1, a3, 145, -2147450860);
  sub_D19C4(a1, a3, v8, 0);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147450879);
  sub_D19C4(a1, a3, v7, 0);
  sub_D19C4(a1, a3, v8, 0);
  return 0;
}
