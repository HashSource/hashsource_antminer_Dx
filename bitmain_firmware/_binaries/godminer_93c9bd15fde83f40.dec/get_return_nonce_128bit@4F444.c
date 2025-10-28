_DWORD *__fastcall get_return_nonce_128bit(_DWORD *result)
{
  int v1; // r1
  int v2; // r2

  v1 = *(_DWORD *)(dword_1A8A8C + 20);
  v2 = *(_DWORD *)(dword_1A8A8C + 16);
  *result = v2;
  result[1] = v1;
  result[2] = v2;
  result[3] = v1;
  return result;
}
