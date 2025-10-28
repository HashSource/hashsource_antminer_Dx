int __fastcall get_sensor_type(int a1)
{
  const char *v1; // r4

  v1 = (const char *)(a1 + 96);
  if ( !strcmp((const char *)(a1 + 96), "TMP451") )
  {
    printf("sensor type is TMP451");
    return 1;
  }
  else if ( !strcmp(v1, "NCT218") )
  {
    printf("sensor type is NCT218");
    return 5;
  }
  else if ( !strcmp(v1, "LM75A") )
  {
    printf("sensor type is LM75A");
    return 10;
  }
  else if ( !strcmp(v1, "TMP75A") )
  {
    printf("sensor type is TMP75A");
    return 11;
  }
  else if ( !strcmp(v1, "DS75S") )
  {
    printf("sensor type is DS75S");
    return 12;
  }
  else if ( !strcmp(v1, "GM452") )
  {
    printf("sensor type is GM452");
    return 13;
  }
  else if ( !strcmp(v1, "CT75") )
  {
    printf("sensor type is CT75");
    return 14;
  }
  else
  {
    printf("Can't get sensor type. temp_sensor_type: %s", v1);
    return 0;
  }
}
