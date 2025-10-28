int __fastcall sync_get_status_unclear_base(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v5; // r2
  int v6; // r0
  int v7; // r2
  int v8; // r5
  int v9; // r8
  int v10; // lr
  int v11; // r12
  int v12; // r7
  int v13; // r11
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
  int v26; // r3
  _WORD *v27; // t2
  int v29; // [sp+4h] [bp-38h]
  int v31; // [sp+Ch] [bp-30h]
  pthread_mutex_t *mutex; // [sp+14h] [bp-28h]
  _WORD *v35; // [sp+1Ch] [bp-20h]
  int v36[2]; // [sp+24h] [bp-18h] BYREF
  char v37[2]; // [sp+2Ch] [bp-10h] BYREF
  int v38; // [sp+2Eh] [bp-Eh] BYREF
  char v39; // [sp+32h] [bp-Ah]
  unsigned __int8 v40; // [sp+33h] [bp-9h]
  char v41; // [sp+35h] [bp-7h]

  if ( *(_BYTE *)(a1 + 128) )
  {
    v35 = (_WORD *)(a3 + 54);
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
LABEL_31:
        *a4 = v31;
        pthread_mutex_unlock(mutex);
        return v29;
      }
LABEL_4:
      if ( sub_D2F48(*(_DWORD *)(a1 + 636), v37, v36) == 110 )
      {
        v29 = 3;
        goto LABEL_31;
      }
      if ( (unsigned __int8)v37[0] != 170 || v37[1] != 85 )
      {
        v29 = 1;
        goto LABEL_31;
      }
      v8 = 1;
      v9 = 1;
      v10 = 1;
      v11 = 1;
      v12 = 1;
      v13 = v41 & 0x1F;
      v14 = 59;
      v15 = 0;
      v16 = 128;
      v17 = (unsigned __int8 *)&v38;
      v18 = (unsigned __int8)v38;
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
      ++v17;
      v15 = 0;
      v16 = 128;
      if ( v14 )
        break;
LABEL_13:
      if ( v8 )
        v22 = 24;
      else
        v22 = 8;
      if ( v8 )
        v23 = 16;
      else
        v23 = 0;
      if ( !v9 )
        v22 = v23;
      if ( v11 != v20 )
        v22 |= 4u;
      if ( v10 )
        v22 |= 2u;
      if ( v12 == v19 )
      {
        if ( v13 == v22 )
          goto LABEL_29;
LABEL_27:
        v29 = 2;
        goto LABEL_4;
      }
      if ( v13 != (v22 | 1) )
        goto LABEL_27;
LABEL_29:
      v24 = v40;
      v25 = v39;
      ++v31;
      v26 = v38;
      v27 = v35;
      __pld(v35);
      *(v27 - 24) = v24;
      *(_DWORD *)(v27 - 27) = v26;
      *((_BYTE *)v27 - 50) = v25;
      v35 = v27 + 6;
      v7 = v31;
    }
    v18 = *v17;
    goto LABEL_9;
  }
  return 4;
}
