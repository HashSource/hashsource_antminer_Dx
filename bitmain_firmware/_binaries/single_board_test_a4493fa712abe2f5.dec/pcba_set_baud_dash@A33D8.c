int __fastcall pcba_set_baud_dash(int a1, char *a2)
{
  int v2; // r3
  int (__fastcall *v3)(int, _DWORD *); // r2
  _DWORD v5[2]; // [sp+0h] [bp-14h] BYREF
  char v6; // [sp+8h] [bp-Ch]
  char v7; // [sp+9h] [bp-Bh]
  __int16 v8; // [sp+Ah] [bp-Ah]
  int v9; // [sp+Ch] [bp-8h]

  v5[1] = 0;
  v7 = 0;
  v9 = 0;
  v6 = 1;
  v8 = 28;
  if ( a2 == byte_16E360 )
    goto LABEL_21;
  if ( (int)a2 > (int)byte_16E360 )
  {
    if ( a2 == byte_2FAF08 )
      goto LABEL_19;
    if ( (int)a2 > (int)byte_2FAF08 )
    {
      if ( a2 != (char *)6250000 && a2 != (char *)12500000 )
        goto LABEL_13;
      goto LABEL_19;
    }
    if ( a2 != byte_17D784 )
    {
      if ( a2 != (char *)&unk_2DC6C0 )
        goto LABEL_13;
LABEL_19:
      v2 = -1597767631;
      goto LABEL_8;
    }
LABEL_21:
    v2 = -1597767375;
    goto LABEL_8;
  }
  if ( a2 == (char *)&loc_70800 )
  {
    v2 = -1597766095;
    goto LABEL_8;
  }
  if ( (int)a2 > 460800 )
  {
    if ( a2 == (_BYTE *)&loc_E0FFE + 2 || a2 == byte_FE502 )
    {
      v2 = -1597767119;
      goto LABEL_8;
    }
    goto LABEL_13;
  }
  if ( a2 != (char *)38400 )
  {
LABEL_13:
    v2 = -1597760975;
    goto LABEL_8;
  }
  v2 = -1597747151;
LABEL_8:
  v3 = *(int (__fastcall **)(int, _DWORD *))(a1 + 140);
  v5[0] = v2;
  return v3(a1, v5);
}
