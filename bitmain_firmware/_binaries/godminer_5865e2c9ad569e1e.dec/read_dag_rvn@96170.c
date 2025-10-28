int __fastcall read_dag_rvn(int a1)
{
  char *v2; // r1
  int v3; // r4
  int v4; // r4
  int v5; // r1
  int i; // r4
  unsigned __int8 v7; // r1
  int v8; // r8
  int v9; // r9
  int v10; // r2
  _DWORD *v11; // r4
  int *v12; // r12
  int *v13; // r5
  int v14; // r0
  int v15; // r1
  int *v16; // lr
  int v17; // r2
  int v18; // r3
  const char *v20; // r7
  char *v21; // r11
  char *v22; // r4
  int v23; // t1
  char *v24; // r0
  int v25; // r3
  int v26; // [sp+4h] [bp-1160h]
  int v27; // [sp+20h] [bp-1144h]
  int v28; // [sp+2Ch] [bp-1138h]
  int v29; // [sp+30h] [bp-1134h]
  int v30; // [sp+34h] [bp-1130h]
  int j; // [sp+38h] [bp-112Ch]
  int k; // [sp+3Ch] [bp-1128h]
  int *v33; // [sp+40h] [bp-1124h]
  int v34; // [sp+5Ch] [bp-1108h] BYREF
  _DWORD v35[6]; // [sp+60h] [bp-1104h] BYREF
  _DWORD v36[7]; // [sp+78h] [bp-10ECh] BYREF
  int v37; // [sp+94h] [bp-10D0h]
  char v38; // [sp+9Bh] [bp-10C9h] BYREF
  int v39; // [sp+9Ch] [bp-10C8h] BYREF
  char v40; // [sp+DBh] [bp-1089h] BYREF
  char s[132]; // [sp+DCh] [bp-1088h] BYREF
  _DWORD v42[2]; // [sp+160h] [bp-1004h] BYREF
  int v43; // [sp+168h] [bp-FFCh]
  int v44; // [sp+16Ch] [bp-FF8h]

  V_LOCK();
  LOWORD(v2) = 620;
  HIWORD(v2) = (unsigned int)" %lld" >> 16;
  V_INT((int)v36, v2, *(int *)(a1 + 232));
  LOWORD(v3) = -11848;
  HIWORD(v3) = (unsigned int)"ist0 err cnt: %08x" >> 16;
  v27 = v3;
  v4 = 0;
  logfmt_raw(
    (char *)v42,
    0x1000u,
    0,
    v37,
    v36[0],
    v36[1],
    v36[2],
    v36[3],
    v36[4],
    v36[5],
    v36[6],
    v37,
    v27,
    "read_dag_rvn");
  V_UNLOCK();
  LOWORD(v5) = 6248;
  HIWORD(v5) = (unsigned int)"final pattern %08x" >> 16;
  zlog(g_zc, v5, 170, "read_dag_rvn", 12, 376, 60, v42);
  do
  {
    sub_931E4(a1, v4, 179, v4);
    ++v4;
    usleep(0x2710u);
  }
  while ( v4 != 8 );
  for ( i = 0; i != 8; ++i )
  {
    v7 = i;
    sub_931E4(a1, v7, 28, 3);
  }
  v8 = a1;
  memset(s, 0, 0x81u);
  v30 = 0;
  v35[0] = 0;
  v35[1] = 1;
  v35[2] = 4096;
  v35[3] = 4096;
  v35[4] = 16382;
  v35[5] = 0x3FFF;
  do
  {
    for ( j = 0; j != 8; ++j )
    {
      for ( k = 0; k != 8; ++k )
      {
        v33 = v35;
        do
        {
          v9 = 0;
          v10 = *v33++;
          v29 = v10;
          v28 = (v30 << 22) | (32 * j) | (4 * k) | (v10 << 8);
          do
          {
            v43 = 0;
            v34 = 0;
            v42[1] = v28;
            v42[0] = 0;
            v44 = 0;
            BYTE1(v43) = v9;
            v11 = malloc(0x4Cu);
            *v11 = 0;
            v11[1] = 0;
            v11[2] = 0;
            (*(void (__fastcall **)(int, _DWORD *, int, _DWORD *, int *, int, int, _DWORD))(v8 + 272))(
              v8,
              v42,
              1,
              v11,
              &v34,
              v26,
              2000,
              0);
            v12 = (_DWORD *)((char *)v11 + 10);
            v13 = &v39;
            do
            {
              v14 = *v12;
              v12 += 4;
              v15 = *(v12 - 3);
              v16 = v13;
              v17 = *(v12 - 2);
              v13 += 4;
              v18 = *(v12 - 1);
              *v16 = v14;
              v16[1] = v15;
              v16[2] = v17;
              v16[3] = v18;
            }
            while ( v12 != (_DWORD *)((char *)v11 + 74) );
            free(v11);
            if ( v34 )
            {
              LOWORD(v20) = -11740;
              v21 = &v38;
              v22 = s;
              do
              {
                v23 = (unsigned __int8)*++v21;
                v24 = v22;
                HIWORD(v20) = (unsigned int)"chip %02x core %02x membist0 lost cnt: %08x" >> 16;
                v22 += 2;
                sprintf(v24, v20, v23);
              }
              while ( &v40 != v21 );
              V_LOCK();
              LOWORD(v25) = 6456;
              HIWORD(v25) = (unsigned int)"" >> 16;
              logfmt_raw((char *)v42, 0x1000u, 0, v25, v28, v9, v30, j, k, v29, s);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_D9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
                170,
                "read_dag_rvn",
                12,
                413,
                60,
                v42);
            }
            ++v9;
          }
          while ( v9 != 8 );
        }
        while ( v36 != v33 );
      }
    }
    ++v30;
  }
  while ( v30 != 12 );
  sub_92F0C(v8, 28, 2);
  return 0;
}
