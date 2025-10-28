int __fastcall SOC_24G_20210915_update(int a1, int a2, char a3, int a4)
{
  int v6; // r7
  int v8; // r9
  int v9; // r10
  int v10; // r11
  int v11; // r6
  bool v12; // zf
  int v13; // r12
  int v14; // lr
  int v15; // r12
  int v16; // r12
  int v17; // r12
  int v18; // r12
  int v19; // lr
  int v20; // lr
  int v21; // lr
  int v22; // r12
  int v23; // lr
  int v24; // r12
  int v25; // lr
  int v26; // r12
  int v27; // lr
  int v28; // r3
  int v29; // r12
  int v30; // lr
  int v31; // r12
  int v32; // lr
  int v33; // r8
  int v35; // [sp+14h] [bp-54h]
  int v36; // [sp+18h] [bp-50h]
  int v37; // [sp+1Ch] [bp-4Ch]
  int v38; // [sp+20h] [bp-48h]
  int v39; // [sp+24h] [bp-44h]
  int v40; // [sp+28h] [bp-40h]
  int v41; // [sp+2Ch] [bp-3Ch]
  int v42; // [sp+30h] [bp-38h]
  int v43; // [sp+34h] [bp-34h]
  int v44; // [sp+38h] [bp-30h]
  int v45; // [sp+3Ch] [bp-2Ch]
  int v46; // [sp+40h] [bp-28h]
  int v47; // [sp+44h] [bp-24h]
  int v48; // [sp+48h] [bp-20h]
  int v49; // [sp+4Ch] [bp-1Ch]
  int v50; // [sp+50h] [bp-18h]
  int v51; // [sp+54h] [bp-14h]
  int v52; // [sp+58h] [bp-10h]
  int v53; // [sp+5Ch] [bp-Ch]
  int v54; // [sp+60h] [bp-8h]
  int v55; // [sp+64h] [bp-4h]
  char v56[4100]; // [sp+68h] [bp+0h] BYREF

  v6 = (int)v56;
  pthread_mutex_lock(&stru_197BB8);
  logfmt_raw(v56, 0x1000u, 0, "%s...", "SOC_24G_20210915_update");
  v8 = 61580;
  v9 = 61630;
  pthread_mutex_unlock(&stru_197BB8);
  v10 = 61448;
  v11 = 61466;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "SOC_24G_20210915_update",
    23,
    4258,
    60,
    v56);
  v12 = a4 == 8;
  v13 = 61512;
  if ( a4 != 8 )
    v13 = 72;
  v14 = 61564;
  v55 = v13;
  v15 = 61545;
  if ( a4 != 8 )
  {
    v15 = 105;
    v14 = 124;
  }
  v54 = v15;
  v16 = 61579;
  if ( a4 != 8 )
    v16 = 139;
  v51 = v14;
  v53 = v16;
  v17 = 61606;
  if ( a4 != 8 )
  {
    v17 = 166;
    v14 = 150;
  }
  v52 = v17;
  if ( a4 == 8 )
    v14 = 61590;
  v18 = 61566;
  v50 = v14;
  v19 = 61443;
  if ( a4 != 8 )
  {
    v19 = 3;
    v18 = 126;
  }
  v49 = v19;
  v20 = 61622;
  if ( a4 != 8 )
    v20 = 182;
  v47 = v18;
  v48 = v20;
  v21 = 61514;
  if ( a4 != 8 )
    v21 = 74;
  v22 = 61458;
  v46 = v21;
  if ( a4 != 8 )
    v22 = 18;
  v23 = 61472;
  if ( a4 != 8 )
    v23 = 32;
  v45 = v22;
  v24 = 61511;
  v44 = v23;
  if ( a4 != 8 )
    v24 = 71;
  v25 = 61469;
  if ( a4 != 8 )
    v25 = 29;
  v43 = v24;
  v42 = v25;
  v26 = 61467;
  v27 = 61465;
  if ( a4 == 8 )
  {
    v6 = 61441;
  }
  else
  {
    v26 = 27;
    v27 = 25;
  }
  if ( a4 != 8 )
    v6 = 1;
  v28 = 61550;
  v41 = v26;
  if ( a4 != 8 )
    v28 = 110;
  v40 = v27;
  v29 = 61488;
  v30 = 61487;
  if ( a4 != 8 )
  {
    v29 = 48;
    v30 = 47;
  }
  v35 = v28;
  v39 = v29;
  v31 = 61482;
  v38 = v30;
  if ( a4 != 8 )
    v31 = 42;
  v32 = 61551;
  if ( a4 != 8 )
  {
    v32 = 111;
    v8 = 140;
    v9 = 190;
    v10 = 8;
    v11 = 26;
  }
  v37 = v31;
  v33 = 61442;
  v36 = v32;
  if ( !v12 )
    v33 = 2;
  sub_1325F4(a1, a3, v6, 0xFFFFFFF7);
  sub_1325F4(a1, a3, v35, 0);
  sub_8F7C8(a1, a3, 144, -520093697);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 251658240);
  sub_8F7C8(a1, a3, 145, -2147438529);
  sub_8F7C8(a1, a3, 144, -520093697);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 251658240);
  sub_8F7C8(a1, a3, 145, -2147434433);
  sub_8F7C8(a1, a3, 144, -1048321);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 256);
  sub_8F7C8(a1, a3, 145, -2147438530);
  sub_8F7C8(a1, a3, 144, -1048321);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 256);
  sub_8F7C8(a1, a3, 145, -2147434434);
  sub_8F7C8(a1, a3, 144, -4096);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 4);
  sub_8F7C8(a1, a3, 145, -2147438529);
  sub_8F7C8(a1, a3, 144, -4096);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 4);
  sub_8F7C8(a1, a3, 145, -2147434433);
  sub_1325F4(a1, a3, v6, 0xFFFFFFFD);
  sub_1325F4(a1, a3, v35, 0);
  sub_1325F4(a1, a3, v6, 0x7FFFFFFFu);
  sub_1325F4(a1, a3, v36, 0x80000000);
  sub_1325F4(a1, a3, v6, 0xFFFBFFFF);
  sub_1325F4(a1, a3, v35, 0);
  sub_1325F4(a1, a3, v6, 0xFFFFFFFB);
  sub_1325F4(a1, a3, v35, 0);
  sub_8F7C8(a1, a3, 144, 0xFFFFFF);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 838860800);
  sub_8F7C8(a1, a3, 145, -2147438590);
  sub_8F7C8(a1, a3, 144, 0xFFFFFF);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 838860800);
  sub_8F7C8(a1, a3, 145, -2147434494);
  sub_8F7C8(a1, a3, 144, -4);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147438589);
  sub_8F7C8(a1, a3, 144, -4);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147434493);
  sub_8F7C8(a1, a3, 144, 0xFFFFFFF);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 0x20000000);
  sub_8F7C8(a1, a3, 145, -2147438587);
  sub_8F7C8(a1, a3, 144, 0xFFFFFFF);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 0x20000000);
  sub_8F7C8(a1, a3, 145, -2147434491);
  sub_8F7C8(a1, a3, 144, -64);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 3);
  sub_8F7C8(a1, a3, 145, -2147438586);
  sub_8F7C8(a1, a3, 144, -64);
  sub_8F7C8(a1, a3, 145, -2147434495);
  sub_8F7C8(a1, a3, 144, 3);
  sub_8F7C8(a1, a3, 145, -2147434490);
  sub_1325F4(a1, a3, v6, 0xFFFFFC00);
  sub_1325F4(a1, a3, v37, 0x32u);
  sub_1325F4(a1, a3, v6, 0xFFFFFFu);
  sub_1325F4(a1, a3, v38, 0x32000000u);
  sub_1325F4(a1, a3, v6, 0xFFFFFFFC);
  sub_1325F4(a1, a3, v39, 0);
  sub_1325F4(a1, a3, v6, 0xFFFFF7FF);
  sub_1325F4(a1, a3, v40, 0);
  sub_1325F4(a1, a3, v6, 0xFFDFFFFF);
  sub_1325F4(a1, a3, v41, 0);
  sub_1325F4(a1, a3, v6, 0xDFFFFFFF);
  sub_1325F4(a1, a3, v11, 0);
  sub_1325F4(a1, a3, v6, 0xFFFFFFFB);
  sub_1325F4(a1, a3, v42, 4u);
  sub_1325F4(a1, a3, v6, 0x7FFFFFFFu);
  sub_1325F4(a1, a3, v11, 0);
  sub_1325F4(a1, a3, v6, 0xFFFFFBFF);
  sub_1325F4(a1, a3, v43, 0);
  sub_8F7C8(a1, a3, 144, -7340033);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0x200000);
  sub_8F7C8(a1, a3, 145, -2147450872);
  sub_8F7C8(a1, a3, 144, -57345);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 40960);
  sub_8F7C8(a1, a3, 145, -2147450871);
  sub_1325F4(a1, a3, v6, 0xFBFFFFFF);
  sub_1325F4(a1, a3, v44, 0x4000000u);
  sub_8F7C8(a1, a3, 144, -131073);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147450818);
  sub_1325F4(a1, a3, v6, 0xFFFBFFFF);
  sub_1325F4(a1, a3, v45, 0x40000u);
  sub_1325F4(a1, a3, v6, 0xFFFFFBFF);
  sub_1325F4(a1, a3, v46, 0x400u);
  sub_1325F4(a1, a3, v6, 0xFF7FFFFF);
  sub_1325F4(a1, a3, v47, 0x800000u);
  sub_1325F4(a1, a3, v6, 0xFFFFFFFu);
  sub_1325F4(a1, a3, v48, 0x60000000u);
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
  sub_8F7C8(a1, a3, 144, -524289);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147450815);
  sub_8F7C8(a1, a3, 144, -1009);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 64);
  sub_8F7C8(a1, a3, 145, -2147450878);
  sub_1325F4(a1, a3, v6, 0xFFFCFFFF);
  sub_1325F4(a1, a3, v33, 0x20000u);
  sub_1325F4(a1, a3, v6, 0xFFFFFFFC);
  sub_1325F4(a1, a3, v10, 2u);
  sub_1325F4(a1, a3, v6, 0xFFFCFFFF);
  sub_1325F4(a1, a3, v10, 0x30000u);
  sub_1325F4(a1, a3, v6, 0xFFFCFFFF);
  sub_1325F4(a1, a3, v49, 0x30000u);
  sub_8F7C8(a1, a3, 144, -786433);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 786432);
  sub_8F7C8(a1, a3, 145, -2147450818);
  sub_8F7C8(a1, a3, 144, -2);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 1);
  sub_8F7C8(a1, a3, 145, -2147450878);
  sub_8F7C8(a1, a3, 144, -8388609);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0x800000);
  sub_8F7C8(a1, a3, 145, -2147450808);
  sub_8F7C8(a1, a3, 144, -805306369);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 805306368);
  sub_8F7C8(a1, a3, 145, -2147450804);
  sub_8F7C8(a1, a3, 144, -97);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 32);
  sub_8F7C8(a1, a3, 145, -2147450868);
  sub_1325F4(a1, a3, v6, 0xFFFFCFFF);
  sub_1325F4(a1, a3, v50, 0x2000u);
  sub_1325F4(a1, a3, v6, 0xFFBFFFFF);
  sub_1325F4(a1, a3, v51, 0x400000u);
  sub_1325F4(a1, a3, v6, 0xFFFFFE0F);
  sub_1325F4(a1, a3, v9, 0x180u);
  sub_1325F4(a1, a3, v6, 0xFFFFFF1F);
  sub_1325F4(a1, a3, v52, 0);
  sub_1325F4(a1, a3, v6, 0xFFFF0FFF);
  sub_1325F4(a1, a3, v9, 0x4000u);
  sub_1325F4(a1, a3, v6, 0xFFFF7FFF);
  sub_1325F4(a1, a3, v53, 0x8000u);
  sub_1325F4(a1, a3, v6, 0xFFFEFFFF);
  sub_1325F4(a1, a3, v8, 0x10000u);
  sub_1325F4(a1, a3, v6, 0xFFFDFFFF);
  sub_1325F4(a1, a3, v8, 0x20000u);
  sub_1325F4(a1, a3, v6, 0xFFFF000F);
  sub_1325F4(a1, a3, v33, 0x8000u);
  sub_1325F4(a1, a3, v6, 0xFFFFFFF3);
  sub_1325F4(a1, a3, v54, 8u);
  sub_1325F4(a1, a3, v6, 0xFFFFF9FF);
  sub_1325F4(a1, a3, v55, 0x400u);
  sub_8F7C8(a1, a3, 144, -13);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 8);
  sub_8F7C8(a1, a3, 145, -2147450878);
  sub_8F7C8(a1, a3, 144, -100663297);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0x2000000);
  sub_8F7C8(a1, a3, 145, -2147450820);
  sub_8F7C8(a1, a3, 144, 0x7FFFFFFF);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0x80000000);
  sub_8F7C8(a1, a3, 145, -2147450853);
  sub_8F7C8(a1, a3, 144, -2);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147450852);
  sub_8F7C8(a1, a3, 144, -28673);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 12288);
  sub_8F7C8(a1, a3, 145, -2147450860);
  sub_1325F4(a1, a3, v6, 0);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147450879);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147442687);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147438591);
  sub_8F7C8(a1, a3, 144, 0);
  sub_8F7C8(a1, a3, 145, -2147434495);
  return 0;
}
