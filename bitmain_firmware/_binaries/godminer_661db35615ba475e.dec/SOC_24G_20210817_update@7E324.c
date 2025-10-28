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
  int v18; // r2
  int v19; // r1
  int v20; // r12
  int v21; // r10
  int v22; // r3
  int v23; // lr
  int v24; // r7
  int v25; // r11
  int v26; // r6
  int v27; // r8
  int v28; // r9
  int v30; // [sp+14h] [bp-1048h]
  int v31; // [sp+18h] [bp-1044h]
  int v32; // [sp+1Ch] [bp-1040h]
  int v33; // [sp+20h] [bp-103Ch]
  int v34; // [sp+24h] [bp-1038h]
  int v35; // [sp+28h] [bp-1034h]
  int v36; // [sp+2Ch] [bp-1030h]
  int v37; // [sp+30h] [bp-102Ch]
  int v38; // [sp+34h] [bp-1028h]
  int v39; // [sp+38h] [bp-1024h]
  int v40; // [sp+3Ch] [bp-1020h]
  int v41; // [sp+40h] [bp-101Ch]
  int v42; // [sp+44h] [bp-1018h]
  int v43; // [sp+4Ch] [bp-1010h]
  int v44; // [sp+50h] [bp-100Ch]
  int v45; // [sp+54h] [bp-1008h]
  char v46[4100]; // [sp+58h] [bp-1004h] BYREF

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
  v41 = v5;
  if ( !v4 )
    v9 = 8;
  v40 = v6;
  v10 = 61514;
  v11 = 61566;
  if ( !v4 )
  {
    v10 = 74;
    v11 = 126;
  }
  v44 = v7;
  v42 = v8;
  v13 = 61579;
  v39 = v9;
  if ( !v4 )
    v13 = 139;
  v14 = 61622;
  v37 = v11;
  if ( !v4 )
    v14 = 182;
  v15 = 61511;
  v36 = v10;
  if ( !v4 )
    v15 = 71;
  v16 = 61458;
  if ( !v4 )
    v16 = 18;
  v33 = v15;
  v18 = 61536;
  if ( v4 )
  {
    v19 = 61550;
  }
  else
  {
    v18 = 96;
    v19 = 110;
  }
  v20 = 61551;
  v43 = v13;
  if ( !v4 )
    v20 = 111;
  v21 = 61606;
  v38 = v14;
  if ( !v4 )
    v21 = 166;
  v22 = 61472;
  v35 = v16;
  if ( !v4 )
    v22 = 32;
  v23 = 61469;
  if ( !v4 )
    v23 = 29;
  v24 = 61441;
  v31 = v20;
  if ( !v4 )
    v24 = 1;
  v30 = v23;
  v25 = 61580;
  v26 = 61630;
  if ( !v4 )
  {
    v25 = 140;
    v26 = 190;
  }
  v27 = 61442;
  v28 = 61466;
  if ( !v4 )
  {
    v27 = 2;
    v28 = 26;
  }
  v45 = v18;
  v34 = v22;
  v32 = v19;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v46, 0x1000u, 0, "%s ...", "SOC_24G_20210817_update");
  pthread_mutex_unlock(&stru_197BB8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "SOC_24G_20210817_update",
    23,
    4139,
    60,
    v46);
  sub_1325F4(a1, a3, v24, 0xDFFFFFFF);
  sub_1325F4(a1, a3, v28, 0x20000000u);
  sub_1325F4(a1, a3, v24, 0xFFFFFFFB);
  sub_1325F4(a1, a3, v30, 0);
  sub_1325F4(a1, a3, v24, 0x7FFFFFFFu);
  sub_1325F4(a1, a3, v31, 0x80000000);
  sub_1325F4(a1, a3, v24, 0xFFFBFFFF);
  sub_1325F4(a1, a3, v32, 0);
  sub_1325F4(a1, a3, v24, 0xFFFFFFFB);
  sub_1325F4(a1, a3, v32, 0);
  sub_1325F4(a1, a3, v24, 0x7FFFFFFFu);
  sub_1325F4(a1, a3, v28, 0);
  sub_1325F4(a1, a3, v24, 0xFFFFFBFF);
  sub_1325F4(a1, a3, v33, 0);
  sub_8F7C8(a1, a3, 144, -7340033);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0x200000);
  sub_8F7C8(a1, a3, 145, -2147450872);
  sub_8F7C8(a1, a3, 144, -57345);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 40960);
  sub_8F7C8(a1, a3, 145, -2147450871);
  sub_1325F4(a1, a3, v24, 0xFBFFFFFF);
  sub_1325F4(a1, a3, v34, 0x4000000u);
  sub_8F7C8(a1, a3, 144, -131073);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147450818);
  sub_1325F4(a1, a3, v24, 0xFFFBFFFF);
  sub_1325F4(a1, a3, v35, 0x40000u);
  sub_1325F4(a1, a3, v24, 0xFFFFFBFF);
  sub_1325F4(a1, a3, v36, 0x400u);
  sub_1325F4(a1, a3, v24, 0xFF7FFFFF);
  sub_1325F4(a1, a3, v37, 0x800000u);
  sub_1325F4(a1, a3, v24, 0xFFFFFFFu);
  sub_1325F4(a1, a3, v38, 0x60000000u);
  sub_8F7C8(a1, a3, 144, -1009);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 576);
  sub_8F7C8(a1, a3, 145, -2147450787);
  sub_8F7C8(a1, a3, 144, -258049);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 147456);
  sub_8F7C8(a1, a3, 145, -2147450787);
  sub_8F7C8(a1, a3, 144, -66060289);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 37748736);
  sub_8F7C8(a1, a3, 145, -2147450787);
  sub_8F7C8(a1, a3, 144, 0xFFFFFFF);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0x40000000);
  sub_8F7C8(a1, a3, 145, -2147450787);
  sub_8F7C8(a1, a3, 144, -4);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 2);
  sub_8F7C8(a1, a3, 145, -2147450786);
  sub_8F7C8(a1, a3, 144, -1009);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 64);
  sub_8F7C8(a1, a3, 145, -2147450786);
  sub_8F7C8(a1, a3, 144, -258049);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0x4000);
  sub_8F7C8(a1, a3, 145, -2147450786);
  sub_8F7C8(a1, a3, 144, -66060289);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0x400000);
  sub_8F7C8(a1, a3, 145, -2147450786);
  sub_8F7C8(a1, a3, 144, 0xFFFFFFF);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0x40000000);
  sub_8F7C8(a1, a3, 145, -2147450786);
  sub_8F7C8(a1, a3, 144, -4);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147450785);
  sub_8F7C8(a1, a3, 144, -1009);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 64);
  sub_8F7C8(a1, a3, 145, -2147450878);
  sub_1325F4(a1, a3, v24, 0xFFFCFFFF);
  sub_1325F4(a1, a3, v27, 0x20000u);
  sub_1325F4(a1, a3, v24, 0xFFFFFFFC);
  sub_1325F4(a1, a3, v39, 2u);
  sub_1325F4(a1, a3, v24, 0xFFFCFFFF);
  sub_1325F4(a1, a3, v39, 0x30000u);
  sub_1325F4(a1, a3, v24, 0xFFFCFFFF);
  sub_1325F4(a1, a3, v40, 0x30000u);
  sub_8F7C8(a1, a3, 144, -786433);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 786432);
  sub_8F7C8(a1, a3, 145, -2147450818);
  sub_8F7C8(a1, a3, 144, -8388609);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0x800000);
  sub_8F7C8(a1, a3, 145, -2147450808);
  sub_8F7C8(a1, a3, 144, -805306369);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 805306368);
  sub_8F7C8(a1, a3, 145, -2147450804);
  sub_1325F4(a1, a3, v24, 0xFFFFCFFF);
  sub_1325F4(a1, a3, v41, 0x2000u);
  sub_1325F4(a1, a3, v24, 0xFFBFFFFF);
  sub_1325F4(a1, a3, v42, 0x400000u);
  sub_1325F4(a1, a3, v24, 0xFFFFFE0F);
  sub_1325F4(a1, a3, v26, 0x180u);
  sub_1325F4(a1, a3, v24, 0xFFFFFF1F);
  sub_1325F4(a1, a3, v21, 0);
  sub_1325F4(a1, a3, v24, 0xFFFF0FFF);
  sub_1325F4(a1, a3, v26, 0x2000u);
  sub_1325F4(a1, a3, v24, 0xFFFF7FFF);
  sub_1325F4(a1, a3, v43, 0x8000u);
  sub_1325F4(a1, a3, v24, 0xFFFEFFFF);
  sub_1325F4(a1, a3, v25, 0x10000u);
  sub_1325F4(a1, a3, v24, 0xFFFDFFFF);
  sub_1325F4(a1, a3, v25, 0x20000u);
  sub_1325F4(a1, a3, v24, 0xFFFF000F);
  sub_1325F4(a1, a3, v27, 0x8000u);
  sub_1325F4(a1, a3, v24, 0xFFFFFFu);
  sub_1325F4(a1, a3, v44, 0xF0000000);
  sub_1325F4(a1, a3, v24, 0xFFFFFF00);
  sub_1325F4(a1, a3, v45, 0xFFu);
  sub_1325F4(a1, a3, v24, 0);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147450879);
  return 0;
}
