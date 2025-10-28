int __fastcall work_2_packet_dash(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r4
  int v7; // r9
  int v8; // lr
  int v9; // r2
  int v10; // r0
  int v11; // r8
  int v12; // lr
  int v13; // r12
  _DWORD *v14; // r2
  int v15; // r8
  int v16; // lr
  int v17; // r12
  const void *v18; // r11
  int v19; // r12
  _BYTE *v20; // r2
  _BYTE *v21; // r3
  char v22; // r1
  int v23; // r4
  unsigned int v24; // r3
  _BYTE *v25; // r1
  int v26; // t1
  unsigned __int16 v27; // r0
  int v28; // r3
  int v30; // r5
  int v31; // r6
  int v32; // t1
  int v35; // [sp+1Ch] [bp-2010h]
  int v36; // [sp+20h] [bp-200Ch]
  _DWORD v37[2]; // [sp+28h] [bp-2004h] BYREF
  int v38; // [sp+30h] [bp-1FFCh]
  int v39; // [sp+34h] [bp-1FF8h]
  char v40[4100]; // [sp+1028h] [bp-1004h] BYREF

  v5 = *(_DWORD *)(a1 + 624);
  *a3 = 85;
  a3[2] = 32;
  a3[1] = -86;
  if ( *(_DWORD *)(a1 + 304) == 1 )
    a3[2] = 48;
  v7 = *(unsigned __int8 *)(v5 + 21504);
  v8 = *(_DWORD *)(a2 + 120);
  *(_QWORD *)(v5 + 8 * v7) = *(_QWORD *)a2;
  v9 = 12 * (__int16)v7 + 19968;
  *(_DWORD *)(v5 + 4 * (v7 + 3840)) = v8;
  v35 = a2 + 8;
  v10 = *(_DWORD *)(a2 + 160);
  *(_DWORD *)(v5 + v9) = *(_DWORD *)(a2 + 156);
  *(_DWORD *)(v5 + v9 + 4) = v10;
  v11 = *(_DWORD *)(a2 + 128);
  v12 = *(_DWORD *)(a2 + 132);
  v13 = *(_DWORD *)(a2 + 136);
  v14 = (_DWORD *)(v5 + 32 * (*(unsigned __int8 *)(v5 + 21504) + 496));
  *v14 = *(_DWORD *)(a2 + 124);
  v14[1] = v11;
  v14[2] = v12;
  v14[3] = v13;
  v15 = *(_DWORD *)(a2 + 144);
  v16 = *(_DWORD *)(a2 + 148);
  v17 = *(_DWORD *)(a2 + 152);
  v14[4] = *(_DWORD *)(a2 + 140);
  v18 = (const void *)(a2 + 40);
  v14[6] = v16;
  v14[7] = v17;
  v14[5] = v15;
  strcpy((char *)(v5 + 32 * (*(unsigned __int8 *)(v5 + 21504) + 32)), (const char *)(a2 + 8));
  memcpy((void *)(v5 + 80 * *(unsigned __int8 *)(v5 + 21504) + 5120), (const void *)(a2 + 40), 0x50u);
  v19 = *(unsigned __int8 *)(v5 + 21504);
  *(_QWORD *)(v5 + 8 * (v19 + 2689)) = *(_QWORD *)(a2 + 168);
  a3[3] = v19;
  *(_BYTE *)(v5 + 21504) = (v19 + 1) & 0x7F;
  memcpy(a3 + 4, (const void *)(a2 + 40), 0x50u);
  v20 = a3;
  v21 = (_BYTE *)a2;
  do
  {
    v22 = v21[40];
    v21 += 4;
    v20[7] = v22;
    v20[6] = v21[37];
    v20[5] = v21[38];
    v20[4] = v21[39];
    v20 += 4;
  }
  while ( v21 != (_BYTE *)(a2 + 80) );
  v23 = memcmp(&last_header_dash, (const void *)(a2 + 40), 0x50u);
  if ( !v23 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v40, 0x1000u, 0, "found repeat work");
    pthread_mutex_unlock(&stru_1A8A24);
    v30 = a2 + 39;
    v31 = a2 + 119;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dash/backend_dash.c",
      156,
      "work_2_packet_dash",
      18,
      122,
      80,
      v40);
    v36 = (unsigned __int8)a3[3];
    do
    {
      v32 = *(unsigned __int8 *)++v30;
      v23 += snprintf((char *)v37 + v23, 4096 - v23, "%02x ", v32);
    }
    while ( v31 != v30 );
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v40, 0x1000u, 0, "dash dump work jobid %s, work count %d", v35, v36);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dash/backend_dash.c",
      156,
      "dump_work_dash",
      14,
      78,
      20,
      v40);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v40, 0x1000u, 0, "dump work: %s", v37);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dash/backend_dash.c",
      156,
      "dump_work_dash",
      14,
      79,
      20,
      v40);
  }
  memcpy(&last_header_dash, v18, 0x50u);
  v24 = 0xFFFF;
  v25 = a3 + 2;
  do
  {
    v26 = (unsigned __int8)*v25++;
    v27 = crc_itu_t_table[v26 ^ (v24 >> 8)] ^ ((_WORD)v24 << 8);
    v24 = v27;
  }
  while ( v25 != a3 + 84 );
  a3[85] = v27;
  a3[84] = HIBYTE(v27);
  v28 = *(unsigned __int8 *)(a1 + 141);
  *a4 = 86;
  if ( !v28 || !*(_BYTE *)(a1 + 142) )
    return 0;
  v37[0] = 0;
  v37[1] = 0;
  v38 = 0;
  v39 = 0;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v40, 0x1000u, 0, "ticket_mask %s core reg %02x tm %d", "set_ticket_mask_dash", 20, 35);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "set_ticket_mask_dash",
    20,
    282,
    20,
    v40);
  LOWORD(v39) = 2815;
  v37[0] = 35;
  v38 = 1310721;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v37);
  *(_DWORD *)(a1 + 244) = 35;
  *(_BYTE *)(a1 + 141) = 0;
  return 0;
}
