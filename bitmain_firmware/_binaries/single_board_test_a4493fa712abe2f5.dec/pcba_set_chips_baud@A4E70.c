int __fastcall pcba_set_chips_baud(int a1, int a2, char *a3)
{
  bool v4; // zf
  bool v5; // cc
  int v8; // r0
  _DWORD v10[2]; // [sp+0h] [bp-10h] BYREF
  char v11; // [sp+8h] [bp-8h]
  char v12; // [sp+9h] [bp-7h]
  __int16 v13; // [sp+Ah] [bp-6h]
  int v14; // [sp+Ch] [bp-4h]

  v4 = a3 == byte_17D784;
  v5 = (int)a3 <= (int)byte_17D784;
  if ( !v4 )
  {
    if ( v5 )
    {
      if ( a3 == (char *)&loc_70800 )
      {
        v8 = 1728;
        goto LABEL_10;
      }
      if ( a3 == (_BYTE *)&loc_E0FFE + 2 )
      {
        v8 = 704;
        goto LABEL_10;
      }
    }
    else
    {
      if ( a3 == (char *)6250000 )
      {
        v8 = 64;
        goto LABEL_10;
      }
      if ( a3 == (char *)12500000 )
      {
        v8 = 0;
        goto LABEL_10;
      }
      if ( a3 == byte_2FAF08 )
      {
        v8 = 192;
        goto LABEL_10;
      }
    }
    v8 = 6848;
    goto LABEL_10;
  }
  v8 = 448;
LABEL_10:
  v10[1] = 0;
  v12 = 0;
  v14 = 0;
  v10[0] = v8;
  v13 = 28;
  v11 = 1;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 140))(a1, v10);
  usleep(0xF4240u);
  (*(void (__fastcall **)(char *))(a2 + 16))(a3);
  usleep((__useconds_t)"ic1704_voltage_clamp_ctrl");
  return 1;
}
