int __fastcall json_number_value(int result)
{
  if ( result )
  {
    if ( *(_DWORD *)result == 3 )
      return sub_14598C(*(_QWORD *)(result + 8));
  }
  return result;
}
