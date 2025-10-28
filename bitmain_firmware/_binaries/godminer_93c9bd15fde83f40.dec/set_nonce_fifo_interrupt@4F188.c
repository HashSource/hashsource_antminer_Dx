int __fastcall set_nonce_fifo_interrupt(int result)
{
  *(_DWORD *)(dword_1A8A8C + 28) = result;
  return result;
}
