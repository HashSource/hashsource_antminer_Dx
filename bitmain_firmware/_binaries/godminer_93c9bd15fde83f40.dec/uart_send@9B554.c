size_t __fastcall uart_send(int a1, const void *a2, size_t a3)
{
  pthread_mutex_t *v6; // r6
  int i; // r4
  signed int v8; // r0
  char *v9; // r3
  signed int v10; // r1
  bool v11; // cc
  int v12; // r2
  int v13; // r10
  int v14; // r8
  int v15; // lr
  int v16; // r9
  int v17; // r12
  int v18; // r2
  int v19; // r12
  int v20; // r9
  int v21; // lr
  int v22; // r2
  int v23; // r8
  int v24; // lr
  int v25; // r9
  int v26; // lr
  int v27; // r9
  int v28; // r12
  int v29; // r2
  int v30; // r9
  int v31; // r8
  int v32; // r12
  int v33; // r9
  int v34; // r10
  int v35; // r2
  int v36; // r12
  int v37; // lr
  int v38; // r9
  int v39; // r2
  int v40; // r12
  int v41; // lr
  int v42; // r9
  unsigned __int8 *v43; // r2
  int v44; // r3
  int v45; // r8
  int v46; // r7
  size_t v47; // r2
  char *v48; // r0
  int v49; // r3
  int v51; // [sp+10h] [bp-1910h] BYREF
  int v52; // [sp+14h] [bp-190Ch] BYREF
  int v53; // [sp+18h] [bp-1908h] BYREF
  int v54; // [sp+1Ch] [bp-1904h] BYREF
  _DWORD s[64]; // [sp+20h] [bp-1900h] BYREF
  char v56[2048]; // [sp+120h] [bp-1800h] BYREF
  char v57[4096]; // [sp+920h] [bp-1000h] BYREF

  memset(s, 0, sizeof(s));
  v6 = (pthread_mutex_t *)(24 * a1 + 1738568);
  v54 = 0;
  v53 = 0;
  v52 = 0;
  v51 = 0;
  pthread_mutex_lock(v6);
  if ( sub_9B044(a1, &v51, &v54, &v53, &v52) )
  {
    snprintf(v56, 0x800u, "get_send_address_info error, chain_id = %d\n", a1);
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(v57, 0x1000u, 0, v56);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/7007/7007_uart.c",
      165,
      "uart_send",
      9,
      408,
      100,
      v57);
    pthread_mutex_unlock(v6);
    return 0;
  }
  else
  {
    for ( i = dword_1A8A8C; (unsigned __int8)(*(_DWORD *)(dword_1A8A8C + (v54 & 0xFFFFFFFC)) >> v51) < a3; i = dword_1A8A8C )
      usleep(0);
    memcpy(s, a2, a3);
    v8 = a3 >> 2;
    if ( a3 >> 2 )
    {
      if ( a3 >> 2 <= 8 )
      {
        v10 = 0;
      }
      else
      {
        v9 = (char *)&s[10] + 3;
        v10 = 0;
        do
        {
          v11 = v8 - 7 <= v10 + 9;
          v10 += 8;
          v12 = (unsigned __int8)*(v9 - 40);
          v13 = (unsigned __int8)*(v9 - 41);
          v14 = v52;
          v15 = ((unsigned __int8)*(v9 - 42) << 16) | ((unsigned __int8)*(v9 - 43) << 24);
          v16 = (unsigned __int8)*(v9 - 38);
          v17 = (unsigned __int8)*(v9 - 39) << 24;
          __pld(v9);
          v18 = v15 | v12 | (v13 << 8);
          v19 = v17 | (v16 << 16);
          v20 = (unsigned __int8)*(v9 - 36);
          v21 = (unsigned __int8)*(v9 - 35);
          v9 += 32;
          *(_DWORD *)(i + (v14 & 0xFFFFFFFC)) = v18;
          v22 = v19 | v20;
          v23 = (unsigned __int8)*(v9 - 62);
          v24 = (v21 << 24) | ((unsigned __int8)*(v9 - 66) << 16);
          v25 = (unsigned __int8)*(v9 - 64);
          *(_DWORD *)(i + (v52 & 0xFFFFFFFC)) = v22 | ((unsigned __int8)*(v9 - 69) << 8);
          v26 = v24 | v25;
          v27 = (unsigned __int8)*(v9 - 63);
          v28 = (unsigned __int8)*(v9 - 58);
          *(_DWORD *)(i + (v52 & 0xFFFFFFFC)) = v26 | ((unsigned __int8)*(v9 - 65) << 8);
          v29 = (v23 << 16) | (v27 << 24);
          v30 = (unsigned __int8)*(v9 - 59);
          v31 = (unsigned __int8)*(v9 - 56);
          *(_DWORD *)(i + (v52 & 0xFFFFFFFC)) = v29 | (unsigned __int8)*(v9 - 60) | ((unsigned __int8)*(v9 - 61) << 8);
          v32 = (v28 << 16) | (v30 << 24) | v31;
          v33 = (unsigned __int8)*(v9 - 55);
          *(_DWORD *)(i + (v52 & 0xFFFFFFFC)) = v32 | ((unsigned __int8)*(v9 - 57) << 8);
          v34 = (unsigned __int8)*(v9 - 48);
          v35 = ((unsigned __int8)*(v9 - 54) << 16) | (v33 << 24);
          v36 = (unsigned __int8)*(v9 - 46);
          v37 = ((unsigned __int8)*(v9 - 50) << 16) | ((unsigned __int8)*(v9 - 51) << 24);
          v38 = (unsigned __int8)*(v9 - 49);
          *(_DWORD *)(i + (v52 & 0xFFFFFFFC)) = v35 | (unsigned __int8)*(v9 - 52) | ((unsigned __int8)*(v9 - 53) << 8);
          v39 = v36 << 16;
          v40 = (unsigned __int8)*(v9 - 47);
          v41 = v37 | v34 | (v38 << 8);
          v42 = (unsigned __int8)*(v9 - 44);
          *(_DWORD *)(i + (v52 & 0xFFFFFFFC)) = v41;
          *(_DWORD *)(i + (v52 & 0xFFFFFFFC)) = v39 | (v40 << 24) | v42 | ((unsigned __int8)*(v9 - 45) << 8);
        }
        while ( !v11 );
      }
      v43 = (unsigned __int8 *)&s[v10];
      do
      {
        v44 = *v43;
        ++v10;
        v45 = v43[1];
        v46 = v43[3];
        v43 += 4;
        *(_DWORD *)(i + (v52 & 0xFFFFFFFC)) = (v44 << 24) | (v45 << 16) | v46 | (*(v43 - 2) << 8);
      }
      while ( v8 > v10 );
    }
    v47 = a3 & 3;
    if ( (a3 & 3) != 0 )
    {
      v48 = &v57[4 * v8];
      v49 = (unsigned __int8)*(v48 - 2304) << 24;
      if ( v47 == 2 )
      {
        v49 |= (unsigned __int8)*(v48 - 2303) << 16;
      }
      else if ( v47 == 3 )
      {
        v49 |= ((unsigned __int8)*(v48 - 2302) << 8) | ((unsigned __int8)*(v48 - 2303) << 16);
      }
      *(_DWORD *)(i + (v52 & 0xFFFFFFFC)) = v49;
    }
    *(_DWORD *)(i + (v53 & 0xFFFFFFFC)) = a3 | 0x80000000;
    pthread_mutex_unlock(v6);
    return a3;
  }
}
