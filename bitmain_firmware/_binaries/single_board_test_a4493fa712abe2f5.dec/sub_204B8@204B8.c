char *sub_204B8(int a1, char *s, char a3, char *a4, ...)
{
  int v7; // r4
  char *result; // r0
  int v9; // r1
  size_t v10; // r0
  va_list va; // [sp+28h] [bp+1Ch] BYREF

  va_start(va, a4);
  v7 = *(_DWORD *)(a1 + 56);
  result = a4;
  v9 = *(_DWORD *)(a1 + 32);
  if ( v7 )
  {
    if ( *(_BYTE *)(v7 + 92)
      || (*(_QWORD *)v7 = *(_QWORD *)(a1 + 24),
          *(_DWORD *)(v7 + 8) = v9,
          result = (char *)vsnprintf((char *)(v7 + 92), 0x9Fu, a4, va),
          *(_BYTE *)(v7 + 250) = 0,
          *(_BYTE *)(v7 + 251) = a3,
          (v7 = *(_DWORD *)(a1 + 56)) != 0) )
    {
      v10 = strlen(s);
      if ( v10 <= 0x4F )
      {
        return strncpy((char *)(v7 + 12), s, v10 + 1);
      }
      else
      {
        *(_WORD *)(v7 + 12) = 11822;
        *(_BYTE *)(v7 + 14) = 46;
        return strncpy((char *)(v7 + 15), &s[v10 - 76], 0x4Du);
      }
    }
  }
  return result;
}
