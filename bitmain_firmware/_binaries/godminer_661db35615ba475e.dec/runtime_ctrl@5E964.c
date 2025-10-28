_DWORD *__fastcall runtime_ctrl(int a1)
{
  _DWORD *v2; // r5
  int v3; // r3

  switch ( a1 )
  {
    case 1:
      v2 = calloc(1u, 0x2F0u);
      memcpy(v2, off_164238, 0x2F0u);
      break;
    case 2:
      v2 = calloc(1u, 0x2F0u);
      memcpy(v2, off_166220, 0x2F0u);
      break;
    case 3:
      v2 = calloc(1u, 0x2F0u);
      memcpy(v2, off_161AF8, 0x2F0u);
      break;
    case 4:
      v2 = calloc(1u, 0x2F0u);
      memcpy(v2, off_164818, 0x2F0u);
      break;
    case 5:
      v2 = calloc(1u, 0x2F0u);
      memcpy(v2, off_177480, 0x2F0u);
      break;
    case 6:
      v2 = calloc(1u, 0x2F0u);
      memcpy(v2, off_164528, 0x2F0u);
      break;
    case 7:
      v2 = calloc(1u, 0x2F0u);
      memcpy(v2, off_165F30, 0x2F0u);
      break;
    default:
      v2 = calloc(1u, 0x2F0u);
      memcpy(v2, off_164B08, 0x2F0u);
      break;
  }
  pthread_mutex_lock(&stru_190E30);
  v3 = dword_190E48;
  v2[54] = a1;
  v2[30] = v3;
  dword_190E48 = v3 + 1;
  *((_DWORD *)&stru_190E30 + v3 + 7) = v2;
  pthread_mutex_unlock(&stru_190E30);
  return v2;
}
