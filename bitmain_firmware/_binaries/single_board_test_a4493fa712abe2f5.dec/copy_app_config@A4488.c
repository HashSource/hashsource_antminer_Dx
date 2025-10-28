__int64 __fastcall copy_app_config(int a1)
{
  const char *v1; // r7
  size_t v3; // r0
  _DWORD *v4; // r4
  size_t v5; // r0
  size_t v6; // r0
  size_t v7; // r0
  int v8; // r1
  __int64 v9; // kr00_8
  int v10; // r3
  __int64 result; // r0

  v1 = *(const char **)(a1 + 20);
  v3 = strlen(v1);
  memcpy((void *)MES2Local_Config_Information, v1, v3);
  v4 = (_DWORD *)MES2Local_Config_Information;
  v5 = strlen(*(const char **)(a1 + 24));
  memcpy((void *)(MES2Local_Config_Information + 16), *(const void **)(a1 + 24), v5);
  v4[8] = 0;
  v4[9] = 0;
  v4[10] = 0;
  v4[11] = 0;
  v6 = strlen(*(const char **)(a1 + 28));
  memcpy(v4 + 8, *(const void **)(a1 + 28), v6);
  v4[12] = 0;
  v4[13] = 0;
  v4[14] = 0;
  v4[15] = 0;
  v7 = strlen(*(const char **)(a1 + 16));
  memcpy(v4 + 12, *(const void **)(a1 + 16), v7);
  v8 = *(_DWORD *)(a1 + 32);
  v9 = *(_QWORD *)(a1 + 36);
  LODWORD(result) = *(_DWORD *)(a1 + 40);
  v10 = *(_DWORD *)(a1 + 108);
  *((_BYTE *)v4 + 88) = 0;
  HIDWORD(result) = v8 != 0;
  *((_BYTE *)v4 + 188) = BYTE4(result);
  v4[16] = HIDWORD(v9);
  *((_BYTE *)v4 + 189) = (_DWORD)v9 != 0;
  *((_BYTE *)v4 + 468) = v10 != 0;
  *((_BYTE *)v4 + 89) = 1;
  return result;
}
