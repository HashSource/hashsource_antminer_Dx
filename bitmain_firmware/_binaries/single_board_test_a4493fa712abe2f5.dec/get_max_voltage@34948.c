int get_max_voltage()
{
  int result; // r0

  if ( !byte_12C0F0 )
    return -1;
  switch ( dword_12B730 )
  {
    case 'A':
    case 'B':
      result = 2136;
      break;
    case 'C':
      result = 1560;
      break;
    case 'a':
      result = 2190;
      break;
    case 'q':
    case 'r':
      result = 1512;
      break;
    case 's':
      result = 1730;
      break;
    default:
      result = -100;
      break;
  }
  return result;
}
