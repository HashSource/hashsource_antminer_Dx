int __fastcall sync_get_core_reg_base(int a1, int a2, int a3, _DWORD *a4, int *a5, unsigned __int64 a6)
{
  int v6; // r7
  int v7; // r2
  unsigned __int8 v8; // r6
  __int16 v9; // r7
  char v10; // r12
  int v11; // r11
  int v12; // r6
  unsigned __int8 *v13; // r10
  int v14; // r5
  int v15; // r9
  int v16; // r8
  int v17; // lr
  int v18; // r7
  int v19; // r4
  unsigned int v20; // r0
  int v21; // r12
  int v22; // r3
  int v23; // r1
  char v25; // r2
  char v26; // r1
  int v27; // r3
  bool v28; // zf
  int v29; // r3
  int v30; // r2
  int v31; // r0
  int v32; // r2
  int v33; // r3
  int v34; // r5
  int v35; // r11
  int v36; // r9
  int v37; // r8
  int v38; // lr
  int v39; // r6
  int v40; // r4
  int v41; // r0
  unsigned int v42; // r1
  unsigned __int8 *v43; // r10
  int v44; // r12
  int v45; // r3
  int v46; // r2
  int v47; // r2
  int v48; // r1
  _DWORD *v49; // r0
  char v50; // r1
  char v51; // r3
  int v52; // r3
  int v55; // [sp+8h] [bp-34h]
  int v57; // [sp+Ch] [bp-30h]
  unsigned __int8 mutex; // [sp+10h] [bp-2Ch]
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

  v6 = 4;
  if ( *(_BYTE *)(a1 + 128) )
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
        goto LABEL_11;
LABEL_4:
      v18 = v12;
      v17 = v16;
      v12 = v15;
      v16 = v22;
      v15 = v23;
    }
    --v19;
    ++v13;
    v7 = 0;
    v20 = 128;
    if ( v19 )
    {
      v14 = *v13;
      goto LABEL_4;
    }
LABEL_11:
    if ( v12 )
      v25 = 24;
    else
      v25 = 8;
    if ( v12 )
      v26 = 16;
    else
      v26 = 0;
    if ( !v15 )
      v25 = v26;
    if ( v22 != v17 )
      v25 |= 4u;
    if ( v16 )
      v25 |= 2u;
    if ( v21 != v18 )
      v25 |= 1u;
    v6 = 0;
    if ( v11 == 255 )
      v27 = 0;
    else
      v27 = (mutex ^ 1) & 1;
    v28 = v27 == 0;
    v29 = a3;
    if ( !v28 )
      v29 = 1;
    HIBYTE(v62) = HIBYTE(v62) & 0xE0 | v25 & 0x1F;
    v55 = v29;
    v59 = a4;
    pthread_mutex_lock((pthread_mutex_t *)(a1 + 660));
    queue_clear(*(_DWORD *)(a1 + 636));
    send_command_packet(a1, v60, 8u);
    sub_F7A2C(a6, 0x3E8u);
    v57 = 0;
    v63[1] = (_DWORD)&loc_F4240 * v30;
    v31 = sub_F7A2C(a6, 0x3E8u);
    v32 = 0;
    v63[0] = v31;
LABEL_31:
    if ( v55 <= v32 )
    {
LABEL_9:
      *a5 = v57;
      pthread_mutex_unlock((pthread_mutex_t *)(a1 + 660));
      return v6;
    }
LABEL_32:
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 636), v64, 0xBu, v63) == 110 )
    {
      v6 = 3;
      goto LABEL_9;
    }
    if ( (unsigned __int8)v64[0] != 170 || v64[1] != 85 || (v33 = v65[0], v65[0] != 9) || (v69 & 0x40) == 0 )
    {
      v6 = 1;
      goto LABEL_9;
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
        ++v43;
        v41 = 0;
        v42 = 128;
        if ( !v40 )
        {
LABEL_42:
          if ( v34 )
            v47 = 24;
          else
            v47 = 8;
          if ( v34 )
            v48 = 16;
          else
            v48 = 0;
          if ( !v36 )
            v47 = v48;
          if ( v45 != v38 )
            v47 |= 4u;
          if ( v37 )
            v47 |= 2u;
          if ( v44 == v39 )
          {
            if ( v35 == v47 )
              goto LABEL_58;
LABEL_56:
            v6 = 2;
            goto LABEL_32;
          }
          if ( v35 != (v47 | 1) )
            goto LABEL_56;
LABEL_58:
          v49 = v59;
          v50 = v67;
          ++v57;
          v51 = v65[1];
          *((_WORD *)v59 + 3) = v68;
          *((_BYTE *)v59 + 4) = v50;
          *((_BYTE *)v59 + 8) = v51;
          v52 = v66;
          __pld((char *)v59 + 42);
          *v49 = v52;
          v59 = v49 + 3;
          v32 = v57;
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
  return v6;
}
