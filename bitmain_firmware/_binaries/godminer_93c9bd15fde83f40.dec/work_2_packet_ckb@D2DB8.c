int __fastcall work_2_packet_ckb(int a1, _DWORD *a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r5
  int *v7; // r9
  int v8; // r4
  int v9; // r3
  _DWORD *v11; // r1
  int v12; // r12
  int v13; // r7
  _DWORD *v14; // r3
  _DWORD *v15; // r0
  int v16; // t1
  int v17; // r7
  int v18; // lr
  int v19; // r2
  int v20; // r8
  int v21; // r7
  int v22; // lr
  int *v23; // r2
  int v24; // r3
  int v25; // r5
  int v26; // lr
  int v27; // r12
  int v28; // r1
  char v29; // r1
  int *v30; // r3
  _BYTE *v31; // r2
  int v32; // r12
  int v33; // r0
  int v34; // r1
  int v35; // r4
  _DWORD *v36; // lr
  _DWORD *v37; // r12
  int v38; // r1
  int v39; // r2
  int v40; // r3
  _BYTE *v41; // r1
  unsigned int v42; // r3
  int v43; // t1
  unsigned __int16 v44; // r0
  char *v46; // r5
  char *v47; // r6
  int v48; // t1
  int *v50; // [sp+14h] [bp-2010h]
  _DWORD *v51; // [sp+18h] [bp-200Ch]
  int v52; // [sp+1Ch] [bp-2008h]
  char v53[4064]; // [sp+20h] [bp-2004h] BYREF
  char v54[4100]; // [sp+1020h] [bp-1004h] BYREF

  v5 = *(_DWORD *)(a1 + 624);
  *a3 = 85;
  a3[2] = 32;
  v7 = a2 + 10;
  a3[1] = -86;
  v8 = v5 + 28672;
  v9 = *(_DWORD *)(a1 + 304);
  v11 = a2 + 2;
  if ( v9 == 1 )
    a3[2] = 48;
  v12 = *(unsigned __int8 *)(v5 + 31744);
  v13 = v11[20];
  v51 = v11;
  *(_QWORD *)(v5 + 8 * v12) = *((_QWORD *)v11 - 1);
  v14 = (_DWORD *)(v5 + 32 * (v12 + 736));
  *(_DWORD *)(v5 + 4 * (v12 + 5632)) = v13;
  v16 = a2[23];
  v15 = a2 + 23;
  v17 = v15[1];
  v18 = v15[2];
  v19 = v15[3];
  *v14 = v16;
  v14[1] = v17;
  v14[2] = v18;
  v14[3] = v19;
  v20 = v15[4];
  v21 = v15[5];
  v22 = v15[6];
  v14[7] = v15[7];
  v14[4] = v20;
  v14[5] = v21;
  v14[6] = v22;
  strcpy((char *)(v5 + 32 * (*(unsigned __int8 *)(v5 + 31744) + 64)), (const char *)v11);
  v23 = v7;
  v24 = v5 + 48 * *(unsigned __int8 *)(v5 + 31744) + 10240;
  do
  {
    v25 = *v23;
    v23 += 4;
    v26 = *(v23 - 3);
    v24 += 16;
    v27 = *(v23 - 2);
    v28 = *(v23 - 1);
    *(_DWORD *)(v24 - 16) = v25;
    *(_DWORD *)(v24 - 12) = v26;
    *(_DWORD *)(v24 - 8) = v27;
    *(_DWORD *)(v24 - 4) = v28;
  }
  while ( v23 != a2 + 22 );
  v29 = *(_BYTE *)(v8 + 3072);
  v30 = v7;
  v31 = a3 + 4;
  v50 = v7 + 12;
  a3[3] = v29;
  *(_BYTE *)(v8 + 3072) = v29 + 1;
  do
  {
    v30 += 4;
    v31 += 16;
    v32 = *(v30 - 3);
    v33 = *(v30 - 2);
    v34 = *(v30 - 1);
    *((_DWORD *)v31 - 4) = *(v30 - 4);
    *((_DWORD *)v31 - 3) = v32;
    *((_DWORD *)v31 - 2) = v33;
    *((_DWORD *)v31 - 1) = v34;
  }
  while ( v30 != v50 );
  v35 = memcmp(&last_header_ckb, v7, 0x30u);
  if ( !v35 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v54, 0x1000u, 0, "found repeat work");
    v46 = (char *)a2 + 39;
    pthread_mutex_unlock(&stru_1A8A24);
    v47 = (char *)a2 + 87;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ckb/backend_ckb.c",
      154,
      "work_2_packet_ckb",
      17,
      142,
      80,
      v54);
    v52 = (unsigned __int8)a3[3];
    do
    {
      v48 = (unsigned __int8)*++v46;
      v35 += snprintf(&v53[v35], 4096 - v35, "%02x ", v48);
    }
    while ( v47 != v46 );
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v54, 0x1000u, 0, "ckb dump work jobid %s, work count %d", v51, v52);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ckb/backend_ckb.c",
      154,
      "dump_work_ckb",
      13,
      106,
      20,
      v54);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v54, 0x1000u, 0, "dump work: %s", v53);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ckb/backend_ckb.c",
      154,
      "dump_work_ckb",
      13,
      107,
      20,
      v54);
  }
  v36 = &last_header_ckb;
  do
  {
    v7 += 4;
    v37 = v36;
    v38 = *(v7 - 3);
    v36 += 4;
    v39 = *(v7 - 2);
    v40 = *(v7 - 1);
    *v37 = *(v7 - 4);
    v37[1] = v38;
    v37[2] = v39;
    v37[3] = v40;
  }
  while ( v7 != v50 );
  v41 = a3 + 2;
  v42 = 0xFFFF;
  do
  {
    v43 = (unsigned __int8)*v41++;
    v44 = crc_itu_t_table[v43 ^ (v42 >> 8)] ^ ((_WORD)v42 << 8);
    v42 = v44;
  }
  while ( v41 != a3 + 52 );
  a3[53] = v44;
  a3[52] = HIBYTE(v44);
  *a4 = 54;
  return 0;
}
