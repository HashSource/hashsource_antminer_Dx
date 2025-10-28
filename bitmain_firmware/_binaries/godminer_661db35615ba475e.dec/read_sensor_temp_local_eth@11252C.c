int __fastcall read_sensor_temp_local_eth(int a1, int *a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8)
{
  int v12; // r8
  int v13; // r7
  signed int v14; // r2
  void (__fastcall *v15)(int, int *, signed int, unsigned __int8 *, int *); // r9
  int v16; // r9
  unsigned __int8 *v17; // r0
  unsigned __int8 *ptr; // [sp+10h] [bp-24h]
  signed int v19; // [sp+14h] [bp-20h]
  int v20; // [sp+1Ch] [bp-18h] BYREF
  int v21; // [sp+20h] [bp-14h] BYREF
  int v22; // [sp+24h] [bp-10h]
  int v23; // [sp+28h] [bp-Ch]
  int v24; // [sp+2Ch] [bp-8h]

  if ( a5 )
  {
    if ( a5 == 1 )
    {
      v12 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 280) + a8);
      LOBYTE(v23) = 0;
      v22 = 0;
      v24 = 0;
      BYTE1(v23) = v12;
      v21 = 26738688;
      HIWORD(v23) = 56;
      v13 = (*(int (__fastcall **)(int, int *))(a1 + 140))(a1, &v21);
      if ( !v13 )
      {
        usleep(0xC350u);
        v14 = *(_DWORD *)(a1 + 180);
        v22 = 0;
        v23 = 0;
        v24 = 0;
        if ( v14 >= 1 )
          v14 = 1;
        v21 = 0;
        v19 = v14;
        ptr = (unsigned __int8 *)calloc(v14, 0xCu);
        HIWORD(v23) = 56;
        v15 = *(void (__fastcall **)(int, int *, signed int, unsigned __int8 *, int *))(a1 + 160);
        BYTE1(v23) = v12;
        v15(a1, &v21, v19, ptr, &v20);
        v16 = v20;
        if ( v20 == 1 )
        {
          if ( ptr[4] == v12 )
          {
            v13 = ptr[3];
            v17 = ptr;
          }
          else
          {
            v17 = ptr;
            v16 = 0;
          }
          free(v17);
          if ( *(_DWORD *)(a1 + 304) == 1 )
            v13 -= 64;
          *a2 = v13;
          *a3 = v16;
        }
        else
        {
          free(ptr);
        }
      }
    }
  }
  else
  {
    sub_112094((char *)(a1 + 124), a2, a3, a8);
  }
  return 0;
}
