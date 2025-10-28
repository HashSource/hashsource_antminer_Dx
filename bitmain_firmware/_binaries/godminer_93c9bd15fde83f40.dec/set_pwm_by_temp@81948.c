int set_pwm_by_temp()
{
  double v0; // d7
  int v1; // r3
  __int64 v2; // r6
  bool v3; // cf
  int v4; // r6
  unsigned int v5; // r0
  int v6; // r0
  __int64 v7; // r0
  unsigned int v8; // r1
  __int64 v9; // r8
  int v10; // r0
  int v11; // r7
  bool v12; // cc
  double v13; // d5
  int v14; // r0
  int v15; // r0
  int v16; // r0
  float v17; // s13
  float v18; // s14
  int v19; // s10
  int v20; // r6
  float v21; // s16
  float v22; // s14
  float v23; // s15
  int v24; // r0
  int v26; // [sp+4h] [bp-4h] BYREF

  if ( !byte_1A49A1 )
  {
    clock_gettime(1, &stru_1A49A4);
    v1 = dword_1A25A8;
    v2 = 0;
    dword_1A49B8 = 0;
    dword_1A49BC = 0;
    v3 = dword_1A25A8 != 0;
    byte_1A49A1 = 1;
    if ( dword_1A25A8 != 1 )
      goto LABEL_3;
LABEL_19:
    v10 = sub_7AC8C();
    if ( v10 <= 13 )
    {
      v11 = 20;
      goto LABEL_27;
    }
    v12 = (unsigned int)(v10 - 14) > 0x12;
    if ( (unsigned int)(v10 - 14) > 0x12 )
    {
      v13 = 1.42857143;
      v14 = v10 - 32;
      v0 = 60.0;
    }
    else
    {
      v13 = 2.10526316;
      v14 = v10 - 13;
    }
    if ( !v12 )
      v0 = 20.0;
    goto LABEL_26;
  }
  clock_gettime(1, &stru_1A49AC);
  v9 = *(_QWORD *)&dword_1A49B8;
  v7 = 1000LL * (stru_1A49AC.tv_sec - stru_1A49A4.tv_sec) + (stru_1A49AC.tv_nsec - stru_1A49A4.tv_nsec) / 1000000;
  if ( *(__int64 *)&dword_1A49B8 >= 20 )
  {
    if ( v7 < dword_1A25C8 )
      return v7;
  }
  else if ( v7 < dword_1A25C4 )
  {
    return v7;
  }
  clock_gettime(1, &stru_1A49A4);
  v1 = dword_1A25A8;
  v2 = v9 + 1;
  *(_QWORD *)&dword_1A49B8 = v9 + 1;
  v3 = dword_1A25A8 != 0;
  if ( dword_1A25A8 == 1 )
    goto LABEL_19;
LABEL_3:
  if ( v3 )
  {
    if ( v1 == 2 )
    {
      flt_1A45DC = (float)sub_7FF7C(dword_1A25BC);
      if ( byte_1A4990 )
      {
        v16 = dword_1A4994;
      }
      else
      {
        v16 = pwm_init(0, 1);
        dword_1A4994 = v16;
        byte_1A4990 = 1;
      }
      pwm_get(v16, &v26);
      v17 = flt_1A45F4;
      v18 = flt_1A45F8;
      if ( v2 >= 21 )
        v19 = dword_1A45E4;
      else
        v19 = dword_1A45E0;
      flt_1A45F0 = flt_1A45D8 - flt_1A45DC;
      flt_1A45F4 = flt_1A45D8 - flt_1A45DC;
      v20 = v26;
      flt_1A45F8 = v17;
      v21 = (float)((float)((float)(flt_1A45D8 - flt_1A45DC) * *(float *)&dword_1A45E8)
                  + (float)((float)((float)(flt_1A45D8 - flt_1A45DC) - v17) * *(float *)&v19))
          + (float)((float)((float)((float)(flt_1A45D8 - flt_1A45DC) + v18) - (float)(v17 + v17)) * flt_1A45EC);
      if ( sub_7FF7C(dword_1A25B4) < dword_1A25B8 )
        v22 = (float)((int)v21 + v20);
      else
        v22 = 100.0;
      v23 = flt_1A45D4;
      if ( flt_1A45D4 < v22 )
        v23 = v22;
      if ( v23 > flt_1A45D0 )
        v23 = flt_1A45D0;
      v4 = (int)v23;
      if ( (unsigned int)(int)v23 >= 0x64 )
        v4 = 100;
    }
    else
    {
      v4 = 100;
    }
    v5 = (unsigned __int8)byte_1A4990;
    if ( byte_1A4990 )
    {
      v6 = dword_1A4994;
      goto LABEL_10;
    }
    goto LABEL_37;
  }
  v24 = sub_7AC8C();
  if ( v24 <= 18 )
  {
    v11 = 40;
    goto LABEL_27;
  }
  if ( (unsigned int)(v24 - 19) <= 0xE )
  {
    v14 = v24 - 18;
    v13 = 0.666666667;
    v0 = 40.0;
LABEL_26:
    v11 = (int)(v0 + (double)v14 * v13);
    goto LABEL_27;
  }
  if ( (unsigned int)(v24 - 34) <= 4 )
  {
    v11 = 50;
    goto LABEL_27;
  }
  if ( (unsigned int)(v24 - 39) <= 9 )
  {
    v11 = (int)((double)(v24 - 38) + 50.0);
    goto LABEL_27;
  }
  if ( (unsigned int)(v24 - 49) <= 6 )
  {
    v14 = v24 - 48;
    v13 = 5.71428571;
    v0 = 60.0;
    goto LABEL_26;
  }
  v11 = 100;
LABEL_27:
  v15 = sub_7FF7C(dword_1A25B4);
  v4 = LODWORD(flt_1A25AC);
  if ( v15 >= dword_1A25B8 )
    v11 = 100;
  v5 = (unsigned __int8)byte_1A4990;
  if ( v11 >= SLODWORD(flt_1A25AC) )
    v4 = v11;
  if ( v4 >= SLODWORD(flt_1A25B0) )
    v4 = LODWORD(flt_1A25B0);
  if ( (unsigned int)v4 >= 0x64 )
    v4 = 100;
  if ( byte_1A4990 )
  {
    v6 = dword_1A4994;
    goto LABEL_10;
  }
LABEL_37:
  v6 = pwm_init(v5, 100);
  dword_1A4994 = v6;
  byte_1A4990 = 1;
LABEL_10:
  LODWORD(v7) = pwm_get(v6, &v26);
  if ( v26 != v4 )
  {
    if ( fan_pwm_fixed )
      v8 = fan_pwm;
    else
      v8 = v4;
    LODWORD(v7) = pwm_set(dword_1A4994, v8);
  }
  return v7;
}
