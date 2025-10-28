_DWORD *__fastcall sha256_init(_DWORD *result)
{
  __int64 v1; // kr00_8
  int v2; // r4
  int v3; // lr
  int v4; // r12
  int v5; // r1
  int v6; // r3

  v1 = *(_QWORD *)((char *)&sha256_h0 + 4);
  v2 = HIDWORD(sha256_h0);
  result[34] = sha256_h0;
  result[35] = v1;
  v3 = unk_1A2A54;
  v4 = dword_1A2A58;
  result[36] = HIDWORD(v1);
  v5 = dword_1A2A5C;
  v6 = dword_1A2A60;
  result[37] = v2;
  result[38] = v3;
  result[39] = v4;
  result[40] = v5;
  result[41] = v6;
  result[1] = 0;
  *result = 0;
  return result;
}
