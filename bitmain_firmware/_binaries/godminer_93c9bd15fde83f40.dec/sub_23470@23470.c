_DWORD *__fastcall sub_23470(_DWORD *result, _DWORD *a2)
{
  int v2; // r3
  int v3; // r3
  int v4; // r4
  _DWORD *v5; // r12
  int v6; // r2
  int v7; // t1
  _DWORD *v8; // r4
  _DWORD *v10; // r0
  int v11; // r6
  _QWORD *v12; // r0
  _DWORD *v13; // r2
  int v14; // r5

  v2 = (unsigned __int8)byte_1A45C0;
  if ( byte_1A45C0 )
  {
    v2 = (unsigned __int8)dword_1A45C4;
    if ( !result )
      return result;
    if ( BYTE2(dword_1A45C4) )
    {
      v3 = -2;
      if ( !a2 )
        return result;
      goto LABEL_6;
    }
  }
  else
  {
    dword_1A45C4 = (unsigned __int8)byte_1A45C0;
    dword_1A45C8 = (unsigned __int8)byte_1A45C0;
    byte_1A45CC = byte_1A45C0;
    byte_1A45C0 = 1;
    if ( !result )
      return result;
  }
  v3 = -v2;
  if ( !a2 )
    return result;
LABEL_6:
  v4 = a2[2];
  if ( v4 > 0 )
  {
    v5 = (_DWORD *)a2[4];
    if ( v3 == *v5 )
    {
      v14 = 0;
LABEL_12:
      v8 = result;
      v10 = json_string(*(const char **)(a2[3] + v14));
      json_object_set_new(v8, "status", v10);
      v11 = *(_DWORD *)(a2[4] + v14);
      v12 = off_1A25E8(0x10u);
      if ( v12 )
      {
        v12[1] = v11;
        *(_DWORD *)v12 = 3;
        *((_DWORD *)v12 + 1) = 1;
      }
      json_object_set_new(v8, "code", v12);
      v13 = json_string(*(const char **)(a2[5] + v14));
      return (_DWORD *)json_object_set_new(v8, "msg", v13);
    }
    else
    {
      v6 = 0;
      while ( 1 )
      {
        ++v6;
        v14 = 4 * v6;
        if ( v4 == v6 )
          break;
        v7 = v5[1];
        ++v5;
        if ( v3 == v7 )
          goto LABEL_12;
      }
    }
  }
  return result;
}
