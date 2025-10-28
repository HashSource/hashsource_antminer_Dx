int __fastcall json_dumps(_DWORD *a1, int a2)
{
  char *v4; // r0
  int v5; // r4
  char *v6; // r6
  char *v7; // r0
  unsigned int v8; // lr
  int v9; // r12
  char *v10; // r3
  unsigned int v11; // r2
  char *v12; // r3
  int v13; // r0
  _DWORD *v14; // r6
  int v15; // r8
  _DWORD *v16; // r0
  int *v17; // r7
  unsigned int *v18; // r3
  unsigned int v19; // r2
  unsigned int v20; // r2
  size_t v22; // r7
  void *v23; // r0
  __int64 v24; // [sp+0h] [bp-34h]
  char *s[3]; // [sp+8h] [bp-2Ch] BYREF
  unsigned int v26; // [sp+14h] [bp-20h] BYREF
  void *v27; // [sp+18h] [bp-1Ch]
  int v28; // [sp+1Ch] [bp-18h]
  int v29; // [sp+20h] [bp-14h] BYREF
  void *ptr; // [sp+24h] [bp-10h]
  _DWORD v31[3]; // [sp+28h] [bp-Ch] BYREF

  s[2] = (char *)16;
  s[1] = 0;
  v4 = (char *)off_1A25E8(0x10u);
  v5 = (int)v4;
  s[0] = v4;
  if ( !v4 )
    return v5;
  *v4 = 0;
  if ( (a2 & 0x200) != 0 )
    goto LABEL_7;
  if ( !a1 )
  {
    v5 = 0;
    v6 = s[0];
    goto LABEL_28;
  }
  if ( *a1 <= 1u )
  {
LABEL_7:
    v28 = 3;
    v26 = 0;
    v7 = (char *)off_1A25E8(0x40u);
    v27 = v7;
    if ( v7 )
    {
      ptr = &v29;
      v29 = (int)&v29;
      v8 = 1 << v28;
      v31[1] = v31;
      v31[0] = v31;
      if ( 1 << v28 )
      {
        if ( v8 <= 4 )
        {
          v11 = 0;
        }
        else
        {
          v9 = 0;
          v10 = v7 + 236;
          v11 = ((v8 - 5) & 0xFFFFFFFC) + 4;
          do
          {
            v9 += 4;
            __pld(v10);
            *((_DWORD *)v10 - 58) = &v29;
            *((_DWORD *)v10 - 59) = &v29;
            v10 += 32;
            *((_DWORD *)v10 - 64) = &v29;
            *((_DWORD *)v10 - 65) = &v29;
            *((_DWORD *)v10 - 62) = &v29;
            *((_DWORD *)v10 - 63) = &v29;
            *((_DWORD *)v10 - 60) = &v29;
            *((_DWORD *)v10 - 61) = &v29;
          }
          while ( v9 != v11 );
        }
        v12 = &v7[8 * v11];
        do
        {
          *((_DWORD *)v12 + 1) = &v29;
          v12 += 8;
          *(_DWORD *)&v7[8 * v11++] = &v29;
        }
        while ( v11 < v8 );
      }
      LODWORD(v24) = sub_12CA0C;
      HIDWORD(v24) = s;
      v13 = sub_13144C(a1, a2, 0, &v26, v24);
      v14 = ptr;
      v15 = v13;
      if ( ptr != &v29 )
      {
        do
        {
          v16 = (_DWORD *)v14[5];
          v17 = (int *)v14[1];
          if ( v16 )
          {
            v18 = v16 + 1;
            if ( v16[1] != -1 )
            {
              __dmb(0xBu);
              do
              {
                v19 = __ldrex(v18);
                v20 = v19 - 1;
              }
              while ( __strex(v20, v18) );
              if ( !v20 )
                json_delete(v16);
            }
          }
          off_1A25EC(v14);
          v14 = v17;
        }
        while ( v17 != &v29 );
      }
      if ( v27 )
        off_1A25EC(v27);
      v6 = s[0];
      if ( v15 )
      {
        v5 = 0;
      }
      else
      {
        v22 = strlen(s[0]);
        v23 = off_1A25E8(v22 + 1);
        v5 = (int)v23;
        if ( v23 )
        {
          memcpy(v23, v6, v22);
          *(_BYTE *)(v5 + v22) = 0;
        }
        v6 = s[0];
      }
    }
    else
    {
      v5 = 0;
      v6 = s[0];
    }
    goto LABEL_28;
  }
  v5 = a2 & 0x200;
  v6 = s[0];
LABEL_28:
  if ( v6 )
    off_1A25EC(v6);
  return v5;
}
