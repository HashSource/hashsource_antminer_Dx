int __fastcall get_chip_status_ltc(_DWORD *a1, _DWORD *a2)
{
  int v2; // r5
  int v3; // r2
  char *i; // r3
  int v5; // lr
  unsigned int v6; // r12

  v2 = a1[48];
  if ( v2 > 0 )
  {
    v3 = 0;
    for ( i = (char *)(a1[81] + 56); ; i += 8 )
    {
      v5 = a1[82];
      __pld(i);
      if ( v5 > 1 )
      {
        if ( *(i - 56) && (unsigned int)(*a2 - 2) <= 1 )
        {
          *a2 = 0;
          v2 = a1[48];
        }
        goto LABEL_4;
      }
      v6 = *a2 - 2;
      if ( *(i - 56) )
        goto LABEL_9;
      if ( v6 <= 1 )
        break;
LABEL_4:
      ++v3;
      ++a2;
      if ( v3 >= v2 )
        return 0;
    }
    *(i - 56) = 1;
    a1[82] = v5 + 1;
    v6 = *a2 - 2;
LABEL_9:
    if ( v6 <= 1 )
    {
      *a2 = 0;
      v2 = a1[48];
    }
    goto LABEL_4;
  }
  return 0;
}
