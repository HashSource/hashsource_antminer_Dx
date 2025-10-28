int __fastcall set_nonce_fifo_interrupt(int result)
{
  *(_DWORD *)(dword_197C8C + 28) = result;
  return result;
}
