int __fastcall work_2_packet_dash(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v6; // r4
  _BYTE *v8; // r5
  int v10; // r1
  int v11; // r10
  int v12; // r3
  int v13; // t1
  const void *v14; // r10
  int v15; // r2
  int v16; // lr
  int v17; // r3
  int v18; // r12
  int v19; // r2
  _DWORD *v20; // r3
  int v21; // r12
  int v22; // lr
  int v23; // r2
  int v24; // r3
  _BYTE *v25; // r2
  _BYTE *v26; // r3
  char v27; // r1
  int v28; // r4
  _BYTE *v29; // r1
  unsigned int v30; // r3
  int v31; // t1
  unsigned __int16 v32; // r0
  int v33; // r3
  int v35; // r5
  int v36; // r6
  int v37; // t1
  int v39; // [sp+14h] [bp-2010h]
  int v40; // [sp+18h] [bp-200Ch]
  char v41[4096]; // [sp+20h] [bp-2004h] BYREF
  char v42[4100]; // [sp+1020h] [bp-1004h] BYREF

  v6 = *(_DWORD *)(a1 + 600);
  *a3 = 85;
  a3[2] = 32;
  a3[1] = -86;
  v8 = (_BYTE *)(v6 + 21504);
  if ( *(_DWORD *)(a1 + 288) == 1 )
    a3[2] = 48;
  v10 = (unsigned __int8)*v8;
  v11 = *(_DWORD *)(a2 + 120);
  v12 = 12 * v10 + 19968;
  *(_QWORD *)(v6 + 8 * v10) = *(_QWORD *)a2;
  *(_DWORD *)(v6 + 4 * (v10 + 3840)) = v11;
  v13 = *(_DWORD *)(a2 + 156);
  v39 = a2 + 8;
  v14 = (const void *)(a2 + 40);
  v15 = *(_DWORD *)(a2 + 160);
  *(_DWORD *)(v6 + v12) = v13;
  *(_DWORD *)(v6 + v12 + 4) = v15;
  v16 = *(_DWORD *)(a2 + 128);
  v17 = 32 * ((unsigned __int8)*v8 + 496);
  v18 = *(_DWORD *)(a2 + 132);
  v19 = *(_DWORD *)(a2 + 136);
  *(_DWORD *)(v6 + v17) = *(_DWORD *)(a2 + 124);
  v20 = (_DWORD *)(v17 + v6);
  v20[1] = v16;
  v20[2] = v18;
  v20[3] = v19;
  v21 = *(_DWORD *)(a2 + 148);
  v22 = *(_DWORD *)(a2 + 144);
  v23 = *(_DWORD *)(a2 + 152);
  v20[4] = *(_DWORD *)(a2 + 140);
  v20[5] = v22;
  v20[6] = v21;
  v20[7] = v23;
  strcpy((char *)(v6 + 32 * ((unsigned __int8)*v8 + 32)), (const char *)(a2 + 8));
  memcpy((void *)(v6 + 80 * (unsigned __int8)*v8 + 5120), (const void *)(a2 + 40), 0x50u);
  v24 = (unsigned __int8)*v8;
  *(_QWORD *)(v6 + 8 * (v24 + 2689)) = *(_QWORD *)(a2 + 168);
  a3[3] = v24;
  *v8 = (v24 + 1) & 0x7F;
  memcpy(a3 + 4, (const void *)(a2 + 40), 0x50u);
  v25 = a3;
  v26 = (_BYTE *)a2;
  do
  {
    v27 = v26[40];
    v26 += 4;
    v25[7] = v27;
    v25[6] = v26[37];
    v25[5] = v26[38];
    v25[4] = v26[39];
    v25 += 4;
  }
  while ( v26 != (_BYTE *)(a2 + 80) );
  v28 = memcmp(&last_header_dash, (const void *)(a2 + 40), 0x50u);
  if ( !v28 )
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v42, 0x1000u, 0, "found repeat work");
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
      73,
      "work_2_packet_dash",
      18,
      122,
      80,
      v42);
    v35 = a2 + 39;
    v36 = a2 + 119;
    v40 = (unsigned __int8)a3[3];
    do
    {
      v37 = *(unsigned __int8 *)++v35;
      v28 += snprintf(&v41[v28], 4096 - v28, "%02x ", v37);
    }
    while ( v36 != v35 );
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v42, 0x1000u, 0, "dash dump work jobid %s, work count %d", v39, v40);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
      73,
      "dump_work_dash",
      14,
      78,
      20,
      v42);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v42, 0x1000u, 0, "dump work: %s", v41);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_dash/backend_dash.c",
      73,
      "dump_work_dash",
      14,
      79,
      20,
      v42);
  }
  memcpy(&last_header_dash, v14, 0x50u);
  v29 = a3 + 2;
  v30 = 0xFFFF;
  do
  {
    v31 = (unsigned __int8)*v29++;
    v32 = crc_itu_t_table[v31 ^ (v30 >> 8)] ^ ((_WORD)v30 << 8);
    v30 = v32;
  }
  while ( v29 != a3 + 84 );
  a3[85] = v32;
  a3[84] = HIBYTE(v32);
  v33 = *(unsigned __int8 *)(a1 + 129);
  *a4 = 86;
  if ( !v33 || !*(_BYTE *)(a1 + 130) )
    return 0;
  set_ticket_mask_dash(a1, 35);
  *(_BYTE *)(a1 + 129) = 0;
  return 0;
}
