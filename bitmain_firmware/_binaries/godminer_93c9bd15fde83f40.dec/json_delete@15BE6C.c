void __fastcall json_delete(_DWORD *a1)
{
  void (**v2)(void); // r5
  void (*v3)(void); // r3
  _DWORD *v4; // r5
  _DWORD *v5; // r8
  _DWORD *v6; // r0
  _DWORD *v7; // r6
  unsigned int *v8; // r3
  unsigned int v9; // r2
  unsigned int v10; // r2
  unsigned int v11; // r1
  int v12; // r0
  unsigned int i; // r5
  _DWORD *v14; // r3
  unsigned int *v15; // r2
  unsigned int v16; // r1
  unsigned int v17; // r1

  if ( a1 )
  {
    switch ( *a1 )
    {
      case 0:
        v4 = (_DWORD *)a1[6];
        v5 = a1 + 5;
        if ( v4 != a1 + 5 )
        {
          do
          {
            v6 = (_DWORD *)v4[5];
            v7 = (_DWORD *)v4[1];
            if ( v6 )
            {
              v8 = v6 + 1;
              if ( v6[1] != -1 )
              {
                __dmb(0xBu);
                do
                {
                  v9 = __ldrex(v8);
                  v10 = v9 - 1;
                }
                while ( __strex(v10, v8) );
                if ( !v10 )
                  json_delete(v6);
              }
            }
            off_1A25EC(v4);
            v4 = v7;
          }
          while ( v7 != v5 );
        }
        v3 = (void (*)(void))off_1A25EC;
        if ( !a1[3] )
          goto LABEL_6;
        ((void (*)(void))off_1A25EC)();
        off_1A25EC(a1);
        break;
      case 1:
        v11 = a1[3];
        v12 = a1[4];
        if ( v11 )
        {
          for ( i = 0; i < v11; ++i )
          {
            v14 = *(_DWORD **)(v12 + 4 * i);
            if ( v14 )
            {
              v15 = v14 + 1;
              if ( v14[1] != -1 )
              {
                __dmb(0xBu);
                do
                {
                  v16 = __ldrex(v15);
                  v17 = v16 - 1;
                }
                while ( __strex(v17, v15) );
                if ( !v17 )
                  json_delete(v14);
                v11 = a1[3];
                v12 = a1[4];
              }
            }
          }
        }
        v2 = (void (**)(void))&off_1A25EC;
        v3 = (void (*)(void))off_1A25EC;
        if ( v12 )
          goto LABEL_5;
        goto LABEL_6;
      case 2:
        v2 = (void (**)(void))&off_1A25EC;
        v3 = (void (*)(void))off_1A25EC;
        if ( a1[2] )
        {
LABEL_5:
          v3();
          v3 = *v2;
        }
LABEL_6:
        ((void (__fastcall *)(_DWORD *))v3)(a1);
        break;
      case 3:
      case 4:
        off_1A25EC(a1);
        break;
      default:
        return;
    }
  }
}
