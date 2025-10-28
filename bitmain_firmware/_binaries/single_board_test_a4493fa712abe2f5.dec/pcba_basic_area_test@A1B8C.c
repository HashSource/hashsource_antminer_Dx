int pcba_basic_area_test()
{
  int v0; // r4
  int matched; // r3
  int v2; // r1
  int v3; // r7
  int v4; // r8
  _BYTE *v5; // r9
  int v6; // r0
  char v7; // r2
  int v8; // r4
  _BYTE *v9; // r3
  char v10; // r12
  char v11; // r2
  char v12; // r12
  char v13; // r2
  char v14; // r12
  char v15; // r2
  char v16; // r12
  char v17; // r2
  char v18; // r12
  char v19; // r2
  char v20; // r12
  char v21; // r2
  char v22; // r12
  char v23; // r2
  char v24; // r12
  char v25; // r2
  char v26; // r12
  char v27; // r2
  char v28; // r12
  char v29; // r2
  char v30; // r12
  char v31; // r2
  char v32; // r12
  char v33; // r2
  char v34; // r12
  char v35; // r2
  char v36; // r12
  char v37; // r2
  char v38; // r12
  char v39; // r2
  _BYTE *v40; // r9
  char v41; // r3

  v0 = 1;
  matched = pcba_match_fpga_baud(dword_12C0E0, dword_12C0E4);
  if ( matched )
  {
LABEL_4:
    if ( pcba_start_basic((_DWORD *)dword_12C0E0, dword_12C0E4) )
    {
      v3 = dword_12C0E0;
      v4 = *(_DWORD *)(dword_12C0E0 + 180);
      v5 = *(_BYTE **)(dword_12C0E0 + 280);
      v6 = sub_F7148(256, (unsigned __int8)v4);
      if ( (_BYTE)v4 )
      {
        if ( (unsigned __int8)v4 <= 0x20u )
        {
          v8 = 0;
        }
        else
        {
          v7 = 0;
          v8 = 0;
          v9 = v5;
          do
          {
            v10 = v6 + v7;
            *v9 = v7;
            v8 += 32;
            __pld(v9 + 34);
            v11 = v6 + v6 + v7;
            v9[1] = v10;
            v9 += 32;
            v12 = v6 + v11;
            *(v9 - 30) = v11;
            v13 = v6 + v6 + v11;
            *(v9 - 29) = v12;
            v14 = v6 + v13;
            *(v9 - 28) = v13;
            v15 = v6 + v6 + v13;
            *(v9 - 27) = v14;
            v16 = v6 + v15;
            *(v9 - 26) = v15;
            v17 = v6 + v6 + v15;
            *(v9 - 25) = v16;
            v18 = v6 + v17;
            *(v9 - 24) = v17;
            v19 = v6 + v6 + v17;
            *(v9 - 23) = v18;
            v20 = v6 + v19;
            *(v9 - 22) = v19;
            v21 = v6 + v6 + v19;
            *(v9 - 21) = v20;
            v22 = v6 + v21;
            *(v9 - 20) = v21;
            v23 = v6 + v6 + v21;
            *(v9 - 19) = v22;
            v24 = v6 + v23;
            *(v9 - 18) = v23;
            v25 = v6 + v6 + v23;
            *(v9 - 17) = v24;
            v26 = v6 + v25;
            *(v9 - 16) = v25;
            v27 = v6 + v6 + v25;
            *(v9 - 15) = v26;
            v28 = v6 + v27;
            *(v9 - 14) = v27;
            v29 = v6 + v6 + v27;
            *(v9 - 13) = v28;
            v30 = v6 + v29;
            *(v9 - 12) = v29;
            v31 = v6 + v6 + v29;
            *(v9 - 11) = v30;
            v32 = v6 + v31;
            *(v9 - 10) = v31;
            v33 = v6 + v6 + v31;
            *(v9 - 9) = v32;
            v34 = v6 + v33;
            *(v9 - 8) = v33;
            v35 = v6 + v6 + v33;
            *(v9 - 7) = v34;
            v36 = v6 + v35;
            *(v9 - 6) = v35;
            v37 = v6 + v6 + v35;
            *(v9 - 5) = v36;
            v38 = v6 + v37;
            *(v9 - 4) = v37;
            v39 = v6 + v6 + v37;
            *(v9 - 3) = v38;
            *(v9 - 2) = v39;
            *(v9 - 1) = v6 + v39;
            v7 = v6 + v6 + v39;
          }
          while ( v8 != (((unsigned __int8)v4 - 33) & 0xFFFFFFE0) + 32 );
        }
        v40 = &v5[v8 - 1];
        v41 = v8 * v6;
        do
        {
          ++v8;
          *++v40 = v41;
          v41 += v6;
        }
        while ( (unsigned __int8)v4 > v8 );
        v5 = *(_BYTE **)(v3 + 280);
      }
      *(_DWORD *)(v3 + 224) = v6;
      (*(void (__fastcall **)(int, _BYTE *, int))(v3 + 132))(v3, v5, v4);
      return pcba_fpga_ip_test(dword_12C0E0);
    }
    else
    {
      return 6;
    }
  }
  else
  {
    while ( 1 )
    {
      v2 = v0;
      v0 += 2;
      if ( v0 == 15 )
        break;
      printf("check basic system up : count %d\n", v2);
      sleep(1u);
      matched = pcba_match_fpga_baud(dword_12C0E0, dword_12C0E4);
      if ( matched )
        goto LABEL_4;
    }
    memset(&unk_12C1B6, matched, 0x26u);
    strcpy(ret_str, "serial:match baud failed\n");
    return 9;
  }
}
