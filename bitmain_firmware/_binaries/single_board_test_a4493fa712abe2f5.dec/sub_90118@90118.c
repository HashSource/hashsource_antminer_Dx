int __fastcall sub_90118(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v6; // r12
  __int16 v7; // r11
  int v8; // r5
  unsigned __int8 *v9; // r10
  unsigned int v10; // r1
  int v11; // r0
  int v12; // r9
  int v13; // r8
  int v14; // lr
  int v15; // r12
  int v16; // r11
  int v17; // r4
  int v18; // r6
  int v19; // r3
  int v20; // r2
  char v21; // r2
  char v22; // r1
  char v23; // r3
  int v24; // r2
  int v25; // r11
  int v26; // r2
  int v27; // r0
  int v28; // r2
  int v29; // r5
  int v30; // r9
  int v31; // r8
  int v32; // lr
  int v33; // r6
  int v34; // r4
  int v35; // r0
  unsigned int v36; // r1
  unsigned __int8 *v37; // r11
  int v38; // r10
  int v39; // r12
  int v40; // r3
  int v41; // r2
  int v42; // r2
  int v43; // r1
  int v44; // r4
  unsigned __int8 v45; // r0
  int v46; // r3
  unsigned __int8 v47; // r2
  unsigned __int8 v49; // [sp+20h] [bp-48h]
  int v50; // [sp+20h] [bp-48h]
  int v52; // [sp+28h] [bp-40h]
  int v53; // [sp+28h] [bp-40h]
  int v56; // [sp+38h] [bp-30h]
  int v57; // [sp+3Ch] [bp-2Ch]
  int v58; // [sp+44h] [bp-24h]
  int v59[2]; // [sp+4Ch] [bp-1Ch] BYREF
  _BYTE v60[2]; // [sp+54h] [bp-14h] BYREF
  _BYTE v61[4]; // [sp+56h] [bp-12h] BYREF
  __int16 v62; // [sp+5Ah] [bp-Eh]
  unsigned __int8 v63; // [sp+5Ch] [bp-Ch] BYREF
  unsigned __int8 v64; // [sp+5Dh] [bp-Bh]
  unsigned __int8 v65; // [sp+5Eh] [bp-Ah] BYREF
  unsigned __int8 v66; // [sp+5Fh] [bp-9h]
  unsigned __int8 v67; // [sp+60h] [bp-8h]
  unsigned __int8 v68; // [sp+61h] [bp-7h]
  unsigned __int8 v69; // [sp+62h] [bp-6h]
  unsigned __int8 v70; // [sp+63h] [bp-5h]
  char v71; // [sp+64h] [bp-4h]
  char _68[4120]; // [sp+68h] [bp+0h] BYREF

  v6 = *(_BYTE *)(a2 + 9);
  v7 = *(_WORD *)(a2 + 10);
  v49 = *(_BYTE *)(a2 + 8);
  v52 = *(unsigned __int8 *)(a2 + 12);
  v8 = 1;
  v9 = v61;
  v10 = 128;
  v60[0] = 85;
  v11 = 0;
  v60[1] = -86;
  v12 = (16 * (v49 & 1)) & 0x1A | 0x45;
  v61[1] = 6;
  v13 = 1;
  v61[2] = v6;
  v14 = 1;
  v61[3] = v7;
  v15 = 1;
  v16 = 1;
  v61[0] = (16 * (v49 & 1)) & 0x1A | 0x45;
  v17 = 40;
  v62 = (unsigned __int8)v52;
  while ( 1 )
  {
    ++v11;
    v18 = (v12 & v10) != 0;
    v19 = (unsigned __int8)(v16 ^ v18);
    v10 >>= 1;
    v20 = (unsigned __int8)(v15 ^ v19);
    if ( v11 == 8 )
      break;
    if ( !--v17 )
      goto LABEL_7;
LABEL_3:
    v16 = v8;
    v15 = v14;
    v8 = v13;
    v14 = v19;
    v13 = v20;
  }
  --v17;
  ++v9;
  v11 = 0;
  v10 = 128;
  if ( v17 )
  {
    v12 = *v9;
    goto LABEL_3;
  }
LABEL_7:
  if ( v8 )
    v21 = 24;
  else
    v21 = 8;
  if ( v8 )
    v22 = 16;
  else
    v22 = 0;
  if ( !v13 )
    v21 = v22;
  if ( v15 != v19 )
    v21 |= 4u;
  if ( v14 )
    v21 |= 2u;
  if ( v16 != v18 )
    v21 |= 1u;
  v23 = HIBYTE(v62) & 0xE0 | v21 & 0x1F;
  v24 = a3;
  HIBYTE(v62) = v23;
  if ( v52 == 255 )
    v25 = 0;
  else
    v25 = (v49 ^ 1) & 1;
  if ( v25 )
    v24 = 1;
  v56 = v24;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 660));
  v58 = a4;
  queue_clear(*(_DWORD *)(a1 + 636));
  v53 = 0;
  send_command_packet(a1, v60, 8u);
  sub_F7A2C(a6, 0x3E8u);
  v59[1] = 1000000 * v26;
  v27 = sub_F7A2C(a6, 0x3E8u);
  v28 = 0;
  v57 = 0;
  v59[0] = v27;
