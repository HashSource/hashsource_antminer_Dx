int __fastcall check_nonce_ckb(int a1, int a2)
{
  _DWORD *v2; // lr
  int v3; // r4
  int v5; // r6
  unsigned int v6; // r8
  int *v7; // r4
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  unsigned int v20; // r4
  int v21; // t1
  int v22; // r1
  int v23; // r2
  int v24; // r3
  unsigned __int8 *v25; // r2
  unsigned __int8 *v26; // r1
  char v27; // r3
  unsigned int v28; // t1
  int v29; // r6
  int v30; // r3
  int v31; // r6
  unsigned int v32; // r0
  unsigned int v33; // t1
  unsigned int v34; // t1
  bool v35; // cc
  _BYTE v37[32]; // [sp+10h] [bp-1054h] BYREF
  _DWORD v38[8]; // [sp+30h] [bp-1034h] BYREF
  int v39; // [sp+50h] [bp-1014h]
  int v40; // [sp+54h] [bp-1010h]
  int v41; // [sp+58h] [bp-100Ch]
  int v42; // [sp+5Ch] [bp-1008h]
  char v43[4100]; // [sp+60h] [bp-1004h] BYREF

  v2 = (_DWORD *)a2;
  v3 = *(unsigned __int8 *)(a2 + 65);
  v5 = *(_DWORD *)(a1 + 600);
  v6 = *(_DWORD *)(v5 + 4 * (v3 + 5632));
  v7 = (int *)(v5 + 48 * v3 + 10240);
  v8 = *v7;
  v9 = v7[1];
  v10 = v7[2];
  v11 = v7[3];
  v7 += 4;
  v38[0] = v8;
  v38[1] = v9;
  v38[2] = v10;
  v38[3] = v11;
  v12 = *v7;
  v13 = v7[1];
  v14 = v7[2];
  v15 = v7[3];
  v7 += 4;
  v38[4] = v12;
  v38[5] = v13;
  v38[6] = v14;
  v38[7] = v15;
  v16 = *v7;
  v17 = v7[1];
  v18 = v7[2];
  v19 = v7[3];
  v20 = 0;
  v39 = v16;
  v40 = v17;
  v41 = v18;
  v42 = v19;
  v21 = v2[12];
  v2 += 12;
  v22 = v2[1];
  v23 = v2[2];
  v24 = v2[3];
  v39 = v21;
  v40 = v22;
  v41 = v23;
  v42 = v24;
  EaglesongSponge((int)v37, 0x20u, (int)v38, 0x30u, 6u);
  v25 = v37;
  v26 = v37;
  do
  {
    v28 = *v26++;
    v27 = v28;
    if ( v28 >> 7 )
      break;
    if ( (v27 & 0x40) != 0 )
    {
      v20 = (unsigned __int8)(v20 + 1);
      break;
    }
    if ( (v27 & 0x20) != 0 )
    {
      v20 = (unsigned __int8)(v20 + 2);
      break;
    }
    if ( (v27 & 0x10) != 0 )
    {
      v20 = (unsigned __int8)(v20 + 3);
      break;
    }
    if ( (v27 & 8) != 0 )
    {
      v20 = (unsigned __int8)(v20 + 4);
      break;
    }
    if ( (v27 & 4) != 0 )
    {
      v20 = (unsigned __int8)(v20 + 5);
      break;
    }
    if ( (v27 & 2) != 0 )
    {
      v20 = (unsigned __int8)(v20 + 6);
      break;
    }
    if ( (v27 & 1) != 0 )
    {
      v20 = (unsigned __int8)(v20 + 7);
      break;
    }
    v20 = (unsigned __int8)(v20 + 8);
  }
  while ( v38 != (_DWORD *)v26 );
  if ( v20 <= 0x1F )
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(
      v43,
      0x1000u,
      0,
      "hw error calculate diff %d ans diff %d TICKET_MASK_CKB %d",
      v20,
      *(unsigned __int8 *)(a2 + 64),
      32);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_ckb/backend_ckb.c",
      71,
      "check_nonce_ckb",
      15,
      336,
      20,
      v43);
    return 2;
  }
  else if ( *(unsigned __int8 *)(a2 + 64) == v20 )
  {
    if ( v6 > v20 )
    {
LABEL_19:
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v43, 0x1000u, 0, "hw diff (%d<%d) not reach pool", *(unsigned __int8 *)(a2 + 64), v6);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_ckb/backend_ckb.c",
        71,
        "check_nonce_ckb",
        15,
        346,
        20,
        v43);
      return 1;
    }
    else
    {
      v29 = v5 + 32 * (*(unsigned __int8 *)(a2 + 65) + 736);
      v30 = v29 - 1;
      v31 = v29 + 31;
      do
      {
        v33 = *v25++;
        v32 = v33;
        v34 = *(unsigned __int8 *)++v30;
        v35 = v32 > v34;
        if ( v32 < v34 )
          break;
        if ( v35 )
          goto LABEL_19;
      }
      while ( v31 != v30 );
      return 0;
    }
  }
  else
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v43, 0x1000u, 0, "diff not match (%d!=%d) expected diff %d", v20, *(unsigned __int8 *)(a2 + 64), v6);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_ckb/backend_ckb.c",
      71,
      "check_nonce_ckb",
      15,
      341,
      20,
      v43);
    return 3;
  }
}
