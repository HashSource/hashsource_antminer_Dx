int __fastcall sub_8D744(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v6; // r2
  int v7; // r0
  int v8; // r2
  int v9; // lr
  int v10; // r8
  int v11; // r7
  int v12; // r6
  int v13; // r5
  int v14; // r12
  int v15; // r0
  unsigned int v16; // r1
  unsigned __int8 *v17; // r10
  int v18; // r9
  int v19; // r4
  int v20; // r3
  int v21; // r2
  int v22; // r2
  __int16 v23; // r2
  char v24; // r1
  int v25; // r0
  int v26; // r3
  int v28; // [sp+0h] [bp-3Ch]
  int v29; // [sp+4h] [bp-38h]
  int v31; // [sp+Ch] [bp-30h]
  pthread_mutex_t *mutex; // [sp+14h] [bp-28h]
  int v36[2]; // [sp+24h] [bp-18h] BYREF
  char v37[2]; // [sp+2Ch] [bp-10h] BYREF
  int v38; // [sp+2Eh] [bp-Eh] BYREF
  char v39; // [sp+32h] [bp-Ah]
  unsigned __int8 v40; // [sp+33h] [bp-9h]
  unsigned __int8 v41; // [sp+34h] [bp-8h]

  mutex = (pthread_mutex_t *)(a1 + 660);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 660));
  v29 = 0;
  queue_clear(*(_DWORD *)(a1 + 636));
  sub_15DCAC(a5, 0x3E8u);
  v31 = 0;
  v36[1] = (_DWORD)&loc_F4240 * v6;
  v7 = sub_15DCAC(a5, 0x3E8u);
  v8 = 0;
  v36[0] = v7;
  while ( a2 > v8 )
  {
LABEL_3:
    if ( sub_1361FC(*(_DWORD *)(a1 + 636), v37, v36) == 110 )
    {
      v8 = v31;
      v29 = 3;
      break;
    }
    if ( (unsigned __int8)v37[0] != 170 || v37[1] != 85 || (v41 & 0x80u) != 0 )
    {
      v8 = v31;
      v29 = 1;
      break;
    }
    v9 = 1;
    v10 = 1;
    v11 = 1;
    v12 = 1;
    v13 = 1;
    v14 = 51;
    v28 = v41 & 0x1F;
    v15 = 0;
    v16 = 128;
    v17 = (unsigned __int8 *)&v38;
    v18 = (unsigned __int8)v38;
    while ( 1 )
    {
      ++v15;
      v19 = (v18 & v16) != 0;
      v20 = (unsigned __int8)(v13 ^ v19);
      v16 >>= 1;
      v21 = (unsigned __int8)(v12 ^ v20);
      if ( v15 == 8 )
        break;
      if ( !--v14 )
        goto LABEL_13;
LABEL_9:
      v13 = v9;
      v12 = v11;
      v9 = v10;
      v11 = v20;
      v10 = v21;
    }
    --v14;
    v15 = 0;
    v16 = 128;
    ++v17;
    if ( v14 )
    {
      v18 = *v17;
      goto LABEL_9;
    }
LABEL_13:
    if ( v9 )
      v22 = 24;
    else
      v22 = 8;
    if ( v9 )
      v9 = 16;
    if ( !v10 )
      v22 = v9;
    if ( v12 != v20 )
      v22 = (unsigned __int8)v22 | 4;
    if ( v11 )
      v22 = (unsigned __int8)v22 | 2;
    if ( v13 == v19 )
    {
      if ( v28 == v22 )
        goto LABEL_28;
LABEL_26:
      v29 = 2;
      goto LABEL_3;
    }
    if ( v28 != ((unsigned __int8)v22 | 1) )
      goto LABEL_26;
LABEL_28:
    v23 = v40;
    v24 = v39;
    ++v31;
    v25 = a3;
    *(_BYTE *)(a3 + 9) = (v41 >> 5) & 3;
    v26 = v38;
    __pld((void *)(a3 + 42));
    *(_WORD *)(v25 + 6) = v23;
    *(_DWORD *)v25 = v26;
    *(_BYTE *)(v25 + 4) = v24;
    a3 = v25 + 12;
    v8 = v31;
  }
  *a4 = v8;
  pthread_mutex_unlock(mutex);
  return v29;
}
