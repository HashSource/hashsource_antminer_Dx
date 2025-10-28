int __fastcall SOC_24G_20210817_update(int a1, int a2, char a3, int a4)
{
  bool v4; // zf
  int v5; // r10
  int v6; // r10
  int v7; // r12
  int v8; // r12
  int v9; // r3
  int v10; // r1
  int v11; // r12
  int v12; // r12
  int v14; // r12
  int v15; // r12
  int v17; // r12
  int v18; // lr
  int v19; // r2
  int v20; // r12
  int v21; // r7
  int v22; // r11
  int v23; // r8
  int v24; // r6
  int v25; // r9
  int v27; // [sp+10h] [bp-1044h]
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
  int v39; // [sp+40h] [bp-1014h]
  int v40; // [sp+44h] [bp-1010h]
  int v41; // [sp+48h] [bp-100Ch]
  int v42; // [sp+4Ch] [bp-1008h]
  char v43[4100]; // [sp+50h] [bp-1004h] BYREF

  v4 = a4 == 8;
  v5 = 61535;
  if ( a4 != 8 )
    v5 = 95;
  v41 = v5;
  v6 = 61579;
  if ( a4 != 8 )
    v6 = 139;
  v40 = v6;
  if ( a4 == 8 )
    v6 = 61630;
  v7 = 61564;
  if ( a4 != 8 )
    v7 = 124;
  v38 = v7;
  v8 = 61590;
  if ( a4 != 8 )
    v8 = 150;
  v9 = 61448;
  v37 = v8;
  if ( !v4 )
    v9 = 8;
  v10 = 61443;
  v35 = v9;
  if ( v4 )
    v9 = 61622;
  else
    v10 = 3;
  v36 = v10;
  if ( v4 )
    v10 = 61566;
  v11 = 61514;
  if ( !v4 )
    v11 = 74;
  v32 = v11;
  v12 = 61458;
  if ( !v4 )
    v12 = 18;
  v31 = v12;
  v14 = 61472;
  if ( !v4 )
    v14 = 32;
  v30 = v14;
  v15 = 61511;
  if ( !v4 )
    v15 = 71;
  v29 = v15;
  v17 = 61551;
  if ( !v4 )
  {
    v17 = 111;
    v9 = 182;
    v10 = 126;
  }
  v18 = 61606;
  v19 = 61536;
  if ( !v4 )
  {
    v18 = 166;
    v19 = 96;
  }
  v28 = v17;
  v20 = 61469;
  if ( !v4 )
  {
    v20 = 29;
    v6 = 190;
  }
  v21 = 61441;
  v39 = v18;
  if ( !v4 )
    v21 = 1;
  v27 = v20;
  v22 = 61580;
  v23 = 61442;
  if ( !v4 )
  {
    v22 = 140;
    v23 = 2;
  }
  v24 = 61550;
  v25 = 61466;
  if ( !v4 )
  {
    v24 = 110;
    v25 = 26;
  }
  v42 = v19;
  v34 = v9;
  v33 = v10;
  pthread_mutex_lock(&stru_3B526C);
  logfmt_raw(v43, 0x1000u, 0, "%s ...", "SOC_24G_20210817_update");
  pthread_mutex_unlock(&stru_3B526C);
  zlog(
    g_zc,
    "/home/xingfei.wang/work/1764/godminer/backend/backend_eth/backend_eth.c",
    71,
    "SOC_24G_20210817_update",
    23,
    4139,
    60,
    v43);
  sub_D19C4(a1, a3, v21, 0xDFFFFFFF);
  sub_D19C4(a1, a3, v25, 0x20000000u);
  sub_D19C4(a1, a3, v21, 0xFFFFFFFB);
  sub_D19C4(a1, a3, v27, 0);
  sub_D19C4(a1, a3, v21, 0x7FFFFFFFu);
  sub_D19C4(a1, a3, v28, 0x80000000);
  sub_D19C4(a1, a3, v21, 0xFFFBFFFF);
  sub_D19C4(a1, a3, v24, 0);
  sub_D19C4(a1, a3, v21, 0xFFFFFFFB);
  sub_D19C4(a1, a3, v24, 0);
  sub_D19C4(a1, a3, v21, 0x7FFFFFFFu);
  sub_D19C4(a1, a3, v25, 0);
  sub_D19C4(a1, a3, v21, 0xFFFFFBFF);
  sub_D19C4(a1, a3, v29, 0);
  sub_70324(a1, a3, 144, -7340033);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0x200000);
  sub_70324(a1, a3, 145, -2147450872);
  sub_70324(a1, a3, 144, -57345);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 40960);
  sub_70324(a1, a3, 145, -2147450871);
  sub_D19C4(a1, a3, v21, 0xFBFFFFFF);
  sub_D19C4(a1, a3, v30, 0x4000000u);
  sub_70324(a1, a3, 144, -131073);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147450818);
  sub_D19C4(a1, a3, v21, 0xFFFBFFFF);
  sub_D19C4(a1, a3, v31, 0x40000u);
  sub_D19C4(a1, a3, v21, 0xFFFFFBFF);
  sub_D19C4(a1, a3, v32, 0x400u);
  sub_D19C4(a1, a3, v21, 0xFF7FFFFF);
  sub_D19C4(a1, a3, v33, 0x800000u);
  sub_D19C4(a1, a3, v21, 0xFFFFFFFu);
  sub_D19C4(a1, a3, v34, 0x60000000u);
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
  sub_70324(a1, a3, 144, 64);
  sub_70324(a1, a3, 145, -2147450786);
  sub_70324(a1, a3, 144, -258049);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0x4000);
  sub_70324(a1, a3, 145, -2147450786);
  sub_70324(a1, a3, 144, -66060289);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0x400000);
  sub_70324(a1, a3, 145, -2147450786);
  sub_70324(a1, a3, 144, 0xFFFFFFF);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0x40000000);
  sub_70324(a1, a3, 145, -2147450786);
  sub_70324(a1, a3, 144, -4);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147450785);
  sub_70324(a1, a3, 144, -1009);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 64);
  sub_70324(a1, a3, 145, -2147450878);
  sub_D19C4(a1, a3, v21, 0xFFFCFFFF);
  sub_D19C4(a1, a3, v23, 0x20000u);
  sub_D19C4(a1, a3, v21, 0xFFFFFFFC);
  sub_D19C4(a1, a3, v35, 2u);
  sub_D19C4(a1, a3, v21, 0xFFFCFFFF);
  sub_D19C4(a1, a3, v35, 0x30000u);
  sub_D19C4(a1, a3, v21, 0xFFFCFFFF);
  sub_D19C4(a1, a3, v36, 0x30000u);
  sub_70324(a1, a3, 144, -786433);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 786432);
  sub_70324(a1, a3, 145, -2147450818);
  sub_70324(a1, a3, 144, -8388609);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 0x800000);
  sub_70324(a1, a3, 145, -2147450808);
  sub_70324(a1, a3, 144, -805306369);
  sub_70324(a1, a3, 145, -2147450879);
  sub_70324(a1, a3, 144, 805306368);
  sub_70324(a1, a3, 145, -2147450804);
  sub_D19C4(a1, a3, v21, 0xFFFFCFFF);
  sub_D19C4(a1, a3, v37, 0x2000u);
  sub_D19C4(a1, a3, v21, 0xFFBFFFFF);
  sub_D19C4(a1, a3, v38, 0x400000u);
  sub_D19C4(a1, a3, v21, 0xFFFFFE0F);
  sub_D19C4(a1, a3, v6, 0x180u);
  sub_D19C4(a1, a3, v21, 0xFFFFFF1F);
  sub_D19C4(a1, a3, v39, 0);
  sub_D19C4(a1, a3, v21, 0xFFFF0FFF);
  sub_D19C4(a1, a3, v6, 0x2000u);
  sub_D19C4(a1, a3, v21, 0xFFFF7FFF);
  sub_D19C4(a1, a3, v40, 0x8000u);
  sub_D19C4(a1, a3, v21, 0xFFFEFFFF);
  sub_D19C4(a1, a3, v22, 0x10000u);
  sub_D19C4(a1, a3, v21, 0xFFFDFFFF);
  sub_D19C4(a1, a3, v22, 0x20000u);
  sub_D19C4(a1, a3, v21, 0xFFFF000F);
  sub_D19C4(a1, a3, v23, 0x8000u);
  sub_D19C4(a1, a3, v21, 0xFFFFFFu);
  sub_D19C4(a1, a3, v41, 0xF0000000);
  sub_D19C4(a1, a3, v21, 0xFFFFFF00);
  sub_D19C4(a1, a3, v42, 0xFFu);
  sub_D19C4(a1, a3, v21, 0);
  sub_70324(a1, a3, 144, 0);
  sub_70324(a1, a3, 145, -2147450879);
  return 0;
}
