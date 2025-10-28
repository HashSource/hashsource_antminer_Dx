int __fastcall pic1704_write_iic(char a1, char a2)
{
  _BYTE v3[4]; // [sp+0h] [bp-18h] BYREF
  __int16 v4; // [sp+4h] [bp-14h] BYREF
  _DWORD v5[2]; // [sp+8h] [bp-10h] BYREF
  int v6; // [sp+10h] [bp-8h]
  _BYTE *v7; // [sp+14h] [bp-4h]

  v3[0] = a2;
  LOWORD(v6) = 571;
  HIBYTE(v6) = a1;
  v7 = v3;
  BYTE2(v6) = 2;
  v5[0] = 0;
  v3[1] = 0;
  v5[1] = 0;
  v4 = 255;
  return sub_C36EC(v6, (int)v3, v5, (unsigned __int8 *)&v4);
}
