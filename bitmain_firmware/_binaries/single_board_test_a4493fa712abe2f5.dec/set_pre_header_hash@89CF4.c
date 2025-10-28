_DWORD *__fastcall set_pre_header_hash(_DWORD *result)
{
  _DWORD *v1; // r3

  v1 = (_DWORD *)dword_3B52A4;
  *(_DWORD *)(dword_3B52A4 + 320) = *result;
  v1[81] = result[1];
  v1[82] = result[2];
  v1[83] = result[3];
  v1[84] = result[4];
  v1[85] = result[5];
  v1[86] = result[6];
  v1[87] = result[7];
  return result;
}
