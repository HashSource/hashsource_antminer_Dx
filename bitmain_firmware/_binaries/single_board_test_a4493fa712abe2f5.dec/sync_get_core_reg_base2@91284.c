int __fastcall sync_get_core_reg_base2(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  int v6; // r7
  unsigned __int8 v7; // r2
  unsigned int v8; // r2
  int v9; // r1
  int v10; // r6
  int v11; // r8
  int v12; // r7
  int v13; // r5
  unsigned __int8 *v14; // r9
  __int16 v15; // r3
  int v16; // r2
  unsigned __int8 *v17; // r11
  int v18; // lr
  unsigned int v19; // r4
  int v20; // r10
  int v21; // r0
  int v22; // r12
  int v23; // r3
  int v24; // r1
  char v26; // r2
  char v27; // r1
  int v28; // r3
  bool v29; // zf
  int v30; // r3
  int v31; // r2
  int v32; // r0
  int v33; // r2
  int v34; // r3
  int v35; // r5
  int v36; // r9
  int v37; // r8
  int v38; // lr
  int v39; // r12
  int v40; // r4
  int v41; // r11
  int v42; // r0
  unsigned int v43; // r1
  unsigned __int8 *v44; // r10
  int v45; // r6
  int v46; // r3
  int v47; // r2
  int v48; // r2
  int v49; // r1
  int v50; // r1
  char v51; // r3
  int v52; // r2
  int v55; // [sp+4h] [bp-38h]
  unsigned __int8 v56; // [sp+8h] [bp-34h]
  int v57; // [sp+8h] [bp-34h]
  int v58; // [sp+Ch] [bp-30h]
  int v60[2]; // [sp+18h] [bp-24h] BYREF
  _BYTE v61[2]; // [sp+20h] [bp-1Ch] BYREF
  int v62; // [sp+22h] [bp-1Ah]
  __int16 v63; // [sp+26h] [bp-16h]
  char v64; // [sp+28h] [bp-14h]
  char v65[2]; // [sp+2Ch] [bp-10h] BYREF
  _BYTE v66[2]; // [sp+2Eh] [bp-Eh] BYREF
  _BYTE v67[7]; // [sp+30h] [bp-Ch]
  char v68; // [sp+37h] [bp-5h]

  v6 = 4;
  if ( *(_BYTE *)(a1 + 128) )
  {
    v7 = *(_BYTE *)(a2 + 8);
    v62 = 0;
    v56 = v7;
    v8 = *(unsigned __int16 *)(a2 + 10);
    v9 = *(unsigned __int8 *)(a2 + 12);
    v64 = 0;
    v58 = v9;
    v63 = __rev16(v8);
    v61[0] = 85;
    v10 = 1;
    v62 = (16 * (v56 & 1)) & 0x1A | 0x45;
    v11 = 1;
    v12 = 1;
    v61[1] = -86;
    v13 = 64;
    BYTE1(v62) = 7;
    HIBYTE(v62) = v9;
    v14 = (unsigned __int8 *)calloc(8u, 1u);
    v15 = v63;
    v16 = 0;
    v17 = v14;
    v18 = 1;
    *(_DWORD *)v14 = v62;
    v19 = 128;
    v20 = (16 * (v56 & 1)) & 0x1A | 0x45;
    *((_WORD *)v14 + 2) = v15;
    v21 = 1;
    while ( 1 )
    {
      ++v16;
      v22 = (v20 & v19) != 0;
      v23 = (unsigned __int8)(v22 ^ v12);
      v19 >>= 1;
      v24 = (unsigned __int8)(v23 ^ v18);
      if ( v16 == 8 )
        break;
      if ( !--v13 )
        goto LABEL_11;
LABEL_4:
      v12 = v10;
      v18 = v21;
      v10 = v11;
      v21 = v23;
      v11 = v24;
    }
    --v13;
    ++v17;
    v16 = 0;
    v19 = 128;
    if ( v13 )
    {
      v20 = *v17;
      goto LABEL_4;
    }
LABEL_11:
    if ( v10 )
      v26 = 24;
    else
      v26 = 8;
    if ( v10 )
      v27 = 16;
    else
      v27 = 0;
    if ( !v11 )
      v26 = v27;
    if ( v23 != v18 )
      v26 |= 4u;
    if ( v21 )
      v26 |= 2u;
    if ( v22 != v12 )
      v26 |= 1u;
    v6 = 0;
    v64 = v64 & 0xE0 | v26 & 0x1F;
    free(v14);
    if ( v58 == 255 )
      v28 = 0;
    else
      v28 = (v56 ^ 1) & 1;
    v29 = v28 == 0;
    v30 = a3;
    if ( !v29 )
      v30 = 1;
    v55 = v30;
    pthread_mutex_lock((pthread_mutex_t *)(a1 + 660));
    queue_clear(*(_DWORD *)(a1 + 636));
    send_command_packet(a1, v61, 9u);
    sub_F7A2C(a6, 0x3E8u);
    v57 = 0;
    v60[1] = (_DWORD)&loc_F4240 * v31;
    v32 = sub_F7A2C(a6, 0x3E8u);
    v33 = 0;
    v60[0] = v32;
LABEL_31:
    if ( v55 <= v33 )
    {
LABEL_9:
      *a5 = v57;
      pthread_mutex_unlock((pthread_mutex_t *)(a1 + 660));
      return v6;
    }
LABEL_32:
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 636), v65, 0xCu, v60) == 110 )
    {
      v6 = 3;
      goto LABEL_9;
    }
    if ( (unsigned __int8)v65[0] != 170 || v65[1] != 85 || (v34 = v66[0], v35 = v66[0] & 0xEF, v35 != 1) )
    {
      v6 = 1;
      goto LABEL_9;
    }
    v36 = 1;
    v37 = 1;
    v38 = 1;
    v39 = 1;
    v40 = 72;
    v41 = v68 & 0x1F;
    v42 = 0;
    v43 = 128;
    v44 = v66;
    while ( 1 )
    {
      ++v42;
      v45 = (v34 & v43) != 0;
      v46 = (unsigned __int8)(v45 ^ v35);
      v43 >>= 1;
      v47 = (unsigned __int8)(v46 ^ v39);
      if ( v42 == 8 )
      {
        --v40;
        ++v44;
        v42 = 0;
        v43 = 128;
        if ( !v40 )
        {
LABEL_41:
          if ( v36 )
            v48 = 24;
          else
            v48 = 8;
          if ( v36 )
            v49 = 16;
          else
            v49 = 0;
          if ( !v37 )
            v48 = v49;
          if ( v46 != v39 )
            v48 |= 4u;
          if ( v38 )
            v48 |= 2u;
          if ( v45 == v35 )
          {
            if ( v41 == v48 )
              goto LABEL_57;
LABEL_55:
            v6 = 2;
            goto LABEL_32;
          }
          if ( v41 != (v48 | 1) )
            goto LABEL_55;
LABEL_57:
          v50 = a4;
          v51 = v66[1];
          v52 = v57;
          __pld((void *)(a4 + 42));
          *(_BYTE *)(v50 + 4) = v51;
          v57 = v52 + 1;
          LOBYTE(v52) = v67[0];
          *(_WORD *)(v50 + 6) = *(_DWORD *)v67 >> 8;
          *(_BYTE *)(v50 + 8) = v52;
          *(_DWORD *)v50 = *(_DWORD *)&v67[3];
          a4 = v50 + 12;
          v33 = v57;
          goto LABEL_31;
        }
      }
      else if ( !--v40 )
      {
        goto LABEL_41;
      }
      v39 = v38;
      v38 = (unsigned __int8)(v45 ^ v35);
      v34 = *v44;
      v35 = v36;
      v36 = v37;
      v37 = v47;
    }
  }
  return v6;
}
