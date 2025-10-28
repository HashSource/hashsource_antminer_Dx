int __fastcall pcba_dash_reg_init(int result)
{
  *(_DWORD *)(result + 288) = 1;
  return result;
}
