unsigned int *__fastcall sph_echo512(unsigned int *result, char *src, size_t n)
{
  unsigned int *v3; // r6
  unsigned int v4; // r4
  size_t v5; // r5
  size_t v6; // r3
  char *v7; // r7
  char *v8; // r1
  char *v9; // r0
  bool v10; // cf
  int v11; // r3
  int v12; // r3

  v3 = result;
  v4 = result[32];
  v5 = n;
  v6 = 128 - v4;
  if ( n < 128 - v4 )
  {
    result = (unsigned int *)memcpy((char *)result + v4, src, n);
    v3[32] = v4 + v5;
  }
  else
  {
    v7 = src;
    if ( n )
    {
      while ( 1 )
      {
        v8 = v7;
        if ( v6 >= v5 )
          v6 = v5;
        v9 = (char *)v3 + v4;
        v4 += v6;
        v5 -= v6;
        v7 += v6;
        result = (unsigned int *)memcpy(v9, v8, v6);
        if ( v4 == 128 )
        {
          v4 = 0;
          v10 = v3[66] < 0xFFFFFC00;
          v3[66] += 1024;
          if ( !v10 )
          {
            v11 = v3[67] + 1;
            v3[67] = v11;
            if ( !v11 )
            {
              v12 = v3[68] + 1;
              v3[68] = v12;
              if ( !v12 )
                ++v3[69];
            }
          }
          result = sub_43064(v3);
          if ( !v5 )
            break;
        }
        else if ( !v5 )
        {
          break;
        }
        v6 = 128 - v4;
      }
    }
    v3[32] = v4;
  }
  return result;
}
