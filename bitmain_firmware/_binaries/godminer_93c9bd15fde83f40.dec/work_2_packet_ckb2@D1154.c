int __fastcall work_2_packet_ckb2(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v6; // r4
  int v7; // r5
  int v9; // r0
  int v10; // r12
  int v11; // r9
  _DWORD *v12; // r2
  int v13; // r7
  int v14; // lr
  int v15; // r12
  int v16; // r7
  int v17; // lr
  int v18; // r12
  int *v19; // r2
  int v20; // r4
  int v21; // lr
  int v22; // r12
  int v23; // r1
  int v24; // r3
  char v25; // r2
  int v26; // r3
  _BYTE *v27; // r1
  int v28; // r12
  int v29; // r0
  int v30; // r2
  int v31; // r4
  _DWORD *v32; // lr
  _DWORD *v33; // r12
  int v34; // r1
  int v35; // r2
  int v36; // r3
  _BYTE *v37; // r1
  unsigned int v38; // r3
  int v39; // t1
  unsigned __int16 v40; // r0
  int v41; // r3
  int v43; // r5
  int v44; // r6
  int v45; // t1
  int v47; // [sp+18h] [bp-2014h]
  int v48; // [sp+1Ch] [bp-2010h]
  int v49; // [sp+20h] [bp-200Ch]
  char v50[4056]; // [sp+28h] [bp-2004h] BYREF
  char v51[4100]; // [sp+1028h] [bp-1004h] BYREF

  v6 = *(_DWORD *)(a1 + 624);
  *a3 = 85;
  a3[2] = 32;
  a3[1] = -86;
  v7 = v6 + 12288;
  v48 = a2 + 8;
  if ( *(_DWORD *)(a1 + 304) == 1 )
    a3[2] = 48;
  v9 = *(unsigned __int8 *)(v6 + 15872);
  v10 = *(_DWORD *)(a2 + 88);
  *(_QWORD *)(v6 + 8 * v9) = *(_QWORD *)a2;
  v11 = a2 + 40;
  *(_DWORD *)(v6 + 4 * (v9 + 2816)) = v10;
  v12 = (_DWORD *)(v6 + 32 * (v9 + 368));
  v13 = *(_DWORD *)(a2 + 96);
  v14 = *(_DWORD *)(a2 + 100);
  v15 = *(_DWORD *)(a2 + 104);
  *v12 = *(_DWORD *)(a2 + 92);
  v12[1] = v13;
  v12[2] = v14;
  v12[3] = v15;
  v16 = *(_DWORD *)(a2 + 112);
  v17 = *(_DWORD *)(a2 + 116);
  v18 = *(_DWORD *)(a2 + 120);
  v12[4] = *(_DWORD *)(a2 + 108);
  v12[5] = v16;
  v12[6] = v17;
  v12[7] = v18;
  strcpy((char *)(v6 + 32 * (*(unsigned __int8 *)(v6 + 15872) + 32)), (const char *)(a2 + 8));
  v19 = (int *)(a2 + 40);
  v20 = v6 + 48 * *(unsigned __int8 *)(v6 + 15872) + 5120;
  do
  {
    v21 = *v19;
    v19 += 4;
    v22 = *(v19 - 3);
    v20 += 16;
    v23 = *(v19 - 2);
    v24 = *(v19 - 1);
    *(_DWORD *)(v20 - 16) = v21;
    *(_DWORD *)(v20 - 12) = v22;
    *(_DWORD *)(v20 - 8) = v23;
    *(_DWORD *)(v20 - 4) = v24;
  }
  while ( v19 != (int *)(a2 + 88) );
  v25 = *(_BYTE *)(v7 + 3584);
  v26 = a2 + 40;
  v27 = a3 + 4;
  v47 = a2 + 88;
  a3[3] = v25;
  *(_BYTE *)(v7 + 3584) = (v25 + 1) & 0x7F;
  do
  {
    v26 += 16;
    v27 += 16;
    v28 = *(_DWORD *)(v26 - 12);
    v29 = *(_DWORD *)(v26 - 8);
    v30 = *(_DWORD *)(v26 - 4);
    *((_DWORD *)v27 - 4) = *(_DWORD *)(v26 - 16);
    *((_DWORD *)v27 - 3) = v28;
    *((_DWORD *)v27 - 2) = v29;
    *((_DWORD *)v27 - 1) = v30;
  }
  while ( v26 != v47 );
  v31 = memcmp(&last_header_ckb2, (const void *)(a2 + 40), 0x30u);
  if ( !v31 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v51, 0x1000u, 0, "found repeat work");
    pthread_mutex_unlock(&stru_1A8A24);
    v43 = a2 + 39;
    v44 = a2 + 87;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ckb2/backend_ckb2.c",
      156,
      "work_2_packet_ckb2",
      18,
      117,
      80,
      v51);
    v49 = (unsigned __int8)a3[3];
    do
    {
      v45 = *(unsigned __int8 *)++v43;
      v31 += snprintf(&v50[v31], 4096 - v31, "%02x ", v45);
    }
    while ( v44 != v43 );
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v51, 0x1000u, 0, "ckb dump work jobid %s, work count %d", v48, v49);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ckb2/backend_ckb2.c",
      156,
      "dump_work_ckb2",
      14,
      84,
      20,
      v51);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v51, 0x1000u, 0, "dump work: %s", v50);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ckb2/backend_ckb2.c",
      156,
      "dump_work_ckb2",
      14,
      85,
      20,
      v51);
  }
  v32 = &last_header_ckb2;
  do
  {
    v11 += 16;
    v33 = v32;
    v34 = *(_DWORD *)(v11 - 12);
    v32 += 4;
    v35 = *(_DWORD *)(v11 - 8);
    v36 = *(_DWORD *)(v11 - 4);
    *v33 = *(_DWORD *)(v11 - 16);
    v33[1] = v34;
    v33[2] = v35;
    v33[3] = v36;
  }
  while ( v11 != v47 );
  v37 = a3 + 2;
  v38 = 0xFFFF;
  do
  {
    v39 = (unsigned __int8)*v37++;
    v40 = crc_itu_t_table[v39 ^ (v38 >> 8)] ^ ((_WORD)v38 << 8);
    v38 = v40;
  }
  while ( v37 != a3 + 52 );
  a3[53] = v40;
  a3[52] = HIBYTE(v40);
  v41 = *(unsigned __int8 *)(a1 + 141);
  *a4 = 54;
  if ( v41 && *(_BYTE *)(a1 + 142) )
  {
    memset(*(void **)(a1 + 264), 0, 48 * *(_DWORD *)(a1 + 192));
    chip_setting_ticket_value_ckb2(a1, 25);
    *(_BYTE *)(a1 + 141) = 0;
  }
  return 0;
}
