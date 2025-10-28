char *__fastcall sub_22ACC(char *a1, int *a2)
{
  char *result; // r0
  int v5; // r3
  _DWORD s[65]; // [sp+8h] [bp-104h] BYREF

  result = (char *)memset(s, 0, 0x100u);
  if ( a2 )
  {
    v5 = *a2;
    if ( *a2 == 6 )
    {
      strcpy((char *)s, "false");
    }
    else
    {
      switch ( v5 )
      {
        case 5:
          strcpy((char *)s, "true");
          break;
        case 3:
          snprintf((char *)s, 0x100u, "%lld", *((_QWORD *)a2 + 1));
          break;
        case 4:
          snprintf((char *)s, 0x100u, "%.2lf", *((double *)a2 + 1));
          break;
        case 2:
          snprintf((char *)s, 0x100u, "%s", (const char *)a2[2]);
          break;
      }
    }
    return strcat(a1, (const char *)s);
  }
  return result;
}
