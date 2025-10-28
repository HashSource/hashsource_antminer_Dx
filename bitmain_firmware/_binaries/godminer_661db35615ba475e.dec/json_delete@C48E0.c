void __fastcall json_delete(_DWORD *a1)
{
  void (*v2)(void); // r3
  _DWORD *v3; // r5
  _DWORD *v4; // r8
  _DWORD *v5; // r0
  _DWORD *v6; // r6
  unsigned int *v7; // r3
  unsigned int v8; // r2
  unsigned int v9; // r2
  unsigned int v10; // r1
  int v11; // r0
  unsigned int i; // r5
  _DWORD *v13; // r3
  unsigned int *v14; // r2
  unsigned int v15; // r1
  unsigned int v16; // r1

  if ( a1 )
  {
    switch ( *a1 )
    {
      case 0:
        v3 = (_DWORD *)a1[6];
        v4 = a1 + 5;
        if ( v3 != a1 + 5 )
        {
          do
          {
            v5 = (_DWORD *)v3[5];
            v6 = (_DWORD *)v3[1];
            if ( v5 )
            {
              v7 = v5 + 1;
              if ( v5[1] != -1 )
              {
                __dmb(0xBu);
                do
                {
                  v8 = __ldrex(v7);
                  v9 = v8 - 1;
                }
                while ( __strex(v9, v7) );
                if ( !v9 )
                  json_delete(v5);
              }
            }
            off_190550(v3);
            v3 = v6;
          }
          while ( v6 != v4 );
        }
        v2 = (void (*)(void))off_190550;
        if ( !a1[3] )
          goto LABEL_6;
        ((void (*)(void))off_190550)();
        off_190550(a1);
        break;
      case 1:
        v10 = a1[3];
        v11 = a1[4];
        if ( v10 )
        {
          for ( i = 0; i < v10; ++i )
          {
            v13 = *(_DWORD **)(v11 + 4 * i);
            if ( v13 )
            {
              v14 = v13 + 1;
              if ( v13[1] != -1 )
              {
                __dmb(0xBu);
                do
                {
                  v15 = __ldrex(v14);
                  v16 = v15 - 1;
                }
                while ( __strex(v16, v14) );
                if ( !v16 )
                  json_delete(v13);
                v10 = a1[3];
                v11 = a1[4];
              }
            }
          }
        }
        v2 = (void (*)(void))off_190550;
        if ( v11 )
          goto LABEL_5;
        goto LABEL_6;
      case 2:
        v2 = (void (*)(void))off_190550;
        if ( a1[2] )
        {
LABEL_5:
          v2();
          v2 = (void (*)(void))off_190550;
        }
LABEL_6:
        ((void (__fastcall *)(_DWORD *))v2)(a1);
        break;
      case 3:
      case 4:
        off_190550(a1);
        break;
      default:
        return;
    }
  }
}
