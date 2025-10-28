char *sub_15BCD4(char *result, char *s, char a3, const char *a4, ...)
{
  int v4; // r5
  int v5; // lr
  int v6; // r12
  char *v9; // r4
  size_t v10; // r0
  va_list arg; // [sp+28h] [bp+24h] BYREF

  va_start(arg, a4);
  v4 = *((_DWORD *)result + 14);
  v5 = *((_DWORD *)result + 7);
  v6 = *((_DWORD *)result + 8);
  if ( v4 )
  {
    v9 = result;
    if ( *(_BYTE *)(v4 + 92)
      || (*(_DWORD *)v4 = *((_DWORD *)result + 6),
          *(_DWORD *)(v4 + 4) = v5,
          *(_DWORD *)(v4 + 8) = v6,
          result = (char *)vsnprintf((char *)(v4 + 92), 0x9Fu, a4, arg),
          *(_BYTE *)(v4 + 250) = 0,
          *(_BYTE *)(v4 + 251) = a3,
          (v4 = *((_DWORD *)v9 + 14)) != 0) )
    {
      v10 = strlen(s);
      if ( v10 <= 0x4F )
      {
        return strncpy((char *)(v4 + 12), s, v10 + 1);
      }
      else
      {
        *(_WORD *)(v4 + 12) = 11822;
        *(_BYTE *)(v4 + 14) = 46;
        return strncpy((char *)(v4 + 15), &s[v10 - 76], 0x4Du);
      }
    }
  }
  return result;
}
