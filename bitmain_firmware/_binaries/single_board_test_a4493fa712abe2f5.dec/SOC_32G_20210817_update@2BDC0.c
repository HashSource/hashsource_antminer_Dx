int __fastcall SOC_32G_20210817_update(int a1, int a2, int a3, int a4)
{
  bool v4; // zf
  int v5; // r12
  int v6; // r12
  char v7; // r5
  int v8; // r3
  int v9; // r10
  int v10; // r8
  int v11; // r1
  int v12; // r12
  int v13; // r12
  int v15; // r12
  int v16; // r12
  int v17; // lr
  int v18; // r12
  int v19; // r7
  int v20; // r11
  int v21; // r6
  int v22; // r9
  int v24; // [sp+10h] [bp-103Ch]
  int v25; // [sp+14h] [bp-1038h]
  int v26; // [sp+18h] [bp-1034h]
  int v27; // [sp+1Ch] [bp-1030h]
  int v28; // [sp+20h] [bp-102Ch]
  int v29; // [sp+24h] [bp-1028h]
  int v30; // [sp+28h] [bp-1024h]
  int v31; // [sp+2Ch] [bp-1020h]
  int v32; // [sp+30h] [bp-101Ch]
  int v33; // [sp+34h] [bp-1018h]
  int v34; // [sp+38h] [bp-1014h]
  int v35; // [sp+3Ch] [bp-1010h]
  int v36; // [sp+40h] [bp-100Ch]
  int v37; // [sp+44h] [bp-1008h]
  char v38[4100]; // [sp+48h] [bp-1004h] BYREF

  v4 = a4 == 8;
  v5 = 61590;
  if ( a4 != 8 )
    v5 = 150;
  v34 = v5;
  v6 = 61443;
  if ( a4 != 8 )
    v6 = 3;
  v7 = a3;
  v8 = 61622;
  if ( v4 )
    a3 = 61579;
  else
    v8 = 182;
  v9 = 61606;
  v10 = 61630;
  if ( !v4 )
    v9 = 166;
  v33 = v6;
  v32 = v8;
  if ( v4 )
    v8 = 61514;
  v36 = v9;
  if ( v4 )
  {
    v9 = 61630;
    v10 = 61442;
  }
  v11 = 61566;
  if ( !v4 )
    v11 = 126;
  v31 = v11;
  if ( v4 )
    v11 = 61458;
  v12 = 61472;
  if ( !v4 )
    v12 = 32;
  v28 = v12;
  v13 = 61511;
  if ( !v4 )
    v13 = 71;
  v27 = v13;
  v15 = 61550;
  if ( !v4 )
    v15 = 110;
  v24 = v15;
  v16 = 61551;
  if ( !v4 )
  {
    v16 = 111;
    a3 = 139;
    v8 = 74;
    v11 = 18;
  }
  v17 = 61564;
  v26 = v16;
  if ( !v4 )
    v17 = 124;
  v18 = 61469;
  if ( !v4 )
  {
    v18 = 29;
    v9 = 190;
    v10 = 2;
  }
  v19 = 61441;
  v35 = v17;
  if ( !v4 )
    v19 = 1;
  v25 = v18;
  v20 = 61580;
  v21 = 61448;
  if ( !v4 )
  {
    v20 = 140;
    v21 = 8;
  }
  v22 = 61466;
  v37 = a3;
  if ( !v4 )
    v22 = 26;
  v30 = v8;
  v29 = v11;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v38, 0x1000u, 0, "%s ...", "SOC_32G_20210817_update");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "SOC_32G_20210817_update",
    23,
    6404,
    60,
    v38);
  sub_D19C4(a1, v7, v19, 0xDFFFFFFF);
  sub_D19C4(a1, v7, v22, 0x20000000u);
  sub_D19C4(a1, v7, v19, 0xFFFFFFFB);
  sub_D19C4(a1, v7, v25, 0);
  sub_D19C4(a1, v7, v19, 0x7FFFFFFFu);
  sub_D19C4(a1, v7, v26, 0x80000000);
  sub_D19C4(a1, v7, v19, 0xFFFBFFFF);
  sub_D19C4(a1, v7, v24, 0);
  sub_D19C4(a1, v7, v19, 0xFFFFFFFB);
  sub_D19C4(a1, v7, v24, 0);
  sub_D19C4(a1, v7, v19, 0x7FFFFFFFu);
  sub_D19C4(a1, v7, v22, 0);
  sub_D19C4(a1, v7, v19, 0xFFFFFBFF);
  sub_D19C4(a1, v7, v27, 0);
  sub_70324(a1, v7, 144, -7340033);
  sub_70324(a1, v7, 145, -2147450879);
  sub_70324(a1, v7, 144, 0x200000);
  sub_70324(a1, v7, 145, -2147450872);
  sub_70324(a1, v7, 144, -57345);
  sub_70324(a1, v7, 145, -2147450879);
  sub_70324(a1, v7, 144, 40960);
  sub_70324(a1, v7, 145, -2147450871);
  sub_D19C4(a1, v7, v19, 0xFBFFFFFF);
  sub_D19C4(a1, v7, v28, 0x4000000u);
  sub_70324(a1, v7, 144, -131073);
  sub_70324(a1, v7, 145, -2147450879);
  sub_70324(a1, v7, 144, 0);
  sub_70324(a1, v7, 145, -2147450818);
  sub_D19C4(a1, v7, v19, 0xFFFBFFFF);
  sub_D19C4(a1, v7, v29, 0x40000u);
  sub_D19C4(a1, v7, v19, 0xFFFFFBFF);
  sub_D19C4(a1, v7, v30, 0x400u);
  sub_D19C4(a1, v7, v19, 0xFF7FFFFF);
  sub_D19C4(a1, v7, v31, 0x800000u);
  sub_D19C4(a1, v7, v19, 0xFFFFFFFu);
  sub_D19C4(a1, v7, v32, 0x60000000u);
  sub_70324(a1, v7, 144, -1009);
  sub_70324(a1, v7, 145, -2147450879);
  sub_70324(a1, v7, 144, 576);
  sub_70324(a1, v7, 145, -2147450787);
  sub_70324(a1, v7, 144, -258049);
  sub_70324(a1, v7, 145, -2147450879);
  sub_70324(a1, v7, 144, 147456);
  sub_70324(a1, v7, 145, -2147450787);
  sub_70324(a1, v7, 144, -66060289);
  sub_70324(a1, v7, 145, -2147450879);
  sub_70324(a1, v7, 144, 37748736);
  sub_70324(a1, v7, 145, -2147450787);
  sub_70324(a1, v7, 144, 0xFFFFFFF);
  sub_70324(a1, v7, 145, -2147450879);
  sub_70324(a1, v7, 144, 0x40000000);
  sub_70324(a1, v7, 145, -2147450787);
  sub_70324(a1, v7, 144, -4);
  sub_70324(a1, v7, 145, -2147450879);
  sub_70324(a1, v7, 144, 2);
  sub_70324(a1, v7, 145, -2147450786);
  sub_70324(a1, v7, 144, -1009);
  sub_70324(a1, v7, 145, -2147450879);
  sub_70324(a1, v7, 144, 64);
  sub_70324(a1, v7, 145, -2147450786);
  sub_70324(a1, v7, 144, -258049);
  sub_70324(a1, v7, 145, -2147450879);
  sub_70324(a1, v7, 144, 0x4000);
  sub_70324(a1, v7, 145, -2147450786);
  sub_70324(a1, v7, 144, -66060289);
  sub_70324(a1, v7, 145, -2147450879);
  sub_70324(a1, v7, 144, 0x400000);
  sub_70324(a1, v7, 145, -2147450786);
  sub_70324(a1, v7, 144, 0xFFFFFFF);
  sub_70324(a1, v7, 145, -2147450879);
  sub_70324(a1, v7, 144, 0x40000000);
  sub_70324(a1, v7, 145, -2147450786);
  sub_70324(a1, v7, 144, -4);
  sub_70324(a1, v7, 145, -2147450879);
  sub_70324(a1, v7, 144, 0);
  sub_70324(a1, v7, 145, -2147450785);
  sub_70324(a1, v7, 144, -1009);
  sub_70324(a1, v7, 145, -2147450879);
  sub_70324(a1, v7, 144, 96);
  sub_70324(a1, v7, 145, -2147450878);
  sub_D19C4(a1, v7, v19, 0xFFFCFFFF);
  sub_D19C4(a1, v7, v10, 0);
  sub_D19C4(a1, v7, v19, 0xFFFFFFFC);
  sub_D19C4(a1, v7, v21, 0);
  sub_D19C4(a1, v7, v19, 0xFFFCFFFF);
  sub_D19C4(a1, v7, v21, 0x30000u);
  sub_D19C4(a1, v7, v19, 0xFFFCFFFF);
  sub_D19C4(a1, v7, v33, 0x30000u);
  sub_70324(a1, v7, 144, -786433);
  sub_70324(a1, v7, 145, -2147450879);
  sub_70324(a1, v7, 144, 0);
  sub_70324(a1, v7, 145, -2147450818);
  sub_70324(a1, v7, 144, -8388609);
  sub_70324(a1, v7, 145, -2147450879);
  sub_70324(a1, v7, 144, 0x800000);
  sub_70324(a1, v7, 145, -2147450808);
  sub_70324(a1, v7, 144, -805306369);
  sub_70324(a1, v7, 145, -2147450879);
  sub_70324(a1, v7, 144, 0x10000000);
  sub_70324(a1, v7, 145, -2147450804);
  sub_70324(a1, v7, 144, -97);
  sub_70324(a1, v7, 145, -2147450879);
  sub_70324(a1, v7, 144, 96);
  sub_70324(a1, v7, 145, -2147450868);
  sub_D19C4(a1, v7, v19, 0xFFFFCFFF);
  sub_D19C4(a1, v7, v34, 0x3000u);
  sub_D19C4(a1, v7, v19, 0xFFBFFFFF);
  sub_D19C4(a1, v7, v35, 0x400000u);
  sub_D19C4(a1, v7, v19, 0xFFFFFE0F);
  sub_D19C4(a1, v7, v9, 0x180u);
  sub_D19C4(a1, v7, v19, 0xFFFFFF1F);
  sub_D19C4(a1, v7, v36, 0);
  sub_D19C4(a1, v7, v19, 0xFFFF0FFF);
  sub_D19C4(a1, v7, v9, 0x4000u);
  sub_D19C4(a1, v7, v19, 0xFFFF7FFF);
  sub_D19C4(a1, v7, v37, 0x8000u);
  sub_D19C4(a1, v7, v19, 0xFFFEFFFF);
  sub_D19C4(a1, v7, v20, 0x10000u);
  sub_D19C4(a1, v7, v19, 0xFFFDFFFF);
  sub_D19C4(a1, v7, v20, 0x20000u);
  sub_D19C4(a1, v7, v19, 0xFFFF000F);
  sub_D19C4(a1, v7, v10, 0x8000u);
  sub_D19C4(a1, v7, v19, 0);
  sub_70324(a1, v7, 144, 0);
  sub_70324(a1, v7, 145, -2147450879);
  return 0;
}
