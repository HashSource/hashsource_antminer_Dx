int __fastcall set_baud_dash(int a1, char *a2)
{
  int v2; // r3
  int v5; // r2
  void (__fastcall *v6)(int, int, int); // r3
  int v7; // r1
  int v8; // r5
  int v9; // r0
  int v10; // r12
  int v11; // r9
  __int64 v12; // r2
  int v13; // r0
  int v14; // r3
  int (__fastcall *v15)(int, _DWORD *); // r2
  int v16; // r0
  int v17; // r5
  int v18; // r8
  int v19; // r6
  int (__fastcall *v21)(int, _DWORD *); // r2
  _DWORD v22[2]; // [sp+0h] [bp-14h] BYREF
  int v23; // [sp+8h] [bp-Ch]
  int v24; // [sp+Ch] [bp-8h]

  LOBYTE(v2) = 0;
  v5 = *(_DWORD *)(a1 + 280) - 1;
  do
  {
    *(_BYTE *)++v5 = v2;
    v2 = (unsigned __int8)(v2 + 3);
  }
  while ( v2 != 210 );
  v6 = *(void (__fastcall **)(int, int, int))(a1 + 132);
  v7 = *(_DWORD *)(a1 + 280);
  *(_DWORD *)(a1 + 224) = 3;
  v6(a1, v7, 70);
  v8 = 0;
  sub_D2B8C(a1);
  v22[0] = -1597760975;
  v22[1] = 0;
  v24 = 0;
  v23 = 1835009;
  v9 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 140))(a1, v22);
  v10 = *(_DWORD *)(a1 + 180);
  v11 = v9;
  LOBYTE(v23) = 0;
  if ( v10 <= 0 )
  {
    if ( a2 != byte_16E360 )
    {
      if ( (int)a2 <= (int)byte_16E360 )
        goto LABEL_9;
      if ( a2 != byte_2FAF08 )
      {
        if ( (int)a2 > (int)byte_2FAF08 )
        {
          if ( a2 != (char *)6250000 && a2 != (char *)12500000 )
            goto LABEL_18;
        }
        else
        {
          if ( a2 == byte_17D784 )
            goto LABEL_40;
          if ( a2 != (char *)&unk_2DC6C0 )
            goto LABEL_18;
        }
      }
      LOBYTE(v23) = 0;
      goto LABEL_13;
    }
LABEL_40:
    v18 = -1601961679;
    v19 = -1597767375;
    goto LABEL_19;
  }
  while ( 1 )
  {
    v12 = 3435973837LL * (unsigned int)++v8;
    v13 = a1;
    if ( v8 >= v10 )
      break;
    while ( v8 - 5 * (HIDWORD(v12) >> 2) == 4 )
    {
      v14 = *(_DWORD *)(a1 + 224);
      v15 = *(int (__fastcall **)(int, _DWORD *))(a1 + 140);
      v22[0] = -1601955279;
      LOBYTE(v14) = v14 * v8++;
      BYTE1(v23) = v14;
      v16 = v15(v13, v22);
      v10 = *(_DWORD *)(a1 + 180);
      v11 = v16;
      v12 = 3435973837LL * (unsigned int)v8;
      v13 = a1;
      if ( v8 >= v10 )
        goto LABEL_7;
    }
  }
LABEL_7:
  if ( a2 == byte_16E360 )
    goto LABEL_40;
  if ( (int)a2 > (int)byte_16E360 )
  {
    if ( a2 != byte_2FAF08 )
    {
      if ( (int)a2 <= (int)byte_2FAF08 )
      {
        if ( a2 != byte_17D784 )
        {
          if ( a2 != (char *)&unk_2DC6C0 )
            goto LABEL_18;
          goto LABEL_32;
        }
        goto LABEL_40;
      }
      if ( a2 != (char *)6250000 && a2 != (char *)12500000 )
        goto LABEL_18;
    }
LABEL_32:
    v18 = -1601961935;
    v19 = -1597767631;
    goto LABEL_19;
  }
LABEL_9:
  if ( a2 != (char *)&loc_70800 )
  {
    if ( (int)a2 <= 460800 )
    {
      if ( a2 == (char *)38400 )
      {
        v17 = 0;
        v18 = -1601941455;
        v19 = -1597747151;
        LOBYTE(v23) = 0;
        if ( v10 <= 0 )
          goto LABEL_13;
        goto LABEL_20;
      }
      goto LABEL_18;
    }
    if ( a2 == (_BYTE *)&loc_E0FFE + 2 || a2 == byte_FE502 )
    {
      v18 = -1601961423;
      v19 = -1597767119;
      goto LABEL_19;
    }
LABEL_18:
    v18 = -1601955279;
    v19 = -1597760975;
    goto LABEL_19;
  }
  v18 = -1601960399;
  v19 = -1597766095;
LABEL_19:
  v17 = 0;
  LOBYTE(v23) = 0;
  if ( v10 <= 0 )
    goto LABEL_13;
  do
  {
LABEL_20:
    v21 = *(int (__fastcall **)(int, _DWORD *))(a1 + 140);
    BYTE1(v23) = *(_DWORD *)(a1 + 224) * v17;
    if ( v17 && v17 % 5u == 4 )
    {
      v22[0] = v18;
      v11 = v21(a1, v22);
    }
    else
    {
      v22[0] = v19;
      v11 = v21(a1, v22);
    }
    ++v17;
  }
  while ( *(_DWORD *)(a1 + 180) > v17 );
LABEL_13:
  sleep(1u);
  return v11;
}
