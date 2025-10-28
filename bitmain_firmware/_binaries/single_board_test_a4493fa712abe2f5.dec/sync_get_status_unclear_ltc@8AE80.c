int __fastcall sync_get_status_unclear_ltc(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v5; // r2
  int v6; // r0
  int v7; // r2
  int v8; // r5
  int v9; // r8
  int v10; // lr
  int v11; // r12
  int v12; // r7
  int v13; // r4
  int v14; // r0
  unsigned int v15; // r1
  unsigned __int8 *v16; // r10
  int v17; // r9
  int v18; // r6
  int v19; // r3
  int v20; // r2
  int v21; // r2
  int v22; // r1
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

  if ( *(_BYTE *)(a1 + 128) )
  {
    mutex = (pthread_mutex_t *)(a1 + 660);
    v29 = 0;
    pthread_mutex_lock((pthread_mutex_t *)(a1 + 660));
    sub_F7A2C(a5, 0x3E8u);
    v31 = 0;
    v36[1] = (_DWORD)&loc_F4240 * v5;
    v6 = sub_F7A2C(a5, 0x3E8u);
    v7 = 0;
    v36[0] = v6;
    while ( 1 )
    {
      if ( a2 <= v7 )
      {
LABEL_32:
        *a4 = v31;
        pthread_mutex_unlock(mutex);
        return v29;
      }
LABEL_4:
      if ( sub_D3038(*(_DWORD *)(a1 + 636), v37, v36) == 110 )
      {
        v29 = 3;
        goto LABEL_32;
      }
      if ( (unsigned __int8)v37[0] != 170 || v37[1] != 85 || (v41 & 0x80u) != 0 )
      {
        v29 = 1;
        goto LABEL_32;
      }
      v8 = 1;
      v9 = 1;
      v10 = 1;
      v11 = 1;
      v12 = 1;
      v13 = 51;
      v28 = v41 & 0x1F;
      v14 = 0;
      v15 = 128;
      v16 = (unsigned __int8 *)&v38;
      v17 = (unsigned __int8)v38;
      while ( 1 )
      {
        ++v14;
        v18 = (v17 & v15) != 0;
        v19 = (unsigned __int8)(v12 ^ v18);
        v15 >>= 1;
        v20 = (unsigned __int8)(v11 ^ v19);
        if ( v14 == 8 )
          break;
        if ( !--v13 )
          goto LABEL_14;
LABEL_10:
        v12 = v8;
        v11 = v10;
        v8 = v9;
        v10 = v19;
        v9 = v20;
      }
      --v13;
      ++v16;
      v14 = 0;
      v15 = 128;
      if ( v13 )
        break;
LABEL_14:
      if ( v8 )
        v21 = 24;
      else
        v21 = 8;
      if ( v8 )
        v22 = 16;
      else
        v22 = 0;
      if ( !v9 )
        v21 = v22;
      if ( v11 != v19 )
        v21 |= 4u;
      if ( v10 )
        v21 |= 2u;
      if ( v12 == v18 )
      {
        if ( v28 == v21 )
          goto LABEL_30;
LABEL_28:
        v29 = 2;
        goto LABEL_4;
      }
      if ( v28 != (v21 | 1) )
        goto LABEL_28;
LABEL_30:
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
      v7 = v31;
    }
    v17 = *v16;
    goto LABEL_10;
  }
  return 4;
}
