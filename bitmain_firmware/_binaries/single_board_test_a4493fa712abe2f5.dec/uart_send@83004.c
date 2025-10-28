size_t __fastcall uart_send(int a1, const void *a2, size_t a3)
{
  int i; // r4
  signed int v7; // r7
  char *v8; // r3
  signed int v9; // r2
  int v10; // r9
  int v11; // r0
  bool v12; // cc
  int v13; // lr
  int v14; // r8
  int v15; // r10
  int v16; // r8
  int v17; // lr
  int v18; // r10
  int v19; // r9
  int v20; // r11
  int v21; // lr
  int v22; // r9
  int v23; // r8
  int v24; // r8
  int v25; // lr
  int v26; // r10
  int v27; // r9
  int v28; // r11
  int v29; // r0
  int v30; // r8
  int v31; // lr
  int v32; // r11
  int v33; // lr
  int v34; // r11
  int v35; // r10
  int v36; // r8
  int v37; // r9
  int v38; // lr
  int v39; // r10
  int v40; // r8
  int v41; // r9
  char *v42; // lr
  int v43; // r3
  int v44; // r8
  int v45; // r12
  size_t v46; // r2
  int v47; // r3
  int v48; // r7
  int v49; // r3
  pthread_mutex_t *mutex; // [sp+14h] [bp-1918h]
  int v52; // [sp+18h] [bp-1914h] BYREF
  int v53; // [sp+1Ch] [bp-1910h] BYREF
  int v54; // [sp+20h] [bp-190Ch] BYREF
  int v55; // [sp+24h] [bp-1908h] BYREF
  char s[256]; // [sp+28h] [bp-1904h] BYREF
  char v57[2048]; // [sp+128h] [bp-1804h] BYREF
  char v58[4100]; // [sp+928h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  v55 = 0;
  v54 = 0;
  mutex = &stru_3B52C4[a1];
  v52 = 0;
  v53 = 0;
  pthread_mutex_lock(mutex);
  if ( sub_82C50(a1, &v52, &v55, &v54, &v53) )
  {
    snprintf(v57, 0x800u, "get_send_address_info error, chain_id = %d\n", a1);
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(v58, 0x1000u, 0, v57);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/device/hal/platform/7007/7007_uart.c",
      82,
      "uart_send",
      9,
      408,
      100,
      v58);
    pthread_mutex_unlock(mutex);
    return 0;
  }
  else
  {
    for ( i = dword_3B52A4; (unsigned __int8)(*(_DWORD *)(dword_3B52A4 + (v55 & 0xFFFFFFFC)) >> v52) < a3; i = dword_3B52A4 )
      usleep(0);
    memcpy(s, a2, a3);
    v7 = a3 >> 2;
    if ( a3 >> 2 )
    {
      if ( a3 >> 2 <= 8 )
      {
        v9 = 0;
      }
      else
      {
        v8 = &s[43];
        v9 = 0;
        do
        {
          v10 = (unsigned __int8)*(v8 - 43);
          v11 = (unsigned __int8)*(v8 - 40);
          v12 = v7 - 7 <= v9 + 9;
          v13 = (unsigned __int8)*(v8 - 39);
          v9 += 8;
          v14 = (unsigned __int8)*(v8 - 42) << 16;
          v15 = (unsigned __int8)*(v8 - 38);
          __pld(v8);
          v8 += 32;
          v16 = v14 | (v10 << 24);
          v17 = (v13 << 24) | (v15 << 16);
          v18 = (unsigned __int8)*(v8 - 62);
          v19 = (unsigned __int8)*(v8 - 68);
          v20 = (unsigned __int8)*(v8 - 67) << 24;
          *(_DWORD *)(i + (v53 & 0xFFFFFFFC)) = v16 | v11 | ((unsigned __int8)*(v8 - 73) << 8);
          v21 = v17 | v19;
          v22 = (unsigned __int8)*(v8 - 66);
          v23 = (unsigned __int8)*(v8 - 63);
          *(_DWORD *)(i + (v53 & 0xFFFFFFFC)) = v21 | ((unsigned __int8)*(v8 - 69) << 8);
          v24 = (v18 << 16) | (v23 << 24);
          v25 = (unsigned __int8)*(v8 - 58);
          v26 = (unsigned __int8)*(v8 - 59);
          v27 = v20 | (v22 << 16) | (unsigned __int8)*(v8 - 64) | ((unsigned __int8)*(v8 - 65) << 8);
          v28 = (unsigned __int8)*(v8 - 61);
          *(_DWORD *)(i + (v53 & 0xFFFFFFFC)) = v27;
          v29 = v24 | (unsigned __int8)*(v8 - 60) | (v28 << 8);
          v30 = (unsigned __int8)*(v8 - 57);
          v31 = (v25 << 16) | (v26 << 24) | (unsigned __int8)*(v8 - 56);
          *(_DWORD *)(i + (v53 & 0xFFFFFFFC)) = v29;
          v32 = (unsigned __int8)*(v8 - 55);
          *(_DWORD *)(i + (v53 & 0xFFFFFFFC)) = v31 | (v30 << 8);
          v33 = ((unsigned __int8)*(v8 - 54) << 16) | (v32 << 24);
          v34 = (unsigned __int8)*(v8 - 48);
          v35 = (unsigned __int8)*(v8 - 46);
          v36 = ((unsigned __int8)*(v8 - 50) << 16) | ((unsigned __int8)*(v8 - 51) << 24);
          v37 = (unsigned __int8)*(v8 - 49);
          *(_DWORD *)(i + (v53 & 0xFFFFFFFC)) = v33 | (unsigned __int8)*(v8 - 52) | ((unsigned __int8)*(v8 - 53) << 8);
          v38 = v35 << 16;
          v39 = (unsigned __int8)*(v8 - 47);
          v40 = v36 | v34 | (v37 << 8);
          v41 = (unsigned __int8)*(v8 - 44);
          *(_DWORD *)(i + (v53 & 0xFFFFFFFC)) = v40;
          *(_DWORD *)(i + (v53 & 0xFFFFFFFC)) = v38 | (v39 << 24) | v41 | ((unsigned __int8)*(v8 - 45) << 8);
        }
        while ( !v12 );
      }
      v42 = &s[4 * v9];
      do
      {
        v43 = (unsigned __int8)*v42;
        ++v9;
        v44 = (unsigned __int8)v42[1];
        v45 = (unsigned __int8)v42[3];
        v42 += 4;
        *(_DWORD *)(i + (v53 & 0xFFFFFFFC)) = (v43 << 24) | (v44 << 16) | v45 | ((unsigned __int8)*(v42 - 2) << 8);
      }
      while ( v7 > v9 );
    }
    v46 = a3 & 3;
    if ( (a3 & 3) != 0 )
    {
      v47 = (unsigned __int8)s[4 * v7];
      v48 = 4 * v7;
      v49 = v47 << 24;
      if ( v46 == 2 )
      {
        v49 |= (unsigned __int8)s[v48 + 1] << 16;
      }
      else if ( v46 == 3 )
      {
        v49 |= ((unsigned __int8)s[v48 + 2] << 8) | ((unsigned __int8)s[v48 + 1] << 16);
      }
      *(_DWORD *)(i + (v53 & 0xFFFFFFFC)) = v49;
    }
    *(_DWORD *)(i + (v54 & 0xFFFFFFFC)) = a3 | 0x80000000;
    pthread_mutex_unlock(mutex);
    return a3;
  }
}
