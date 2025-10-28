int __fastcall sub_65D80(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v6; // r2
  int v7; // r0
  int v8; // r2
  int v9; // r3
  int v10; // r2
  int v11; // lr
  int v12; // r9
  int v13; // r8
  int v14; // r7
  int v15; // r4
  int v16; // r11
  int v17; // r12
  unsigned int v18; // r0
  unsigned __int8 *v19; // r10
  int v20; // r6
  int v21; // r3
  int v22; // r1
  int v23; // r2
  int v24; // r1
  __int16 v25; // r3
  int v27; // [sp+0h] [bp-34h]
  int v28; // [sp+4h] [bp-30h]
  pthread_mutex_t *mutex; // [sp+Ch] [bp-28h]
  int v33[2]; // [sp+1Ch] [bp-18h] BYREF
  char v34[2]; // [sp+24h] [bp-10h] BYREF
  _BYTE v35[3]; // [sp+26h] [bp-Eh] BYREF
  int v36; // [sp+29h] [bp-Bh]
  char v37; // [sp+2Dh] [bp-7h]

  mutex = (pthread_mutex_t *)(a1 + 660);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 660));
  v27 = 0;
  queue_clear(*(_DWORD *)(a1 + 636));
  sub_15DCAC(a5, 0x3E8u);
  v28 = 0;
  v33[1] = (_DWORD)&loc_F4240 * v6;
  v7 = sub_15DCAC(a5, 0x3E8u);
  v8 = 0;
  v33[0] = v7;
  while ( a2 > v8 )
  {
LABEL_3:
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 636), v34, 0xAu, v33) == 110 )
    {
      v8 = v28;
      v27 = 3;
      break;
    }
    if ( (unsigned __int8)v34[0] != 170 || v34[1] != 85 || (v9 = v35[0], (v10 = v35[0] & 0xEF) != 0) )
    {
      v8 = v28;
      v27 = 1;
      break;
    }
    v11 = 1;
    v12 = 1;
    v13 = 1;
    v14 = 1;
    v15 = 1;
    v16 = v37 & 0x1F;
    v17 = 56;
    v18 = 128;
    v19 = v35;
    while ( 1 )
    {
      ++v10;
      v20 = (v9 & v18) != 0;
      v21 = (unsigned __int8)(v20 ^ v15);
      v18 >>= 1;
      v22 = (unsigned __int8)(v21 ^ v14);
      if ( v10 == 8 )
        break;
      if ( !--v17 )
        goto LABEL_12;
LABEL_9:
      v14 = v13;
      v13 = (unsigned __int8)(v20 ^ v15);
      v9 = *v19;
      v15 = v11;
      v11 = v12;
      v12 = v22;
    }
    --v17;
    v10 = 0;
    v18 = 128;
    ++v19;
    if ( v17 )
      goto LABEL_9;
LABEL_12:
    if ( v11 )
      v23 = 24;
    else
      v23 = 8;
    if ( v11 )
      v11 = 16;
    if ( !v12 )
      v23 = v11;
    if ( v21 != v14 )
      v23 = (unsigned __int8)v23 | 4;
    if ( v13 )
      v23 = (unsigned __int8)v23 | 2;
    if ( v20 == v15 )
    {
      if ( v16 == v23 )
        goto LABEL_27;
LABEL_25:
      v27 = 2;
      goto LABEL_3;
    }
    if ( v16 != ((unsigned __int8)v23 | 1) )
      goto LABEL_25;
LABEL_27:
    v24 = a3;
    ++v28;
    v25 = v35[2];
    *(_BYTE *)(a3 + 4) = v35[1];
    __pld((void *)(a3 + 42));
    *(_WORD *)(v24 + 6) = v25;
    *(_DWORD *)v24 = v36;
    a3 = v24 + 12;
    v8 = v28;
  }
  *a4 = v8;
  pthread_mutex_unlock(mutex);
  return v27;
}
