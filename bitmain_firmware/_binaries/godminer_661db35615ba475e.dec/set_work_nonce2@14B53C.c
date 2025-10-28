_DWORD *__fastcall set_work_nonce2(_DWORD *result)
{
  int v1; // r3

  v1 = dword_197C8C;
  *(_DWORD *)(dword_197C8C + 264) = *result;
  *(_DWORD *)(v1 + 268) = result[1];
  return result;
}
