int __fastcall sub_CEABC(_BYTE *a1)
{
  char v3; // r3

  if ( strlen(&byte_3B5960) <= 2 )
  {
    puts("You want copy to many chars");
    return 0;
  }
  else
  {
    *a1 = byte_3B5960;
    a1[1] = byte_3B5961[0];
    v3 = byte_3B5962;
    a1[3] = 0;
    a1[2] = v3;
    return 1;
  }
}
