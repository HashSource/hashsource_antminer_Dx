int __fastcall check_nonce_ckb(int a1, int a2)
{
  _DWORD *v2; // r8
  int v3; // r12
  unsigned int v5; // r7
  int v6; // r4
  unsigned int v7; // r6
  int *v8; // r12
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // t1
  int v21; // r1
  int v22; // r2
  int v23; // r3
  unsigned __int8 *v24; // r2
  unsigned __int8 *v25; // r1
  char v26; // r3
  unsigned int v27; // t1
  int v28; // r4
  int v29; // r3
  int v30; // r4
  unsigned int v31; // r0
  unsigned int v32; // t1
  unsigned int v33; // t1
  bool v34; // cc
  _BYTE v36[32]; // [sp+10h] [bp-1054h] BYREF
  _DWORD v37[8]; // [sp+30h] [bp-1034h] BYREF
  int v38; // [sp+50h] [bp-1014h]
  int v39; // [sp+54h] [bp-1010h]
  int v40; // [sp+58h] [bp-100Ch]
  int v41; // [sp+5Ch] [bp-1008h]
  char v42[4100]; // [sp+60h] [bp-1004h] BYREF

  v2 = (_DWORD *)a2;
  v3 = *(unsigned __int8 *)(a2 + 65);
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 600);
  v7 = *(_DWORD *)(v6 + 4 * (v3 + 5632));
  v8 = (int *)(v6 + 48 * v3 + 10240);
  v9 = *v8;
  v10 = v8[1];
  v11 = v8[2];
  v12 = v8[3];
  v8 += 4;
  v37[0] = v9;
  v37[1] = v10;
  v37[2] = v11;
  v37[3] = v12;
  v13 = *v8;
  v14 = v8[1];
  v15 = v8[2];
  v16 = v8[3];
  v8 += 4;
  v37[4] = v13;
  v37[5] = v14;
  v37[6] = v15;
  v37[7] = v16;
  v17 = v8[1];
  v18 = v8[2];
  v19 = v8[3];
  v38 = *v8;
  v39 = v17;
  v40 = v18;
  v41 = v19;
  v20 = v2[12];
  v2 += 12;
  v21 = v2[1];
  v22 = v2[2];
  v23 = v2[3];
  v38 = v20;
  v39 = v21;
  v40 = v22;
  v41 = v23;
  EaglesongSponge((int)v36, 0x20u, (int)v37, 0x30u, 6u);
  v24 = v36;
  v25 = v36;
  do
  {
    v27 = *v25++;
    v26 = v27;
    if ( v27 >> 7 )
      break;
    if ( (v26 & 0x40) != 0 )
    {
      v5 = (unsigned __int8)(v5 + 1);
      break;
    }
    if ( (v26 & 0x20) != 0 )
    {
      v5 = (unsigned __int8)(v5 + 2);
      break;
    }
    if ( (v26 & 0x10) != 0 )
    {
      v5 = (unsigned __int8)(v5 + 3);
      break;
    }
    if ( (v26 & 8) != 0 )
    {
      v5 = (unsigned __int8)(v5 + 4);
      break;
    }
    if ( (v26 & 4) != 0 )
    {
      v5 = (unsigned __int8)(v5 + 5);
      break;
    }
    if ( (v26 & 2) != 0 )
    {
      v5 = (unsigned __int8)(v5 + 6);
      break;
    }
    if ( (v26 & 1) != 0 )
    {
      v5 = (unsigned __int8)(v5 + 7);
      break;
    }
    v5 = (unsigned __int8)(v5 + 8);
  }
  while ( v37 != (_DWORD *)v25 );
  if ( v5 <= 0x1F )
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(
      v42,
      0x1000u,
      0,
      "hw error calculate diff %d ans diff %d TICKET_MASK_CKB %d",
      v5,
      *(unsigned __int8 *)(a2 + 64),
      32);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ckb/backend_ckb.c",
      154,
      "check_nonce_ckb",
      15,
      336,
      20,
      v42);
    return 2;
  }
  else if ( *(unsigned __int8 *)(a2 + 64) == v5 )
  {
    if ( v7 > v5 )
    {
LABEL_19:
      pthread_mutex_lock(&stru_197BB8);
      logfmt_raw(v42, 0x1000u, 0, "hw diff (%d<%d) not reach pool", *(unsigned __int8 *)(a2 + 64), v7);
      pthread_mutex_unlock(&stru_197BB8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_ckb/backend_ckb.c",
        154,
        "check_nonce_ckb",
        15,
        346,
        20,
        v42);
      return 1;
    }
    else
    {
      v28 = v6 + 32 * (*(unsigned __int8 *)(a2 + 65) + 736);
      v29 = v28 - 1;
      v30 = v28 + 31;
      do
      {
        v32 = *v24++;
        v31 = v32;
        v33 = *(unsigned __int8 *)++v29;
        v34 = v31 > v33;
        if ( v31 < v33 )
          break;
        if ( v34 )
          goto LABEL_19;
      }
      while ( v30 != v29 );
      return 0;
    }
  }
  else
  {
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(v42, 0x1000u, 0, "diff not match (%d!=%d) expected diff %d", v5, *(unsigned __int8 *)(a2 + 64), v7);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ckb/backend_ckb.c",
      154,
      "check_nonce_ckb",
      15,
      341,
      20,
      v42);
    return 3;
  }
}
