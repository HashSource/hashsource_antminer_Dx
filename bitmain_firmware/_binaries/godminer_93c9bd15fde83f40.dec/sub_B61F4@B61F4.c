_DWORD *__fastcall sub_B61F4(_DWORD *a1, char *s)
{
  ++dword_1A8A20[0];
  a1[6] = strlen(s);
  a1[2] = 0;
  a1[3] = 0;
  a1[5] = 0;
  a1[7] = 0;
  a1[4] = s;
  *a1 = "error";
  a1[1] = 5;
  return a1;
}
