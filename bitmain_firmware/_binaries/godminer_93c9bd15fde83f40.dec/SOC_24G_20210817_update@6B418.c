int __fastcall SOC_24G_20210817_update(int a1, int a2, char a3, int a4)
{
  bool v4; // zf
  int v5; // r12
  int v6; // r1
  int v7; // r10
  int v8; // lr
  int v9; // r3
  int v10; // r12
  int v11; // r1
  int v13; // r10
  int v14; // r3
  int v15; // r1
  int v16; // lr
  pthread_mutex_t *v17; // r0
  int v19; // r2
  int v20; // r1
  int v21; // r12
  int v22; // r10
  int v23; // r3
  int v24; // lr
  int v25; // r7
  int v26; // r11
  int v27; // r6
  int v28; // r8
  int v29; // r9
  int v31; // [sp+14h] [bp-1048h]
  int v32; // [sp+18h] [bp-1044h]
  int v33; // [sp+1Ch] [bp-1040h]
  int v34; // [sp+20h] [bp-103Ch]
  int v35; // [sp+24h] [bp-1038h]
  int v36; // [sp+28h] [bp-1034h]
  int v37; // [sp+2Ch] [bp-1030h]
  int v38; // [sp+30h] [bp-102Ch]
  int v39; // [sp+34h] [bp-1028h]
  int v40; // [sp+38h] [bp-1024h]
  int v41; // [sp+3Ch] [bp-1020h]
  int v42; // [sp+40h] [bp-101Ch]
  int v43; // [sp+44h] [bp-1018h]
  int v44; // [sp+4Ch] [bp-1010h]
  int v45; // [sp+50h] [bp-100Ch]
  int v46; // [sp+54h] [bp-1008h]
  char v47[4100]; // [sp+58h] [bp-1004h] BYREF

  v4 = a4 == 8;
  v5 = 61590;
  if ( a4 != 8 )
    v5 = 150;
  v6 = 61443;
  if ( a4 != 8 )
    v6 = 3;
  v7 = 61535;
  v8 = 61564;
  if ( a4 != 8 )
  {
    v7 = 95;
    v8 = 124;
  }
  v9 = 61448;
  v42 = v5;
  if ( !v4 )
    v9 = 8;
  v41 = v6;
  v10 = 61514;
  v11 = 61566;
  if ( !v4 )
  {
    v10 = 74;
    v11 = 126;
  }
  v45 = v7;
  v43 = v8;
  v13 = 61579;
  v40 = v9;
  if ( !v4 )
    v13 = 139;
  v14 = 61622;
  v38 = v11;
  if ( !v4 )
    v14 = 182;
  v15 = 61511;
  v37 = v10;
  if ( !v4 )
    v15 = 71;
  v16 = 61458;
  if ( !v4 )
    v16 = 18;
  LOWORD(v17) = -30172;
  v34 = v15;
  v19 = 61536;
  if ( v4 )
  {
    v20 = 61550;
  }
  else
  {
    v19 = 96;
    v20 = 110;
  }
  v21 = 61551;
  v44 = v13;
  if ( !v4 )
    v21 = 111;
  v22 = 61606;
  v39 = v14;
  if ( !v4 )
    v22 = 166;
  v23 = 61472;
  v36 = v16;
  if ( !v4 )
    v23 = 32;
  v24 = 61469;
  HIWORD(v17) = 26;
  if ( !v4 )
    v24 = 29;
  v25 = 61441;
  v32 = v21;
  if ( !v4 )
    v25 = 1;
  v31 = v24;
  v26 = 61580;
  v27 = 61630;
  if ( !v4 )
  {
    v26 = 140;
    v27 = 190;
  }
  v28 = 61442;
  v29 = 61466;
  if ( !v4 )
  {
    v28 = 2;
    v29 = 26;
  }
  v46 = v19;
  v35 = v23;
  v33 = v20;
  pthread_mutex_lock(v17);
  logfmt_raw(v47, 0x1000u, 0, "%s ...", "SOC_24G_20210817_update");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "SOC_24G_20210817_update",
    23,
    4139,
    60,
    v47);
  sub_BF774(a1, a3, v25, 0xDFFFFFFF);
  sub_BF774(a1, a3, v29, 0x20000000u);
  sub_BF774(a1, a3, v25, 0xFFFFFFFB);
  sub_BF774(a1, a3, v31, 0);
  sub_BF774(a1, a3, v25, 0x7FFFFFFFu);
  sub_BF774(a1, a3, v32, 0x80000000);
  sub_BF774(a1, a3, v25, 0xFFFBFFFF);
  sub_BF774(a1, a3, v33, 0);
  sub_BF774(a1, a3, v25, 0xFFFFFFFB);
  sub_BF774(a1, a3, v33, 0);
  sub_BF774(a1, a3, v25, 0x7FFFFFFFu);
  sub_BF774(a1, a3, v29, 0);
  sub_BF774(a1, a3, v25, 0xFFFFFBFF);
  sub_BF774(a1, a3, v34, 0);
  sub_DAF1C(a1, a3, 144, -7340033);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0x200000);
  sub_DAF1C(a1, a3, 145, -2147450872);
  sub_DAF1C(a1, a3, 144, -57345);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 40960);
  sub_DAF1C(a1, a3, 145, -2147450871);
  sub_BF774(a1, a3, v25, 0xFBFFFFFF);
  sub_BF774(a1, a3, v35, 0x4000000u);
  sub_DAF1C(a1, a3, 144, -131073);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450818);
  sub_BF774(a1, a3, v25, 0xFFFBFFFF);
  sub_BF774(a1, a3, v36, 0x40000u);
  sub_BF774(a1, a3, v25, 0xFFFFFBFF);
  sub_BF774(a1, a3, v37, 0x400u);
  sub_BF774(a1, a3, v25, 0xFF7FFFFF);
  sub_BF774(a1, a3, v38, 0x800000u);
  sub_BF774(a1, a3, v25, 0xFFFFFFFu);
  sub_BF774(a1, a3, v39, 0x60000000u);
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
  sub_DAF1C(a1, a3, 144, -1009);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 64);
  sub_DAF1C(a1, a3, 145, -2147450878);
  sub_BF774(a1, a3, v25, 0xFFFCFFFF);
  sub_BF774(a1, a3, v28, 0x20000u);
  sub_BF774(a1, a3, v25, 0xFFFFFFFC);
  sub_BF774(a1, a3, v40, 2u);
  sub_BF774(a1, a3, v25, 0xFFFCFFFF);
  sub_BF774(a1, a3, v40, 0x30000u);
  sub_BF774(a1, a3, v25, 0xFFFCFFFF);
  sub_BF774(a1, a3, v41, 0x30000u);
  sub_DAF1C(a1, a3, 144, -786433);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 786432);
  sub_DAF1C(a1, a3, 145, -2147450818);
  sub_DAF1C(a1, a3, 144, -8388609);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 0x800000);
  sub_DAF1C(a1, a3, 145, -2147450808);
  sub_DAF1C(a1, a3, 144, -805306369);
  sub_DAF1C(a1, a3, 145, -2147450879);
  sub_DAF1C(a1, a3, 144, 805306368);
  sub_DAF1C(a1, a3, 145, -2147450804);
  sub_BF774(a1, a3, v25, 0xFFFFCFFF);
  sub_BF774(a1, a3, v42, 0x2000u);
  sub_BF774(a1, a3, v25, 0xFFBFFFFF);
  sub_BF774(a1, a3, v43, 0x400000u);
  sub_BF774(a1, a3, v25, 0xFFFFFE0F);
  sub_BF774(a1, a3, v27, 0x180u);
  sub_BF774(a1, a3, v25, 0xFFFFFF1F);
  sub_BF774(a1, a3, v22, 0);
  sub_BF774(a1, a3, v25, 0xFFFF0FFF);
  sub_BF774(a1, a3, v27, 0x2000u);
  sub_BF774(a1, a3, v25, 0xFFFF7FFF);
  sub_BF774(a1, a3, v44, 0x8000u);
  sub_BF774(a1, a3, v25, 0xFFFEFFFF);
  sub_BF774(a1, a3, v26, 0x10000u);
  sub_BF774(a1, a3, v25, 0xFFFDFFFF);
  sub_BF774(a1, a3, v26, 0x20000u);
  sub_BF774(a1, a3, v25, 0xFFFF000F);
  sub_BF774(a1, a3, v28, 0x8000u);
  sub_BF774(a1, a3, v25, 0xFFFFFFu);
  sub_BF774(a1, a3, v45, 0xF0000000);
  sub_BF774(a1, a3, v25, 0xFFFFFF00);
  sub_BF774(a1, a3, v46, 0xFFu);
  sub_BF774(a1, a3, v25, 0);
  sub_DAF1C(a1, a3, 144, 0);
  sub_DAF1C(a1, a3, 145, -2147450879);
  return 0;
}
