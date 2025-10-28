int eeprom_get_min_freq()
{
  int result; // r0

  if ( !dword_12C0EC || !*(_BYTE *)(dword_12C0EC + 80) )
    return sub_2696C();
  if ( dword_12A41C <= 0 )
    return 0xFFFF;
  result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A420) + 37);
  if ( dword_12A41C != 1 )
  {
    if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A424) + 37) )
      result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A424) + 37);
    if ( dword_12A41C != 2 )
    {
      if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A428) + 37) )
        result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A428) + 37);
      if ( dword_12A41C != 3 )
      {
        if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A42C) + 37) )
          result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A42C) + 37);
        if ( dword_12A41C != 4 )
        {
          if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A430) + 37) )
            result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A430) + 37);
          if ( dword_12A41C != 5 )
          {
            if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A434) + 37) )
              result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A434) + 37);
            if ( dword_12A41C != 6 )
            {
              if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A438) + 37) )
                result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A438) + 37);
              if ( dword_12A41C != 7 )
              {
                if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A43C) + 37) )
                  result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A43C) + 37);
                if ( dword_12A41C != 8 )
                {
                  if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A440) + 37) )
                    result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A440) + 37);
                  if ( dword_12A41C != 9 )
                  {
                    if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A444) + 37) )
                      result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A444) + 37);
                    if ( dword_12A41C != 10 )
                    {
                      if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A448) + 37) )
                        result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A448) + 37);
                      if ( dword_12A41C != 11 )
                      {
                        if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A44C) + 37) )
                          result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A44C) + 37);
                        if ( dword_12A41C != 12 )
                        {
                          if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A450) + 37) )
                            result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A450) + 37);
                          if ( dword_12A41C != 13 )
                          {
                            if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A454) + 37) )
                              result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A454) + 37);
                            if ( dword_12A41C != 14 )
                            {
                              if ( result >= *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A458) + 37) )
                                result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A458) + 37);
                              if ( dword_12A41C != 15
                                && result >= *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A45C) + 37) )
                              {
                                return *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A45C) + 37);
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
