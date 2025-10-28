int __fastcall json_object_iter_set_new(_DWORD *a1, int a2, _DWORD *a3)
{
  unsigned int *v4; // r3
  unsigned int v5; // r1
  unsigned int v6; // r1
  bool v7; // zf
  _DWORD *v8; // r0
  unsigned int *v9; // r3
  unsigned int v10; // r4
  unsigned int v11; // r4
  int v12; // [sp+0h] [bp-8h]
  _DWORD *v13; // [sp+4h] [bp-4h]

  if ( !a1 || *a1 )
    goto LABEL_4;
  v7 = a3 == 0;
  if ( a3 )
    v7 = a2 == 0;
  if ( v7 )
  {
LABEL_4:
    if ( a3 && a3[1] != -1 )
    {
      v4 = a3 + 1;
      __dmb(0xBu);
      do
      {
        v5 = __ldrex(v4);
        v6 = v5 - 1;
      }
      while ( __strex(v6, v4) );
      if ( !v6 )
        json_delete(a3);
    }
    return -1;
  }
  else
  {
    v8 = *(_DWORD **)(a2 + 12);
    if ( v8 )
    {
      if ( v8[1] != -1 )
      {
        v9 = v8 + 1;
        __dmb(0xBu);
        do
        {
          v10 = __ldrex(v9);
          v11 = v10 - 1;
        }
        while ( __strex(v11, v9) );
        if ( !v11 )
        {
          v12 = a2;
          v13 = a3;
          json_delete(v8);
          a2 = v12;
          a3 = v13;
        }
      }
    }
    *(_DWORD *)(a2 + 12) = a3;
    return 0;
  }
}
