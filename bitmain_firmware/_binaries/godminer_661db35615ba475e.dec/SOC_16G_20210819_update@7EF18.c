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
  int v16; // r10
  int v17; // lr
  int v18; // r12
  int v19; // r3
  int v20; // r1
  int v21; // r7
  int v22; // r11
  int v23; // r6
  int v24; // r9
  int v26; // [sp+14h] [bp-1040h]
  int v27; // [sp+18h] [bp-103Ch]
  int v28; // [sp+1Ch] [bp-1038h]
  int v29; // [sp+20h] [bp-1034h]
  int v30; // [sp+24h] [bp-1030h]
  int v31; // [sp+28h] [bp-102Ch]
  int v32; // [sp+2Ch] [bp-1028h]
  int v33; // [sp+30h] [bp-1024h]
  int v34; // [sp+34h] [bp-1020h]
  int v35; // [sp+38h] [bp-101Ch]
  int v36; // [sp+40h] [bp-1014h]
  int v37; // [sp+44h] [bp-1010h]
  int v38; // [sp+48h] [bp-100Ch]
  int v39; // [sp+4Ch] [bp-1008h]
  char v40[4100]; // [sp+50h] [bp-1004h] BYREF

  v4 = a4 == 8;
  v5 = 61630;
  if ( a4 != 8 )
    v5 = 190;
  v37 = v5;
  v6 = 61564;
  if ( a4 != 8 )
    v6 = 124;
  v36 = v6;
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
  v33 = v7;
  if ( !v4 )
    v13 = 166;
  v32 = v8;
  v14 = 61514;
  v15 = 61458;
  if ( !v4 )
  {
    v14 = 74;
    v15 = 18;
    a3 = 139;
  }
  v38 = v13;
  v16 = 61590;
  v35 = v11;
  if ( !v4 )
    v16 = 150;
  v17 = 61511;
  v34 = v12;
  if ( !v4 )
    v17 = 71;
  v18 = 61472;
  v31 = v14;
  if ( !v4 )
    v18 = 32;
  v19 = 61551;
  v30 = v15;
  if ( !v4 )
    v19 = 111;
  v20 = 61469;
  if ( !v4 )
  {
    v20 = 29;
    v6 = 2;
  }
  v21 = 61441;
  v29 = v18;
  if ( !v4 )
    v21 = 1;
  v28 = v17;
  v22 = 61580;
  v23 = 61550;
  if ( !v4 )
  {
    v22 = 140;
    v23 = 110;
  }
  v24 = 61466;
  v39 = a3;
  if ( !v4 )
    v24 = 26;
  v27 = v19;
  v26 = v20;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v40, 0x1000u, 0, "%s ...", "SOC_16G_20210819_update");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "SOC_16G_20210819_update",
    23,
    4005,
    60,
    v40);
  sub_1325F4(a1, v9, v21, 0xDFFFFFFF);
  sub_1325F4(a1, v9, v24, 0x20000000u);
  sub_1325F4(a1, v9, v21, 0xFFFFFFFB);
  sub_1325F4(a1, v9, v26, 0);
  sub_1325F4(a1, v9, v21, 0x7FFFFFFFu);
  sub_1325F4(a1, v9, v27, 0x80000000);
  sub_1325F4(a1, v9, v21, 0xFFFBFFFF);
  sub_1325F4(a1, v9, v23, 0);
  sub_1325F4(a1, v9, v21, 0xFFFFFFFB);
  sub_1325F4(a1, v9, v23, 0);
  sub_1325F4(a1, v9, v21, 0x7FFFFFFFu);
  sub_1325F4(a1, v9, v24, 0);
  sub_1325F4(a1, v9, v21, 0xFFFFFBFF);
  sub_1325F4(a1, v9, v28, 0);
  sub_8F7C8(a1, v9, 144, -7340033);
  sub_8F7C8(a1, v9, 145, -2147450879);
  sub_8F7C8(a1, v9, 144, 0x200000);
  sub_8F7C8(a1, v9, 145, -2147450872);
  sub_8F7C8(a1, v9, 144, -57345);
  sub_8F7C8(a1, v9, 145, -2147450879);
  sub_8F7C8(a1, v9, 144, 40960);
  sub_8F7C8(a1, v9, 145, -2147450871);
  sub_1325F4(a1, v9, v21, 0xFBFFFFFF);
  sub_1325F4(a1, v9, v29, 0x4000000u);
  sub_8F7C8(a1, v9, 144, -131073);
  sub_8F7C8(a1, v9, 145, -2147450879);
  sub_8F7C8(a1, v9, 144, 0);
  sub_8F7C8(a1, v9, 145, -2147450818);
  sub_1325F4(a1, v9, v21, 0xFFFBFFFF);
  sub_1325F4(a1, v9, v30, 0x40000u);
  sub_1325F4(a1, v9, v21, 0xFFFFFBFF);
  sub_1325F4(a1, v9, v31, 0x400u);
  sub_1325F4(a1, v9, v21, 0xFF7FFFFF);
  sub_1325F4(a1, v9, v32, 0x800000u);
  sub_1325F4(a1, v9, v21, 0xFFFFFFFu);
  sub_1325F4(a1, v9, v33, 0x60000000u);
  sub_8F7C8(a1, v9, 144, -1009);
  sub_8F7C8(a1, v9, 145, -2147450879);
  sub_8F7C8(a1, v9, 144, 576);
  sub_8F7C8(a1, v9, 145, -2147450787);
  sub_8F7C8(a1, v9, 144, -258049);
  sub_8F7C8(a1, v9, 145, -2147450879);
  sub_8F7C8(a1, v9, 144, 147456);
  sub_8F7C8(a1, v9, 145, -2147450787);
  sub_8F7C8(a1, v9, 144, -66060289);
  sub_8F7C8(a1, v9, 145, -2147450879);
  sub_8F7C8(a1, v9, 144, 37748736);
  sub_8F7C8(a1, v9, 145, -2147450787);
  sub_8F7C8(a1, v9, 144, 0xFFFFFFF);
  sub_8F7C8(a1, v9, 145, -2147450879);
  sub_8F7C8(a1, v9, 144, 0x40000000);
  sub_8F7C8(a1, v9, 145, -2147450787);
  sub_8F7C8(a1, v9, 144, -4);
  sub_8F7C8(a1, v9, 145, -2147450879);
  sub_8F7C8(a1, v9, 144, 2);
  sub_8F7C8(a1, v9, 145, -2147450786);
  sub_8F7C8(a1, v9, 144, -1009);
  sub_8F7C8(a1, v9, 145, -2147450879);
  sub_8F7C8(a1, v9, 144, 64);
  sub_8F7C8(a1, v9, 145, -2147450786);
  sub_8F7C8(a1, v9, 144, -258049);
  sub_8F7C8(a1, v9, 145, -2147450879);
  sub_8F7C8(a1, v9, 144, 0x4000);
  sub_8F7C8(a1, v9, 145, -2147450786);
  sub_8F7C8(a1, v9, 144, -66060289);
  sub_8F7C8(a1, v9, 145, -2147450879);
  sub_8F7C8(a1, v9, 144, 0x400000);
  sub_8F7C8(a1, v9, 145, -2147450786);
  sub_8F7C8(a1, v9, 144, 0xFFFFFFF);
  sub_8F7C8(a1, v9, 145, -2147450879);
  sub_8F7C8(a1, v9, 144, 0x40000000);
  sub_8F7C8(a1, v9, 145, -2147450786);
  sub_8F7C8(a1, v9, 144, -4);
  sub_8F7C8(a1, v9, 145, -2147450879);
  sub_8F7C8(a1, v9, 144, 0);
  sub_8F7C8(a1, v9, 145, -2147450785);
  sub_8F7C8(a1, v9, 144, -1009);
  sub_8F7C8(a1, v9, 145, -2147450879);
  sub_8F7C8(a1, v9, 144, 32);
  sub_8F7C8(a1, v9, 145, -2147450878);
  sub_1325F4(a1, v9, v21, 0xFFFCFFFF);
  sub_1325F4(a1, v9, v6, 0);
  sub_1325F4(a1, v9, v21, 0xFFFFFFFC);
  sub_1325F4(a1, v9, v34, 0);
  sub_1325F4(a1, v9, v21, 0xFFFCFFFF);
  sub_1325F4(a1, v9, v34, 0x10000u);
  sub_1325F4(a1, v9, v21, 0xFFFCFFFF);
  sub_1325F4(a1, v9, v35, 0x10000u);
  sub_8F7C8(a1, v9, 144, -786433);
  sub_8F7C8(a1, v9, 145, -2147450879);
  sub_8F7C8(a1, v9, 144, 786432);
  sub_8F7C8(a1, v9, 145, -2147450818);
  sub_8F7C8(a1, v9, 144, -8388609);
  sub_8F7C8(a1, v9, 145, -2147450879);
  sub_8F7C8(a1, v9, 144, 0x800000);
  sub_8F7C8(a1, v9, 145, -2147450808);
  sub_8F7C8(a1, v9, 144, -805306369);
  sub_8F7C8(a1, v9, 145, -2147450879);
  sub_8F7C8(a1, v9, 144, 805306368);
  sub_8F7C8(a1, v9, 145, -2147450804);
  sub_1325F4(a1, v9, v21, 0xFFFFCFFF);
  sub_1325F4(a1, v9, v16, 0x1000u);
  sub_1325F4(a1, v9, v21, 0xFFBFFFFF);
  sub_1325F4(a1, v9, v36, 0x400000u);
  sub_1325F4(a1, v9, v21, 0xFFFFFE0F);
  sub_1325F4(a1, v9, v37, 0x180u);
  sub_1325F4(a1, v9, v21, 0xFFFFFF1F);
  sub_1325F4(a1, v9, v38, 0);
  sub_1325F4(a1, v9, v21, 0xFFFF0FFF);
  sub_1325F4(a1, v9, v37, 0);
  sub_1325F4(a1, v9, v21, 0xFFFF7FFF);
  sub_1325F4(a1, v9, v39, 0x8000u);
  sub_1325F4(a1, v9, v21, 0xFFFEFFFF);
  sub_1325F4(a1, v9, v22, 0x10000u);
  sub_1325F4(a1, v9, v21, 0xFFFDFFFF);
  sub_1325F4(a1, v9, v22, 0x20000u);
  sub_1325F4(a1, v9, v21, 0xFFFF000F);
  sub_1325F4(a1, v9, v6, 0x8000u);
  sub_8F7C8(a1, v9, 144, -2);
  sub_8F7C8(a1, v9, 145, -2147450879);
  sub_8F7C8(a1, v9, 144, 0);
  sub_8F7C8(a1, v9, 145, -2147450878);
  sub_1325F4(a1, v9, v21, 0xFFFFFFFC);
  sub_1325F4(a1, v9, v6, 2u);
  sub_1325F4(a1, v9, v21, 0);
  sub_8F7C8(a1, v9, 144, 0);
  sub_8F7C8(a1, v9, 145, -2147450879);
  return 0;
}
