int __fastcall SOC_32G_20210817_update(int a1, int a2, int a3, int a4)
{
  bool v4; // zf
  char v5; // r5
  int v6; // r12
  int v7; // r1
  int v8; // r3
  int v9; // r10
  int v11; // lr
  int v12; // r10
  int v13; // r12
  int v14; // r3
  int v15; // r1
  pthread_mutex_t *v16; // r0
  int v17; // r10
  int v18; // lr
  int v19; // r3
  int v20; // r1
  int v21; // r12
  int v22; // r7
  int v23; // r11
  int v24; // r8
  int v25; // r6
  int v26; // r9
  int v28; // [sp+14h] [bp-1040h]
  int v29; // [sp+18h] [bp-103Ch]
  int v30; // [sp+1Ch] [bp-1038h]
  int v31; // [sp+20h] [bp-1034h]
  int v32; // [sp+24h] [bp-1030h]
  int v33; // [sp+28h] [bp-102Ch]
  int v34; // [sp+2Ch] [bp-1028h]
  int v35; // [sp+30h] [bp-1024h]
  int v36; // [sp+34h] [bp-1020h]
  int v37; // [sp+38h] [bp-101Ch]
  int v38; // [sp+3Ch] [bp-1018h]
  int v39; // [sp+44h] [bp-1010h]
  int v40; // [sp+48h] [bp-100Ch]
  int v41; // [sp+4Ch] [bp-1008h]
  char v42[4100]; // [sp+50h] [bp-1004h] BYREF

  v4 = a4 == 8;
  v5 = a3;
  v6 = 61448;
  if ( a4 == 8 )
    a3 = 61579;
  else
    v6 = 8;
  v7 = 61442;
  v8 = 61622;
  if ( !v4 )
  {
    v7 = 2;
    v8 = 182;
  }
  v9 = 61606;
  if ( !v4 )
    v9 = 166;
  v11 = 61443;
  v40 = v9;
  if ( !v4 )
    v11 = 3;
  v12 = 61564;
  v37 = v6;
  if ( !v4 )
    v12 = 124;
  v36 = v7;
  v13 = 61458;
  v35 = v8;
  if ( !v4 )
    v13 = 18;
  v14 = 61566;
  v15 = 61514;
  if ( !v4 )
  {
    v14 = 126;
    v15 = 74;
  }
  LOWORD(v16) = -30172;
  if ( !v4 )
    a3 = 139;
  v39 = v12;
  HIWORD(v16) = 26;
  v17 = 61590;
  v38 = v11;
  if ( !v4 )
    v17 = 150;
  v18 = 61472;
  v34 = v14;
  if ( !v4 )
    v18 = 32;
  v19 = 61511;
  v33 = v15;
  if ( !v4 )
    v19 = 71;
  v20 = 61551;
  v32 = v13;
  if ( !v4 )
    v20 = 111;
  v21 = 61469;
  if ( !v4 )
    v21 = 29;
  v22 = 61441;
  v31 = v18;
  if ( !v4 )
    v22 = 1;
  v28 = v21;
  v23 = 61580;
  v24 = 61630;
  if ( !v4 )
  {
    v23 = 140;
    v24 = 190;
  }
  v25 = 61550;
  v26 = 61466;
  if ( !v4 )
  {
    v25 = 110;
    v26 = 26;
  }
  v41 = a3;
  v30 = v19;
  v29 = v20;
  pthread_mutex_lock(v16);
  logfmt_raw(v42, 0x1000u, 0, "%s ...", "SOC_32G_20210817_update");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "SOC_32G_20210817_update",
    23,
    6404,
    60,
    v42);
  sub_BF774(a1, v5, v22, 0xDFFFFFFF);
  sub_BF774(a1, v5, v26, 0x20000000u);
  sub_BF774(a1, v5, v22, 0xFFFFFFFB);
  sub_BF774(a1, v5, v28, 0);
  sub_BF774(a1, v5, v22, 0x7FFFFFFFu);
  sub_BF774(a1, v5, v29, 0x80000000);
  sub_BF774(a1, v5, v22, 0xFFFBFFFF);
  sub_BF774(a1, v5, v25, 0);
  sub_BF774(a1, v5, v22, 0xFFFFFFFB);
  sub_BF774(a1, v5, v25, 0);
  sub_BF774(a1, v5, v22, 0x7FFFFFFFu);
  sub_BF774(a1, v5, v26, 0);
  sub_BF774(a1, v5, v22, 0xFFFFFBFF);
  sub_BF774(a1, v5, v30, 0);
  sub_DAF1C(a1, v5, 144, -7340033);
  sub_DAF1C(a1, v5, 145, -2147450879);
  sub_DAF1C(a1, v5, 144, 0x200000);
  sub_DAF1C(a1, v5, 145, -2147450872);
  sub_DAF1C(a1, v5, 144, -57345);
  sub_DAF1C(a1, v5, 145, -2147450879);
  sub_DAF1C(a1, v5, 144, 40960);
  sub_DAF1C(a1, v5, 145, -2147450871);
  sub_BF774(a1, v5, v22, 0xFBFFFFFF);
  sub_BF774(a1, v5, v31, 0x4000000u);
  sub_DAF1C(a1, v5, 144, -131073);
  sub_DAF1C(a1, v5, 145, -2147450879);
  sub_DAF1C(a1, v5, 144, 0);
  sub_DAF1C(a1, v5, 145, -2147450818);
  sub_BF774(a1, v5, v22, 0xFFFBFFFF);
  sub_BF774(a1, v5, v32, 0x40000u);
  sub_BF774(a1, v5, v22, 0xFFFFFBFF);
  sub_BF774(a1, v5, v33, 0x400u);
  sub_BF774(a1, v5, v22, 0xFF7FFFFF);
  sub_BF774(a1, v5, v34, 0x800000u);
  sub_BF774(a1, v5, v22, 0xFFFFFFFu);
  sub_BF774(a1, v5, v35, 0x60000000u);
  sub_DAF1C(a1, v5, 144, -1009);
  sub_DAF1C(a1, v5, 145, -2147450879);
  sub_DAF1C(a1, v5, 144, 576);
  sub_DAF1C(a1, v5, 145, -2147450787);
  sub_DAF1C(a1, v5, 144, -258049);
  sub_DAF1C(a1, v5, 145, -2147450879);
  sub_DAF1C(a1, v5, 144, 147456);
  sub_DAF1C(a1, v5, 145, -2147450787);
  sub_DAF1C(a1, v5, 144, -66060289);
  sub_DAF1C(a1, v5, 145, -2147450879);
  sub_DAF1C(a1, v5, 144, 37748736);
  sub_DAF1C(a1, v5, 145, -2147450787);
  sub_DAF1C(a1, v5, 144, 0xFFFFFFF);
  sub_DAF1C(a1, v5, 145, -2147450879);
  sub_DAF1C(a1, v5, 144, 0x40000000);
  sub_DAF1C(a1, v5, 145, -2147450787);
  sub_DAF1C(a1, v5, 144, -4);
  sub_DAF1C(a1, v5, 145, -2147450879);
  sub_DAF1C(a1, v5, 144, 2);
  sub_DAF1C(a1, v5, 145, -2147450786);
  sub_DAF1C(a1, v5, 144, -1009);
  sub_DAF1C(a1, v5, 145, -2147450879);
  sub_DAF1C(a1, v5, 144, 64);
  sub_DAF1C(a1, v5, 145, -2147450786);
  sub_DAF1C(a1, v5, 144, -258049);
  sub_DAF1C(a1, v5, 145, -2147450879);
  sub_DAF1C(a1, v5, 144, 0x4000);
  sub_DAF1C(a1, v5, 145, -2147450786);
  sub_DAF1C(a1, v5, 144, -66060289);
  sub_DAF1C(a1, v5, 145, -2147450879);
  sub_DAF1C(a1, v5, 144, 0x400000);
  sub_DAF1C(a1, v5, 145, -2147450786);
  sub_DAF1C(a1, v5, 144, 0xFFFFFFF);
  sub_DAF1C(a1, v5, 145, -2147450879);
  sub_DAF1C(a1, v5, 144, 0x40000000);
  sub_DAF1C(a1, v5, 145, -2147450786);
  sub_DAF1C(a1, v5, 144, -4);
  sub_DAF1C(a1, v5, 145, -2147450879);
  sub_DAF1C(a1, v5, 144, 0);
  sub_DAF1C(a1, v5, 145, -2147450785);
  sub_DAF1C(a1, v5, 144, -1009);
  sub_DAF1C(a1, v5, 145, -2147450879);
  sub_DAF1C(a1, v5, 144, 96);
  sub_DAF1C(a1, v5, 145, -2147450878);
  sub_BF774(a1, v5, v22, 0xFFFCFFFF);
  sub_BF774(a1, v5, v36, 0);
  sub_BF774(a1, v5, v22, 0xFFFFFFFC);
  sub_BF774(a1, v5, v37, 0);
  sub_BF774(a1, v5, v22, 0xFFFCFFFF);
  sub_BF774(a1, v5, v37, 0x30000u);
  sub_BF774(a1, v5, v22, 0xFFFCFFFF);
  sub_BF774(a1, v5, v38, 0x30000u);
  sub_DAF1C(a1, v5, 144, -786433);
  sub_DAF1C(a1, v5, 145, -2147450879);
  sub_DAF1C(a1, v5, 144, 0);
  sub_DAF1C(a1, v5, 145, -2147450818);
  sub_DAF1C(a1, v5, 144, -8388609);
  sub_DAF1C(a1, v5, 145, -2147450879);
  sub_DAF1C(a1, v5, 144, 0x800000);
  sub_DAF1C(a1, v5, 145, -2147450808);
  sub_DAF1C(a1, v5, 144, -805306369);
  sub_DAF1C(a1, v5, 145, -2147450879);
  sub_DAF1C(a1, v5, 144, 0x10000000);
  sub_DAF1C(a1, v5, 145, -2147450804);
  sub_DAF1C(a1, v5, 144, -97);
  sub_DAF1C(a1, v5, 145, -2147450879);
  sub_DAF1C(a1, v5, 144, 96);
  sub_DAF1C(a1, v5, 145, -2147450868);
  sub_BF774(a1, v5, v22, 0xFFFFCFFF);
  sub_BF774(a1, v5, v17, 0x3000u);
  sub_BF774(a1, v5, v22, 0xFFBFFFFF);
  sub_BF774(a1, v5, v39, 0x400000u);
  sub_BF774(a1, v5, v22, 0xFFFFFE0F);
  sub_BF774(a1, v5, v24, 0x180u);
  sub_BF774(a1, v5, v22, 0xFFFFFF1F);
  sub_BF774(a1, v5, v40, 0);
  sub_BF774(a1, v5, v22, 0xFFFF0FFF);
  sub_BF774(a1, v5, v24, 0x4000u);
  sub_BF774(a1, v5, v22, 0xFFFF7FFF);
  sub_BF774(a1, v5, v41, 0x8000u);
  sub_BF774(a1, v5, v22, 0xFFFEFFFF);
  sub_BF774(a1, v5, v23, 0x10000u);
  sub_BF774(a1, v5, v22, 0xFFFDFFFF);
  sub_BF774(a1, v5, v23, 0x20000u);
  sub_BF774(a1, v5, v22, 0xFFFF000F);
  sub_BF774(a1, v5, v36, 0x8000u);
  sub_BF774(a1, v5, v22, 0);
  sub_DAF1C(a1, v5, 144, 0);
  sub_DAF1C(a1, v5, 145, -2147450879);
  return 0;
}
