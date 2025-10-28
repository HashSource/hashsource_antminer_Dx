_DWORD *__fastcall runtime_ctrl(int a1)
{
  _DWORD *v2; // r4
  int v3; // r1

  switch ( a1 )
  {
    case 1:
      v2 = calloc(1u, 0x2F0u);
      memcpy(v2, &off_102358, 0x2F0u);
      break;
    case 2:
      v2 = calloc(1u, 0x2F0u);
      memcpy(v2, &off_FE8B0, 0x2F0u);
      break;
    case 3:
      v2 = calloc(1u, 0x2F0u);
      memcpy(v2, &off_100AE0, 0x2F0u);
      break;
    case 4:
      v2 = calloc(1u, 0x2F0u);
      memcpy(v2, &off_10D428, 0x2F0u);
      break;
    case 5:
      v2 = calloc(1u, 0x2F0u);
      memcpy(v2, &off_10DA08, 0x2F0u);
      break;
    case 6:
      v2 = calloc(1u, 0x2F0u);
      memcpy(v2, &off_102648, 0x2F0u);
      break;
    case 7:
      v2 = calloc(1u, 0x2F0u);
      memcpy(v2, &off_103618, 0x2F0u);
      break;
    case 8:
      dword_129780 = -1621098496;
      v2 = calloc(1u, 0x2F0u);
      memcpy(v2, &off_129498, 0x2F0u);
      break;
    default:
      v2 = calloc(1u, 0x2F0u);
      memcpy(v2, &off_10D718, 0x2F0u);
      break;
  }
  pthread_mutex_lock(&stru_12BCB8);
  v3 = dword_12BCD0;
  v2[54] = a1;
  v2[30] = v3;
  dword_12BCD0 = v3 + 1;
  dword_12BCD4[v3] = (int)v2;
  pthread_mutex_unlock(&stru_12BCB8);
  return v2;
}
