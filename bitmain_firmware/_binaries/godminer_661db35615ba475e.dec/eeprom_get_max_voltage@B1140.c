int eeprom_get_max_voltage()
{
  int result; // r0

  if ( !dword_195D14 || !*(_BYTE *)(dword_195D14 + 80) )
    return sub_B109C();
  if ( dword_195CB8 <= 0 )
    return 0;
  result = *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CBC) + 35);
  if ( dword_195CB8 != 1 )
  {
    if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CC0) + 35) )
      result = *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CC0) + 35);
    if ( dword_195CB8 != 2 )
    {
      if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CC4) + 35) )
        result = *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CC4) + 35);
      if ( dword_195CB8 != 3 )
      {
        if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CC8) + 35) )
          result = *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CC8) + 35);
        if ( dword_195CB8 != 4 )
        {
          if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CCC) + 35) )
            result = *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CCC) + 35);
          if ( dword_195CB8 != 5 )
          {
            if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CD0) + 35) )
              result = *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CD0) + 35);
            if ( dword_195CB8 != 6 )
            {
              if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CD4) + 35) )
                result = *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CD4) + 35);
              if ( dword_195CB8 != 7 )
              {
                if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CD8) + 35) )
                  result = *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CD8) + 35);
                if ( dword_195CB8 != 8 )
                {
                  if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CDC) + 35) )
                    result = *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CDC) + 35);
                  if ( dword_195CB8 != 9 )
                  {
                    if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CE0) + 35) )
                      result = *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CE0) + 35);
                    if ( dword_195CB8 != 10 )
                    {
                      if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CE4) + 35) )
                        result = *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CE4) + 35);
                      if ( dword_195CB8 != 11 )
                      {
                        if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CE8) + 35) )
                          result = *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CE8) + 35);
                        if ( dword_195CB8 != 12 )
                        {
                          if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CEC) + 35) )
                            result = *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CEC) + 35);
                          if ( dword_195CB8 != 13 )
                          {
                            if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CF0) + 35) )
                              result = *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CF0) + 35);
                            if ( dword_195CB8 != 14 )
                            {
                              if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CF4) + 35) )
                                result = *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CF4) + 35);
                              if ( dword_195CB8 != 15
                                && result < *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CF8) + 35) )
                              {
                                return *(unsigned __int16 *)(*(_DWORD *)(dword_195D14 + 4 * dword_195CF8) + 35);
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
