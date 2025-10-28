void *__fastcall sub_57FD4(int a1, const void *a2, size_t a3)
{
  int v4; // r8
  int v6; // r5
  void (__fastcall *v7)(void *); // r7
  size_t v8; // r10
  void *v10; // r0
  void *v11; // r11
  void **v12; // r4
  void *v13; // r0

  v4 = *(_DWORD *)(a1 + 12);
  v6 = *(_DWORD *)(a1 + 20);
  v7 = *(void (__fastcall **)(void *))(*(_DWORD *)v4 + 32);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v6 + 4);
    v10 = malloc(v8);
    v11 = v10;
    if ( v10 )
    {
      memcpy(v10, *(const void **)v6, v8);
      v7 = *(void (__fastcall **)(void *))(*(_DWORD *)v4 + 32);
    }
    v7(v11);
    v6 = *(_DWORD *)(a1 + 20);
  }
  v12 = *(void ***)(v6 + 20);
  free(*v12);
  v13 = malloc(a3);
  *v12 = v13;
  return j_memcpy(v13, a2, a3);
}
