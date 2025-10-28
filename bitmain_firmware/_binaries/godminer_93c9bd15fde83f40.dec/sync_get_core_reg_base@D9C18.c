int __fastcall sync_get_core_reg_base(int a1, int a2, int a3, _DWORD *a4, int *a5, unsigned __int64 a6)
{
  int v6; // r5
  int v7; // r2
  char v8; // r4
  __int16 v9; // r5
  char v10; // r6
  int v11; // r11
  int v12; // r4
  unsigned __int8 *v13; // r10
  int v14; // lr
  int v15; // r9
  int v16; // r8
  int v17; // r7
  int v18; // r5
  int v19; // r12
  unsigned int v20; // r0
  int v21; // r6
  int v22; // r3
  int v23; // r1
  int v24; // r2
  char v26; // r2
  char v27; // r3
  int v28; // r3
  bool v29; // zf
  int v30; // r3
  int v31; // r2
  int v32; // r0
  int v33; // r3
  int v34; // lr
  int v35; // r11
  int v36; // r9
  int v37; // r8
  int v38; // r7
  int v39; // r4
  int v40; // r12
  int v41; // r0
  unsigned int v42; // r1
  unsigned __int8 *v43; // r10
  int v44; // r6
  int v45; // r3
  int v46; // r2
  int v47; // r2
  _DWORD *v48; // r0
  char v49; // r1
  char v50; // r3
  int v51; // r3
  int v54; // [sp+8h] [bp-34h]
  int v56; // [sp+Ch] [bp-30h]
  char mutex; // [sp+10h] [bp-2Ch]
  pthread_mutex_t *mutexa; // [sp+10h] [bp-2Ch]
  _DWORD *v59; // [sp+14h] [bp-28h]
  _BYTE v60[2]; // [sp+1Ch] [bp-20h] BYREF
  int v61; // [sp+1Eh] [bp-1Eh] BYREF
  __int16 v62; // [sp+22h] [bp-1Ah]
  int v63[2]; // [sp+24h] [bp-18h] BYREF
  char v64[2]; // [sp+2Ch] [bp-10h] BYREF
  _BYTE v65[2]; // [sp+2Eh] [bp-Eh] BYREF
  int v66; // [sp+30h] [bp-Ch]
  char v67; // [sp+34h] [bp-8h]
  unsigned __int8 v68; // [sp+35h] [bp-7h]
  char v69; // [sp+36h] [bp-6h]

  if ( *(_BYTE *)(a1 + 140) )
  {
    v7 = 0;
    v8 = *(_BYTE *)(a2 + 8);
    v61 = 0;
    v9 = *(_WORD *)(a2 + 10);
    v10 = *(_BYTE *)(a2 + 9);
    v11 = *(unsigned __int8 *)(a2 + 12);
    mutex = v8;
    LOBYTE(v14) = (16 * (v8 & 1)) & 0x1A | 0x45;
    v12 = 1;
    LOBYTE(v61) = v14;
    v13 = (unsigned __int8 *)&v61;
    HIBYTE(v61) = v9;
    v14 = (unsigned __int8)v14;
    v60[0] = 85;
    v15 = 1;
    v60[1] = -86;
    v16 = 1;
    BYTE2(v61) = v10;
    v17 = 1;
    v62 = (unsigned __int8)v11;
    v18 = 1;
    BYTE1(v61) = 6;
    v19 = 40;
    v20 = 128;
    while ( 1 )
    {
      ++v7;
      v21 = (v14 & v20) != 0;
      v22 = (unsigned __int8)(v21 ^ v18);
      v20 >>= 1;
      v23 = (unsigned __int8)(v22 ^ v17);
      if ( v7 == 8 )
        break;
      if ( !--v19 )
        goto LABEL_12;
LABEL_5:
      v18 = v12;
      v17 = v16;
      v12 = v15;
      v16 = v22;
      v15 = v23;
    }
    --v19;
    v7 = 0;
    v20 = 128;
    ++v13;
    if ( v19 )
    {
      v14 = *v13;
      goto LABEL_5;
    }
LABEL_12:
    if ( v12 )
      v26 = 24;
    else
      v26 = 8;
    if ( v12 )
      LOBYTE(v12) = 16;
    if ( !v15 )
      v26 = v12;
    if ( v22 != v17 )
      v26 |= 4u;
    if ( v16 )
      v26 |= 2u;
    v27 = mutex ^ 1;
    if ( v21 != v18 )
      v26 |= 1u;
    mutexa = (pthread_mutex_t *)(a1 + 688);
    if ( v11 == 255 )
      v28 = 0;
    else
      v28 = v27 & 1;
    v29 = v28 == 0;
    v30 = a3;
    if ( !v29 )
      v30 = 1;
    HIBYTE(v62) = HIBYTE(v62) & 0xE0 | v26 & 0x1F;
    v6 = 0;
    v54 = v30;
    v59 = a4;
    pthread_mutex_lock((pthread_mutex_t *)(a1 + 688));
    queue_clear(*(_DWORD *)(a1 + 664));
    send_command_packet(a1, v60, 8u);
    sub_16EB04(a6, 0x3E8u);
    v56 = 0;
    v63[1] = (_DWORD)&loc_F4240 * v31;
    v32 = sub_16EB04(a6, 0x3E8u);
    v24 = 0;
    v63[0] = v32;
LABEL_31:
    if ( v54 <= v24 )
    {
LABEL_10:
      *a5 = v24;
      pthread_mutex_unlock(mutexa);
      return v6;
    }
LABEL_32:
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 664), v64, 0xBu, v63) == 110 )
    {
      v24 = v56;
      v6 = 3;
      goto LABEL_10;
    }
    if ( (unsigned __int8)v64[0] != 170 || v64[1] != 85 || (v33 = v65[0], v65[0] != 9) || (v69 & 0x40) == 0 )
    {
      v6 = 1;
      *a5 = v56;
      pthread_mutex_unlock(mutexa);
      return v6;
    }
    v34 = 1;
    v35 = v69 & 0x1F;
    v36 = 1;
    v37 = 1;
    v38 = 1;
    v39 = 1;
    v40 = 67;
    v41 = 0;
    v42 = 128;
    v43 = v65;
    while ( 1 )
    {
      ++v41;
      v44 = (v33 & v42) != 0;
      v45 = (unsigned __int8)(v44 ^ v39);
      v42 >>= 1;
      v46 = (unsigned __int8)(v45 ^ v38);
      if ( v41 == 8 )
      {
        --v40;
        v41 = 0;
        v42 = 128;
        ++v43;
        if ( !v40 )
        {
LABEL_42:
          if ( v34 )
            v47 = 24;
          else
            v47 = 8;
          if ( v34 )
            v34 = 16;
          if ( !v36 )
            v47 = v34;
          if ( v45 != v38 )
            v47 = (unsigned __int8)v47 | 4;
          if ( v37 )
            v47 = (unsigned __int8)v47 | 2;
          if ( v44 == v39 )
          {
            if ( v35 == v47 )
              goto LABEL_57;
LABEL_55:
            v6 = 2;
            goto LABEL_32;
          }
          if ( v35 != ((unsigned __int8)v47 | 1) )
            goto LABEL_55;
LABEL_57:
          v48 = v59;
          v49 = v67;
          ++v56;
          v50 = v65[1];
          *((_WORD *)v59 + 3) = v68;
          *((_BYTE *)v59 + 4) = v49;
          *((_BYTE *)v59 + 8) = v50;
          v51 = v66;
          __pld((char *)v59 + 42);
          *v48 = v51;
          v59 = v48 + 3;
          v24 = v56;
          goto LABEL_31;
        }
      }
      else if ( !--v40 )
      {
        goto LABEL_42;
      }
      v38 = v37;
      v37 = (unsigned __int8)(v44 ^ v39);
      v33 = *v43;
      v39 = v34;
      v34 = v36;
      v36 = v46;
    }
  }
  return 4;
}
