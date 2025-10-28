int __fastcall bitmain_convert_N_to_V_calibration(int result)
{
  int v1; // r2
  int v2; // r12
  int v3; // r1
  int v4; // r12
  int v5; // r1
  int v6; // r12
  int v7; // r1
  int v8; // r12
  int v9; // r2

  if ( dword_1AA660 <= 1 )
    return result;
  v1 = dword_1AA660 - 1;
  if ( (unsigned __int8)byte_1AA600 > result )
  {
    if ( result < (unsigned __int8)byte_1AA601 )
    {
      if ( dword_1AA660 == 2 )
        return result;
      v2 = (unsigned __int8)byte_1AA602;
LABEL_6:
      if ( result < v2 )
      {
        if ( v1 <= 2 )
          return result;
        v3 = (unsigned __int8)byte_1AA603;
        goto LABEL_9;
      }
      goto LABEL_18;
    }
  }
  else if ( result >= (unsigned __int8)byte_1AA601 )
  {
    if ( dword_1AA660 == 2 )
      return result;
    v2 = (unsigned __int8)byte_1AA602;
    goto LABEL_17;
  }
  if ( dword_1AA660 == 2 )
    return result;
  v2 = (unsigned __int8)byte_1AA602;
  if ( result < (unsigned __int8)byte_1AA601 )
    goto LABEL_6;
LABEL_17:
  if ( result >= v2 )
  {
    if ( v1 <= 2 )
      return result;
    v3 = (unsigned __int8)byte_1AA603;
    if ( result >= (unsigned __int8)byte_1AA603 )
      goto LABEL_21;
    goto LABEL_40;
  }
LABEL_18:
  if ( v1 <= 2 )
    return result;
  v3 = (unsigned __int8)byte_1AA603;
  if ( result < v2 )
  {
LABEL_9:
    if ( result < v3 )
    {
      if ( v1 <= 3 )
        return result;
      v4 = (unsigned __int8)byte_1AA604;
      goto LABEL_42;
    }
    goto LABEL_40;
  }
  if ( result >= (unsigned __int8)byte_1AA603 )
  {
LABEL_21:
    if ( v1 <= 3 )
      return result;
    v4 = (unsigned __int8)byte_1AA604;
    goto LABEL_23;
  }
LABEL_40:
  if ( v1 <= 3 )
    return result;
  v4 = (unsigned __int8)byte_1AA604;
  if ( result < v3 )
  {
LABEL_42:
    if ( result < v4 )
    {
      if ( v1 <= 4 )
        return result;
      v5 = (unsigned __int8)byte_1AA605;
      goto LABEL_45;
    }
    goto LABEL_52;
  }
LABEL_23:
  if ( result >= v4 )
  {
    if ( v1 <= 4 )
      return result;
    v5 = (unsigned __int8)byte_1AA605;
    goto LABEL_26;
  }
LABEL_52:
  if ( v1 <= 4 )
    return result;
  v5 = (unsigned __int8)byte_1AA605;
  if ( result < v4 )
  {
LABEL_45:
    if ( result < v5 )
    {
      if ( v1 <= 5 )
        return result;
      v6 = (unsigned __int8)byte_1AA606;
      goto LABEL_57;
    }
    goto LABEL_55;
  }
LABEL_26:
  if ( result >= v5 )
  {
    if ( v1 <= 5 )
      return result;
    v6 = (unsigned __int8)byte_1AA606;
    goto LABEL_29;
  }
LABEL_55:
  if ( v1 <= 5 )
    return result;
  v6 = (unsigned __int8)byte_1AA606;
  if ( result >= v5 )
  {
LABEL_29:
    if ( result >= v6 )
    {
      if ( v1 <= 6 )
        return result;
      v7 = (unsigned __int8)byte_1AA607;
      goto LABEL_32;
    }
LABEL_58:
    if ( v1 <= 6 )
      return result;
    v7 = (unsigned __int8)byte_1AA607;
    if ( result < v6 )
      goto LABEL_60;
LABEL_32:
    if ( result >= v7 )
    {
      if ( v1 <= 7 )
        return result;
      v8 = (unsigned __int8)byte_1AA608;
      goto LABEL_35;
    }
LABEL_61:
    if ( v1 <= 7 )
      return result;
    v8 = (unsigned __int8)byte_1AA608;
    if ( result < v7 )
      goto LABEL_63;
LABEL_35:
    if ( result >= v8 )
    {
      if ( v1 <= 8 )
        return result;
      v9 = (unsigned __int8)byte_1AA609;
      goto LABEL_68;
    }
LABEL_36:
    if ( v1 <= 8 )
      return result;
    v9 = (unsigned __int8)byte_1AA609;
    if ( result < v8 )
    {
LABEL_38:
      if ( result < v9 )
        return result;
      goto LABEL_39;
    }
LABEL_68:
    if ( result < v9 )
    {
LABEL_39:
      result -= v8;
      return result;
    }
    return result;
  }
LABEL_57:
  if ( result >= v6 )
    goto LABEL_58;
  if ( v1 <= 6 )
    return result;
  v7 = (unsigned __int8)byte_1AA607;
LABEL_60:
  if ( result >= v7 )
    goto LABEL_61;
  if ( v1 <= 7 )
    return result;
  v8 = (unsigned __int8)byte_1AA608;
LABEL_63:
  if ( result >= v8 )
    goto LABEL_36;
  if ( v1 > 8 )
  {
    v9 = (unsigned __int8)byte_1AA609;
    goto LABEL_38;
  }
  return result;
}
