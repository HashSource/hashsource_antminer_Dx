int __fastcall work_2_packet_ltc(int a1, _DWORD *a2, unsigned __int8 *a3, _DWORD *a4)
{
  int v5; // r4
  _DWORD *v7; // r3
  int v8; // r0
  const char *v9; // r1
  int v10; // r12
  unsigned __int8 *v11; // r10
  _DWORD *v12; // r2
  int v13; // t1
  int v14; // r8
  int v15; // lr
  int v16; // r12
  int v17; // r7
  int v18; // lr
  int v19; // r12
  int v20; // r3
  unsigned __int8 v21; // r12
  unsigned __int8 *v22; // r2
  unsigned __int8 *v23; // r3
  unsigned __int8 v24; // r1
  unsigned __int8 v25; // t1
  unsigned __int8 v26; // t1
  int v27; // r4
  unsigned __int8 *v28; // r1
  unsigned int v29; // r3
  int v30; // t1
  unsigned __int16 v31; // r0
  int v32; // r3
  char *v34; // r5
  char *v35; // r6
  int v36; // t1
  _DWORD *s2; // [sp+14h] [bp-2018h]
  const char *v40; // [sp+1Ch] [bp-2010h]
  int v41; // [sp+20h] [bp-200Ch]
  char v42[4056]; // [sp+28h] [bp-2004h] BYREF
  char v43[4100]; // [sp+1028h] [bp-1004h] BYREF

  v5 = *(_DWORD *)(a1 + 624);
  *a3 = 85;
  a3[2] = 32;
  a3[1] = -86;
  if ( *(_DWORD *)(a1 + 304) == 1 )
    a3[2] = 48;
  v7 = a2;
  v8 = *(unsigned __int8 *)(v5 + 27136);
  v9 = (const char *)(a2 + 2);
  v10 = *((_DWORD *)v9 + 36);
  v40 = v9;
  *(_QWORD *)(v5 + 8 * v8) = *(_QWORD *)a2;
  v11 = a3 + 84;
  *(_DWORD *)(v5 + 4 * (v8 + 4864)) = v10;
  v12 = (_DWORD *)(v5 + 32 * (v8 + 624));
  v13 = v7[39];
  v7 += 39;
  v14 = v7[1];
  v15 = v7[2];
  v16 = v7[3];
  *v12 = v13;
  v12[1] = v14;
  v12[2] = v15;
  v12[3] = v16;
  v17 = v7[4];
  v18 = v7[6];
  v19 = v7[7];
  v12[5] = v7[5];
  v12[6] = v18;
  v12[7] = v19;
  v12[4] = v17;
  s2 = a2 + 18;
  strcpy((char *)(v5 + ((*(unsigned __int8 *)(v5 + 27136) + 16) << 6)), v9);
  memcpy((void *)(v5 + 80 * *(unsigned __int8 *)(v5 + 27136) + 9216), a2 + 18, 0x50u);
  memcpy((void *)(v5 + 16 * (*(unsigned __int8 *)(v5 + 27136) + 1504)), a2 + 47, a2[51]);
  v20 = *(unsigned __int8 *)(v5 + 27136);
  *(_DWORD *)(v5 + 4 * (v20 + 6528)) = a2[51];
  *(_DWORD *)(v5 + 4 * (v20 + 6656)) = a2[52];
  v21 = *(_BYTE *)(v5 + 27136);
  a3[3] = v21;
  *(_BYTE *)(v5 + 27136) = (v21 + 1) & 0x7F;
  memcpy(a3 + 4, a2 + 18, 0x50u);
  v22 = a3 + 84;
  v23 = a3 + 3;
  do
  {
    v25 = *++v23;
    v24 = v25;
    v26 = *--v22;
    *v23 = v26;
    *v22 = v24;
  }
  while ( a3 + 43 != v23 );
  v27 = memcmp(&last_work_ltc, s2, 0x50u);
  if ( !v27 )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v43, 0x1000u, 0, "found repeat work");
    pthread_mutex_unlock(&stru_1A8A24);
    v34 = (char *)a2 + 71;
    v35 = (char *)a2 + 151;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ltc/backend_ltc.c",
      154,
      "work_2_packet_ltc",
      17,
      185,
      80,
      v43);
    v41 = a3[3];
    do
    {
      v36 = (unsigned __int8)*++v34;
      v27 += snprintf(&v42[v27], 4096 - v27, "%02x ", v36);
    }
    while ( v35 != v34 );
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v43, 0x1000u, 0, "ltc dump work jobid %s, work count %02x", v40, v41);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ltc/backend_ltc.c",
      154,
      "dump_work_ltc",
      13,
      106,
      20,
      v43);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v43, 0x1000u, 0, "dump work: %s", v42);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ltc/backend_ltc.c",
      154,
      "dump_work_ltc",
      13,
      107,
      20,
      v43);
  }
  memcpy(&last_work_ltc, s2, 0x50u);
  v28 = a3 + 2;
  v29 = 0xFFFF;
  do
  {
    v30 = *v28++;
    v31 = crc_itu_t_table[v30 ^ (v29 >> 8)] ^ ((_WORD)v29 << 8);
    v29 = v31;
  }
  while ( v28 != v11 );
  a3[85] = v31;
  a3[84] = HIBYTE(v31);
  v32 = *(unsigned __int8 *)(a1 + 141);
  *a4 = 86;
  if ( !v32 || !*(_BYTE *)(a1 + 142) )
    return 0;
  memset(*(void **)(a1 + 264), 0, 48 * *(_DWORD *)(a1 + 192));
  chip_setting_ticket_mask_ltc((_DWORD *)a1, 0x7FFu);
  *(_BYTE *)(a1 + 141) = 0;
  return 0;
}
