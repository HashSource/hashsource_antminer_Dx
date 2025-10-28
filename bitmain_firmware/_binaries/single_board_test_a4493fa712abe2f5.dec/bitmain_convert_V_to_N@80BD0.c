int bitmain_convert_V_to_N()
{
  double v0; // d0
  int result; // r0

  switch ( dword_12B730 )
  {
    case 'A':
    case 'B':
      result = (int)(765.411764 - v0 * 35.833333);
      break;
    case 'C':
      result = (int)(933.240365 - v0 * 59.806034);
      break;
    case 'a':
      result = (int)(1144.50226 - v0 * 52.243589);
      break;
    case 'q':
    case 'r':
      result = (int)(1190.93534 - v0 * 78.742588);
      break;
    case 's':
      result = (int)(1280.57782 - v0 * 73.979365);
      break;
    default:
      result = -1;
      break;
  }
  return result;
}
