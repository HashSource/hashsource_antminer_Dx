int *__fastcall parse_config(_DWORD *a1, void **a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  void *v7; // r7
  void *v8; // r5
  _DWORD *v9; // r7
  unsigned int v10; // r5
  int key_value_boolean; // r10
  _BYTE *v12; // r10
  int *v13; // r0
  int *v14; // r2
  const char *v15; // r0
  void *v16; // r1
  int v17; // r1
  _BYTE *v18; // r10
  _DWORD *v19; // r0
  _BYTE *v20; // r2
  int v21; // [sp+0h] [bp-14h]
  int *v22; // [sp+Ch] [bp-8h]

  v4 = (_DWORD *)json_object_get(a1, "TestCoins");
  if ( !v4 )
    return 0;
  v5 = v4;
  if ( *v4 != 1 )
    return 0;
  v7 = (void *)v4[3];
  a2[1] = v7;
  v8 = calloc(80 * (_DWORD)v7, 1u);
  *a2 = v8;
  if ( v8 )
  {
    if ( !v7 )
      return 0;
    if ( *v5 != 1 )
      return 0;
    if ( !v5[3] )
      return 0;
    v9 = *(_DWORD **)v5[4];
    if ( !v9 )
      return 0;
    v10 = 0;
    key_value_boolean = 0;
    do
    {
      if ( *v9 )
      {
        printf("JSON value type error!");
      }
      else
      {
        v12 = *a2;
        v13 = (int *)json_object_get(v9, "Algo");
        v14 = v13;
        if ( !v13 )
          return 0;
        if ( *v13 != 2 )
          return 0;
        v15 = (const char *)v13[2];
        v22 = v14;
        if ( !v15 )
          return 0;
        v16 = *(void **)&v12[80 * v10];
        v21 = 80 * v10;
        if ( v16 )
        {
          free(v16);
          v17 = *v22;
          *(_DWORD *)&v12[80 * v10] = 0;
          if ( v17 == 2 )
            v15 = (const char *)v22[2];
          else
            v15 = 0;
        }
        *(_DWORD *)&v12[80 * v10] = _strdup(v15);
        v18 = *a2;
        v19 = (_DWORD *)json_object_get(v9, "CoreNum");
        if ( !v19 )
          return 0;
        if ( *v19 != 3 )
          return 0;
        v20 = *a2;
        *(_DWORD *)&v18[v21 + 12] = v19[2];
        if ( !get_key_value_interger(v9, "PatternNum", &v20[v21 + 16])
          || !get_key_value_interger(v9, "Timeout", (char *)*a2 + v21 + 20)
          || !get_key_value_array_interger(v9, "Frequence", (void **)((char *)*a2 + v21 + 24), (char *)*a2 + v21 + 28)
          || !get_key_value_array_real(
                v9,
                "MinValidPatternPecent",
                (void **)((char *)*a2 + v21 + 36),
                (char *)*a2 + v21 + 40)
          || !get_key_value_real(v9, "MaxHWPecent", (char *)*a2 + v21 + 48) )
        {
          return 0;
        }
        key_value_boolean = get_key_value_boolean(v9, "IsTest", (_BYTE *)*a2 + v21 + 56);
      }
      if ( !key_value_boolean )
        return 0;
      if ( (unsigned int)a2[1] <= ++v10 )
        break;
      if ( *v5 != 1 )
        break;
      if ( v10 >= v5[3] )
        break;
      v9 = *(_DWORD **)(v5[4] + 4 * v10);
    }
    while ( v9 );
    if ( !get_key_value_string(a1, "WorkPathPre", a2 + 3)
      || !get_key_value_string(a1, "AsicType", a2 + 4)
      || !get_key_value_interger(a1, "AsicNum", a2 + 10)
      || !get_key_value_interger(a1, "OpenCoreGap", a2 + 11)
      || !get_key_value_array_interger(a1, "Voltage", a2 + 12, a2 + 13)
      || !get_key_value_array_interger(a1, "TempSensor", a2 + 17, a2 + 18)
      || !get_key_value_interger(a1, "StartTemp", a2 + 19)
      || !get_key_value_interger(a1, "AlarmTemp", a2 + 20)
      || !get_key_value_interger(a1, "TempWaitingTime", a2 + 21)
      || !get_key_value_interger(a1, "Baudrate", a2 + 24)
      || !get_key_value_interger(a1, "TestMode", a2 + 23)
      || !get_key_value_interger(a1, "FanSpeed", a2 + 25)
      || !get_key_value_interger(a1, "DelayPowerDown", a2 + 26) )
    {
      return 0;
    }
    return get_key_value_string(a1, "RepeatCtrl", a2 + 29);
  }
  else
  {
    printf("%s malloc failed!\n", "parse_config");
    return 0;
  }
}
