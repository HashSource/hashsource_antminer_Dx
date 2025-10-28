int __fastcall packet_2_nonce_ae(int a1, unsigned __int8 *a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  unsigned int v7; // r8
  unsigned __int8 *v9; // lr
  unsigned int v10; // r5
  int v11; // t1
  int v14; // r6
  int v15; // r5
  int v16; // r6
  int v17; // r1
  size_t v18; // r8
  _WORD *v19; // r7
  int v20; // r10
  unsigned int v21; // r8
  int v22; // r3
  unsigned int v23; // r11
  signed int v24; // r1
  int v25; // r8
  char *v26; // r3
  int v27; // r2
  int v28; // r0
  int v29; // lr
  int v30; // r5
  unsigned __int8 *v31; // lr
  int v32; // r3
  int v33; // r2
  int v34; // r8
  int v35; // r12
  int v36; // r0
  int v37; // r7
  int *v38; // r6
  _DWORD *v39; // r5
  int v40; // r3
  int v41; // r0
  int v42; // lr
  int v43; // r1
  int v44; // r2
  int v45; // r6
  int v46; // lr
  int v47; // r1
  int v48; // r3
  int v49; // r12
  int v50; // r0
  int v53; // [sp+18h] [bp-1014h]
  int v54; // [sp+1Ch] [bp-1010h]
  void *s; // [sp+20h] [bp-100Ch]
  int v56; // [sp+24h] [bp-1008h]
  char var1004[4120]; // [sp+28h] [bp-1004h] BYREF

  v7 = a2[2];
  if ( v7 <= 9 )
    return 1;
  v9 = a2 + 2;
  v10 = 0xFFFF;
  do
  {
    v11 = *v9++;
    v10 = (unsigned __int16)(crc_itu_t_table[v11 ^ (v10 >> 8)] ^ ((_WORD)v10 << 8));
  }
  while ( v9 != &a2[(unsigned __int8)(v7 - 2) + 2] );
  v14 = (unsigned __int16)(a2[v7 + 1] + (a2[v7] << 8));
  if ( v14 == v10 )
  {
    v15 = *(_DWORD *)(a1 + 624);
    v16 = a2[3];
    if ( a2[5] == 1 )
    {
      v48 = a2[7];
      v49 = a2[8];
      v18 = (unsigned __int16)(v7 - 10);
      v50 = a2[9];
      v17 = 10;
      *(_DWORD *)(v15 + 4 * (v16 + 1408)) = (v48 << 16) + (v49 << 8) + v50 + (a2[6] << 24);
    }
    else
    {
      v17 = 6;
      v18 = (unsigned __int16)(v7 - 6);
    }
    v19 = (_WORD *)(v15 + 2 * (__int16)v16 + 7168);
    v20 = 720 * v16 + 21760;
    v53 = 720 * v16;
    memcpy((void *)(v15 + (unsigned __int16)*v19 + v20), &a2[v17], v18);
    v21 = (unsigned __int16)(v18 + *v19);
    *v19 = v21;
    if ( a2[4] == a2[5] )
    {
      v22 = v15 + 4 * (__int16)v16;
      v23 = v21 >> 2;
      *(_WORD *)(a3 + 85) = v21;
      v54 = v22 + 4096;
      *(_DWORD *)(a3 + 81) = *(_DWORD *)(v22 + 5632);
      if ( v21 >> 2 )
      {
        if ( v23 <= 8 )
        {
          v24 = 0;
          s = (void *)(v15 + v20);
        }
        else
        {
          v24 = 0;
          v25 = v15 + v20;
          s = (void *)(v15 + v20);
          v56 = v15;
          v26 = (char *)(v15 + v53 + 21811);
          do
          {
            v27 = (unsigned __int8)*(v26 - 50);
            v28 = a3 + 4 * v24;
            v29 = (unsigned __int8)*(v26 - 49);
            v24 += 8;
            v30 = (unsigned __int8)*(v26 - 48);
            __pld(v26);
            v25 += 32;
            __pld(v26 - 1);
            v26 += 32;
            *(_DWORD *)(v28 + 87) = (v27 << 16) + (v29 << 8) + v30 + (*(unsigned __int8 *)(v25 - 32) << 24);
            *(_DWORD *)(v28 + 91) = ((unsigned __int8)*(v26 - 77) << 8)
                                  + ((unsigned __int8)*(v26 - 78) << 16)
                                  + (unsigned __int8)*(v26 - 76)
                                  + (*(unsigned __int8 *)(v25 - 28) << 24);
            *(_DWORD *)(v28 + 95) = ((unsigned __int8)*(v26 - 73) << 8)
                                  + ((unsigned __int8)*(v26 - 74) << 16)
                                  + (unsigned __int8)*(v26 - 72)
                                  + (*(unsigned __int8 *)(v25 - 24) << 24);
            *(_DWORD *)(v28 + 99) = ((unsigned __int8)*(v26 - 70) << 16)
                                  + ((unsigned __int8)*(v26 - 69) << 8)
                                  + (unsigned __int8)*(v26 - 68)
                                  + (*(unsigned __int8 *)(v25 - 20) << 24);
            *(_DWORD *)(v28 + 103) = ((unsigned __int8)*(v26 - 66) << 16)
                                   + ((unsigned __int8)*(v26 - 65) << 8)
                                   + (unsigned __int8)*(v26 - 64)
                                   + (*(unsigned __int8 *)(v25 - 16) << 24);
            *(_DWORD *)(v28 + 107) = ((unsigned __int8)*(v26 - 62) << 16)
                                   + ((unsigned __int8)*(v26 - 61) << 8)
                                   + (unsigned __int8)*(v26 - 60)
                                   + (*(unsigned __int8 *)(v25 - 12) << 24);
            *(_DWORD *)(v28 + 111) = ((unsigned __int8)*(v26 - 58) << 16)
                                   + ((unsigned __int8)*(v26 - 57) << 8)
                                   + (unsigned __int8)*(v26 - 56)
                                   + (*(unsigned __int8 *)(v25 - 8) << 24);
            *(_DWORD *)(v28 + 115) = ((unsigned __int8)*(v26 - 54) << 16)
                                   + ((unsigned __int8)*(v26 - 53) << 8)
                                   + (unsigned __int8)*(v26 - 52)
                                   + (*(unsigned __int8 *)(v25 - 4) << 24);
          }
          while ( v24 != ((v23 - 9) & 0xFFFFFFF8) + 8 );
          v15 = v56;
        }
        v31 = (unsigned __int8 *)(v15 + v53 + 21761 + 4 * v24);
        do
        {
          v32 = v31[1];
          v33 = a3 + 4 * v24;
          v34 = *v31;
          ++v24;
          v35 = v31[2];
          v36 = *(v31 - 1);
          v31 += 4;
          *(_DWORD *)(v33 + 87) = (v32 << 8) + (v34 << 16) + v35 + (v36 << 24);
        }
        while ( (int)v23 > v24 );
      }
      else
      {
        s = (void *)(v15 + v20);
      }
      *v19 = 0;
      v37 = 32 * (v16 + 32);
      memset(s, 0, 0x2D0u);
      *(_BYTE *)(a3 + 48) = v16;
      v38 = (int *)(v15 + 8 * v16);
      strcpy((char *)(a3 + 49), (const char *)(v15 + v37));
      v39 = (_DWORD *)(v15 + v37 + 6400);
      v40 = *v38;
      *(_DWORD *)(a3 + 4) = v38[1];
      *(_DWORD *)a3 = v40;
      *a7 = v40;
      v41 = HIBYTE(*(_DWORD *)(v54 + 1536)) / *(_DWORD *)(a1 + 240);
      *(_DWORD *)(a3 + 12) = *(_DWORD *)(v54 + 1536) & 1;
      *(_DWORD *)(a3 + 8) = v41;
      v42 = v39[1];
      v43 = v39[2];
      v44 = v39[3];
      *(_DWORD *)(a3 + 16) = *v39;
      *(_DWORD *)(a3 + 20) = v42;
      *(_DWORD *)(a3 + 24) = v43;
      *(_DWORD *)(a3 + 28) = v44;
      v45 = v39[4];
      v46 = v39[5];
      v47 = v39[6];
      *(_DWORD *)(a3 + 44) = v39[7];
      *(_DWORD *)(a3 + 32) = v45;
      *(_DWORD *)(a3 + 36) = v46;
      *(_DWORD *)(a3 + 40) = v47;
      *a6 = v41;
      *a5 = *(_DWORD *)(a3 + 81);
      *a4 = 0;
      return 0;
    }
    else
    {
      return 5;
    }
  }
  else
  {
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(var1004, 0x1000u, 0, "get nonce crc error calc value %04x resp value %04x", v10, v14);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ae/backend_ae.c",
      152,
      "packet_2_nonce_ae",
      17,
      184,
      20,
      var1004);
    return 2;
  }
}
