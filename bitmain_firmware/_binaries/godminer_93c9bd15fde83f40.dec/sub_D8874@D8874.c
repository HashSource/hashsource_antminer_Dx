int __fastcall sub_D8874(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v6; // r6
  __int16 v7; // r11
  int v8; // lr
  int v9; // r9
  int v10; // r0
  int v11; // r12
  unsigned __int8 *v12; // r10
  int v13; // r8
  int v14; // r7
  int v15; // r6
  int v16; // r11
  unsigned int v17; // r1
  int v18; // r4
  int v19; // r3
  int v20; // r2
  char v21; // r2
  int v22; // r11
  char v23; // r3
  int v24; // r2
  int v25; // r2
  int v26; // r0
  int v27; // r2
  int v28; // lr
  int v29; // r9
  int v30; // r8
  int v31; // r7
  int v32; // r4
  int v33; // r12
  int v34; // r0
  unsigned int v35; // r1
  unsigned __int8 *v36; // r11
  int v37; // r10
  int v38; // r6
  int v39; // r3
  int v40; // r2
  int v41; // r2
  int v42; // r12
  unsigned __int8 v43; // r0
  __int16 v44; // r1
  int v45; // r3
  unsigned __int8 v46; // r2
  int v48; // [sp+20h] [bp-104Ch]
  int v49; // [sp+20h] [bp-104Ch]
  unsigned __int8 v51; // [sp+28h] [bp-1044h]
  int v52; // [sp+28h] [bp-1044h]
  int v55; // [sp+38h] [bp-1034h]
  int v56; // [sp+3Ch] [bp-1030h]
  int v57; // [sp+44h] [bp-1028h]
  int v58[2]; // [sp+4Ch] [bp-1020h] BYREF
  _BYTE v59[2]; // [sp+54h] [bp-1018h] BYREF
  int v60; // [sp+56h] [bp-1016h] BYREF
  __int16 v61; // [sp+5Ah] [bp-1012h]
  unsigned __int8 v62; // [sp+5Ch] [bp-1010h] BYREF
  unsigned __int8 v63; // [sp+5Dh] [bp-100Fh]
  unsigned __int8 v64; // [sp+5Eh] [bp-100Eh] BYREF
  unsigned __int8 v65; // [sp+5Fh] [bp-100Dh]
  unsigned __int8 v66; // [sp+60h] [bp-100Ch]
  unsigned __int8 v67; // [sp+61h] [bp-100Bh]
  unsigned __int8 v68; // [sp+62h] [bp-100Ah]
  unsigned __int8 v69; // [sp+63h] [bp-1009h]
  char v70; // [sp+64h] [bp-1008h]
  char var1004[4120]; // [sp+68h] [bp-1004h] BYREF

  v60 = 0;
  v6 = *(_BYTE *)(a2 + 9);
  v7 = *(_WORD *)(a2 + 10);
  v51 = *(_BYTE *)(a2 + 8);
  v48 = *(unsigned __int8 *)(a2 + 12);
  v8 = 1;
  v9 = (16 * (v51 & 1)) & 0x1A | 0x45;
  v10 = 0;
  v59[0] = 85;
  v11 = 40;
  v12 = (unsigned __int8 *)&v60;
  v59[1] = -86;
  BYTE1(v60) = 6;
  v13 = 1;
  BYTE2(v60) = v6;
  v14 = 1;
  HIBYTE(v60) = v7;
  v15 = 1;
  v16 = 1;
  LOBYTE(v60) = (16 * (v51 & 1)) & 0x1A | 0x45;
  v17 = 128;
  v61 = (unsigned __int8)v48;
  while ( 1 )
  {
    ++v10;
    v18 = (v9 & v17) != 0;
    v19 = (unsigned __int8)(v16 ^ v18);
    v17 >>= 1;
    v20 = (unsigned __int8)(v15 ^ v19);
    if ( v10 == 8 )
      break;
    if ( !--v11 )
      goto LABEL_7;
LABEL_3:
    v16 = v8;
    v15 = v14;
    v8 = v13;
    v14 = v19;
    v13 = v20;
  }
  --v11;
  v10 = 0;
  v17 = 128;
  ++v12;
  if ( v11 )
  {
    v9 = *v12;
    goto LABEL_3;
  }
LABEL_7:
  if ( v8 )
  {
    v21 = 24;
    LOBYTE(v8) = 16;
  }
  else
  {
    v21 = 8;
  }
  if ( !v13 )
    v21 = v8;
  if ( v15 != v19 )
    v21 |= 4u;
  if ( v14 )
    v21 |= 2u;
  if ( v16 != v18 )
    v21 |= 1u;
  if ( v48 == 255 )
    v22 = 0;
  else
    v22 = (v51 ^ 1) & 1;
  v23 = HIBYTE(v61) & 0xE0 | v21 & 0x1F;
  v24 = a3;
  HIBYTE(v61) = v23;
  if ( v22 )
    v24 = 1;
  v57 = a4;
  v55 = v24;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 688));
  v52 = 0;
  queue_clear(*(_DWORD *)(a1 + 664));
  send_command_packet(a1, v59, 8u);
  sub_16EB04(a6, 0x3E8u);
  v58[1] = 1000000 * v25;
  v26 = sub_16EB04(a6, 0x3E8u);
  v27 = 0;
  v56 = 0;
  v58[0] = v26;
