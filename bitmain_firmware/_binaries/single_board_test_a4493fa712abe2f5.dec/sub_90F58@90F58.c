int __fastcall sub_90F58(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  pthread_mutex_t *v5; // r11
  int v8; // r9
  int v9; // r10
  int v10; // r2
  unsigned int v11; // r3
  unsigned __int16 *v12; // r1
  int v13; // t1
  unsigned __int16 *v15; // r12
  unsigned __int8 v16; // r3
  int v17; // r5
  unsigned int v18; // r3
  int v19; // r5
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v26; // [sp+1Ch] [bp-1060h]
  int v27[2]; // [sp+24h] [bp-1058h] BYREF
  unsigned __int8 v28; // [sp+2Ch] [bp-1050h] BYREF
  unsigned __int8 v29; // [sp+2Dh] [bp-104Fh]
  char v30; // [sp+2Eh] [bp-104Eh] BYREF
  unsigned __int8 v31; // [sp+2Fh] [bp-104Dh]
  unsigned int v32; // [sp+30h] [bp-104Ch]
  char v33; // [sp+34h] [bp-1048h] BYREF
  unsigned __int16 v34; // [sp+74h] [bp-1008h] BYREF
  char v35[4100]; // [sp+78h] [bp-1004h] BYREF

  v5 = (pthread_mutex_t *)(a1 + 660);
  v8 = 0;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 660));
  queue_clear(*(_DWORD *)(a1 + 636));
  sub_F7A2C(a5, 0x3E8u);
  v9 = 0;
  v26 = a3;
  v27[1] = (_DWORD)&loc_F4240 * v10;
  v27[0] = sub_F7A2C(a5, 0x3E8u);
  while ( a2 > v9 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 636), (char *)&v28, 0x4Au, v27) == 110 )
      {
        v8 = 3;
        goto LABEL_11;
      }
      pthread_mutex_lock(&stru_3B526C);
      logfmt_raw(v35, 0x1000u, 0, "[DAG] header:%02x%02x chip_addr:%02x", v28, v29, v31);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/chip_reg_io_base.c",
        64,
        "sync_get_dag_base",
        17,
        326,
        20,
        v35);
      if ( v28 != 170 || v29 != 85 )
      {
        v8 = 1;
        goto LABEL_11;
      }
      v11 = 0xFFFF;
      v12 = (unsigned __int16 *)&v30;
      do
      {
        v13 = *(unsigned __int8 *)v12;
        v12 = (unsigned __int16 *)((char *)v12 + 1);
        v11 = (unsigned __int16)(crc_itu_t_table[v13 ^ (v11 >> 8)] ^ ((_WORD)v11 << 8));
      }
      while ( v12 != &v34 );
      if ( v34 == (unsigned __int16)(((_WORD)v11 << 8) | (v11 >> 8)) )
        break;
      v8 = 2;
    }
    v15 = (unsigned __int16 *)&v33;
    v16 = v31;
    v17 = v26;
    __pld((void *)(v26 + 156));
    *(_BYTE *)(v17 + 4) = v16;
    v18 = v32;
    __pld((void *)(v17 + 152));
    *(_DWORD *)v17 = bswap32(v18);
    v19 = v17 + 10;
    do
    {
      v19 += 16;
      v20 = *(_DWORD *)v15;
      v21 = *((_DWORD *)v15 + 1);
      v22 = *((_DWORD *)v15 + 2);
      v23 = *((_DWORD *)v15 + 3);
      v15 += 8;
      *(_DWORD *)(v19 - 16) = v20;
      *(_DWORD *)(v19 - 12) = v21;
      *(_DWORD *)(v19 - 8) = v22;
      *(_DWORD *)(v19 - 4) = v23;
    }
    while ( v15 != &v34 );
    ++v9;
    v26 += 76;
  }
LABEL_11:
  *a4 = v9;
  pthread_mutex_unlock(v5);
  return v8;
}
