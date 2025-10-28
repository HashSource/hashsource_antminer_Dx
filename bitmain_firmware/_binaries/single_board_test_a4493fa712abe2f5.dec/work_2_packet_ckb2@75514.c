int __fastcall work_2_packet_ckb2(int a1, _DWORD *a2, _BYTE *a3, _DWORD *a4)
{
  int v6; // r4
  char *v8; // r5
  _DWORD *v9; // r3
  int v10; // r2
  _DWORD *v11; // r1
  int v12; // r7
  int *v13; // r9
  _DWORD *v14; // r0
  int v15; // t1
  int v16; // lr
  int v17; // r12
  int v18; // r7
  int v19; // lr
  int v20; // r12
  int v21; // r7
  int *v22; // r2
  int v23; // r4
  int v24; // r12
  int v25; // r7
  int v26; // r1
  int v27; // r3
  char v28; // r2
  int *v29; // r3
  _BYTE *v30; // r1
  int v31; // r2
  int v32; // r4
  int v33; // r0
  int v34; // r4
  _DWORD *v35; // r5
  int v36; // r3
  _DWORD *v37; // r4
  int v38; // r0
  int v39; // r1
  int v40; // r2
  _BYTE *v41; // r1
  unsigned int v42; // r3
  int v43; // t1
  unsigned __int16 v44; // r0
  int v45; // r3
  char *v47; // r5
  char *v48; // r6
  int v49; // t1
  int *v51; // [sp+18h] [bp-2014h]
  _DWORD *v52; // [sp+1Ch] [bp-2010h]
  int v53; // [sp+20h] [bp-200Ch]
  char v54[4088]; // [sp+28h] [bp-2004h] BYREF
  char v55[4100]; // [sp+1028h] [bp-1004h] BYREF

  v6 = *(_DWORD *)(a1 + 600);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  v8 = (char *)(v6 + 15872);
  if ( *(_DWORD *)(a1 + 288) == 1 )
    a3[2] = 48;
  v9 = a2;
  v10 = (unsigned __int8)*v8;
  v11 = a2 + 2;
  v12 = v11[20];
  v52 = v11;
  *(_QWORD *)(v6 + 8 * v10) = *((_QWORD *)v11 - 1);
  v13 = a2 + 10;
  *(_DWORD *)(v6 + 4 * (v10 + 2816)) = v12;
  v14 = (_DWORD *)(v6 + 32 * (v10 + 368));
  v15 = v9[23];
  v9 += 23;
  v16 = v9[1];
  v17 = v9[2];
  v18 = v9[3];
  *v14 = v15;
  v14[1] = v16;
  v14[2] = v17;
  v14[3] = v18;
  v19 = v9[5];
  v20 = v9[6];
  v21 = v9[7];
  v14[4] = v9[4];
  v14[5] = v19;
  v14[6] = v20;
  v14[7] = v21;
  strcpy((char *)(v6 + 32 * ((unsigned __int8)*v8 + 32)), (const char *)v11);
  v22 = a2 + 10;
  v23 = v6 + 48 * (unsigned __int8)*v8 + 5120;
  do
  {
    v24 = *v22;
    v22 += 4;
    v25 = *(v22 - 3);
    v23 += 16;
    v26 = *(v22 - 2);
    v27 = *(v22 - 1);
    *(_DWORD *)(v23 - 16) = v24;
    *(_DWORD *)(v23 - 12) = v25;
    *(_DWORD *)(v23 - 8) = v26;
    *(_DWORD *)(v23 - 4) = v27;
  }
  while ( v22 != a2 + 22 );
  v28 = *v8;
  v29 = a2 + 10;
  v30 = a3 + 4;
  v51 = a2 + 22;
  a3[3] = *v8;
  *v8 = (v28 + 1) & 0x7F;
  do
  {
    v31 = v29[3];
    v29 += 4;
    v30 += 16;
    v32 = *(v29 - 3);
    v33 = *(v29 - 2);
    *((_DWORD *)v30 - 4) = *(v29 - 4);
    *((_DWORD *)v30 - 3) = v32;
    *((_DWORD *)v30 - 2) = v33;
    *((_DWORD *)v30 - 1) = v31;
  }
  while ( v29 != v51 );
  v34 = memcmp(&last_header_ckb2, a2 + 10, 0x30u);
  if ( !v34 )
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v55, 0x1000u, 0, "found repeat work");
    pthread_mutex_unlock(&stru_3B526C);
    v47 = (char *)a2 + 39;
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_ckb2/backend_ckb2.c",
      73,
      "work_2_packet_ckb2",
      18,
      117,
      80,
      v55);
    v48 = (char *)a2 + 87;
    v53 = (unsigned __int8)a3[3];
    do
    {
      v49 = (unsigned __int8)*++v47;
      v34 += snprintf(&v54[v34], 4096 - v34, "%02x ", v49);
    }
    while ( v48 != v47 );
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v55, 0x1000u, 0, "ckb dump work jobid %s, work count %d", v52, v53);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_ckb2/backend_ckb2.c",
      73,
      "dump_work_ckb2",
      14,
      84,
      20,
      v55);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v55, 0x1000u, 0, "dump work: %s", v54);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_ckb2/backend_ckb2.c",
      73,
      "dump_work_ckb2",
      14,
      85,
      20,
      v55);
  }
  v35 = &last_header_ckb2;
  do
  {
    v36 = v13[3];
    v37 = v35;
    v38 = *v13;
    v13 += 4;
    v39 = *(v13 - 3);
    v35 += 4;
    v40 = *(v13 - 2);
    *v37 = v38;
    v37[1] = v39;
    v37[2] = v40;
    v37[3] = v36;
  }
  while ( v13 != v51 );
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
  v45 = *(unsigned __int8 *)(a1 + 129);
  *a4 = 54;
  if ( v45 && *(_BYTE *)(a1 + 130) )
  {
    memset(*(void **)(a1 + 248), 0, 48 * *(_DWORD *)(a1 + 180));
    chip_setting_ticket_value_ckb2(a1, 25);
    *(_BYTE *)(a1 + 129) = 0;
  }
  return 0;
}
