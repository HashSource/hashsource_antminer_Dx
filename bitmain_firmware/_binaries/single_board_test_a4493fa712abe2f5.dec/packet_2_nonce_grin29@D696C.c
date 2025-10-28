int __fastcall packet_2_nonce_grin29(int a1, unsigned __int8 *a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  unsigned int v7; // r4
  unsigned __int8 *v9; // lr
  unsigned int v10; // r5
  int v11; // t1
  int v14; // r8
  int v15; // r2
  int v16; // r9
  int v17; // r10
  size_t v18; // r4
  int v19; // r1
  _WORD *v20; // r8
  int v21; // r5
  unsigned int v22; // r2
  unsigned int v23; // r2
  void *v24; // r3
  unsigned int v25; // r1
  int v26; // r12
  signed int v27; // r6
  unsigned int v28; // lr
  char *v29; // r3
  int v30; // r2
  int v31; // r0
  int v32; // r1
  int v33; // r4
  int v34; // r2
  int v35; // r4
  unsigned __int8 *v36; // r9
  int v37; // r3
  int v38; // r1
  int v39; // r5
  int v40; // r4
  int v41; // r0
  unsigned int v42; // r6
  unsigned __int64 v43; // r2
  unsigned int v44; // r0
  unsigned int v45; // r5
  int v46; // r3
  int v47; // r3
  int v48; // r0
  int v49; // r3
  int v50; // r8
  unsigned __int8 v52; // [sp+14h] [bp-1028h]
  int v54; // [sp+1Ch] [bp-1020h]
  unsigned int *v55; // [sp+20h] [bp-101Ch]
  unsigned int v56; // [sp+24h] [bp-1018h]
  void *s; // [sp+30h] [bp-100Ch]
  unsigned int v58; // [sp+34h] [bp-1008h]
  char v59[4100]; // [sp+38h] [bp-1004h] BYREF

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
    v15 = a2[3];
    v16 = *(_DWORD *)(a1 + 600);
    v52 = a2[3];
    if ( a2[5] == 1 )
    {
      v18 = (unsigned __int16)(v7 - 10);
      v17 = a2[3];
      v15 = v17;
      v48 = v16 + 8 * v17;
      v49 = (a2[7] << 16) + (a2[8] << 8) + a2[9] + (a2[6] << 24);
      v50 = *(_DWORD *)(v48 + 2052);
      v19 = 10;
      *(_DWORD *)(v48 + 2048) |= v49;
      *(_DWORD *)(v48 + 2052) = v50;
    }
    else
    {
      v17 = a2[3];
      v18 = (unsigned __int16)(v7 - 6);
      v19 = 6;
    }
    v20 = (_WORD *)(v16 + 2 * v17 + 4096);
    v21 = 720 * v15 + 35840;
    v54 = 720 * v15;
    memcpy((void *)((unsigned __int16)*v20 + v21 + v16), &a2[v19], v18);
    v22 = (unsigned __int16)(*v20 + v18);
    *v20 = v22;
    if ( a2[4] == a2[5] )
    {
      *(_WORD *)(a3 + 33) = v22;
      v23 = v22 >> 2;
      v55 = (unsigned int *)(v16 + 8 * v17);
      v24 = (void *)v55[512];
      v25 = v55[513];
      *(_DWORD *)(a3 + 25) = v24;
      if ( !v23 )
        v24 = (void *)(v16 + v21);
      v56 = v25;
      *(_DWORD *)(a3 + 29) = v25;
      if ( v23 )
      {
        if ( v23 <= 8 )
        {
          v27 = 0;
          s = (void *)(v16 + v21);
        }
        else
        {
          v26 = v16 + v21;
          v27 = 0;
          v28 = ((v23 - 9) & 0xFFFFFFF8) + 8;
          v29 = (char *)(v54 + 35891 + v16);
          s = (void *)(v16 + v21);
          v58 = v23;
          do
          {
            v30 = (unsigned __int8)*(v29 - 50);
            v31 = (unsigned __int8)*(v29 - 49);
            v32 = a3 + 4 * (v27 + 8);
            v33 = (unsigned __int8)*(v29 - 48);
            v26 += 32;
            __pld(v29);
            __pld(v29 - 1);
            v29 += 32;
            v34 = (v30 << 16) + (v31 << 8) + v33;
            v35 = a3 + 4 * v27;
            v27 += 8;
            *(_DWORD *)(v32 + 3) = v34 + (*(unsigned __int8 *)(v26 - 32) << 24);
            *(_DWORD *)(v35 + 39) = ((unsigned __int8)*(v29 - 77) << 8)
                                  + ((unsigned __int8)*(v29 - 78) << 16)
                                  + (unsigned __int8)*(v29 - 76)
                                  + (*(unsigned __int8 *)(v26 - 28) << 24);
            *(_DWORD *)(v35 + 43) = ((unsigned __int8)*(v29 - 73) << 8)
                                  + ((unsigned __int8)*(v29 - 74) << 16)
                                  + (unsigned __int8)*(v29 - 72)
                                  + (*(unsigned __int8 *)(v26 - 24) << 24);
            *(_DWORD *)(v35 + 47) = ((unsigned __int8)*(v29 - 70) << 16)
                                  + ((unsigned __int8)*(v29 - 69) << 8)
                                  + (unsigned __int8)*(v29 - 68)
                                  + (*(unsigned __int8 *)(v26 - 20) << 24);
            *(_DWORD *)(v35 + 51) = ((unsigned __int8)*(v29 - 66) << 16)
                                  + ((unsigned __int8)*(v29 - 65) << 8)
                                  + (unsigned __int8)*(v29 - 64)
                                  + (*(unsigned __int8 *)(v26 - 16) << 24);
            *(_DWORD *)(v35 + 55) = (unsigned __int8)*(v29 - 60)
                                  + ((unsigned __int8)*(v29 - 62) << 16)
                                  + ((unsigned __int8)*(v29 - 61) << 8)
                                  + (*(unsigned __int8 *)(v26 - 12) << 24);
            *(_DWORD *)(v35 + 59) = ((unsigned __int8)*(v29 - 58) << 16)
                                  + ((unsigned __int8)*(v29 - 57) << 8)
                                  + (unsigned __int8)*(v29 - 56)
                                  + (*(unsigned __int8 *)(v26 - 8) << 24);
            *(_DWORD *)(v35 + 63) = ((unsigned __int8)*(v29 - 54) << 16)
                                  + ((unsigned __int8)*(v29 - 53) << 8)
                                  + (unsigned __int8)*(v29 - 52)
                                  + (*(unsigned __int8 *)(v26 - 4) << 24);
          }
          while ( v27 != v28 );
          v23 = v58;
        }
        v36 = (unsigned __int8 *)(v16 + v54 + 35841 + 4 * v27);
        do
        {
          v37 = v36[1];
          v38 = a3 + 4 * v27;
          v39 = *v36;
          ++v27;
          v40 = v36[2];
          v41 = *(v36 - 1);
          v36 += 4;
          *(_DWORD *)(v38 + 35) = (v37 << 8) + (v39 << 16) + v40 + (v41 << 24);
        }
        while ( (int)v23 > v27 );
      }
      else
      {
        s = v24;
      }
      *v20 = 0;
      v55[512] = 0;
      v55[513] = v56;
      memset(s, 0, 0x2D0u);
      *(_BYTE *)(a3 + 16) = v52;
      v42 = v55[256];
      v43 = *v55;
      v44 = v55[1];
      *(_DWORD *)(a3 + 21) = v55[257];
      *(_DWORD *)a3 = v43;
      *(_DWORD *)(a3 + 4) = v44;
      *(_DWORD *)(a3 + 17) = v42;
      *a7 = v43;
      v45 = *(_DWORD *)(a3 + 25);
      LODWORD(v43) = *(_DWORD *)(a1 + 224);
      v46 = sub_F7A2C(HIBYTE(v45), v43);
      *(_DWORD *)(a3 + 8) = v46;
      *(_DWORD *)(a3 + 12) = v45 & 1;
      *a6 = v46;
      v47 = *(_DWORD *)(a3 + 29);
      *a5 = *(_DWORD *)(a3 + 25);
      a5[1] = v47;
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
    logfmt_raw(v59, 0x1000u, 0, "get nonce crc error calc value %04x resp value %04x", v10, v14);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/backend_grin29/backend_grin29.c",
      77,
      "packet_2_nonce_grin29",
      21,
      189,
      20,
      v59);
    return 2;
  }
}
