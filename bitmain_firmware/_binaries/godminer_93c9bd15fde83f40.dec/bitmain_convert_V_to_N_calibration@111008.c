int bitmain_convert_V_to_N_calibration()
{
  double v0; // d0
  int v1; // r1
  double v2; // d5
  int v3; // s14
  double v4; // d6
  double v5; // d5
  double v6; // d6
  double v7; // d5
  double v8; // d6
  double v9; // d5
  double v10; // d6

  if ( dword_1AA660 <= 1 )
    return -1;
  v1 = dword_1AA660 - 1;
  if ( dbl_1AA610 <= v0 )
  {
    if ( v0 >= dbl_1AA618 )
    {
      if ( dword_1AA660 != 2 )
      {
        v2 = dbl_1AA620;
        v3 = -1;
        goto LABEL_6;
      }
      return -1;
    }
    goto LABEL_28;
  }
  if ( v0 >= dbl_1AA618 )
  {
LABEL_28:
    v3 = (int)((double)(unsigned __int8)byte_1AA600
             + (double)((unsigned __int8)byte_1AA601 - (unsigned __int8)byte_1AA600)
             / (dbl_1AA618 - dbl_1AA610)
             * (v0 - dbl_1AA610));
    if ( dword_1AA660 == 2 )
      return v3;
    v2 = dbl_1AA620;
    if ( v0 >= dbl_1AA618 )
    {
LABEL_6:
      if ( v0 >= v2 )
      {
        if ( v1 <= 2 )
          return v3;
        v4 = dbl_1AA628;
LABEL_36:
        if ( v0 >= v4 )
        {
          if ( v1 <= 3 )
            return v3;
          v5 = dbl_1AA630;
          goto LABEL_39;
        }
        goto LABEL_10;
      }
LABEL_7:
      v3 = (int)((double)(unsigned __int8)byte_1AA601
               + (double)((unsigned __int8)byte_1AA602 - (unsigned __int8)byte_1AA601)
               / (v2 - dbl_1AA618)
               * (v0 - dbl_1AA618));
      if ( v1 <= 2 )
        return v3;
      v4 = dbl_1AA628;
      if ( v0 < v2 )
      {
        if ( v0 >= dbl_1AA628 )
          goto LABEL_10;
LABEL_65:
        if ( v1 <= 3 )
          return v3;
        v5 = dbl_1AA630;
        goto LABEL_12;
      }
      goto LABEL_36;
    }
    goto LABEL_30;
  }
  if ( dword_1AA660 == 2 )
    return -1;
  v2 = dbl_1AA620;
  v3 = -1;
LABEL_30:
  if ( v0 >= v2 )
    goto LABEL_7;
  if ( v1 <= 2 )
    return v3;
  v4 = dbl_1AA628;
  if ( v0 < dbl_1AA628 )
    goto LABEL_65;
LABEL_10:
  v3 = (int)((double)(unsigned __int8)byte_1AA602
           + (double)((unsigned __int8)byte_1AA603 - (unsigned __int8)byte_1AA602) / (v4 - v2) * (v0 - v2));
  if ( v1 <= 3 )
    return v3;
  v5 = dbl_1AA630;
  if ( v0 >= v4 )
  {
LABEL_39:
    if ( v0 >= v5 )
    {
      if ( v1 <= 4 )
        return v3;
      v6 = dbl_1AA638;
      if ( v0 >= dbl_1AA638 )
        goto LABEL_43;
      goto LABEL_57;
    }
LABEL_40:
    v3 = (int)((double)(unsigned __int8)byte_1AA603
             + (double)((unsigned __int8)byte_1AA604 - (unsigned __int8)byte_1AA603) / (v5 - v4) * (v0 - v4));
    if ( v1 <= 4 )
      return v3;
    v6 = dbl_1AA638;
    if ( v0 < v5 )
      goto LABEL_15;
    if ( v0 >= dbl_1AA638 )
    {
LABEL_43:
      if ( v1 <= 5 )
        return v3;
      v7 = dbl_1AA640;
      goto LABEL_45;
    }
LABEL_57:
    v3 = (int)((double)(unsigned __int8)byte_1AA604
             + (double)((unsigned __int8)byte_1AA605 - (unsigned __int8)byte_1AA604) / (v6 - v5) * (v0 - v5));
    if ( v1 <= 5 )
      return v3;
    v7 = dbl_1AA640;
    if ( v0 < v6 )
      goto LABEL_18;
LABEL_45:
    if ( v0 >= v7 )
    {
      if ( v1 <= 6 )
        return v3;
      v8 = dbl_1AA648;
      goto LABEL_48;
    }
LABEL_68:
    v3 = (int)((double)(unsigned __int8)byte_1AA605
             + (double)((unsigned __int8)byte_1AA606 - (unsigned __int8)byte_1AA605) / (v7 - v6) * (v0 - v6));
    if ( v1 <= 6 )
      return v3;
    v8 = dbl_1AA648;
    if ( v0 < v7 )
      goto LABEL_21;
LABEL_48:
    if ( v0 >= v8 )
    {
      if ( v1 <= 7 )
        return v3;
      v9 = dbl_1AA650;
      goto LABEL_51;
    }
LABEL_71:
    v3 = (int)((double)(unsigned __int8)byte_1AA606
             + (double)((unsigned __int8)byte_1AA607 - (unsigned __int8)byte_1AA606) / (v8 - v7) * (v0 - v7));
    if ( v1 <= 7 )
      return v3;
    v9 = dbl_1AA650;
    if ( v0 < v8 )
      goto LABEL_24;
LABEL_51:
    if ( v0 >= v9 )
    {
      if ( v1 <= 8 )
        return v3;
      v10 = dbl_1AA658;
      goto LABEL_54;
    }
LABEL_74:
    v3 = (int)((double)(unsigned __int8)byte_1AA607
             + (double)((unsigned __int8)byte_1AA608 - (unsigned __int8)byte_1AA607) / (v9 - v8) * (v0 - v8));
    if ( v1 <= 8 )
      return v3;
    v10 = dbl_1AA658;
    if ( v0 < v9 )
      goto LABEL_76;
LABEL_54:
    if ( v0 < v10 )
      return (int)((double)(unsigned __int8)byte_1AA608
                 + (double)((unsigned __int8)byte_1AA609 - (unsigned __int8)byte_1AA608) / (v10 - v9) * (v0 - v9));
    return v3;
  }
LABEL_12:
  if ( v0 >= v5 )
    goto LABEL_40;
  if ( v1 <= 4 )
    return v3;
  v6 = dbl_1AA638;
LABEL_15:
  if ( v0 >= v6 )
    goto LABEL_57;
  if ( v1 <= 5 )
    return v3;
  v7 = dbl_1AA640;
LABEL_18:
  if ( v0 >= v7 )
    goto LABEL_68;
  if ( v1 <= 6 )
    return v3;
  v8 = dbl_1AA648;
LABEL_21:
  if ( v0 >= v8 )
    goto LABEL_71;
  if ( v1 <= 7 )
    return v3;
  v9 = dbl_1AA650;
LABEL_24:
  if ( v0 >= v9 )
    goto LABEL_74;
  if ( v1 > 8 )
  {
    v10 = dbl_1AA658;
LABEL_76:
    if ( v0 < v10 )
      return v3;
    return (int)((double)(unsigned __int8)byte_1AA608
               + (double)((unsigned __int8)byte_1AA609 - (unsigned __int8)byte_1AA608) / (v10 - v9) * (v0 - v9));
  }
  return v3;
}
