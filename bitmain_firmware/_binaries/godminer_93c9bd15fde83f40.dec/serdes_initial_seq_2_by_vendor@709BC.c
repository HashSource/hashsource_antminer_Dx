int __fastcall serdes_initial_seq_2_by_vendor(pthread_mutex_t *a1, int a2, char a3, int a4)
{
  bool v4; // zf
  pthread_mutex_t *v5; // r4
  int v7; // lr
  int v8; // r2
  int v9; // r12
  int v10; // r1
  int v11; // r3
  int v12; // r6
  int v13; // r7
  int v14; // r8
  int v15; // r9
  int v17; // [sp+14h] [bp-14h]
  int v18; // [sp+18h] [bp-10h]
  int v19; // [sp+1Ch] [bp-Ch]
  int v20; // [sp+20h] [bp-8h]
  int v21; // [sp+24h] [bp-4h]
  char v22[4100]; // [sp+28h] [bp+0h] BYREF

  v4 = a4 == 8;
  v5 = a1;
  LOWORD(a1) = -30172;
  v7 = 61553;
  if ( a4 == 8 )
  {
    v8 = (int)v22;
  }
  else
  {
    v8 = 32;
    v7 = 113;
  }
  v9 = 61511;
  v10 = 61510;
  if ( a4 != 8 )
  {
    v9 = 71;
    v10 = 70;
  }
  v11 = 61509;
  HIWORD(a1) = 26;
  if ( !v4 )
    v11 = 69;
  v12 = 61441;
  v20 = v7;
  if ( !v4 )
    v12 = 1;
  v19 = v9;
  v13 = 61470;
  v14 = 61469;
  if ( !v4 )
  {
    v13 = 30;
    v14 = 29;
  }
  v15 = 61466;
  v21 = v8;
  if ( !v4 )
    v15 = 26;
  v18 = v10;
  v17 = v11;
  pthread_mutex_lock(a1);
  logfmt_raw(v22, 0x1000u, 0, 1513720, "serdes_initial_seq_2_by_vendor");
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_initial_seq_2_by_vendor",
    30,
    3372,
    60,
    v22);
  sub_BF774((int)v5, a3, v12, 0xDFFFFFFF);
  sub_BF774((int)v5, a3, v15, 0);
  sub_BF774((int)v5, a3, v12, 0xFFFFFFFB);
  sub_BF774((int)v5, a3, v14, 0);
  sub_BF774((int)v5, a3, v12, 0xFFFFFFFB);
  sub_BF774((int)v5, a3, v13, 0);
  sub_BF774((int)v5, a3, v12, 0xFFFBFFFF);
  sub_BF774((int)v5, a3, v17, 0);
  sub_BF774((int)v5, a3, v12, 0xFFFBFFFF);
  sub_BF774((int)v5, a3, v18, 0);
  sub_BF774((int)v5, a3, v12, 0xFFF7FFFF);
  sub_BF774((int)v5, a3, v19, 0);
  sub_BF774((int)v5, a3, v12, 0xFFFFFFDF);
  sub_BF774((int)v5, a3, v20, 0);
  sub_BF774((int)v5, a3, v12, 0xFBFFFFFF);
  sub_BF774((int)v5, a3, v21, 0x4000000u);
  sub_DAF1C((int)v5, a3, 144, -786433);
  sub_DAF1C((int)v5, a3, 145, -2147450879);
  sub_DAF1C((int)v5, a3, 144, 0);
  sub_DAF1C((int)v5, a3, 145, -2147450818);
  sub_DAF1C((int)v5, a3, 144, -131073);
  sub_DAF1C((int)v5, a3, 145, -2147450879);
  sub_DAF1C((int)v5, a3, 144, 0);
  sub_DAF1C((int)v5, a3, 145, -2147450818);
  sub_DAF1C((int)v5, a3, 144, -1009);
  sub_DAF1C((int)v5, a3, 145, -2147450879);
  sub_DAF1C((int)v5, a3, 144, 624);
  sub_DAF1C((int)v5, a3, 145, -2147450787);
  sub_DAF1C((int)v5, a3, 144, -258049);
  sub_DAF1C((int)v5, a3, 145, -2147450879);
  sub_DAF1C((int)v5, a3, 144, 40894464);
  sub_DAF1C((int)v5, a3, 145, -2147450787);
  sub_DAF1C((int)v5, a3, 144, 0xFFFFFFF);
  sub_DAF1C((int)v5, a3, 145, -2147450879);
  sub_DAF1C((int)v5, a3, 144, 1879048192);
  sub_DAF1C((int)v5, a3, 145, -2147450787);
  sub_DAF1C((int)v5, a3, 144, -4);
  sub_DAF1C((int)v5, a3, 145, -2147450879);
  sub_DAF1C((int)v5, a3, 144, 2);
  sub_DAF1C((int)v5, a3, 145, -2147450786);
  sub_DAF1C((int)v5, a3, 144, -1009);
  sub_DAF1C((int)v5, a3, 145, -2147450879);
  sub_DAF1C((int)v5, a3, 144, 112);
  sub_DAF1C((int)v5, a3, 145, -2147450786);
  sub_DAF1C((int)v5, a3, 144, -258049);
  sub_DAF1C((int)v5, a3, 145, -2147450879);
  sub_DAF1C((int)v5, a3, 144, 28672);
  sub_DAF1C((int)v5, a3, 145, -2147450786);
  sub_DAF1C((int)v5, a3, 144, -66060289);
  sub_DAF1C((int)v5, a3, 145, -2147450879);
  sub_DAF1C((int)v5, a3, 144, 7340032);
  sub_DAF1C((int)v5, a3, 145, -2147450786);
  sub_DAF1C((int)v5, a3, 144, 0xFFFFFFF);
  sub_DAF1C((int)v5, a3, 145, -2147450879);
  sub_DAF1C((int)v5, a3, 144, 1879048192);
  sub_DAF1C((int)v5, a3, 145, -2147450786);
  sub_DAF1C((int)v5, a3, 144, -4);
  sub_DAF1C((int)v5, a3, 145, -2147450879);
  sub_DAF1C((int)v5, a3, 144, 0);
  sub_DAF1C((int)v5, a3, 145, -2147450785);
  sub_BF774((int)v5, a3, v12, 0);
  sub_DAF1C((int)v5, a3, 144, 0);
  sub_DAF1C((int)v5, a3, 145, -2147450879);
  return 0;
}
