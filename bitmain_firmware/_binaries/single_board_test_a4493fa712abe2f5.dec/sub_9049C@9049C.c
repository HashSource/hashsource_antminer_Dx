int __fastcall sub_9049C(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v7; // r2
  int v8; // r0
  int v9; // r2
  int v10; // r5
  int v11; // r9
  int v12; // r8
  int v13; // lr
  int v14; // r12
  int v15; // r4
  int v16; // r0
  unsigned int v17; // r1
  unsigned __int8 *v18; // r11
  int v19; // r10
  int v20; // r6
  int v21; // r3
  int v22; // r2
  int v23; // r2
  int v24; // r1
  __int16 v25; // r2
  char v26; // r1
  int v27; // r3
  _WORD *v28; // t2
  int v30; // [sp+1Ch] [bp-44h]
  int v31; // [sp+20h] [bp-40h]
  int v33; // [sp+34h] [bp-2Ch]
  pthread_mutex_t *v35; // [sp+3Ch] [bp-24h]
  _WORD *v37; // [sp+44h] [bp-1Ch]
  int v38[2]; // [sp+4Ch] [bp-14h] BYREF
  unsigned __int8 v39; // [sp+54h] [bp-Ch] BYREF
  unsigned __int8 v40; // [sp+55h] [bp-Bh]
  int v41; // [sp+56h] [bp-Ah] BYREF
  unsigned __int8 v42; // [sp+5Ah] [bp-6h]
  unsigned __int8 v43; // [sp+5Bh] [bp-5h]
  char v44; // [sp+5Ch] [bp-4h]
  char _60[4128]; // [sp+60h] [bp+0h] BYREF

  v35 = (pthread_mutex_t *)(a1 + 660);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 660));
  queue_clear(*(_DWORD *)(a1 + 636));
  sub_F7A2C(a5, 0x3E8u);
  v37 = (_WORD *)(a3 + 30);
  v38[1] = (_DWORD)&loc_F4240 * v7;
  v31 = 0;
  v8 = sub_F7A2C(a5, 0x3E8u);
  v9 = 0;
  v33 = 0;
  v38[0] = v8;
  while ( a2 > v9 )
  {
LABEL_3:
    if ( sub_D3038(*(_DWORD *)(a1 + 636), (char *)&v39, v38) == 110 )
    {
      v31 = 3;
      break;
    }
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(
      _60,
      0x1000u,
      0,
      "header:%02x%02x chip_addr:%02x, reg value:%08x, reg addr:%02x",
      v39,
      v40,
      v42,
      v41,
      v43);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/chip_reg_io_base.c",
      64,
      "sync_get_status_base",
      20,
      261,
      20,
      _60);
    if ( v39 != 170 || v40 != 85 )
    {
      v31 = 1;
      break;
    }
    v10 = 1;
    v11 = 1;
    v12 = 1;
    v13 = 1;
    v14 = 1;
    v15 = 51;
    v30 = v44 & 0x1F;
    v16 = 0;
    v17 = 128;
    v18 = (unsigned __int8 *)&v41;
    v19 = (unsigned __int8)v41;
    while ( 1 )
    {
      ++v16;
      v20 = (v19 & v17) != 0;
      v21 = (unsigned __int8)(v14 ^ v20);
      v17 >>= 1;
      v22 = (unsigned __int8)(v13 ^ v21);
      if ( v16 == 8 )
        break;
      if ( !--v15 )
        goto LABEL_12;
LABEL_8:
      v14 = v10;
      v13 = v12;
      v10 = v11;
      v12 = v21;
      v11 = v22;
    }
    --v15;
    ++v18;
    v16 = 0;
    v17 = 128;
    if ( v15 )
    {
      v19 = *v18;
      goto LABEL_8;
    }
LABEL_12:
    if ( v10 )
      v23 = 24;
    else
      v23 = 8;
    if ( v10 )
      v24 = 16;
    else
      v24 = 0;
    if ( !v11 )
      v23 = v24;
    if ( v13 != v21 )
      v23 |= 4u;
    if ( v12 )
      v23 |= 2u;
    if ( v14 == v20 )
    {
      if ( v30 == v23 )
        goto LABEL_28;
LABEL_26:
      v31 = 2;
      goto LABEL_3;
    }
    if ( v30 != (v23 | 1) )
      goto LABEL_26;
LABEL_28:
    v25 = v43;
    v26 = v42;
    ++v33;
    v27 = v41;
    v28 = v37;
    __pld(v37);
    *(v28 - 12) = v25;
    *(_DWORD *)(v28 - 15) = v27;
    *((_BYTE *)v28 - 26) = v26;
    v37 = v28 + 6;
    v9 = v33;
  }
  *a4 = v33;
  pthread_mutex_unlock(v35);
  return v31;
}
