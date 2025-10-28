double *__fastcall json_load_file(char *a1, int a2, char *a3)
{
  int v6; // r1
  int v7; // r0
  FILE *v8; // r7
  double *v9; // r6
  int *v11; // r0
  char *v12; // r0

  jsonp_error_init(a3, a1);
  if ( a1 )
  {
    LOWORD(v6) = 19452;
    HIWORD(v6) = (unsigned int)&unk_12E7B8 >> 16;
    v7 = fopen64(a1, v6);
    v8 = (FILE *)v7;
    if ( v7 )
    {
      v9 = json_loadf(v7, a2, a3);
      fclose(v8);
    }
    else
    {
      v11 = _errno_location();
      v9 = 0;
      v12 = strerror(*v11);
      sub_35D1C((int)a3, 0, 3, "unable to open %s: %s", a1, v12);
    }
  }
  else
  {
    v9 = 0;
    sub_35D1C((int)a3, 0, 4, "wrong arguments");
  }
  return v9;
}
