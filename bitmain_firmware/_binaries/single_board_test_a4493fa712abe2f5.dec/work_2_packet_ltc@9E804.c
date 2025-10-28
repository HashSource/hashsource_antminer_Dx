int __fastcall work_2_packet_ltc(int a1, _DWORD *a2, unsigned __int8 *a3, _DWORD *a4)
{
  int v6; // r4
  unsigned __int8 *v8; // r5
  unsigned __int8 *v9; // r10
  _DWORD *v10; // r3
  int v11; // r2
  const char *v12; // r1
  int v13; // lr
  _DWORD *v14; // r0
  int v15; // t1
  int v16; // r8
  int v17; // lr
  int v18; // r12
  int v19; // r12
  int v20; // r7
  int v21; // r8
  int v22; // r3
  unsigned __int8 v23; // r4
  unsigned __int8 *v24; // r2
  unsigned __int8 *v25; // r3
  unsigned __int8 v26; // r1
  unsigned __int8 v27; // t1
  unsigned __int8 v28; // t1
  int v29; // r4
  unsigned __int8 *v30; // r1
  unsigned int v31; // r3
  int v32; // t1
  unsigned __int16 v33; // r0
  int v34; // r3
  char *v36; // r5
  char *v37; // r6
  int v38; // t1
  _DWORD *src; // [sp+14h] [bp-2018h]
  const char *v41; // [sp+1Ch] [bp-2010h]
  int v42; // [sp+20h] [bp-200Ch]
  char v43[4088]; // [sp+28h] [bp-2004h] BYREF
  char v44[4100]; // [sp+1028h] [bp-1004h] BYREF

  v6 = *(_DWORD *)(a1 + 600);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  v8 = (unsigned __int8 *)(v6 + 27136);
  v9 = a3 + 84;
  if ( *(_DWORD *)(a1 + 288) == 1 )
    a3[2] = 48;
  v10 = a2;
  v11 = *v8;
  v12 = (const char *)(a2 + 2);
  v13 = *((_DWORD *)v12 + 36);
  v41 = v12;
  *(_QWORD *)(v6 + 8 * v11) = *(_QWORD *)a2;
  *(_DWORD *)(v6 + 4 * (v11 + 4864)) = v13;
  v14 = (_DWORD *)(v6 + 32 * (v11 + 624));
  v15 = v10[39];
  v10 += 39;
  v16 = v10[1];
  v17 = v10[2];
  v18 = v10[3];
  *v14 = v15;
  v14[1] = v16;
  v14[2] = v17;
  v14[3] = v18;
  v19 = v10[7];
  v20 = v10[4];
  v21 = v10[5];
  v14[6] = v10[6];
  v14[7] = v19;
  v14[4] = v20;
  v14[5] = v21;
  src = a2 + 18;
  strcpy((char *)(v6 + ((*v8 + 16) << 6)), v12);
  memcpy((void *)(v6 + 80 * *v8 + 9216), a2 + 18, 0x50u);
  memcpy((void *)(v6 + 16 * (*v8 + 1504)), a2 + 47, a2[51]);
  v22 = *v8;
  *(_DWORD *)(v6 + 4 * (v22 + 6528)) = a2[51];
  *(_DWORD *)(v6 + 4 * (v22 + 6656)) = a2[52];
  v23 = *v8;
  a3[3] = *v8;
  *v8 = (v23 + 1) & 0x7F;
  memcpy(a3 + 4, a2 + 18, 0x50u);
  v24 = a3 + 84;
  v25 = a3 + 3;
  do
  {
    v27 = *++v25;
    v26 = v27;
    v28 = *--v24;
    *v25 = v28;
    *v24 = v26;
  }
  while ( a3 + 43 != v25 );
  v29 = memcmp(&last_work_ltc, src, 0x50u);
  if ( !v29 )
  {
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v44, 0x1000u, 0, "found repeat work");
    pthread_mutex_unlock(&stru_3B526C);
    v36 = (char *)a2 + 71;
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_ltc/backend_ltc.c",
      71,
      "work_2_packet_ltc",
      17,
      180,
      80,
      v44);
    v37 = (char *)a2 + 151;
    v42 = a3[3];
    do
    {
      v38 = (unsigned __int8)*++v36;
      v29 += snprintf(&v43[v29], 4096 - v29, "%02x ", v38);
    }
    while ( v37 != v36 );
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v44, 0x1000u, 0, "ltc dump work jobid %s, work count %02x", v41, v42);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_ltc/backend_ltc.c",
      71,
      "dump_work_ltc",
      13,
      101,
      20,
      v44);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v44, 0x1000u, 0, "dump work: %s", v43);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_ltc/backend_ltc.c",
      71,
      "dump_work_ltc",
      13,
      102,
      20,
      v44);
  }
  memcpy(&last_work_ltc, src, 0x50u);
  v30 = a3 + 2;
  v31 = 0xFFFF;
  do
  {
    v32 = *v30++;
    v33 = crc_itu_t_table[v32 ^ (v31 >> 8)] ^ ((_WORD)v31 << 8);
    v31 = v33;
  }
  while ( v30 != v9 );
  a3[85] = v33;
  a3[84] = HIBYTE(v33);
  v34 = *(unsigned __int8 *)(a1 + 129);
  *a4 = 86;
  if ( !v34 || !*(_BYTE *)(a1 + 130) )
    return 0;
  memset(*(void **)(a1 + 248), 0, 48 * *(_DWORD *)(a1 + 180));
  chip_setting_ticket_mask_ltc((_DWORD *)a1, 0x7FFFu);
  *(_BYTE *)(a1 + 129) = 0;
  return 0;
}
