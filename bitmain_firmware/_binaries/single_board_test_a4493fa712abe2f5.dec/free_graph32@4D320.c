void __fastcall free_graph32(void (**a1)(void))
{
  if ( a1 )
  {
    a1[25]();
    j_free(a1);
  }
}
