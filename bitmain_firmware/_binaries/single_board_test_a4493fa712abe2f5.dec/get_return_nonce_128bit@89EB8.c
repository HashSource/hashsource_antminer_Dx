int __fastcall get_return_nonce_128bit(int result)
{
  int v1; // r1
  __int64 v2; // r2

  v1 = *(_DWORD *)(dword_3B52A4 + 20);
  v2 = *(_QWORD *)(dword_3B52A4 + 16);
  *(_DWORD *)result = *(_DWORD *)(dword_3B52A4 + 16);
  *(_DWORD *)(result + 4) = v1;
  *(_QWORD *)(result + 8) = v2;
  return result;
}
