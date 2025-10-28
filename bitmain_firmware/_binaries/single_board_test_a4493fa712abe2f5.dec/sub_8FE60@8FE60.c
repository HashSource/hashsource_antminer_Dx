int __fastcall sub_8FE60(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v6; // r2
  int v7; // r0
  int v8; // r2
  int v9; // r3
  int v10; // r2
  int v11; // r5
  int v12; // r9
  int v13; // r8
  int v14; // lr
  int v15; // r6
  int v16; // r11
  int v17; // r4
  unsigned int v18; // r0
  unsigned __int8 *v19; // r10
  int v20; // r12
  int v21; // r3
  int v22; // r1
  int v23; // r2
  int v24; // r1
  int v25; // r1
  __int16 v26; // r3
  int v28; // [sp+0h] [bp-34h]
  int v29; // [sp+4h] [bp-30h]
  pthread_mutex_t *mutex; // [sp+Ch] [bp-28h]
  int v34[2]; // [sp+1Ch] [bp-18h] BYREF
  char v35[2]; // [sp+24h] [bp-10h] BYREF
  _BYTE v36[3]; // [sp+26h] [bp-Eh] BYREF
  int v37; // [sp+29h] [bp-Bh]
  char v38; // [sp+2Dh] [bp-7h]

  mutex = (pthread_mutex_t *)(a1 + 660);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 660));
  v28 = 0;
  queue_clear(*(_DWORD *)(a1 + 636));
  sub_F7A2C(a5, 0x3E8u);
  v29 = 0;
  v34[1] = (_DWORD)&loc_F4240 * v6;
  v7 = sub_F7A2C(a5, 0x3E8u);
  v8 = 0;
  v34[0] = v7;
  while ( a2 > v8 )
  {
LABEL_3:
    if ( sub_D2F48(*(_DWORD *)(a1 + 636), v35, v34) == 110 )
    {
      v28 = 3;
      break;
    }
    if ( (unsigned __int8)v35[0] != 170 || v35[1] != 85 || (v9 = v36[0], (v10 = v36[0] & 0xEF) != 0) )
    {
      v28 = 1;
      break;
    }
    v11 = 1;
    v12 = 1;
    v13 = 1;
    v14 = 1;
    v15 = 1;
    v16 = v38 & 0x1F;
    v17 = 56;
    v18 = 128;
    v19 = v36;
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
    ++v19;
    v10 = 0;
    v18 = 128;
    if ( v17 )
      goto LABEL_9;
LABEL_12:
    if ( v11 )
      v23 = 24;
    else
      v23 = 8;
    if ( v11 )
      v24 = 16;
    else
      v24 = 0;
    if ( !v12 )
      v23 = v24;
    if ( v21 != v14 )
      v23 |= 4u;
    if ( v13 )
      v23 |= 2u;
    if ( v20 == v15 )
    {
      if ( v16 == v23 )
        goto LABEL_28;
LABEL_26:
      v28 = 2;
      goto LABEL_3;
    }
    if ( v16 != (v23 | 1) )
      goto LABEL_26;
LABEL_28:
    v25 = a3;
    ++v29;
    v26 = v36[2];
    *(_BYTE *)(a3 + 4) = v36[1];
    __pld((void *)(a3 + 42));
    *(_WORD *)(v25 + 6) = v26;
    *(_DWORD *)v25 = v37;
    a3 = v25 + 12;
    v8 = v29;
  }
  *a4 = v29;
  pthread_mutex_unlock(mutex);
  return v28;
}
