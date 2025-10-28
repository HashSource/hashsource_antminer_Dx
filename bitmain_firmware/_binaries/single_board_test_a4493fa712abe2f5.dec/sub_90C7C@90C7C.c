int __fastcall sub_90C7C(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v6; // r2
  int v7; // r0
  int v8; // r2
  int v9; // r5
  int v10; // r8
  int v11; // lr
  int v12; // r12
  int v13; // r7
  int v14; // r4
  int v15; // r0
  unsigned int v16; // r1
  unsigned __int8 *v17; // r10
  int v18; // r9
  int v19; // r6
  int v20; // r3
  int v21; // r2
  int v22; // r2
  int v23; // r1
  __int16 v24; // r2
  char v25; // r1
  int v26; // r0
  int v27; // r3
  int v29; // [sp+0h] [bp-3Ch]
  int v30; // [sp+4h] [bp-38h]
  int v32; // [sp+Ch] [bp-30h]
  pthread_mutex_t *mutex; // [sp+14h] [bp-28h]
  int v37[2]; // [sp+24h] [bp-18h] BYREF
  char v38[2]; // [sp+2Ch] [bp-10h] BYREF
  int v39; // [sp+2Eh] [bp-Eh] BYREF
  char v40; // [sp+32h] [bp-Ah]
  unsigned __int8 v41; // [sp+33h] [bp-9h]
  unsigned __int8 v42; // [sp+34h] [bp-8h]

  mutex = (pthread_mutex_t *)(a1 + 660);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 660));
  v30 = 0;
  queue_clear(*(_DWORD *)(a1 + 636));
  sub_F7A2C(a5, 0x3E8u);
  v32 = 0;
  v37[1] = (_DWORD)&loc_F4240 * v6;
  v7 = sub_F7A2C(a5, 0x3E8u);
  v8 = 0;
  v37[0] = v7;
  while ( a2 > v8 )
  {
LABEL_3:
    if ( sub_D3038(*(_DWORD *)(a1 + 636), v38, v37) == 110 )
    {
      v30 = 3;
      break;
    }
    if ( (unsigned __int8)v38[0] != 170 || v38[1] != 85 || (v42 & 0x80u) != 0 )
    {
      v30 = 1;
      break;
    }
    v9 = 1;
    v10 = 1;
    v11 = 1;
    v12 = 1;
    v13 = 1;
    v14 = 51;
    v29 = v42 & 0x1F;
    v15 = 0;
    v16 = 128;
    v17 = (unsigned __int8 *)&v39;
    v18 = (unsigned __int8)v39;
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
    ++v17;
    v15 = 0;
    v16 = 128;
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
      v23 = 16;
    else
      v23 = 0;
    if ( !v10 )
      v22 = v23;
    if ( v12 != v20 )
      v22 |= 4u;
    if ( v11 )
      v22 |= 2u;
    if ( v13 == v19 )
    {
      if ( v29 == v22 )
        goto LABEL_29;
LABEL_27:
      v30 = 2;
      goto LABEL_3;
    }
    if ( v29 != (v22 | 1) )
      goto LABEL_27;
LABEL_29:
    v24 = v41;
    v25 = v40;
    ++v32;
    v26 = a3;
    *(_BYTE *)(a3 + 9) = (v42 >> 5) & 3;
    v27 = v39;
    __pld((void *)(a3 + 42));
    *(_WORD *)(v26 + 6) = v24;
    *(_DWORD *)v26 = v27;
    *(_BYTE *)(v26 + 4) = v25;
    a3 = v26 + 12;
    v8 = v32;
  }
  *a4 = v32;
  pthread_mutex_unlock(mutex);
  return v30;
}
