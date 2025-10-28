int __fastcall SOC_16G_20210819_update(int a1, int a2, int a3, int a4)
{
  bool v4; // zf
  int v5; // r8
  int v6; // r8
  int v7; // r3
  int v8; // r1
  char v9; // r5
  int v11; // lr
  int v12; // r12
  int v13; // r10
  int v14; // r3
  int v15; // r1
  pthread_mutex_t *v16; // r0
  int v17; // r10
  int v18; // lr
  int v19; // r12
  int v20; // r3
  int v21; // r1
  int v22; // r7
  int v23; // r11
  int v24; // r6
  int v25; // r9
  int v27; // [sp+14h] [bp-1040h]
  int v28; // [sp+18h] [bp-103Ch]
  int v29; // [sp+1Ch] [bp-1038h]
  int v30; // [sp+20h] [bp-1034h]
  int v31; // [sp+24h] [bp-1030h]
  int v32; // [sp+28h] [bp-102Ch]
  int v33; // [sp+2Ch] [bp-1028h]
  int v34; // [sp+30h] [bp-1024h]
  int v35; // [sp+34h] [bp-1020h]
  int v36; // [sp+38h] [bp-101Ch]
  int v37; // [sp+40h] [bp-1014h]
  int v38; // [sp+44h] [bp-1010h]
  int v39; // [sp+48h] [bp-100Ch]
  int v40; // [sp+4Ch] [bp-1008h]
  char v41[4100]; // [sp+50h] [bp-1004h] BYREF

  v4 = a4 == 8;
  v5 = 61630;
  if ( a4 != 8 )
    v5 = 190;
  v38 = v5;
  v6 = 61564;
  if ( a4 != 8 )
    v6 = 124;
  v37 = v6;
  v7 = 61622;
  if ( v4 )
    v6 = 61442;
  else
    v7 = 182;
  v8 = 61566;
  if ( !v4 )
    v8 = 126;
  v9 = a3;
  if ( v4 )
    a3 = 61579;
  v11 = 61443;
  v12 = 61448;
  if ( !v4 )
  {
    v11 = 3;
    v12 = 8;
  }
  v13 = 61606;
  v34 = v7;
  if ( !v4 )
    v13 = 166;
  v33 = v8;
  v14 = 61514;
  v15 = 61458;
  if ( !v4 )
  {
    v14 = 74;
    v15 = 18;
  }
  LOWORD(v16) = -30172;
  if ( !v4 )
    a3 = 139;
  v39 = v13;
  HIWORD(v16) = 26;
  v17 = 61590;
  v36 = v11;
  if ( !v4 )
    v17 = 150;
  v18 = 61511;
  v35 = v12;
  if ( !v4 )
    v18 = 71;
  v19 = 61472;
  v32 = v14;
  if ( !v4 )
    v19 = 32;
  v20 = 61551;
  v31 = v15;
  if ( !v4 )
    v20 = 111;
  v21 = 61469;
  if ( !v4 )
  {
    v21 = 29;
    v6 = 2;
  }
  v22 = 61441;
  v30 = v19;
  if ( !v4 )
    v22 = 1;
  v29 = v18;
  v23 = 61580;
  v24 = 61550;
  if ( !v4 )
  {
    v23 = 140;
    v24 = 110;
  }
  v25 = 61466;
  v40 = a3;
  if ( !v4 )
    v25 = 26;
  v28 = v20;
  v27 = v21;
  pthread_mutex_lock(v16);
  logfmt_raw(v41, 0x1000u, 0, 1513720, "SOC_16G_20210819_update");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "SOC_16G_20210819_update",
    23,
    4005,
    60,
    v41);
  sub_BF774(a1, v9, v22, 0xDFFFFFFF);
  sub_BF774(a1, v9, v25, 0x20000000u);
  sub_BF774(a1, v9, v22, 0xFFFFFFFB);
  sub_BF774(a1, v9, v27, 0);
  sub_BF774(a1, v9, v22, 0x7FFFFFFFu);
  sub_BF774(a1, v9, v28, 0x80000000);
  sub_BF774(a1, v9, v22, 0xFFFBFFFF);
  sub_BF774(a1, v9, v24, 0);
  sub_BF774(a1, v9, v22, 0xFFFFFFFB);
  sub_BF774(a1, v9, v24, 0);
  sub_BF774(a1, v9, v22, 0x7FFFFFFFu);
  sub_BF774(a1, v9, v25, 0);
  sub_BF774(a1, v9, v22, 0xFFFFFBFF);
  sub_BF774(a1, v9, v29, 0);
  sub_DAF1C(a1, v9, 144, -7340033);
  sub_DAF1C(a1, v9, 145, -2147450879);
  sub_DAF1C(a1, v9, 144, 0x200000);
  sub_DAF1C(a1, v9, 145, -2147450872);
  sub_DAF1C(a1, v9, 144, -57345);
  sub_DAF1C(a1, v9, 145, -2147450879);
  sub_DAF1C(a1, v9, 144, 40960);
  sub_DAF1C(a1, v9, 145, -2147450871);
  sub_BF774(a1, v9, v22, 0xFBFFFFFF);
  sub_BF774(a1, v9, v30, 0x4000000u);
  sub_DAF1C(a1, v9, 144, -131073);
  sub_DAF1C(a1, v9, 145, -2147450879);
  sub_DAF1C(a1, v9, 144, 0);
  sub_DAF1C(a1, v9, 145, -2147450818);
  sub_BF774(a1, v9, v22, 0xFFFBFFFF);
  sub_BF774(a1, v9, v31, 0x40000u);
  sub_BF774(a1, v9, v22, 0xFFFFFBFF);
  sub_BF774(a1, v9, v32, 0x400u);
  sub_BF774(a1, v9, v22, 0xFF7FFFFF);
  sub_BF774(a1, v9, v33, 0x800000u);
  sub_BF774(a1, v9, v22, 0xFFFFFFFu);
  sub_BF774(a1, v9, v34, 0x60000000u);
  sub_DAF1C(a1, v9, 144, -1009);
  sub_DAF1C(a1, v9, 145, -2147450879);
  sub_DAF1C(a1, v9, 144, 576);
  sub_DAF1C(a1, v9, 145, -2147450787);
  sub_DAF1C(a1, v9, 144, -258049);
  sub_DAF1C(a1, v9, 145, -2147450879);
  sub_DAF1C(a1, v9, 144, 147456);
  sub_DAF1C(a1, v9, 145, -2147450787);
  sub_DAF1C(a1, v9, 144, -66060289);
  sub_DAF1C(a1, v9, 145, -2147450879);
  sub_DAF1C(a1, v9, 144, 37748736);
  sub_DAF1C(a1, v9, 145, -2147450787);
  sub_DAF1C(a1, v9, 144, 0xFFFFFFF);
  sub_DAF1C(a1, v9, 145, -2147450879);
  sub_DAF1C(a1, v9, 144, 0x40000000);
  sub_DAF1C(a1, v9, 145, -2147450787);
  sub_DAF1C(a1, v9, 144, -4);
  sub_DAF1C(a1, v9, 145, -2147450879);
  sub_DAF1C(a1, v9, 144, 2);
  sub_DAF1C(a1, v9, 145, -2147450786);
  sub_DAF1C(a1, v9, 144, -1009);
  sub_DAF1C(a1, v9, 145, -2147450879);
  sub_DAF1C(a1, v9, 144, 64);
  sub_DAF1C(a1, v9, 145, -2147450786);
  sub_DAF1C(a1, v9, 144, -258049);
  sub_DAF1C(a1, v9, 145, -2147450879);
  sub_DAF1C(a1, v9, 144, 0x4000);
  sub_DAF1C(a1, v9, 145, -2147450786);
  sub_DAF1C(a1, v9, 144, -66060289);
  sub_DAF1C(a1, v9, 145, -2147450879);
  sub_DAF1C(a1, v9, 144, 0x400000);
  sub_DAF1C(a1, v9, 145, -2147450786);
  sub_DAF1C(a1, v9, 144, 0xFFFFFFF);
  sub_DAF1C(a1, v9, 145, -2147450879);
  sub_DAF1C(a1, v9, 144, 0x40000000);
  sub_DAF1C(a1, v9, 145, -2147450786);
  sub_DAF1C(a1, v9, 144, -4);
  sub_DAF1C(a1, v9, 145, -2147450879);
  sub_DAF1C(a1, v9, 144, 0);
  sub_DAF1C(a1, v9, 145, -2147450785);
  sub_DAF1C(a1, v9, 144, -1009);
  sub_DAF1C(a1, v9, 145, -2147450879);
  sub_DAF1C(a1, v9, 144, 32);
  sub_DAF1C(a1, v9, 145, -2147450878);
  sub_BF774(a1, v9, v22, 0xFFFCFFFF);
  sub_BF774(a1, v9, v6, 0);
  sub_BF774(a1, v9, v22, 0xFFFFFFFC);
  sub_BF774(a1, v9, v35, 0);
  sub_BF774(a1, v9, v22, 0xFFFCFFFF);
  sub_BF774(a1, v9, v35, 0x10000u);
  sub_BF774(a1, v9, v22, 0xFFFCFFFF);
  sub_BF774(a1, v9, v36, 0x10000u);
  sub_DAF1C(a1, v9, 144, -786433);
  sub_DAF1C(a1, v9, 145, -2147450879);
  sub_DAF1C(a1, v9, 144, 786432);
  sub_DAF1C(a1, v9, 145, -2147450818);
  sub_DAF1C(a1, v9, 144, -8388609);
  sub_DAF1C(a1, v9, 145, -2147450879);
  sub_DAF1C(a1, v9, 144, 0x800000);
  sub_DAF1C(a1, v9, 145, -2147450808);
  sub_DAF1C(a1, v9, 144, -805306369);
  sub_DAF1C(a1, v9, 145, -2147450879);
  sub_DAF1C(a1, v9, 144, 805306368);
  sub_DAF1C(a1, v9, 145, -2147450804);
  sub_BF774(a1, v9, v22, 0xFFFFCFFF);
  sub_BF774(a1, v9, v17, 0x1000u);
  sub_BF774(a1, v9, v22, 0xFFBFFFFF);
  sub_BF774(a1, v9, v37, 0x400000u);
  sub_BF774(a1, v9, v22, 0xFFFFFE0F);
  sub_BF774(a1, v9, v38, 0x180u);
  sub_BF774(a1, v9, v22, 0xFFFFFF1F);
  sub_BF774(a1, v9, v39, 0);
  sub_BF774(a1, v9, v22, 0xFFFF0FFF);
  sub_BF774(a1, v9, v38, 0);
  sub_BF774(a1, v9, v22, 0xFFFF7FFF);
  sub_BF774(a1, v9, v40, 0x8000u);
  sub_BF774(a1, v9, v22, 0xFFFEFFFF);
  sub_BF774(a1, v9, v23, 0x10000u);
  sub_BF774(a1, v9, v22, 0xFFFDFFFF);
  sub_BF774(a1, v9, v23, 0x20000u);
  sub_BF774(a1, v9, v22, 0xFFFF000F);
  sub_BF774(a1, v9, v6, 0x8000u);
  sub_DAF1C(a1, v9, 144, -2);
  sub_DAF1C(a1, v9, 145, -2147450879);
  sub_DAF1C(a1, v9, 144, 0);
  sub_DAF1C(a1, v9, 145, -2147450878);
  sub_BF774(a1, v9, v22, 0xFFFFFFFC);
  sub_BF774(a1, v9, v6, 2u);
  sub_BF774(a1, v9, v22, 0);
  sub_DAF1C(a1, v9, 144, 0);
  sub_DAF1C(a1, v9, 145, -2147450879);
  return 0;
}
