int __fastcall sync_get_core_reg_base2(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  int v6; // r5
  unsigned __int8 v7; // r6
  int v8; // r7
  char v9; // r4
  __int16 v10; // r2
  int v11; // r4
  int v12; // r9
  int v13; // r8
  int v14; // r7
  unsigned __int8 *v15; // r11
  __int16 v16; // r3
  int v17; // r2
  unsigned __int8 *v18; // r10
  int v19; // r5
  int v20; // lr
  int v21; // r0
  unsigned int v22; // r12
  int v23; // r6
  int v24; // r3
  int v25; // r1
  int v26; // r2
  char v28; // r2
  int v29; // r3
  bool v30; // zf
  int v31; // r3
  int v32; // r2
  int v33; // r0
  int v34; // r3
  int v35; // lr
  int v36; // r9
  int v37; // r8
  int v38; // r7
  int v39; // r4
  int v40; // r12
  int v41; // r11
  int v42; // r0
  unsigned int v43; // r1
  unsigned __int8 *v44; // r10
  int v45; // r6
  int v46; // r3
  int v47; // r2
  int v48; // r2
  int v49; // r1
  char v50; // r3
  int v51; // r2
  int v54; // [sp+8h] [bp-3Ch]
  int v56; // [sp+Ch] [bp-38h]
  unsigned __int8 v57; // [sp+10h] [bp-34h]
  int v58; // [sp+14h] [bp-30h]
  pthread_mutex_t *mutex; // [sp+18h] [bp-2Ch]
  int v60; // [sp+1Ch] [bp-28h]
  int v61[2]; // [sp+20h] [bp-24h] BYREF
  _BYTE v62[2]; // [sp+28h] [bp-1Ch] BYREF
  int v63; // [sp+2Ah] [bp-1Ah]
  __int16 v64; // [sp+2Eh] [bp-16h]
  char v65; // [sp+30h] [bp-14h]
  char v66[2]; // [sp+34h] [bp-10h] BYREF
  _BYTE v67[2]; // [sp+36h] [bp-Eh] BYREF
  _BYTE v68[7]; // [sp+38h] [bp-Ch]
  char v69; // [sp+3Fh] [bp-5h]

  if ( *(_BYTE *)(a1 + 140) )
  {
    v7 = *(_BYTE *)(a2 + 8);
    v63 = 0;
    v8 = *(unsigned __int8 *)(a2 + 12);
    v9 = *(_BYTE *)(a2 + 9);
    v10 = __rev16(*(unsigned __int16 *)(a2 + 10));
    v57 = v7;
    v65 = 0;
    v58 = v8;
    LOBYTE(v63) = (16 * (v7 & 1)) & 0x1A | 0x45;
    BYTE2(v63) = v9;
    v11 = 1;
    v64 = v10;
    v12 = 1;
    HIBYTE(v63) = v8;
    v13 = 1;
    v62[0] = 85;
    v14 = 1;
    v62[1] = -86;
    BYTE1(v63) = 7;
    v15 = (unsigned __int8 *)calloc(8u, 1u);
    v16 = v64;
    v17 = 0;
    v18 = v15;
    v19 = 1;
    *(_DWORD *)v15 = v63;
    v20 = 64;
    *((_WORD *)v15 + 2) = v16;
    v21 = (16 * (v7 & 1)) & 0x1A | 0x45;
    v22 = 128;
    while ( 1 )
    {
      ++v17;
      v23 = (v21 & v22) != 0;
      v24 = (unsigned __int8)(v23 ^ v19);
      v22 >>= 1;
      v25 = (unsigned __int8)(v24 ^ v14);
      if ( v17 == 8 )
        break;
      if ( !--v20 )
        goto LABEL_12;
LABEL_5:
      v19 = v11;
      v14 = v13;
      v11 = v12;
      v13 = v24;
      v12 = v25;
    }
    --v20;
    v17 = 0;
    v22 = 128;
    ++v18;
    if ( v20 )
    {
      v21 = *v18;
      goto LABEL_5;
    }
LABEL_12:
    if ( v11 )
      v28 = 24;
    else
      v28 = 8;
    if ( v11 )
      LOBYTE(v11) = 16;
    if ( !v12 )
      v28 = v11;
    if ( v24 != v14 )
      v28 |= 4u;
    if ( v13 )
      v28 |= 2u;
    v60 = a4;
    if ( v23 != v19 )
      v28 |= 1u;
    mutex = (pthread_mutex_t *)(a1 + 688);
    v6 = 0;
    v65 = v65 & 0xE0 | v28 & 0x1F;
    free(v15);
    if ( v58 == 255 )
      v29 = 0;
    else
      v29 = (v57 ^ 1) & 1;
    v30 = v29 == 0;
    v31 = a3;
    if ( !v30 )
      v31 = 1;
    v54 = v31;
    pthread_mutex_lock((pthread_mutex_t *)(a1 + 688));
    queue_clear(*(_DWORD *)(a1 + 664));
    send_command_packet(a1, v62, 9u);
    sub_16EB04(a6, 0x3E8u);
    v56 = 0;
    v61[1] = (_DWORD)&loc_F4240 * v32;
    v33 = sub_16EB04(a6, 0x3E8u);
    v26 = 0;
    v61[0] = v33;
LABEL_31:
    if ( v54 <= v26 )
    {
LABEL_10:
      *a5 = v26;
      pthread_mutex_unlock(mutex);
      return v6;
    }
LABEL_32:
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 664), v66, 0xCu, v61) == 110 )
    {
      v26 = v56;
      v6 = 3;
      goto LABEL_10;
    }
    if ( (unsigned __int8)v66[0] != 170 || v66[1] != 85 || (v34 = v67[0], v35 = v67[0] & 0xEF, v35 != 1) )
    {
      v6 = 1;
      *a5 = v56;
      pthread_mutex_unlock(mutex);
      return v6;
    }
    v36 = 1;
    v37 = 1;
    v38 = 1;
    v39 = 1;
    v40 = 72;
    v41 = v69 & 0x1F;
    v42 = 0;
    v43 = 128;
    v44 = v67;
    while ( 1 )
    {
      ++v42;
      v45 = (v34 & v43) != 0;
      v46 = (unsigned __int8)(v45 ^ v39);
      v43 >>= 1;
      v47 = (unsigned __int8)(v46 ^ v38);
      if ( v42 == 8 )
      {
        --v40;
        v42 = 0;
        v43 = 128;
        ++v44;
        if ( !v40 )
        {
LABEL_41:
          if ( v35 )
            v48 = 24;
          else
            v48 = 8;
          if ( v35 )
            v35 = 16;
          if ( !v36 )
            v48 = v35;
          if ( v46 != v38 )
            v48 = (unsigned __int8)v48 | 4;
          if ( v37 )
            v48 = (unsigned __int8)v48 | 2;
          if ( v45 == v39 )
          {
            if ( v41 == v48 )
              goto LABEL_56;
LABEL_54:
            v6 = 2;
            goto LABEL_32;
          }
          if ( v41 != ((unsigned __int8)v48 | 1) )
            goto LABEL_54;
LABEL_56:
          v49 = v60;
          v50 = v67[1];
          v51 = v56;
          __pld((void *)(v60 + 42));
          *(_BYTE *)(v49 + 4) = v50;
          v56 = v51 + 1;
          LOBYTE(v51) = v68[0];
          *(_WORD *)(v49 + 6) = *(_DWORD *)v68 >> 8;
          *(_BYTE *)(v49 + 8) = v51;
          *(_DWORD *)v49 = *(_DWORD *)&v68[3];
          v60 = v49 + 12;
          v26 = v56;
          goto LABEL_31;
        }
      }
      else if ( !--v40 )
      {
        goto LABEL_41;
      }
      v38 = v37;
      v37 = (unsigned __int8)(v45 ^ v39);
      v34 = *v44;
      v39 = v35;
      v35 = v36;
      v36 = v47;
    }
  }
  return 4;
}
