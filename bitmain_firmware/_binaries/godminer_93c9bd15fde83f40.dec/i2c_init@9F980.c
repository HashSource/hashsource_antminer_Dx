int i2c_init()
{
  int v0; // r4
  int result; // r0
  _DWORD *v2; // r7
  _DWORD *v3; // r0
  int v4; // [sp+Ch] [bp-10h] BYREF
  _DWORD v5[3]; // [sp+10h] [bp-Ch] BYREF

  v4 = -1;
  if ( !platform_inited )
    return sub_9C030();
  v0 = dword_1A8A1C;
  if ( !dword_1A8A1C )
  {
    v2 = malloc(4u);
    if ( v2 )
    {
      v3 = malloc(0x28u);
      if ( v3 )
      {
        v3[5] = 0;
        v3[6] = 0;
        v3[7] = 0;
        v3[8] = 0;
        v3[3] = 0;
        v3[4] = 0;
        *v2 = v3;
        v3[9] = sub_975E8;
        *v3 = v3 + 1;
        v3[1] = v3 + 1;
        v3[2] = v3 + 1;
      }
      else
      {
        *v2 = 0;
        v2 = 0;
      }
    }
    dword_1A8A88 = (int)v2;
    pthread_mutex_init(&stru_1A8A70, 0);
  }
  result = v0 + 1;
  v5[0] = 0;
  dword_1A8A1C = v0 + 1;
  v4 = v0 + 1;
  v5[1] = 0;
  if ( dword_1A8A88 )
  {
    insert_c_rb(*(_DWORD *)dword_1A8A88, &v4, 4u, v5, 8u);
    return v4;
  }
  return result;
}
