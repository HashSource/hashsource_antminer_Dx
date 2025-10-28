_DWORD *__fastcall set_TW_write_command(_DWORD *result)
{
  _DWORD *v1; // r3

  v1 = (_DWORD *)dword_3B52A4;
  *(_DWORD *)(dword_3B52A4 + 64) = *result;
  v1[17] = result[1];
  v1[18] = result[2];
  v1[19] = result[3];
  v1[20] = result[4];
  v1[21] = result[5];
  v1[22] = result[6];
  v1[23] = result[7];
  v1[24] = result[8];
  v1[25] = result[9];
  v1[26] = result[10];
  v1[27] = result[11];
  v1[28] = result[12];
  return result;
}
