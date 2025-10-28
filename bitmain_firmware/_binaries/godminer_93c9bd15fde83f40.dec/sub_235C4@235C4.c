_DWORD *__fastcall sub_235C4(_DWORD *result, _DWORD *a2)
{
  int v2; // lr
  int v3; // r4
  _DWORD *v4; // r2
  int v5; // r3
  int v6; // t1
  _DWORD *v7; // r4
  _DWORD *v9; // r0
  int v10; // r6
  _QWORD *v11; // r0
  _DWORD *v12; // r2
  int v13; // r5

  if ( byte_1A45C0 )
  {
    v2 = (unsigned __int8)dword_1A45C8;
    if ( !result )
      return result;
  }
  else
  {
    v2 = (unsigned __int8)byte_1A45C0;
    dword_1A45C4 = (unsigned __int8)byte_1A45C0;
    dword_1A45C8 = (unsigned __int8)byte_1A45C0;
    byte_1A45CC = byte_1A45C0;
    byte_1A45C0 = 1;
    if ( !result )
      return result;
  }
  if ( a2 )
  {
    v3 = a2[2];
    if ( v3 > 0 )
    {
      v4 = (_DWORD *)a2[4];
      if ( *v4 == -v2 )
      {
        v13 = 0;
LABEL_12:
        v7 = result;
        v9 = json_string(*(const char **)(a2[3] + v13));
        json_object_set_new(v7, "status", v9);
        v10 = *(_DWORD *)(a2[4] + v13);
        v11 = off_1A25E8(0x10u);
        if ( v11 )
        {
          v11[1] = v10;
          *(_DWORD *)v11 = 3;
          *((_DWORD *)v11 + 1) = 1;
        }
        json_object_set_new(v7, "code", v11);
        v12 = json_string(*(const char **)(a2[5] + v13));
        return (_DWORD *)json_object_set_new(v7, "msg", v12);
      }
      else
      {
        v5 = 0;
        while ( 1 )
        {
          ++v5;
          v13 = 4 * v5;
          if ( v3 == v5 )
            break;
          v6 = v4[1];
          ++v4;
          if ( v6 == -v2 )
            goto LABEL_12;
        }
      }
    }
  }
  return result;
}
