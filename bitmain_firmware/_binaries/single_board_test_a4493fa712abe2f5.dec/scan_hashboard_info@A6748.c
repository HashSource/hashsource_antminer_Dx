int __fastcall scan_hashboard_info(int a1, int a2, const char *a3, _BYTE *a4, _BYTE *a5, int a6)
{
  signed int v8; // r4
  unsigned int v9; // r0
  signed int v10; // r4
  char *v11; // r4
  char *v12; // r11
  char *v13; // r0
  bool v14; // zf
  int *v15; // r6
  const char *v16; // r4
  size_t v17; // r0
  bool v18; // cc
  size_t v19; // r0
  size_t v21; // r4
  char *v22; // r0
  char haystack[4]; // [sp+14h] [bp-10h] BYREF
  int v26; // [sp+18h] [bp-Ch]
  __int16 v27; // [sp+1Ch] [bp-8h]

  if ( a1 != 3 )
  {
    printf("%s scanner chain number is wrong!!!\n", "scan_hashboard_info");
    return -1;
  }
  do
  {
    while ( 1 )
    {
      *(_DWORD *)haystack = 0;
      v26 = 0;
      v27 = 0;
      pthread_mutex_lock(&stru_12B550);
      v8 = sub_828CC(3);
      pthread_mutex_unlock(&stru_12B550);
      if ( v8 <= 0 )
        goto LABEL_5;
      if ( v8 >= 9 )
        v8 = 9;
      pthread_mutex_lock(&stru_12B550);
      v9 = sub_828CC(3);
      if ( v8 < v9 )
        break;
      if ( v9 )
      {
        v8 = v9;
        break;
      }
      pthread_mutex_unlock(&stru_12B550);
LABEL_5:
      usleep(0x2710u);
      a6 -= 15;
      usleep(0x1388u);
      if ( a6 <= 0 )
        goto LABEL_22;
    }
    v10 = sub_8258C(3, (int)haystack, v8);
    pthread_mutex_unlock(&stru_12B550);
    if ( v10 <= 0 )
      goto LABEL_5;
    v11 = strstr(haystack, "\r\n");
    v12 = strchr(haystack, 10);
    v13 = strchr(haystack, 13);
    v14 = v12 == 0;
    if ( !v12 )
      v14 = v11 == 0;
    v15 = (int *)dword_1298F0;
    if ( !v14 )
    {
      if ( v11 )
      {
        *v11 = 0;
        v16 = v11 + 2;
        v17 = strlen(haystack);
        v18 = v17 > (unsigned int)v15;
        LOWORD(v15) = 20776;
        if ( !v18 )
        {
LABEL_28:
          HIWORD(v15) = (unsigned int)&gTest_loop >> 16;
          memcpy(&byte_3B5138[v15[2]], haystack, v17 + 1);
          sub_CEB00(a2, a4, a3, a5);
          if ( *a4 && *a5 )
            return 0;
          goto LABEL_20;
        }
      }
      else
      {
        if ( v13 )
        {
LABEL_16:
          *v13 = 0;
          v16 = v13 + 1;
        }
        else
        {
          *v12 = 0;
          v16 = v12 + 1;
        }
        v17 = strlen(haystack);
        v18 = v17 > (unsigned int)v15;
        LOWORD(v15) = (unsigned __int16)&gTest_loop;
        if ( !v18 )
          goto LABEL_28;
      }
      HIWORD(v15) = (unsigned int)&gTest_loop >> 16;
LABEL_20:
      memset(byte_3B5138, 0, sizeof(byte_3B5138));
      strcpy(byte_3B5138, v16);
      goto LABEL_21;
    }
    if ( v13 )
      goto LABEL_16;
    v21 = strlen(haystack);
    v15 = &gTest_loop;
    if ( v21 > dword_1298F0 )
    {
      memset(byte_3B5138, 0, sizeof(byte_3B5138));
      v22 = byte_3B5138;
    }
    else
    {
      v22 = &byte_3B5138[dword_3B5130];
    }
    memcpy(v22, haystack, v21 + 1);
LABEL_21:
    a6 -= 5;
    v19 = strlen(byte_3B5138);
    v15[2] = v19;
    dword_1298F0 = 255 - v19;
    usleep(0x1388u);
  }
  while ( a6 > 0 );
LABEL_22:
  if ( !*a4 )
    return -1;
  if ( *a5 )
    return 0;
  return -1;
}
