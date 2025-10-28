int __fastcall pic1704_write_flash(char a1, const void *a2, char a3, size_t a4)
{
  char v8; // r5
  _BYTE *v9; // r7
  _BYTE *v10; // r4
  int v11; // r5
  int v13; // [sp+0h] [bp-10h] BYREF
  char v14; // [sp+4h] [bp-Ch]
  int v15; // [sp+8h] [bp-8h]
  _BYTE *v16; // [sp+Ch] [bp-4h]

  v13 = 255;
  v14 = 0;
  v8 = a4;
  v9 = malloc(a4 + 8);
  v10 = malloc(a4 + 2);
  v10[1] = v8;
  *v10 = a3;
  memcpy(v10 + 2, a2, a4);
  BYTE2(v15) = 5;
  BYTE1(v15) = a4 + 2;
  v16 = v10;
  HIBYTE(v15) = a1;
  LOBYTE(v15) = 51;
  v11 = sub_D4BDC(v15, (int)v10, v9, &v13);
  free(v10);
  free(v9);
  return v11;
}
