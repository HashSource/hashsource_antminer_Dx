int __fastcall redirect_nonce_output(int result, int a2)
{
  int v2; // r3
  bool v3; // zf

  while ( 1 )
  {
    v2 = *(_DWORD *)(result + 640);
    v3 = v2 == 0;
    if ( v2 )
      v3 = v2 == result;
    if ( v3 )
      break;
    result = *(_DWORD *)(result + 640);
  }
  *(_DWORD *)(a2 + 640) = result;
  return result;
}
