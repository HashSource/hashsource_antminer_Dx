int __fastcall sub_CEA80(int a1, _BYTE *a2)
{
  char v5; // r3

  if ( strlen(&byte_3B5960) < a1 + 2 )
  {
    puts("You want copy to many chars");
    return 0;
  }
  else
  {
    *a2 = *(&byte_3B5960 + a1);
    v5 = byte_3B5961[a1];
    a2[2] = 0;
    a2[1] = v5;
    return 1;
  }
}
