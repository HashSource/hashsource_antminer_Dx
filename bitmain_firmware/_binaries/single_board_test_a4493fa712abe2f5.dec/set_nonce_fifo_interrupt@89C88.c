int __fastcall set_nonce_fifo_interrupt(int result)
{
  *(_DWORD *)(dword_3B52A4 + 28) = result;
  return result;
}
