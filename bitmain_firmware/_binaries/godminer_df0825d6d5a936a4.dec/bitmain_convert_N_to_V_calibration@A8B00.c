void bitmain_convert_N_to_V_calibration()
{
  char *v0; // r12
  char *v1; // r2

  if ( dword_1774C8 > 1 )
  {
    v0 = (char *)&unk_177469;
    v1 = (char *)&unk_177478;
    do
    {
      ++v0;
      v1 += 8;
    }
    while ( &byte_177468[dword_1774C8] != v0 );
  }
}
