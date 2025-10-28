int __fastcall packet_2_nonce_grin29(int a1, unsigned __int8 *a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  unsigned int v7; // r4
  unsigned __int8 *v9; // lr
  unsigned int v10; // r6
  int v11; // t1
  int v14; // r7
  int v15; // r2
  int v16; // r7
  int v17; // r10
  size_t v18; // r4
  int v19; // r1
  _WORD *v20; // r6
  int v21; // r8
  unsigned int v22; // r4
  unsigned int v23; // r11
  int v24; // r3
  signed int v25; // r4
  int v26; // r2
  char *v27; // r3
  int v28; // r1
  int v29; // r12
  int v30; // r0
  int v31; // lr
  bool v32; // zf
  int v33; // r1
  int v34; // lr
  unsigned __int8 *v35; // r7
  int v36; // r3
  int v37; // r2
  int v38; // r12
  int v39; // r0
  int v40; // r1
  int v41; // lr
  int v42; // r0
  int v43; // r12
  unsigned __int64 v44; // r2
  unsigned int v45; // r6
  int v46; // r2
  int v47; // r3
  int v48; // r2
  int v49; // lr
  int v50; // r3
  int v51; // r0
  int v53; // [sp+14h] [bp-1020h]
  int v55; // [sp+1Ch] [bp-1018h]
  int *v56; // [sp+20h] [bp-1014h]
  int v57; // [sp+24h] [bp-1010h]
  void *s; // [sp+28h] [bp-100Ch]
  char var1004[4112]; // [sp+30h] [bp-1004h] BYREF

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
    v53 = v15;
    if ( a2[5] == 1 )
    {
      v17 = a2[3];
      v18 = (unsigned __int16)(v7 - 10);
      v49 = a2[6];
      v48 = v16 + 8 * v17;
      v50 = (a2[7] << 16) + (a2[8] << 8) + a2[9];
      v51 = *(_DWORD *)(v48 + 2052);
      v19 = 10;
      *(_DWORD *)(v48 + 2048) |= v50 + (v49 << 24);
      *(_DWORD *)(v48 + 2052) = v51;
      v15 = v53;
    }
    else
    {
      v17 = (__int16)v15;
      v18 = (unsigned __int16)(v7 - 6);
      v19 = 6;
    }
    v20 = (_WORD *)(v16 + 2 * v17 + 4096);
    v21 = 720 * v15 + 35840;
    v55 = 720 * v15;
    memcpy((void *)(v16 + (unsigned __int16)*v20 + v21), &a2[v19], v18);
    v22 = (unsigned __int16)(v18 + *v20);
    *v20 = v22;
    if ( a2[4] == a2[5] )
    {
      v23 = v22 >> 2;
      *(_WORD *)(a3 + 33) = v22;
      v56 = (int *)(v16 + 8 * v17);
      v24 = v56[513];
      *(_DWORD *)(a3 + 25) = v56[512];
      v57 = v24;
      *(_DWORD *)(a3 + 29) = v24;
      if ( v22 >> 2 )
      {
        if ( v23 <= 8 )
        {
          v25 = 0;
          s = (void *)(v16 + v21);
        }
        else
        {
          v25 = 0;
          v26 = v16 + v21;
          s = (void *)(v16 + v21);
          v27 = (char *)(v16 + v55 + 35891);
          do
          {
            v28 = (unsigned __int8)*(v27 - 50);
            v29 = (unsigned __int8)*(v27 - 49);
            v30 = a3 + 4 * (v25 + 8);
            v31 = (unsigned __int8)*(v27 - 48);
            v32 = v25 + 8 == ((v23 - 9) & 0xFFFFFFF8) + 8;
            __pld(v27);
            v26 += 32;
            __pld(v27 - 1);
            v27 += 32;
            v33 = (v28 << 16) + (v29 << 8) + v31;
            v34 = a3 + 4 * v25;
            v25 += 8;
            *(_DWORD *)(v30 + 3) = v33 + (*(unsigned __int8 *)(v26 - 32) << 24);
            *(_DWORD *)(v34 + 39) = ((unsigned __int8)*(v27 - 77) << 8)
                                  + ((unsigned __int8)*(v27 - 78) << 16)
                                  + (unsigned __int8)*(v27 - 76)
                                  + (*(unsigned __int8 *)(v26 - 28) << 24);
            *(_DWORD *)(v34 + 43) = ((unsigned __int8)*(v27 - 73) << 8)
                                  + ((unsigned __int8)*(v27 - 74) << 16)
                                  + (unsigned __int8)*(v27 - 72)
                                  + (*(unsigned __int8 *)(v26 - 24) << 24);
            *(_DWORD *)(v34 + 47) = ((unsigned __int8)*(v27 - 70) << 16)
                                  + ((unsigned __int8)*(v27 - 69) << 8)
                                  + (unsigned __int8)*(v27 - 68)
                                  + (*(unsigned __int8 *)(v26 - 20) << 24);
            *(_DWORD *)(v34 + 51) = ((unsigned __int8)*(v27 - 66) << 16)
                                  + ((unsigned __int8)*(v27 - 65) << 8)
                                  + (unsigned __int8)*(v27 - 64)
                                  + (*(unsigned __int8 *)(v26 - 16) << 24);
            *(_DWORD *)(v34 + 55) = ((unsigned __int8)*(v27 - 62) << 16)
                                  + ((unsigned __int8)*(v27 - 61) << 8)
                                  + (unsigned __int8)*(v27 - 60)
                                  + (*(unsigned __int8 *)(v26 - 12) << 24);
            *(_DWORD *)(v34 + 59) = ((unsigned __int8)*(v27 - 58) << 16)
                                  + ((unsigned __int8)*(v27 - 57) << 8)
                                  + (unsigned __int8)*(v27 - 56)
                                  + (*(unsigned __int8 *)(v26 - 8) << 24);
            *(_DWORD *)(v34 + 63) = ((unsigned __int8)*(v27 - 54) << 16)
                                  + ((unsigned __int8)*(v27 - 53) << 8)
                                  + (unsigned __int8)*(v27 - 52)
                                  + (*(unsigned __int8 *)(v26 - 4) << 24);
          }
          while ( !v32 );
        }
        v35 = (unsigned __int8 *)(v16 + v55 + 35841 + 4 * v25);
        do
        {
          v36 = v35[1];
          v37 = a3 + 4 * v25;
          v38 = *v35;
          ++v25;
          v39 = v35[2];
          v40 = *(v35 - 1);
          v35 += 4;
          *(_DWORD *)(v37 + 35) = (v36 << 8) + (v38 << 16) + v39 + (v40 << 24);
        }
        while ( (int)v23 > v25 );
      }
      else
      {
        s = (void *)(v16 + v21);
      }
      *v20 = 0;
      v56[512] = 0;
      v56[513] = v57;
      memset(s, 0, 0x2D0u);
      *(_BYTE *)(a3 + 16) = v53;
      v41 = v56[256];
      v42 = *v56;
      v43 = v56[1];
      v44 = (unsigned int)v56[257];
      *(_DWORD *)a3 = *v56;
      *(_DWORD *)(a3 + 17) = v41;
      *(_DWORD *)(a3 + 21) = v44;
      *(_DWORD *)(a3 + 4) = v43;
      *a7 = v42;
      v45 = *(_DWORD *)(a3 + 25);
      LODWORD(v44) = *(_DWORD *)(a1 + 224);
      v46 = sub_15DCAC(HIBYTE(v45), v44);
      *(_DWORD *)(a3 + 12) = v45 & 1;
      *(_DWORD *)(a3 + 8) = v46;
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
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(var1004, 0x1000u, 0, "get nonce crc error calc value %04x resp value %04x", v10, v14);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_grin29/backend_grin29.c",
      160,
      "packet_2_nonce_grin29",
      21,
      189,
      20,
      var1004);
    return 2;
  }
}
