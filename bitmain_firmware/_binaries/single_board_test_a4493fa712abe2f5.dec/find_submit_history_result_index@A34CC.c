int __fastcall find_submit_history_result_index(_BYTE *a1)
{
  unsigned __int8 v2; // r1
  int v3; // r4
  unsigned int v5; // r3
  unsigned int v6; // r1
  unsigned __int8 v7; // r1

  v2 = dword_3B57B0;
  if ( dword_3B57B0 < (unsigned int)(gTest_loop - 1) )
  {
    v3 = (unsigned __int8)gHistory_Result[((_DWORD)&loc_40E46 + 2) * dword_3B57B0 + 265796];
    if ( gHistory_Result[((_DWORD)&loc_40E46 + 2) * dword_3B57B0 + 265796] )
    {
      printf("Not find history result index, and go on testing. g_pcba_info.level_index = %d", dword_3B57B0);
      return 2;
    }
    else
    {
      *a1 = dword_3B57B0;
      printf("find history result index: %d, and it is STRICT_STANDARD", v2);
      return v3;
    }
  }
  printf("We had do %d tests, and strict standard are not ok", dword_3B57B0 + 1);
  if ( !gTest_loop )
  {
LABEL_10:
    v7 = dword_3B57B0;
    *a1 = dword_3B57B0;
    printf("find history result index: %d, and this time pattern test fail", v7);
    return 1;
  }
  if ( byte_16D09C != 1 )
  {
    LOBYTE(v5) = 0;
    while ( 1 )
    {
      v5 = (unsigned __int8)(v5 + 1);
      v6 = v5;
      if ( v5 >= gTest_loop )
        goto LABEL_10;
      if ( gHistory_Result[((_DWORD)&loc_40E46 + 2) * v5 + 265796] == 1 )
        goto LABEL_12;
    }
  }
  LOBYTE(v5) = 0;
  v6 = 0;
LABEL_12:
  *a1 = v5;
  printf("find history result index: %d, and it is LOOSE_STANDARD", v6);
  return 0;
}
