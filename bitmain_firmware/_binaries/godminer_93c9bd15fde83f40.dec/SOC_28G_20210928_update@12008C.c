int __fastcall SOC_28G_20210928_update(int a1, int a2, int a3, int a4)
{
  unsigned __int16 v7; // r3
  int v8; // r6
  int v9; // r11
  int v10; // r7
  int v11; // r10
  int v12; // r9
  int v13; // r8
  int v15; // [sp+14h] [bp-1088h]
  int v16; // [sp+18h] [bp-1084h]
  int v17; // [sp+1Ch] [bp-1080h]
  int v18; // [sp+20h] [bp-107Ch]
  int v19; // [sp+24h] [bp-1078h]
  int v20; // [sp+28h] [bp-1074h]
  int v21; // [sp+2Ch] [bp-1070h]
  int v22; // [sp+30h] [bp-106Ch]
  int v23; // [sp+34h] [bp-1068h]
  int v24; // [sp+38h] [bp-1064h]
  int v25; // [sp+3Ch] [bp-1060h]
  int v26; // [sp+40h] [bp-105Ch]
  int v27; // [sp+44h] [bp-1058h]
  int v28; // [sp+48h] [bp-1054h]
  int v29; // [sp+4Ch] [bp-1050h]
  int v30; // [sp+50h] [bp-104Ch]
  int v31; // [sp+54h] [bp-1048h]
  int v32; // [sp+58h] [bp-1044h]
  int v33; // [sp+5Ch] [bp-1040h]
  int v34; // [sp+60h] [bp-103Ch]
  int v35; // [sp+64h] [bp-1038h]
  int v36; // [sp+68h] [bp-1034h]
  int v37; // [sp+6Ch] [bp-1030h]
  int v38; // [sp+70h] [bp-102Ch]
  int v39; // [sp+74h] [bp-1028h]
  int v40; // [sp+78h] [bp-1024h]
  int v41; // [sp+7Ch] [bp-1020h]
  int v42; // [sp+80h] [bp-101Ch]
  int v43; // [sp+84h] [bp-1018h]
  int v44; // [sp+88h] [bp-1014h]
  int v45; // [sp+8Ch] [bp-1010h]
  int v46; // [sp+90h] [bp-100Ch]
  int v47; // [sp+94h] [bp-1008h]
  char v48[4100]; // [sp+98h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v48, 0x1000u, 0, 1513544, "SOC_28G_20210928_update", a3);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "SOC_28G_20210928_update",
    23,
    7134,
    60,
    v48);
  if ( a4 == 8 )
  {
    v45 = 61542;
    v46 = 61495;
    v38 = 61512;
    v39 = 61446;
    v47 = 61497;
    v34 = 61606;
    v35 = 61579;
    v30 = 61443;
    v31 = 61590;
    v27 = 61566;
    v28 = 61622;
    v25 = 61458;
    v26 = 61514;
    v40 = 61492;
    v23 = 61511;
    v24 = 61472;
    v43 = 61447;
    v44 = 61541;
    v21 = 61466;
    v22 = 61469;
    v29 = 61448;
    v36 = 61580;
    v37 = 61545;
    v18 = 61487;
    v19 = 61488;
    v20 = 61467;
    v41 = 61494;
    v42 = 61510;
    v13 = 61496;
    v32 = 61564;
    v33 = 61630;
    v12 = 61493;
    v11 = 61490;
    v10 = 61442;
    v15 = 61465;
    v9 = 61550;
    v16 = 61551;
    v17 = 61482;
    v8 = 61441;
  }
  else
  {
    v7 = (_WORD)a4 << 12;
    v16 = (unsigned __int16)((_WORD)a4 << 12) | 0x6F;
    v17 = (unsigned __int16)((_WORD)a4 << 12) | 0x2A;
    v18 = (unsigned __int16)((_WORD)a4 << 12) | 0x2F;
    v8 = (unsigned __int16)((_WORD)a4 << 12) | 1;
    v19 = v7 | 0x30;
    v9 = v7 | 0x6E;
    v15 = v7 | 0x19;
    v10 = v7 | 2;
    v11 = v7 | 0x32;
    v20 = v7 | 0x1B;
    v12 = v7 | 0x35;
    v13 = v7 | 0x38;
    v21 = v7 | 0x1A;
    v22 = v7 | 0x1D;
    v23 = v7 | 0x47;
    v24 = v7 | 0x20;
    v25 = v7 | 0x12;
    v26 = v7 | 0x4A;
    v27 = v7 | 0x7E;
    v28 = v7 | 0xB6;
    v29 = v7 | 8;
    v30 = v7 | 3;
    v31 = v7 | 0x96;
    v32 = v7 | 0x7C;
    v33 = v7 | 0xBE;
    v34 = v7 | 0xA6;
    v35 = v7 | 0x8B;
    v47 = v7 | 0x39;
    v36 = v7 | 0x8C;
    v37 = v7 | 0x69;
    v38 = v7 | 0x48;
    v39 = v7 | 6;
    v40 = v7 | 0x34;
    v41 = v7 | 0x36;
    v42 = v7 | 0x46;
    v43 = v7 | 7;
    v44 = v7 | 0x65;
    v45 = v7 | 0x66;
    v46 = v7 | 0x37;
  }
  sub_BF774(a1, a3, v8, 0xFFFFFFF7);
  sub_BF774(a1, a3, v9, 0);
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
  sub_BF774(a1, a3, v8, 0xFFFFFFFD);
  sub_BF774(a1, a3, v9, 0);
  sub_BF774(a1, a3, v8, 0x7FFFFFFFu);
  sub_BF774(a1, a3, v16, 0x80000000);
  sub_BF774(a1, a3, v8, 0xFFFBFFFF);
  sub_BF774(a1, a3, v9, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFFFB);
  sub_BF774(a1, a3, v9, 0);
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
  sub_BF774(a1, a3, v8, 0xFFFFFC00);
  sub_BF774(a1, a3, v17, 0x32u);
  sub_BF774(a1, a3, v8, 0xFFFFFFu);
  sub_BF774(a1, a3, v18, 0x32000000u);
  sub_BF774(a1, a3, v8, 0xFFFFFFFC);
  sub_BF774(a1, a3, v19, 0);
  sub_BF774(a1, a3, v8, 0xFFFFF7FF);
  sub_BF774(a1, a3, v15, 0);
  sub_BF774(a1, a3, v8, 0xFFDFFFFF);
  sub_BF774(a1, a3, v20, 0);
  sub_BF774(a1, a3, v8, 0xDFFFFFFF);
  sub_BF774(a1, a3, v21, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFFFB);
  sub_BF774(a1, a3, v22, 4u);
  sub_BF774(a1, a3, v8, 0x7FFFFFFFu);
  sub_BF774(a1, a3, v21, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFBFF);
  sub_BF774(a1, a3, v23, 0);
  sub_DAF1C(a1, a3, 144, -7340033);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0x200000);
  sub_DAF1C(a1, a3, 145, -2147450872);
  sub_DAF1C(a1, a3, 144, -57345);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 40960);
  sub_DAF1C(a1, a3, 145, -2147450871);
  sub_BF774(a1, a3, v8, 0xFBFFFFFF);
  sub_BF774(a1, a3, v24, 0x4000000u);
  sub_DAF1C(a1, a3, 144, -131073);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450818);
  sub_BF774(a1, a3, v8, 0xFFFBFFFF);
  sub_BF774(a1, a3, v25, 0x40000u);
  sub_BF774(a1, a3, v8, 0xFFFFFBFF);
  sub_BF774(a1, a3, v26, 0x400u);
  sub_BF774(a1, a3, v8, 0xFF7FFFFF);
  sub_BF774(a1, a3, v27, 0x800000u);
  sub_BF774(a1, a3, v8, 0xFFFFFFFu);
  sub_BF774(a1, a3, v28, 0x60000000u);
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
  sub_BF774(a1, a3, v8, 0xFFFCFFFF);
  sub_BF774(a1, a3, v10, 0x10000u);
  sub_BF774(a1, a3, v8, 0xFFFFFFFC);
  sub_BF774(a1, a3, v29, 1u);
  sub_BF774(a1, a3, v8, 0xFFFCFFFF);
  sub_BF774(a1, a3, v29, 0x30000u);
  sub_BF774(a1, a3, v8, 0xFFFCFFFF);
  sub_BF774(a1, a3, v30, 0x30000u);
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
  sub_BF774(a1, a3, v31, 0x3000u);
  sub_BF774(a1, a3, v8, 0xFFBFFFFF);
  sub_BF774(a1, a3, v32, 0x400000u);
  sub_BF774(a1, a3, v8, 0xFFFFFE0F);
  sub_BF774(a1, a3, v33, 0x180u);
  sub_BF774(a1, a3, v8, 0xFFFFFF1F);
  sub_BF774(a1, a3, v34, 0);
  sub_BF774(a1, a3, v8, 0xFFFF0FFF);
  sub_BF774(a1, a3, v33, 0x6000u);
  sub_BF774(a1, a3, v8, 0xFFFF7FFF);
  sub_BF774(a1, a3, v35, 0x8000u);
  sub_BF774(a1, a3, v8, 0xFFFEFFFF);
  sub_BF774(a1, a3, v36, 0x10000u);
  sub_BF774(a1, a3, v8, 0xFFFDFFFF);
  sub_BF774(a1, a3, v36, 0x20000u);
  sub_BF774(a1, a3, v8, 0xFFFF000F);
  sub_BF774(a1, a3, v10, 0x8000u);
  sub_BF774(a1, a3, v8, 0xFFFFFFF3);
  sub_BF774(a1, a3, v37, 8u);
  sub_BF774(a1, a3, v8, 0xFFFFF9FF);
  sub_BF774(a1, a3, v38, 0x400u);
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
  sub_BF774(a1, a3, v8, 0xFFFFFF0F);
  sub_BF774(a1, a3, v39, 0x60u);
  sub_BF774(a1, a3, v8, 0xFFFFFFFC);
  sub_BF774(a1, a3, v10, 2u);
  sub_BF774(a1, a3, v8, 0xFFFFFFFC);
  sub_BF774(a1, a3, v15, 2u);
  sub_BF774(a1, a3, v8, 0xFFFFDFFF);
  sub_BF774(a1, a3, v11, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFBFF);
  sub_BF774(a1, a3, v40, 0);
  sub_BF774(a1, a3, v8, 0xFFFFFFF7);
  sub_BF774(a1, a3, v12, 8u);
  sub_BF774(a1, a3, v8, 0xF7FFFFFF);
  sub_BF774(a1, a3, v41, 0x8000000u);
  sub_BF774(a1, a3, v8, 0xFFFFFFFE);
  sub_BF774(a1, a3, v42, 0);
  sub_BF774(a1, a3, v8, 0xFFCFFFFF);
  sub_BF774(a1, a3, v43, 0x200000u);
  sub_BF774(a1, a3, v8, 0xFFFFFFFu);
  sub_BF774(a1, a3, v44, 0xF0000000);
  sub_BF774(a1, a3, v8, 0xFFFFFFF0);
  sub_BF774(a1, a3, v45, 8u);
  sub_BF774(a1, a3, v8, 0xF1FFFFFF);
  sub_BF774(a1, a3, v46, 0x8000000u);
  sub_BF774(a1, a3, v8, 0xFFFFFFF8);
  sub_BF774(a1, a3, v13, 6u);
  sub_BF774(a1, a3, v8, 0xFFFFF8FF);
  sub_BF774(a1, a3, v13, 0x300u);
  sub_BF774(a1, a3, v8, 0xFFF8FFFF);
  sub_BF774(a1, a3, v13, 0x60000u);
  sub_BF774(a1, a3, v8, 0xF8FFFFFF);
  sub_BF774(a1, a3, v13, 0x2000000u);
  sub_BF774(a1, a3, v8, 0xFFFFFFF8);
  sub_BF774(a1, a3, v47, 6u);
  sub_BF774(a1, a3, v8, 0xFF7FFFFF);
  sub_BF774(a1, a3, v11, 0x800000u);
  sub_BF774(a1, a3, v8, 0xFFFFF7FF);
  sub_BF774(a1, a3, v12, 0x800u);
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
