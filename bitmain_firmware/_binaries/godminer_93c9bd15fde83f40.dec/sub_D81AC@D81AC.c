int __fastcall sub_D81AC(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v7; // r2
  int v8; // r0
  int v9; // r2
  int v10; // r3
  int v11; // r2
  int v12; // lr
  int v13; // r11
  int v14; // r9
  int v15; // r8
  int v16; // r7
  int v17; // r4
  int v18; // r12
  unsigned int v19; // r0
  unsigned __int8 *v20; // r10
  int v21; // r6
  int v22; // r3
  int v23; // r1
  int v24; // r2
  int v25; // r0
  __int16 v26; // r2
  unsigned __int8 v27; // r1
  int v28; // r3
  int v30; // [sp+18h] [bp-1044h]
  int v32; // [sp+2Ch] [bp-1030h]
  pthread_mutex_t *v34; // [sp+34h] [bp-1028h]
  int v36; // [sp+3Ch] [bp-1020h]
  int v37[2]; // [sp+44h] [bp-1018h] BYREF
  unsigned __int8 v38; // [sp+4Ch] [bp-1010h] BYREF
  unsigned __int8 v39; // [sp+4Dh] [bp-100Fh]
  unsigned __int8 v40; // [sp+4Eh] [bp-100Eh] BYREF
  int v41; // [sp+4Fh] [bp-100Dh]
  unsigned __int8 v42; // [sp+53h] [bp-1009h]
  unsigned __int8 v43; // [sp+54h] [bp-1008h]
  char v44; // [sp+55h] [bp-1007h]
  char v45[4100]; // [sp+58h] [bp-1004h] BYREF

  v34 = (pthread_mutex_t *)(a1 + 688);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 688));
  v36 = a3;
  queue_clear(*(_DWORD *)(a1 + 664));
  sub_16EB04(a5, 0x3E8u);
  v30 = 0;
  v37[1] = (_DWORD)&loc_F4240 * v7;
  v8 = sub_16EB04(a5, 0x3E8u);
  v9 = 0;
  v32 = 0;
  v37[0] = v8;
  while ( a2 > v9 )
  {
LABEL_3:
    if ( sub_C4230(*(_DWORD *)(a1 + 664), (char *)&v38, v37) == 110 )
    {
      v9 = v32;
      v30 = 3;
      break;
    }
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(
      v45,
      0x1000u,
      0,
      "header:%02x%02x chip_addr:%02x, reg value:%08x, reg addr:%02x",
      v38,
      v39,
      v42,
      v41,
      v43);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/chip_reg_io_base.c",
      147,
      "sync_get_status_base3",
      21,
      1047,
      20,
      v45);
    if ( v38 != 170 || v39 != 85 || (v10 = v40, v40 != 8) || (v11 = v44 & 0x40) != 0 )
    {
      v9 = v32;
      v30 = 1;
      break;
    }
    v12 = 1;
    v13 = v44 & 0x1F;
    v14 = 1;
    v15 = 1;
    v16 = 1;
    v17 = 1;
    v18 = 59;
    v19 = 128;
    v20 = &v40;
    while ( 1 )
    {
      ++v11;
      v21 = (v10 & v19) != 0;
      v22 = (unsigned __int8)(v21 ^ v17);
      v19 >>= 1;
      v23 = (unsigned __int8)(v22 ^ v16);
      if ( v11 == 8 )
        break;
      if ( !--v18 )
        goto LABEL_13;
LABEL_10:
      v16 = v15;
      v15 = (unsigned __int8)(v21 ^ v17);
      v10 = *v20;
      v17 = v12;
      v12 = v14;
      v14 = v23;
    }
    --v18;
    v11 = 0;
    v19 = 128;
    ++v20;
    if ( v18 )
      goto LABEL_10;
LABEL_13:
    if ( v12 )
      v24 = 24;
    else
      v24 = 8;
    if ( v12 )
      v12 = 16;
    if ( !v14 )
      v24 = v12;
    if ( v22 != v16 )
      v24 = (unsigned __int8)v24 | 4;
    if ( v15 )
      v24 = (unsigned __int8)v24 | 2;
    if ( v21 == v17 )
    {
      if ( v13 == v24 )
        goto LABEL_28;
LABEL_26:
      v30 = 2;
      goto LABEL_3;
    }
    if ( v13 != ((unsigned __int8)v24 | 1) )
      goto LABEL_26;
LABEL_28:
    v25 = v36;
    v26 = v43;
    v27 = v42;
    ++v32;
    v28 = v41;
    __pld((void *)(v36 + 30));
    *(_WORD *)(v25 + 6) = v26;
    *(_BYTE *)(v25 + 4) = v27;
    v9 = v32;
    *(_DWORD *)v25 = v28;
    v36 = v25 + 12;
  }
  *a4 = v9;
  pthread_mutex_unlock(v34);
  return v30;
}
