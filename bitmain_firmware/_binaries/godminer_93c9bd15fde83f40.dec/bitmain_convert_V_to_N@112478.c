int bitmain_convert_V_to_N()
{
  double v0; // d0
  int v1; // r0
  double v2; // d7
  int v3; // s19
  double v4; // d6
  double v5; // d5
  double v6; // d4
  double v7; // d5
  double v8; // d4
  double v9; // d5
  double v10; // d6
  char v12[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( dword_1AA660 <= 1 )
    goto LABEL_61;
  v1 = dword_1AA660 - 1;
  if ( v0 < dbl_1AA610 )
  {
    if ( v0 < dbl_1AA618 )
    {
      if ( dword_1AA660 == 2 )
        goto LABEL_61;
      v2 = dbl_1AA620;
      v3 = -1;
LABEL_30:
      if ( v0 < v2 )
      {
        if ( v1 <= 2 )
          goto LABEL_56;
        v4 = dbl_1AA628;
        if ( v0 < dbl_1AA628 )
          goto LABEL_68;
LABEL_10:
        v3 = (int)((double)(unsigned __int8)byte_1AA602
                 + (double)((unsigned __int8)byte_1AA603 - (unsigned __int8)byte_1AA602) / (v4 - v2) * (v0 - v2));
        if ( v1 <= 3 )
          goto LABEL_56;
        v5 = dbl_1AA630;
        if ( v0 < v4 )
          goto LABEL_12;
LABEL_39:
        if ( v0 >= v5 )
        {
          if ( v1 <= 4 )
            goto LABEL_56;
          v6 = dbl_1AA638;
          if ( v0 >= dbl_1AA638 )
            goto LABEL_43;
          goto LABEL_58;
        }
LABEL_40:
        v3 = (int)((double)(unsigned __int8)byte_1AA603
                 + (double)((unsigned __int8)byte_1AA604 - (unsigned __int8)byte_1AA603) / (v5 - v4) * (v0 - v4));
        if ( v1 <= 4 )
          goto LABEL_56;
        v6 = dbl_1AA638;
        if ( v0 < v5 )
        {
LABEL_15:
          if ( v0 < v6 )
          {
            if ( v1 <= 5 )
              goto LABEL_56;
            v7 = dbl_1AA640;
            goto LABEL_18;
          }
          goto LABEL_58;
        }
        if ( v0 >= dbl_1AA638 )
        {
LABEL_43:
          if ( v1 <= 5 )
            goto LABEL_56;
          v7 = dbl_1AA640;
          goto LABEL_45;
        }
LABEL_58:
        v3 = (int)((double)(unsigned __int8)byte_1AA604
                 + (double)((unsigned __int8)byte_1AA605 - (unsigned __int8)byte_1AA604) / (v6 - v5) * (v0 - v5));
        if ( v1 <= 5 )
          goto LABEL_56;
        v7 = dbl_1AA640;
        if ( v0 < v6 )
        {
LABEL_18:
          if ( v0 < v7 )
          {
            if ( v1 <= 6 )
              goto LABEL_56;
            v8 = dbl_1AA648;
            goto LABEL_21;
          }
          goto LABEL_76;
        }
LABEL_45:
        if ( v0 >= v7 )
        {
          if ( v1 <= 6 )
            goto LABEL_56;
          v8 = dbl_1AA648;
          goto LABEL_48;
        }
LABEL_76:
        v3 = (int)((double)(unsigned __int8)byte_1AA605
                 + (double)((unsigned __int8)byte_1AA606 - (unsigned __int8)byte_1AA605) / (v7 - v6) * (v0 - v6));
        if ( v1 <= 6 )
          goto LABEL_56;
        v8 = dbl_1AA648;
        if ( v0 < v7 )
        {
LABEL_21:
          if ( v0 < v8 )
          {
            if ( v1 <= 7 )
              goto LABEL_56;
            v9 = dbl_1AA650;
            goto LABEL_24;
          }
          goto LABEL_79;
        }
LABEL_48:
        if ( v0 >= v8 )
        {
          if ( v1 <= 7 )
            goto LABEL_56;
          v9 = dbl_1AA650;
          goto LABEL_51;
        }
LABEL_79:
        v3 = (int)((double)(unsigned __int8)byte_1AA606
                 + (double)((unsigned __int8)byte_1AA607 - (unsigned __int8)byte_1AA606) / (v8 - v7) * (v0 - v7));
        if ( v1 <= 7 )
          goto LABEL_56;
        v9 = dbl_1AA650;
        if ( v0 < v8 )
        {
LABEL_24:
          if ( v0 < v9 )
          {
            if ( v1 <= 8 )
              goto LABEL_56;
            v10 = dbl_1AA658;
            goto LABEL_84;
          }
          goto LABEL_82;
        }
LABEL_51:
        if ( v0 >= v9 )
        {
          if ( v1 <= 8 )
            goto LABEL_56;
          v10 = dbl_1AA658;
          goto LABEL_54;
        }
LABEL_82:
        v3 = (int)((double)(unsigned __int8)byte_1AA607
                 + (double)((unsigned __int8)byte_1AA608 - (unsigned __int8)byte_1AA607) / (v9 - v8) * (v0 - v8));
        if ( v1 <= 8 )
          goto LABEL_56;
        v10 = dbl_1AA658;
        if ( v0 < v9 )
        {
LABEL_84:
          if ( v0 >= v10 )
LABEL_55:
            v3 = (int)((double)(unsigned __int8)byte_1AA608
                     + (double)((unsigned __int8)byte_1AA609 - (unsigned __int8)byte_1AA608) / (v10 - v9) * (v0 - v9));
LABEL_56:
          pthread_mutex_lock(&stru_1A8A24);
          logfmt_raw(
            v12,
            0x1000u,
            0,
            "N before calibration %d, N after calibration %d",
            (int)(1280.57782 - v0 * 73.979365),
            v3);
          pthread_mutex_unlock(&stru_1A8A24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/device/hal/power/bitmain_power_APW9.c",
            166,
            "bitmain_convert_V_to_N",
            22,
            547,
            60,
            v12);
          if ( v3 > 0 )
            return v3;
          goto LABEL_62;
        }
LABEL_54:
        if ( v0 >= v10 )
          goto LABEL_56;
        goto LABEL_55;
      }
      goto LABEL_7;
    }
LABEL_28:
    v3 = (int)((double)(unsigned __int8)byte_1AA600
             + (double)((unsigned __int8)byte_1AA601 - (unsigned __int8)byte_1AA600)
             / (dbl_1AA618 - dbl_1AA610)
             * (v0 - dbl_1AA610));
    if ( dword_1AA660 == 2 )
      goto LABEL_56;
    v2 = dbl_1AA620;
    if ( v0 >= dbl_1AA618 )
    {
LABEL_6:
      if ( v0 >= v2 )
      {
        if ( v1 <= 2 )
          goto LABEL_56;
        v4 = dbl_1AA628;
LABEL_36:
        if ( v0 >= v4 )
        {
          if ( v1 <= 3 )
            goto LABEL_56;
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
        goto LABEL_56;
      v4 = dbl_1AA628;
      if ( v0 < v2 )
      {
        if ( v0 >= dbl_1AA628 )
          goto LABEL_10;
LABEL_68:
        if ( v1 <= 3 )
          goto LABEL_56;
        v5 = dbl_1AA630;
LABEL_12:
        if ( v0 < v5 )
        {
          if ( v1 <= 4 )
            goto LABEL_56;
          v6 = dbl_1AA638;
          goto LABEL_15;
        }
        goto LABEL_40;
      }
      goto LABEL_36;
    }
    goto LABEL_30;
  }
  if ( v0 < dbl_1AA618 )
    goto LABEL_28;
  if ( dword_1AA660 != 2 )
  {
    v2 = dbl_1AA620;
    v3 = -1;
    goto LABEL_6;
  }
LABEL_61:
  pthread_mutex_lock(&stru_1A8A24);
  logfmt_raw(v12, 0x1000u, 0, "N before calibration %d, N after calibration %d", (int)(1280.57782 - v0 * 73.979365), -1);
  pthread_mutex_unlock(&stru_1A8A24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_D7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/power/bitmain_power_APW9.c",
    166,
    "bitmain_convert_V_to_N",
    22,
    547,
    60,
    v12);
LABEL_62:
  switch ( dword_1AA5F8 )
  {
    case 'A':
    case 'B':
      v3 = (int)(765.411764 - v0 * 35.833333);
      break;
    case 'C':
      v3 = (int)(933.240365 - v0 * 59.806034);
      break;
    case 'a':
      v3 = (int)(1144.50226 - v0 * 52.243589);
      break;
    case 'q':
    case 'r':
      v3 = (int)(1190.93534 - v0 * 78.742588);
      break;
    case 's':
      v3 = (int)(1280.57782 - v0 * 73.979365);
      break;
    default:
      v3 = -1;
      break;
  }
  return v3;
}
