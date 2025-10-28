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

  if ( !byte_191C88 )
  {
    clock_gettime(1, &stru_191C8C);
    v1 = dword_18F48C;
    v2 = 0;
    dword_191CA0 = 0;
    dword_191CA4 = 0;
    v3 = dword_18F48C != 0;
    byte_191C88 = 1;
    if ( dword_18F48C != 1 )
      goto LABEL_3;
LABEL_19:
    v10 = sub_5D2EC();
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
  clock_gettime(1, &stru_191C94);
  v9 = *(_QWORD *)&dword_191CA0;
  v7 = 1000LL * (stru_191C94.tv_sec - stru_191C8C.tv_sec) + (stru_191C94.tv_nsec - stru_191C8C.tv_nsec) / 1000000;
  if ( *(__int64 *)&dword_191CA0 >= 20 )
  {
    if ( v7 < dword_18F4AC )
      return v7;
  }
  else if ( v7 < dword_18F4A8 )
  {
    return v7;
  }
  clock_gettime(1, &stru_191C8C);
  v1 = dword_18F48C;
  v2 = v9 + 1;
  *(_QWORD *)&dword_191CA0 = v9 + 1;
  v3 = dword_18F48C != 0;
  if ( dword_18F48C == 1 )
    goto LABEL_19;
LABEL_3:
  if ( v3 )
  {
    if ( v1 == 2 )
    {
      flt_191BF4 = (float)sub_62E88(dword_18F4A0);
      if ( byte_191C79 )
      {
        v16 = dword_191C7C;
      }
      else
      {
        v16 = pwm_init(0, 1);
        dword_191C7C = v16;
        byte_191C79 = 1;
      }
      pwm_get(v16, &v26);
      v17 = flt_191C0C;
      v18 = flt_191C10;
      if ( v2 >= 21 )
        v19 = dword_191BFC;
      else
        v19 = dword_191BF8;
      flt_191C08 = flt_191BF0 - flt_191BF4;
      flt_191C0C = flt_191BF0 - flt_191BF4;
      v20 = v26;
      flt_191C10 = v17;
      v21 = (float)((float)((float)(flt_191BF0 - flt_191BF4) * *(float *)&dword_191C00)
                  + (float)((float)((float)(flt_191BF0 - flt_191BF4) - v17) * *(float *)&v19))
          + (float)((float)((float)((float)(flt_191BF0 - flt_191BF4) + v18) - (float)(v17 + v17)) * flt_191C04);
      if ( sub_62E88(dword_18F498) < dword_18F49C )
        v22 = (float)((int)v21 + v20);
      else
        v22 = 100.0;
      v23 = flt_191BEC;
      if ( flt_191BEC < v22 )
        v23 = v22;
      if ( v23 > flt_191BE8 )
        v23 = flt_191BE8;
      v4 = (int)v23;
      if ( (unsigned int)(int)v23 >= 0x64 )
        v4 = 100;
    }
    else
    {
      v4 = 100;
    }
    v5 = (unsigned __int8)byte_191C79;
    if ( byte_191C79 )
    {
      v6 = dword_191C7C;
      goto LABEL_10;
    }
    goto LABEL_37;
  }
  v24 = sub_5D2EC();
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
  v15 = sub_62E88(dword_18F498);
  v4 = LODWORD(flt_18F490);
  if ( v15 >= dword_18F49C )
    v11 = 100;
  v5 = (unsigned __int8)byte_191C79;
  if ( v11 >= SLODWORD(flt_18F490) )
    v4 = v11;
  if ( v4 >= SLODWORD(flt_18F494) )
    v4 = LODWORD(flt_18F494);
  if ( (unsigned int)v4 >= 0x64 )
    v4 = 100;
  if ( byte_191C79 )
  {
    v6 = dword_191C7C;
    goto LABEL_10;
  }
LABEL_37:
  v6 = pwm_init(v5, 100);
  dword_191C7C = v6;
  byte_191C79 = 1;
LABEL_10:
  LODWORD(v7) = pwm_get(v6, &v26);
  if ( v26 != v4 )
  {
    if ( fan_pwm_fixed )
      v8 = fan_pwm;
    else
      v8 = v4;
    LODWORD(v7) = pwm_set(dword_191C7C, v8);
  }
  return v7;
}
