int __fastcall packet_2_nonce_ae(int a1, unsigned __int8 *a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  unsigned int v7; // r4
  unsigned __int8 *v9; // lr
  unsigned int v10; // r7
  int v11; // t1
  int v14; // r8
  int v15; // r7
  int v16; // r8
  int v17; // r1
  size_t v18; // r4
  _WORD *v19; // r9
  int v20; // r10
  unsigned int v21; // r12
  unsigned int v22; // r12
  int v23; // lr
  signed int v24; // r1
  char *v25; // r3
  int v26; // r2
  int v27; // r0
  int v28; // r5
  int v29; // r7
  unsigned __int8 *v30; // r5
  int v31; // r3
  int v32; // r2
  int v33; // lr
  int v34; // r4
  int v35; // r0
  int v36; // r5
  int *v37; // r8
  _DWORD *v38; // r7
  int v39; // r3
  int v40; // r0
  int v41; // r5
  int v42; // r1
  int v43; // r2
  int v44; // lr
  int v45; // r5
  int v46; // r1
  int v47; // r3
  int v48; // r12
  int v49; // r0
  int v52; // [sp+18h] [bp-1014h]
  _DWORD *v53; // [sp+1Ch] [bp-1010h]
  void *s; // [sp+20h] [bp-100Ch]
  int v55; // [sp+24h] [bp-1008h]
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
    v15 = *(_DWORD *)(a1 + 600);
    v16 = a2[3];
    if ( a2[5] == 1 )
    {
      v47 = a2[7];
      v48 = a2[8];
      v18 = (unsigned __int16)(v7 - 10);
      v49 = a2[9];
      v17 = 10;
      *(_DWORD *)(v15 + 4 * (v16 + 1408)) = (v47 << 16) + (v48 << 8) + v49 + (a2[6] << 24);
    }
    else
    {
      v17 = 6;
      v18 = (unsigned __int16)(v7 - 6);
    }
    v19 = (_WORD *)(v15 + 2 * (__int16)v16 + 7168);
    v20 = 720 * v16 + 21760;
    v52 = 720 * v16;
    memcpy((void *)((unsigned __int16)*v19 + v20 + v15), &a2[v17], v18);
    v21 = (unsigned __int16)(*v19 + v18);
    *v19 = v21;
    if ( a2[4] == a2[5] )
    {
      *(_WORD *)(a3 + 85) = v21;
      v22 = v21 >> 2;
      v53 = (_DWORD *)(v15 + 4 * (__int16)v16 + 5632);
      *(_DWORD *)(a3 + 81) = *v53;
      if ( v22 )
      {
        if ( v22 <= 8 )
        {
          v24 = 0;
          s = (void *)(v15 + v20);
        }
        else
        {
          s = (void *)(v15 + v20);
          v23 = v15 + v20;
          v24 = 0;
          v25 = (char *)(v52 + 21811 + v15);
          v55 = v15;
          do
          {
            v26 = (unsigned __int8)*(v25 - 50);
            v27 = a3 + 4 * v24;
            v28 = (unsigned __int8)*(v25 - 49);
            v24 += 8;
            v29 = (unsigned __int8)*(v25 - 48);
            __pld(v25);
            v23 += 32;
            __pld(v25 - 1);
            v25 += 32;
            *(_DWORD *)(v27 + 87) = (v26 << 16) + (v28 << 8) + v29 + (*(unsigned __int8 *)(v23 - 32) << 24);
            *(_DWORD *)(v27 + 91) = ((unsigned __int8)*(v25 - 77) << 8)
                                  + ((unsigned __int8)*(v25 - 78) << 16)
                                  + (unsigned __int8)*(v25 - 76)
                                  + (*(unsigned __int8 *)(v23 - 28) << 24);
            *(_DWORD *)(v27 + 95) = ((unsigned __int8)*(v25 - 73) << 8)
                                  + ((unsigned __int8)*(v25 - 74) << 16)
                                  + (unsigned __int8)*(v25 - 72)
                                  + (*(unsigned __int8 *)(v23 - 24) << 24);
            *(_DWORD *)(v27 + 99) = ((unsigned __int8)*(v25 - 70) << 16)
                                  + ((unsigned __int8)*(v25 - 69) << 8)
                                  + (unsigned __int8)*(v25 - 68)
                                  + (*(unsigned __int8 *)(v23 - 20) << 24);
            *(_DWORD *)(v27 + 103) = ((unsigned __int8)*(v25 - 66) << 16)
                                   + ((unsigned __int8)*(v25 - 65) << 8)
                                   + (unsigned __int8)*(v25 - 64)
                                   + (*(unsigned __int8 *)(v23 - 16) << 24);
            *(_DWORD *)(v27 + 107) = ((unsigned __int8)*(v25 - 62) << 16)
                                   + ((unsigned __int8)*(v25 - 61) << 8)
                                   + (unsigned __int8)*(v25 - 60)
                                   + (*(unsigned __int8 *)(v23 - 12) << 24);
            *(_DWORD *)(v27 + 111) = (unsigned __int8)*(v25 - 56)
                                   + ((unsigned __int8)*(v25 - 58) << 16)
                                   + ((unsigned __int8)*(v25 - 57) << 8)
                                   + (*(unsigned __int8 *)(v23 - 8) << 24);
            *(_DWORD *)(v27 + 115) = ((unsigned __int8)*(v25 - 54) << 16)
                                   + ((unsigned __int8)*(v25 - 53) << 8)
                                   + (unsigned __int8)*(v25 - 52)
                                   + (*(unsigned __int8 *)(v23 - 4) << 24);
          }
          while ( v24 != ((v22 - 9) & 0xFFFFFFF8) + 8 );
          v15 = v55;
        }
        v30 = (unsigned __int8 *)(v52 + 21761 + 4 * v24 + v15);
        do
        {
          v31 = v30[1];
          v32 = a3 + 4 * v24;
          v33 = *v30;
          ++v24;
          v34 = v30[2];
          v35 = *(v30 - 1);
          v30 += 4;
          *(_DWORD *)(v32 + 87) = (v31 << 8) + (v33 << 16) + v34 + (v35 << 24);
        }
        while ( (int)v22 > v24 );
      }
      else
      {
        s = (void *)(v15 + v20);
      }
      v36 = 32 * (v16 + 32);
      *v19 = 0;
      memset(s, 0, 0x2D0u);
      *(_BYTE *)(a3 + 48) = v16;
      v37 = (int *)(v15 + 8 * v16);
      strcpy((char *)(a3 + 49), (const char *)(v15 + v36));
      v38 = (_DWORD *)(v15 + v36 + 6400);
      v39 = *v37;
      *(_DWORD *)(a3 + 4) = v37[1];
      *(_DWORD *)a3 = v39;
      *a7 = v39;
      v40 = HIBYTE(*v53) / *(_DWORD *)(a1 + 224);
      *(_DWORD *)(a3 + 12) = *v53 & 1;
      *(_DWORD *)(a3 + 8) = v40;
      v41 = v38[1];
      v42 = v38[2];
      v43 = v38[3];
      *(_DWORD *)(a3 + 16) = *v38;
      *(_DWORD *)(a3 + 20) = v41;
      *(_DWORD *)(a3 + 24) = v42;
      *(_DWORD *)(a3 + 28) = v43;
      v44 = v38[4];
      v45 = v38[5];
      v46 = v38[6];
      *(_DWORD *)(a3 + 44) = v38[7];
      *(_DWORD *)(a3 + 32) = v44;
      *(_DWORD *)(a3 + 36) = v45;
      *(_DWORD *)(a3 + 40) = v46;
      *a6 = v40;
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
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(var1004, 0x1000u, 0, "get nonce crc error calc value %04x resp value %04x", v10, v14);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_ae/backend_ae.c",
      69,
      "packet_2_nonce_ae",
      17,
      184,
      20,
      var1004);
    return 2;
  }
}
