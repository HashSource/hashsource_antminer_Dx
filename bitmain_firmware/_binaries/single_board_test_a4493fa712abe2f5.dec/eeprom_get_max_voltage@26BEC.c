int eeprom_get_max_voltage()
{
  int result; // r0

  if ( !dword_12C0EC || !*(_BYTE *)(dword_12C0EC + 80) )
    return sub_26B68();
  if ( dword_12A41C <= 0 )
    return 0;
  result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A420) + 35);
  if ( dword_12A41C != 1 )
  {
    if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A424) + 35) )
      result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A424) + 35);
    if ( dword_12A41C != 2 )
    {
      if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A428) + 35) )
        result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A428) + 35);
      if ( dword_12A41C != 3 )
      {
        if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A42C) + 35) )
          result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A42C) + 35);
        if ( dword_12A41C != 4 )
        {
          if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A430) + 35) )
            result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A430) + 35);
          if ( dword_12A41C != 5 )
          {
            if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A434) + 35) )
              result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A434) + 35);
            if ( dword_12A41C != 6 )
            {
              if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A438) + 35) )
                result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A438) + 35);
              if ( dword_12A41C != 7 )
              {
                if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A43C) + 35) )
                  result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A43C) + 35);
                if ( dword_12A41C != 8 )
                {
                  if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A440) + 35) )
                    result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A440) + 35);
                  if ( dword_12A41C != 9 )
                  {
                    if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A444) + 35) )
                      result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A444) + 35);
                    if ( dword_12A41C != 10 )
                    {
                      if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A448) + 35) )
                        result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A448) + 35);
                      if ( dword_12A41C != 11 )
                      {
                        if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A44C) + 35) )
                          result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A44C) + 35);
                        if ( dword_12A41C != 12 )
                        {
                          if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A450) + 35) )
                            result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A450) + 35);
                          if ( dword_12A41C != 13 )
                          {
                            if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A454) + 35) )
                              result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A454) + 35);
                            if ( dword_12A41C != 14 )
                            {
                              if ( result < *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A458) + 35) )
                                result = *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A458) + 35);
                              if ( dword_12A41C != 15
                                && result < *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A45C) + 35) )
                              {
                                return *(unsigned __int16 *)(*(_DWORD *)(dword_12C0EC + 4 * dword_12A45C) + 35);
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
