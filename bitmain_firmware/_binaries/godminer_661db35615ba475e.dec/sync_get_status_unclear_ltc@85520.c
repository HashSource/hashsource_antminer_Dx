int __fastcall sync_get_status_unclear_ltc(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v5; // r2
  int v6; // r0
  int v7; // r2
  int v8; // lr
  int v9; // r8
  int v10; // r7
  int v11; // r6
  int v12; // r5
  int v13; // r12
  int v14; // r0
  unsigned int v15; // r1
  unsigned __int8 *v16; // r10
  int v17; // r9
  int v18; // r4
  int v19; // r3
  int v20; // r2
  int v21; // r2
  __int16 v22; // r2
  char v23; // r1
  int v24; // r0
  int v25; // r3
  int v27; // [sp+0h] [bp-3Ch]
  int v28; // [sp+4h] [bp-38h]
  int v30; // [sp+Ch] [bp-30h]
  pthread_mutex_t *mutex; // [sp+14h] [bp-28h]
  int v35[2]; // [sp+24h] [bp-18h] BYREF
  char v36[2]; // [sp+2Ch] [bp-10h] BYREF
  int v37; // [sp+2Eh] [bp-Eh] BYREF
  char v38; // [sp+32h] [bp-Ah]
  unsigned __int8 v39; // [sp+33h] [bp-9h]
  unsigned __int8 v40; // [sp+34h] [bp-8h]

  if ( *(_BYTE *)(a1 + 128) )
  {
    mutex = (pthread_mutex_t *)(a1 + 660);
    v28 = 0;
    pthread_mutex_lock((pthread_mutex_t *)(a1 + 660));
    sub_15DCAC(a5, 0x3E8u);
    v30 = 0;
    v35[1] = (_DWORD)&loc_F4240 * v5;
    v6 = sub_15DCAC(a5, 0x3E8u);
    v7 = 0;
    v35[0] = v6;
    while ( 1 )
    {
      if ( a2 <= v7 )
      {
LABEL_31:
        *a4 = v7;
        pthread_mutex_unlock(mutex);
        return v28;
      }
LABEL_4:
      if ( sub_1361FC(*(_DWORD *)(a1 + 636), v36, v35) == 110 )
      {
        v7 = v30;
        v28 = 3;
        goto LABEL_31;
      }
      if ( (unsigned __int8)v36[0] != 170 || v36[1] != 85 || (v40 & 0x80u) != 0 )
      {
        v7 = v30;
        v28 = 1;
        goto LABEL_31;
      }
      v8 = 1;
      v9 = 1;
      v10 = 1;
      v11 = 1;
      v12 = 1;
      v13 = 51;
      v27 = v40 & 0x1F;
      v14 = 0;
      v15 = 128;
      v16 = (unsigned __int8 *)&v37;
      v17 = (unsigned __int8)v37;
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
      v14 = 0;
      v15 = 128;
      ++v16;
      if ( v13 )
        break;
LABEL_14:
      if ( v8 )
        v21 = 24;
      else
        v21 = 8;
      if ( v8 )
        v8 = 16;
      if ( !v9 )
        v21 = v8;
      if ( v11 != v19 )
        v21 = (unsigned __int8)v21 | 4;
      if ( v10 )
        v21 = (unsigned __int8)v21 | 2;
      if ( v12 == v18 )
      {
        if ( v27 == v21 )
          goto LABEL_29;
LABEL_27:
        v28 = 2;
        goto LABEL_4;
      }
      if ( v27 != ((unsigned __int8)v21 | 1) )
        goto LABEL_27;
LABEL_29:
      v22 = v39;
      v23 = v38;
      ++v30;
      v24 = a3;
      *(_BYTE *)(a3 + 9) = (v40 >> 5) & 3;
      v25 = v37;
      __pld((void *)(a3 + 42));
      *(_WORD *)(v24 + 6) = v22;
      *(_DWORD *)v24 = v25;
      *(_BYTE *)(v24 + 4) = v23;
      a3 = v24 + 12;
      v7 = v30;
    }
    v17 = *v16;
    goto LABEL_10;
  }
  return 4;
}
