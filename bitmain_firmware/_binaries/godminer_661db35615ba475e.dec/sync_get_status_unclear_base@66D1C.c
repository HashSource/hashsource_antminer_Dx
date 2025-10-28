int __fastcall sync_get_status_unclear_base(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v5; // r2
  int v6; // r0
  int v7; // r2
  int v8; // lr
  int v9; // r8
  int v10; // r7
  int v11; // r6
  int v12; // r5
  int v13; // r11
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
  int v25; // r3
  _WORD *v26; // t2
  int v28; // [sp+4h] [bp-38h]
  int v30; // [sp+Ch] [bp-30h]
  pthread_mutex_t *mutex; // [sp+14h] [bp-28h]
  _WORD *v34; // [sp+1Ch] [bp-20h]
  int v35[2]; // [sp+24h] [bp-18h] BYREF
  char v36[2]; // [sp+2Ch] [bp-10h] BYREF
  int v37; // [sp+2Eh] [bp-Eh] BYREF
  char v38; // [sp+32h] [bp-Ah]
  unsigned __int8 v39; // [sp+33h] [bp-9h]
  char v40; // [sp+35h] [bp-7h]

  if ( *(_BYTE *)(a1 + 128) )
  {
    v34 = (_WORD *)(a3 + 54);
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
LABEL_30:
        *a4 = v7;
        pthread_mutex_unlock(mutex);
        return v28;
      }
LABEL_4:
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 636), v36, 0xAu, v35) == 110 )
      {
        v7 = v30;
        v28 = 3;
        goto LABEL_30;
      }
      if ( (unsigned __int8)v36[0] != 170 || v36[1] != 85 )
      {
        v7 = v30;
        v28 = 1;
        goto LABEL_30;
      }
      v8 = 1;
      v9 = 1;
      v10 = 1;
      v11 = 1;
      v12 = 1;
      v13 = v40 & 0x1F;
      v14 = 59;
      v15 = 0;
      v16 = 128;
      v17 = (unsigned __int8 *)&v37;
      v18 = (unsigned __int8)v37;
      while ( 1 )
      {
        ++v15;
        v19 = (v18 & v16) != 0;
        v20 = (unsigned __int8)(v12 ^ v19);
        v16 >>= 1;
        v21 = (unsigned __int8)(v11 ^ v20);
        if ( v15 == 8 )
          break;
        if ( !--v14 )
          goto LABEL_13;
LABEL_9:
        v12 = v8;
        v11 = v10;
        v8 = v9;
        v10 = v20;
        v9 = v21;
      }
      --v14;
      v15 = 0;
      v16 = 128;
      ++v17;
      if ( v14 )
        break;
LABEL_13:
      if ( v8 )
        v22 = 24;
      else
        v22 = 8;
      if ( v8 )
        v8 = 16;
      if ( !v9 )
        v22 = v8;
      if ( v11 != v20 )
        v22 = (unsigned __int8)v22 | 4;
      if ( v10 )
        v22 = (unsigned __int8)v22 | 2;
      if ( v12 == v19 )
      {
        if ( v13 == v22 )
          goto LABEL_28;
LABEL_26:
        v28 = 2;
        goto LABEL_4;
      }
      if ( v13 != ((unsigned __int8)v22 | 1) )
        goto LABEL_26;
LABEL_28:
      v23 = v39;
      v24 = v38;
      ++v30;
      v25 = v37;
      v26 = v34;
      __pld(v34);
      *(v26 - 24) = v23;
      *(_DWORD *)(v26 - 27) = v25;
      *((_BYTE *)v26 - 50) = v24;
      v34 = v26 + 6;
      v7 = v30;
    }
    v18 = *v17;
    goto LABEL_9;
  }
  return 4;
}
