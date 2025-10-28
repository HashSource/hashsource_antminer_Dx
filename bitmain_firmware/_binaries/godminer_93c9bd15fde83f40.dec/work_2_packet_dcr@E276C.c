int __fastcall work_2_packet_dcr(int a1, _DWORD *a2, _BYTE *a3, _DWORD *a4)
{
  int v6; // r5
  char *v8; // r6
  const char *v9; // r1
  _DWORD *v10; // r8
  int v11; // r12
  int v12; // r1
  _DWORD *v13; // r0
  _DWORD *v14; // r3
  int v15; // r11
  int v16; // r10
  int v17; // lr
  int v18; // r12
  int v19; // r12
  int v20; // r11
  int v21; // r10
  char v22; // r12
  _BYTE *v23; // r1
  unsigned int v24; // r3
  int v25; // t1
  unsigned __int16 v26; // r0
  int v27; // r3
  char v30[4100]; // [sp+18h] [bp-1004h] BYREF

  v6 = *(_DWORD *)(a1 + 624);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  v8 = (char *)(v6 + 0x8000);
  v9 = (const char *)(a2 + 2);
  v10 = a2 + 10;
  if ( *(_DWORD *)(a1 + 304) == 1 )
    a3[2] = 48;
  v11 = (unsigned __int8)*v8;
  *(_QWORD *)(v6 + 8 * v11) = *((_QWORD *)v9 - 1);
  strcpy((char *)(v6 + 32 * (v11 + 32)), v9);
  v12 = (unsigned __int8)*v8;
  *(_DWORD *)(v6 + 4 * (v12 + 7040)) = a2[55];
  v13 = (_DWORD *)(v6 + 32 * (v12 + 896));
  v14 = a2 + 56;
  v15 = a2[56];
  v16 = a2[57];
  v17 = v14[2];
  v18 = v14[3];
  *v13 = v15;
  v13[1] = v16;
  v13[2] = v17;
  v13[3] = v18;
  v19 = v14[7];
  v20 = v14[4];
  v21 = v14[5];
  v13[6] = v14[6];
  v13[7] = v19;
  v13[4] = v20;
  v13[5] = v21;
  memcpy((void *)(v6 + 180 * (unsigned __int8)*v8 + 5120), v10, 0xB4u);
  v22 = *v8;
  a3[3] = *v8;
  *v8 = (v22 + 1) & 0x7F;
  memcpy(a3 + 4, v10, 0xB4u);
  if ( !memcmp(&last_header_dcr, v10, 0xB4u) )
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v30, 0x1000u, 0, "found repeat work");
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dcr/backend_dcr.c",
      154,
      "work_2_packet_dcr",
      17,
      118,
      80,
      v30);
  }
  memcpy(&last_header_dcr, v10, 0xB4u);
  v23 = a3 + 2;
  v24 = 0xFFFF;
  do
  {
    v25 = (unsigned __int8)*v23++;
    v26 = crc_itu_t_table[v25 ^ (v24 >> 8)] ^ ((_WORD)v24 << 8);
    v24 = v26;
  }
  while ( v23 != a3 + 184 );
  a3[185] = v26;
  a3[184] = HIBYTE(v26);
  v27 = *(unsigned __int8 *)(a1 + 141);
  *a4 = 186;
  if ( !v27 || !*(_BYTE *)(a1 + 142) )
    return 0;
  memset(*(void **)(a1 + 264), 0, 48 * *(_DWORD *)(a1 + 192));
  chip_setting_ticket_value_dcr(a1, 32);
  *(_BYTE *)(a1 + 141) = 0;
  return 0;
}