LABEL_27:
  if ( v56 > v28 )
  {
LABEL_28:
    if ( sub_D3038(*(_DWORD *)(a1 + 636), (char *)&v63, v59) == 110 )
    {
      v53 = 3;
      goto LABEL_56;
    }
    pthread_mutex_lock(&stru_3B526C);
    logfmt_raw(
      _68,
      0x1000u,
      0,
      "core reg: %02x %02x chip addr %02x reg addr %02x reg value %02x%02x%02x",
      v63,
      v64,
      v69,
      v70,
      v66,
      v67,
      v68);
    pthread_mutex_unlock(&stru_3B526C);
    zlog(
      g_zc,
      "/home/xingfei.wang/work/1764/godminer/backend/chip_reg_io_base.c",
      64,
      "sync_get_core_reg_base_3",
      24,
      588,
      20,
      _68);
    if ( v63 != 170 || v64 != 85 || (v71 & 0x40) == 0 )
    {
      v53 = 1;
      goto LABEL_56;
    }
    v29 = 1;
    v50 = v71 & 0x1F;
    v30 = 1;
    v31 = 1;
    v32 = 1;
    v33 = 1;
    v34 = 51;
    v35 = 0;
    v36 = 128;
    v37 = &v65;
    v38 = v65;
    while ( 1 )
    {
      ++v35;
      v39 = (v38 & v36) != 0;
      v40 = (unsigned __int8)(v39 ^ v33);
      v36 >>= 1;
      v41 = (unsigned __int8)(v40 ^ v32);
      if ( v35 == 8 )
      {
        --v34;
        ++v37;
        v35 = 0;
        v36 = 128;
        if ( !v34 )
        {
LABEL_38:
          if ( v29 )
            v42 = 24;
          else
            v42 = 8;
          if ( v29 )
            v43 = 16;
          else
            v43 = 0;
          if ( !v30 )
            v42 = v43;
          if ( v40 != v32 )
            v42 |= 4u;
          if ( v31 )
            v42 |= 2u;
          if ( v39 == v33 )
          {
            if ( v50 == v42 )
              goto LABEL_54;
LABEL_52:
            v53 = 2;
            goto LABEL_28;
          }
          if ( v50 != (v42 | 1) )
            goto LABEL_52;
LABEL_54:
          v44 = v58;
          ++v57;
          v45 = v69;
          v46 = (v67 << 16) | (v68 << 24) | v66;
          v47 = v65;
          *(_WORD *)(v58 + 6) = v70;
          __pld((void *)(v58 + 30));
          *(_BYTE *)(v44 + 8) = v47;
          *(_BYTE *)(v44 + 4) = v45;
          v28 = v57;
          *(_DWORD *)v44 = v46;
          v58 = v44 + 12;
          goto LABEL_27;
        }
        v38 = *v37;
      }
      else if ( !--v34 )
      {
        goto LABEL_38;
      }
      v33 = v29;
      v32 = v31;
      v29 = v30;
      v31 = v40;
      v30 = v41;
    }
  }
LABEL_56:
  *a5 = v57;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 660));
  return v53;
}
