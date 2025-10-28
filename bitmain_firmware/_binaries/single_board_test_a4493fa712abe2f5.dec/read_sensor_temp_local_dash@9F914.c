int __fastcall read_sensor_temp_local_dash(int a1, _DWORD *a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8)
{
  int v12; // r9
  signed int v13; // r2
  unsigned __int8 *v14; // r10
  int v15; // r11
  int v16; // r7
  signed int v17; // [sp+14h] [bp-20h]
  int v18; // [sp+1Ch] [bp-18h] BYREF
  int v19; // [sp+20h] [bp-14h] BYREF
  int v20; // [sp+24h] [bp-10h]
  int v21; // [sp+28h] [bp-Ch]
  int v22; // [sp+2Ch] [bp-8h]

  if ( a5 )
  {
    if ( a5 == 1 )
    {
      v12 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 280) + a8);
      v20 = 0;
      LOBYTE(v21) = 0;
      v22 = 0;
      BYTE1(v21) = v12;
      v19 = 26738688;
      HIWORD(v21) = 32;
      if ( !(*(int (__fastcall **)(int, int *))(a1 + 140))(a1, &v19) )
      {
        usleep(0xC350u);
        v13 = *(_DWORD *)(a1 + 180);
        v20 = 0;
        v21 = 0;
        v22 = 0;
        if ( v13 >= 1 )
          v13 = 1;
        v19 = 0;
        v17 = v13;
        v14 = (unsigned __int8 *)calloc(v13, 0xCu);
        HIWORD(v21) = 32;
        BYTE1(v21) = v12;
        (*(void (__fastcall **)(int, int *, signed int, unsigned __int8 *, int *))(a1 + 160))(a1, &v19, v17, v14, &v18);
        v15 = v18;
        if ( v18 == 1 )
        {
          if ( v14[4] == v12 )
          {
            v16 = v14[3];
          }
          else
          {
            v16 = 0;
            v15 = 0;
          }
          free(v14);
          if ( *(_DWORD *)(a1 + 304) == 1 )
            v16 -= 64;
          *a2 = v16;
          *a3 = v15;
        }
        else
        {
          free(v14);
        }
      }
    }
  }
  else
  {
    sub_9F58C((char *)(a1 + 124), a2, a3, a8);
  }
  return 0;
}
