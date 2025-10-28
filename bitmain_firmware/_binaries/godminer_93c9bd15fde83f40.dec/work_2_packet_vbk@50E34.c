int __fastcall work_2_packet_vbk(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r12
  int v7; // r3
  _BYTE *v8; // r0
  int v10; // lr
  int v11; // r8
  int v12; // r3
  int *v13; // r9
  _DWORD *v14; // r1
  int v15; // t1
  int *v16; // lr
  int v17; // r2
  int v18; // r11
  int v19; // r10
  _DWORD *v20; // r3
  int v21; // r2
  int v22; // r1
  int v23; // r8
  int v24; // r1
  int v25; // r10
  int v26; // r8
  int v27; // r2
  int v28; // r3
  int v29; // r1
  int *v30; // r3
  _BYTE *v31; // r2
  int *v32; // r10
  int v33; // lr
  int v34; // r12
  int v35; // r0
  int v36; // r1
  _DWORD *v37; // lr
  int v38; // r0
  int v39; // r1
  _DWORD *v40; // r12
  int v41; // r2
  int v42; // r3
  _BYTE *v43; // r0
  unsigned int v44; // r1
  int v45; // t1
  unsigned __int16 v46; // r3
  int v48; // r4
  int v49; // r7
  int v50; // t1
  char v51[4100]; // [sp+10h] [bp-1004h] BYREF

  v5 = *(_DWORD *)(a1 + 624);
  *a3 = 85;
  a3[2] = 32;
  a3[1] = -86;
  v7 = *(_DWORD *)(a1 + 304);
  v8 = (_BYTE *)(v5 + 28672);
  if ( v7 == 1 )
    a3[2] = 48;
  v10 = (unsigned __int8)*v8;
  v11 = *(_DWORD *)(a2 + 84);
  *(_QWORD *)(v5 + 8 * v10) = *(_QWORD *)a2;
  v12 = 24 * (__int16)v10 + 22528;
  *(_DWORD *)(v5 + 4 * (v10 + 5376)) = v11;
  v13 = (int *)(a2 + 16);
  v15 = *(_DWORD *)(a2 + 88);
  v14 = (_DWORD *)(a2 + 88);
  v16 = v13;
  v17 = v14[1];
  v18 = v14[2];
  v19 = v14[3];
  *(_DWORD *)(v5 + v12) = v15;
  v20 = (_DWORD *)(v5 + v12);
  v20[1] = v17;
  v20[2] = v18;
  v20[3] = v19;
  v21 = v14[5];
  v20[4] = v14[4];
  v20[5] = v21;
  v22 = (unsigned __int8)*v8;
  v23 = v22 + 256;
  v24 = v5 + ((v22 + 64) << 6);
  *(_QWORD *)(v5 + 8 * v23) = *(_QWORD *)(a2 + 8);
  do
  {
    v25 = *v16;
    v16 += 4;
    v26 = *(v16 - 3);
    v24 += 16;
    v27 = *(v16 - 2);
    v28 = *(v16 - 1);
    *(_DWORD *)(v24 - 16) = v25;
    *(_DWORD *)(v24 - 12) = v26;
    *(_DWORD *)(v24 - 8) = v27;
    *(_DWORD *)(v24 - 4) = v28;
  }
  while ( v16 != (int *)(a2 + 80) );
  v29 = (unsigned __int8)*v8;
  v30 = v13;
  v31 = a3 + 5;
  v32 = v13 + 16;
  *(_DWORD *)(v5 + 4 * (v29 + 5120)) = *(_DWORD *)(a2 + 80);
  a3[4] = v29;
  *v8 = v29 + 1;
  a3[3] = 64;
  do
  {
    v33 = *v30;
    v30 += 4;
    v34 = *(v30 - 3);
    v31 += 16;
    v35 = *(v30 - 2);
    v36 = *(v30 - 1);
    *((_DWORD *)v31 - 4) = v33;
    *((_DWORD *)v31 - 3) = v34;
    *((_DWORD *)v31 - 2) = v35;
    *((_DWORD *)v31 - 1) = v36;
  }
  while ( v30 != v32 );
  if ( !memcmp(&last_header, v13, 0x40u) )
  {
    pthread_mutex_lock(&stru_1A8A24);
    v48 = a2 + 15;
    logfmt_raw(v51, 0x1000u, 0, "found repeat work");
    v49 = a2 + 79;
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_vbk/backend_vbk.c",
      154,
      "work_2_packet_vbk",
      17,
      123,
      80,
      v51);
    printf("dump work wc %d:", (unsigned __int8)a3[4]);
    do
    {
      v50 = *(unsigned __int8 *)++v48;
      printf("%02x ", v50);
    }
    while ( v49 != v48 );
    putchar(10);
  }
  v37 = &last_header;
  do
  {
    v38 = *v13;
    v13 += 4;
    v39 = *(v13 - 3);
    v40 = v37;
    v41 = *(v13 - 2);
    v37 += 4;
    v42 = *(v13 - 1);
    *v40 = v38;
    v40[1] = v39;
    v40[2] = v41;
    v40[3] = v42;
  }
  while ( v13 != v32 );
  v43 = a3 + 2;
  v44 = 0xFFFF;
  do
  {
    v45 = (unsigned __int8)*v43++;
    v46 = crc_itu_t_table[v45 ^ (v44 >> 8)] ^ ((_WORD)v44 << 8);
    v44 = v46;
  }
  while ( v43 != &a3[(unsigned __int8)a3[3] + 5] );
  a3[70] = v46;
  a3[69] = HIBYTE(v46);
  *a4 = 71;
  return 0;
}