LABEL_24:
  if ( v55 > v27 )
  {
LABEL_25:
    if ( sub_C40DC(*(_DWORD *)(a1 + 664), (char *)&v62, v58) == 110 )
    {
      v27 = v56;
      v52 = 3;
      goto LABEL_52;
    }
    pthread_mutex_lock(&stru_1A8A24);
    logfmt_raw(
      var1004,
      0x1000u,
      0,
      "core reg: %02x %02x chip addr %02x reg addr %02x reg value %02x%02x%02x",
      v62,
      v63,
      v68,
      v69,
      v65,
      v66,
      v67);
    pthread_mutex_unlock(&stru_1A8A24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/chip_reg_io_base.c",
      147,
      "sync_get_core_reg_base_3",
      24,
      588,
      20,
      var1004);
    if ( v62 != 170 || v63 != 85 || (v70 & 0x40) == 0 )
    {
      v27 = v56;
      v52 = 1;
      goto LABEL_52;
    }
    v28 = 1;
    v49 = v70 & 0x1F;
    v29 = 1;
    v30 = 1;
    v31 = 1;
    v32 = 1;
    v33 = 51;
    v34 = 0;
    v35 = 128;
    v36 = &v64;
    v37 = v64;
    while ( 1 )
    {
      ++v34;
      v38 = (v37 & v35) != 0;
      v39 = (unsigned __int8)(v38 ^ v32);
      v35 >>= 1;
      v40 = (unsigned __int8)(v39 ^ v31);
      if ( v34 == 8 )
      {
        --v33;
        v34 = 0;
        v35 = 128;
        ++v36;
        if ( !v33 )
        {
LABEL_35:
          if ( v28 )
            v41 = 24;
          else
            v41 = 8;
          if ( v28 )
            v28 = 16;
          if ( !v29 )
            v41 = v28;
          if ( v39 != v31 )
            v41 = (unsigned __int8)v41 | 4;
          if ( v30 )
            v41 = (unsigned __int8)v41 | 2;
          if ( v38 == v32 )
          {
            if ( v49 == v41 )
              goto LABEL_50;
LABEL_48:
            v52 = 2;
            goto LABEL_25;
          }
          if ( v49 != ((unsigned __int8)v41 | 1) )
            goto LABEL_48;
LABEL_50:
          v42 = v57;
          ++v56;
          v43 = v68;
          v44 = v69;
          v45 = (v66 << 16) | (v67 << 24) | v65;
          v46 = v64;
          __pld((void *)(v57 + 30));
          *(_BYTE *)(v42 + 4) = v43;
          *(_BYTE *)(v42 + 8) = v46;
          *(_WORD *)(v42 + 6) = v44;
          v27 = v56;
          *(_DWORD *)v42 = v45;
          v57 = v42 + 12;
          goto LABEL_24;
        }
        v37 = *v36;
      }
      else if ( !--v33 )
      {
        goto LABEL_35;
      }
      v32 = v28;
      v31 = v30;
      v28 = v29;
      v30 = v39;
      v29 = v40;
    }
  }
LABEL_52:
  *a5 = v27;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 688));
  return v52;
}
