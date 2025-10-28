int __fastcall sub_5BB44(_DWORD *a1, __int64 *a2)
{
  __int64 v2; // r2
  const char *v4; // r1
  __int64 *v6; // r3
  _BYTE *v7; // r1
  int v8; // r0
  int v9; // lr
  int v10; // r12
  int v11; // r0
  char v12; // lr
  int v13; // r3
  int v14; // r5
  __int64 *v15; // lr
  __int64 *v16; // r2
  char v17; // r3
  unsigned int v18; // t1
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  void (__fastcall *v23)(_DWORD *, __int64 *); // r5
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // t1
  int v28; // r1
  _WORD v30[90]; // [sp+14h] [bp-11CCh] BYREF
  __int64 v31; // [sp+C8h] [bp-1118h] BYREF
  char dest[16]; // [sp+D0h] [bp-1110h] BYREF
  _BYTE v33[180]; // [sp+F0h] [bp-10F0h] BYREF
  int v34; // [sp+1A4h] [bp-103Ch]
  int v35; // [sp+1A8h] [bp-1038h]
  int v36; // [sp+1ACh] [bp-1034h]
  int v37; // [sp+1B0h] [bp-1030h]
  int v38; // [sp+1B4h] [bp-102Ch]
  int v39; // [sp+1B8h] [bp-1028h]
  int v40; // [sp+1BCh] [bp-1024h]
  int v41; // [sp+1C0h] [bp-1020h]
  int v42; // [sp+1C4h] [bp-101Ch]
  int v43; // [sp+1C8h] [bp-1018h]
  int v44; // [sp+1CCh] [bp-1014h]
  _DWORD v45[1024]; // [sp+1E0h] [bp-1000h] BYREF

  v2 = *a2;
  v4 = (const char *)*((_DWORD *)a2 + 96);
  v31 = v2;
  strcpy(dest, v4);
  v30[89] = 0;
  *(_DWORD *)&v30[87] = 0;
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw((char *)v45, 0x1000u, 0, "start nonce: %08x", dword_1A3FF0);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_dcr/frontend_dcr.c",
    157,
    "push_work_dcr",
    13,
    349,
    60,
    v45);
  memcpy(v30, a2 + 1, 0x8Cu);
  v6 = (__int64 *)((char *)a2 + 155);
  v7 = &v30[71];
  do
  {
    v8 = *(_DWORD *)v6;
    v6 += 2;
    v9 = *((_DWORD *)v6 - 3);
    v7 += 16;
    v10 = *((_DWORD *)v6 - 2);
    *((_DWORD *)v7 - 4) = v8;
    v11 = *((_DWORD *)v6 - 1);
    *((_DWORD *)v7 - 3) = v9;
    *((_DWORD *)v7 - 2) = v10;
    *((_DWORD *)v7 - 1) = v11;
  }
  while ( v6 != (__int64 *)((char *)a2 + 187) );
  v12 = *(_BYTE *)v6;
  v13 = dword_1A3FF0 | (a1[33] << 22);
  *v7 = v12;
  v45[0] = v13;
  v30[70] = v13;
  v14 = 0;
  LOBYTE(v30[71]) = BYTE2(v13);
  memcpy(v33, v30, sizeof(v33));
  v15 = a2 + 33;
  v16 = a2 + 37;
  do
  {
    v18 = *((unsigned __int8 *)v16 - 1);
    v16 = (__int64 *)((char *)v16 - 1);
    v17 = v18;
    if ( v18 >> 7 )
      break;
    if ( (v17 & 0x40) != 0 )
    {
      v14 = (unsigned __int8)(v14 + 1);
      break;
    }
    if ( (v17 & 0x20) != 0 )
    {
      v14 = (unsigned __int8)(v14 + 2);
      break;
    }
    if ( (v17 & 0x10) != 0 )
    {
      v14 = (unsigned __int8)(v14 + 3);
      break;
    }
    if ( (v17 & 8) != 0 )
    {
      v14 = (unsigned __int8)(v14 + 4);
      break;
    }
    if ( (v17 & 4) != 0 )
    {
      v14 = (unsigned __int8)(v14 + 5);
      break;
    }
    if ( (v17 & 2) != 0 )
    {
      v14 = (unsigned __int8)(v14 + 6);
      break;
    }
    if ( (v17 & 1) != 0 )
    {
      v14 = (unsigned __int8)(v14 + 7);
      break;
    }
    v14 = (unsigned __int8)(v14 + 8);
  }
  while ( v15 != v16 );
  v19 = *(_DWORD *)v15;
  v20 = *((_DWORD *)a2 + 67);
  v21 = *((_DWORD *)a2 + 68);
  v22 = *((_DWORD *)a2 + 69);
  v34 = v14;
  v23 = (void (__fastcall *)(_DWORD *, __int64 *))a1[6];
  v35 = v19;
  v36 = v20;
  v37 = v21;
  v38 = v22;
  v24 = *((_DWORD *)a2 + 71);
  v25 = *((_DWORD *)a2 + 72);
  v26 = *((_DWORD *)a2 + 73);
  v39 = *((_DWORD *)a2 + 70);
  v40 = v24;
  v41 = v25;
  v42 = v26;
  v27 = *((_DWORD *)a2 + 127);
  v28 = *((_DWORD *)a2 + 128);
  a1[76] = 1;
  v43 = v27;
  v44 = v28;
  v23(a1, &v31);
  return 0;
}
