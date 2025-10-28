double __fastcall json_number_value(const json_t *json)
{
  double result; // r0

  if ( json && *(_DWORD *)json == 3 )
    json = (const json_t *)sub_F7714(*((_QWORD *)json + 1));
  LODWORD(result) = json;
  return result;
}
