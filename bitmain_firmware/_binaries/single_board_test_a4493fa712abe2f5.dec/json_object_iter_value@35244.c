int __fastcall json_object_iter_value(int result)
{
  if ( result )
    return *(_DWORD *)(result + 12);
  return result;
}
