int eeprom_get_min_freq()
{
  int result; // r0

  if ( !dword_1AA6AC || !*(_BYTE *)(dword_1AA6AC + 80) )
    return sub_113B70();
  if ( dword_1A88C8[0] <= 0 )
    return 0xFFFF;
  result = *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA668[0]) + 37);
  if ( dword_1A88C8[0] != 1 )
  {
    if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA66C) + 37) )
      result = *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA66C) + 37);
    if ( dword_1A88C8[0] != 2 )
    {
      if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA670) + 37) )
        result = *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA670) + 37);
      if ( dword_1A88C8[0] != 3 )
      {
        if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA674) + 37) )
          result = *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA674) + 37);
        if ( dword_1A88C8[0] != 4 )
        {
          if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA678) + 37) )
            result = *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA678) + 37);
          if ( dword_1A88C8[0] != 5 )
          {
            if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA67C) + 37) )
              result = *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA67C) + 37);
            if ( dword_1A88C8[0] != 6 )
            {
              if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA680) + 37) )
                result = *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA680) + 37);
              if ( dword_1A88C8[0] != 7 )
              {
                if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA684) + 37) )
                  result = *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA684) + 37);
                if ( dword_1A88C8[0] != 8 )
                {
                  if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA688) + 37) )
                    result = *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA688) + 37);
                  if ( dword_1A88C8[0] != 9 )
                  {
                    if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA68C) + 37) )
                      result = *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA68C) + 37);
                    if ( dword_1A88C8[0] != 10 )
                    {
                      if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA690) + 37) )
                        result = *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA690) + 37);
                      if ( dword_1A88C8[0] != 11 )
                      {
                        if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA694) + 37) )
                          result = *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA694) + 37);
                        if ( dword_1A88C8[0] != 12 )
                        {
                          if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA698) + 37) )
                            result = *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA698) + 37);
                          if ( dword_1A88C8[0] != 13 )
                          {
                            if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA69C) + 37) )
                              result = *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA69C) + 37);
                            if ( dword_1A88C8[0] != 14 )
                            {
                              if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA6A0) + 37) )
                                result = *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA6A0) + 37);
                              if ( dword_1A88C8[0] != 15
                                && result >= *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA6A4) + 37) )
                              {
                                return *(unsigned __int16 *)(*(_DWORD *)(dword_1AA6AC + 4 * dword_1AA6A4) + 37);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
