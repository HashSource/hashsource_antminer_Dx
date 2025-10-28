int __fastcall sub_658D4(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v7; // r2
  int v8; // r0
  int v9; // r2
  int v10; // lr
  int v11; // r9
  int v12; // r8
  int v13; // r7
  int v14; // r6
  int v15; // r12
  int v16; // r0
  unsigned int v17; // r1
  unsigned __int8 *v18; // r11
  int v19; // r10
  int v20; // r4
  int v21; // r3
  int v22; // r2
  int v23; // r2
  __int16 v24; // r2
  char v25; // r1
  int v26; // r3
  _WORD *v27; // t2
  int v29; // [sp+1Ch] [bp-1048h]
  int v30; // [sp+20h] [bp-1044h]
  int v32; // [sp+34h] [bp-1030h]
  pthread_mutex_t *v34; // [sp+3Ch] [bp-1028h]
  _WORD *v36; // [sp+44h] [bp-1020h]
  int v37[2]; // [sp+4Ch] [bp-1018h] BYREF
  unsigned __int8 v38; // [sp+54h] [bp-1010h] BYREF
  unsigned __int8 v39; // [sp+55h] [bp-100Fh]
  int v40; // [sp+56h] [bp-100Eh] BYREF
  unsigned __int8 v41; // [sp+5Ah] [bp-100Ah]
  unsigned __int8 v42; // [sp+5Bh] [bp-1009h]
  char v43; // [sp+5Ch] [bp-1008h]
  char var1004[4128]; // [sp+60h] [bp-1004h] BYREF

  v34 = (pthread_mutex_t *)(a1 + 660);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 660));
  v36 = (_WORD *)(a3 + 30);
  queue_clear(*(_DWORD *)(a1 + 636));
  sub_15DCAC(a5, 0x3E8u);
  v30 = 0;
  v37[1] = (_DWORD)&loc_F4240 * v7;
  v8 = sub_15DCAC(a5, 0x3E8u);
  v9 = 0;
  v32 = 0;
  v37[0] = v8;
  while ( a2 > v9 )
  {
LABEL_3:
    if ( sub_1361FC(*(_DWORD *)(a1 + 636), (char *)&v38, v37) == 110 )
    {
      v9 = v32;
      v30 = 3;
      break;
    }
    pthread_mutex_lock(&stru_197BB8);
    logfmt_raw(
      var1004,
      0x1000u,
      0,
      "header:%02x%02x chip_addr:%02x, reg value:%08x, reg addr:%02x",
      v38,
      v39,
      v41,
      v40,
      v42);
    pthread_mutex_unlock(&stru_197BB8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/chip_reg_io_base.c",
      147,
      "sync_get_status_base",
      20,
      261,
      20,
      var1004);
    if ( v38 != 170 || v39 != 85 )
    {
      v9 = v32;
      v30 = 1;
      break;
    }
    v10 = 1;
    v11 = 1;
    v12 = 1;
    v13 = 1;
    v14 = 1;
    v15 = 51;
    v29 = v43 & 0x1F;
    v16 = 0;
    v17 = 128;
    v18 = (unsigned __int8 *)&v40;
    v19 = (unsigned __int8)v40;
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
    v16 = 0;
    v17 = 128;
    ++v18;
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
      v10 = 16;
    if ( !v11 )
      v23 = v10;
    if ( v13 != v21 )
      v23 = (unsigned __int8)v23 | 4;
    if ( v12 )
      v23 = (unsigned __int8)v23 | 2;
    if ( v14 == v20 )
    {
      if ( v29 == v23 )
        goto LABEL_27;
LABEL_25:
      v30 = 2;
      goto LABEL_3;
    }
    if ( v29 != ((unsigned __int8)v23 | 1) )
      goto LABEL_25;
LABEL_27:
    v24 = v42;
    v25 = v41;
    ++v32;
    v26 = v40;
    v27 = v36;
    __pld(v36);
    *(v27 - 12) = v24;
    *(_DWORD *)(v27 - 15) = v26;
    *((_BYTE *)v27 - 26) = v25;
    v36 = v27 + 6;
    v9 = v32;
  }
  *a4 = v9;
  pthread_mutex_unlock(v34);
  return v30;
}
