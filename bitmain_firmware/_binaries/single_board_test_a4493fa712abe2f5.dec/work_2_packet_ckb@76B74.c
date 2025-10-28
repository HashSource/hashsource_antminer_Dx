int __fastcall work_2_packet_ckb(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r5
  char *v7; // r4
  int *v8; // r9
  int v9; // r7
  int v10; // lr
  _DWORD *v11; // r3
  int v12; // lr
  int v13; // r12
  int v14; // r2
  int v15; // r8
  int v16; // lr
  int v17; // r12
  int *v18; // r2
  int v19; // r3
  int v20; // r12
  int v21; // r7
  int v22; // r5
  int v23; // r1
  char v24; // r1
  int *v25; // r3
  _BYTE *v26; // r2
  int v27; // r1
  int v28; // r4
  int v29; // r0
  int v30; // r4
  _DWORD *v31; // r5
  int v32; // r3
  _DWORD *v33; // r4
  int v34; // r0
  int v35; // r1
  int v36; // r2
  _BYTE *v37; // r1
  unsigned int v38; // r3
  int v39; // t1
  unsigned __int16 v40; // r0
  int v42; // r5
  int v43; // r6
  int v44; // t1
  int *v46; // [sp+14h] [bp-2010h]
  int v47; // [sp+18h] [bp-200Ch]
  int v48; // [sp+1Ch] [bp-2008h]
  char v49[4096]; // [sp+20h] [bp-2004h] BYREF
  char v50[4100]; // [sp+1020h] [bp-1004h] BYREF

  v5 = *(_DWORD *)(a1 + 600);
  *a3 = 85;
  a3[2] = 32;
  a3[1] = -86;
  v7 = (char *)(v5 + 31744);
  v8 = (int *)(a2 + 40);
  v47 = a2 + 8;
  if ( *(_DWORD *)(a1 + 288) == 1 )
    a3[2] = 48;
  v9 = (unsigned __int8)*v7;
  v10 = *(_DWORD *)(a2 + 88);
  *(_QWORD *)(v5 + 8 * v9) = *(_QWORD *)a2;
  *(_DWORD *)(v5 + 4 * (v9 + 5632)) = v10;
  v11 = (_DWORD *)(v5 + 32 * (v9 + 736));
  v12 = *(_DWORD *)(a2 + 96);
  v13 = *(_DWORD *)(a2 + 100);
  v14 = *(_DWORD *)(a2 + 104);
  *v11 = *(_DWORD *)(a2 + 92);
  v11[1] = v12;
  v11[2] = v13;
  v11[3] = v14;
  v15 = *(_DWORD *)(a2 + 108);
  v16 = *(_DWORD *)(a2 + 112);
  v17 = *(_DWORD *)(a2 + 116);
  v11[7] = *(_DWORD *)(a2 + 120);
  v11[4] = v15;
  v11[5] = v16;
  v11[6] = v17;
  strcpy((char *)(v5 + 32 * ((unsigned __int8)*v7 + 64)), (const char *)(a2 + 8));
  v18 = v8;
  v19 = v5 + 48 * (unsigned __int8)*v7 + 10240;
  do
  {
    v20 = *v18;
    v18 += 4;
    v21 = *(v18 - 3);
    v19 += 16;
    v22 = *(v18 - 2);
    v23 = *(v18 - 1);
    *(_DWORD *)(v19 - 16) = v20;
    *(_DWORD *)(v19 - 12) = v21;
    *(_DWORD *)(v19 - 8) = v22;
    *(_DWORD *)(v19 - 4) = v23;
  }
  while ( v18 != (int *)(a2 + 88) );
  v24 = *v7;
  v25 = v8;
  v26 = a3 + 4;
  v46 = v8 + 12;
  a3[3] = *v7;
  *v7 = v24 + 1;
  do
  {
    v27 = v25[3];
    v25 += 4;
    v26 += 16;
    v28 = *(v25 - 3);
    v29 = *(v25 - 2);
    *((_DWORD *)v26 - 4) = *(v25 - 4);
    *((_DWORD *)v26 - 3) = v28;
    *((_DWORD *)v26 - 2) = v29;
    *((_DWORD *)v26 - 1) = v27;
  }
  while ( v25 != v46 );
  v30 = memcmp(&last_header_ckb, v8, 0x30u);
  if ( !v30 )
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v50, 0x1000u, 0, "found repeat work");
    pthread_mutex_unlock(&stru_3B526C);
    v42 = a2 + 39;
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_ckb/backend_ckb.c",
      71,
      "work_2_packet_ckb",
      17,
      142,
      80,
      v50);
    v43 = a2 + 87;
    v48 = (unsigned __int8)a3[3];
    do
    {
      v44 = *(unsigned __int8 *)++v42;
      v30 += snprintf(&v49[v30], 4096 - v30, "%02x ", v44);
    }
    while ( v43 != v42 );
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v50, 0x1000u, 0, "ckb dump work jobid %s, work count %d", v47, v48);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_ckb/backend_ckb.c",
      71,
      "dump_work_ckb",
      13,
      106,
      20,
      v50);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v50, 0x1000u, 0, "dump work: %s", v49);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_ckb/backend_ckb.c",
      71,
      "dump_work_ckb",
      13,
      107,
      20,
      v50);
  }
  v31 = &last_header_ckb;
  do
  {
    v32 = v8[3];
    v33 = v31;
    v34 = *v8;
    v8 += 4;
    v35 = *(v8 - 3);
    v31 += 4;
    v36 = *(v8 - 2);
    *v33 = v34;
    v33[1] = v35;
    v33[2] = v36;
    v33[3] = v32;
  }
  while ( v8 != v46 );
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
  *a4 = 54;
  return 0;
}
