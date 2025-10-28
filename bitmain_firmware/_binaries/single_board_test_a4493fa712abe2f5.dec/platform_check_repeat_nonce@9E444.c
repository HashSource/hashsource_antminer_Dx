int __fastcall platform_check_repeat_nonce(_DWORD *a1, int a2, char *s2)
{
  size_t v3; // r8
  int v5; // r5
  int v7; // r4
  const void *v8; // r7
  void *v9; // r5
  char *v10; // r9
  char *v11; // r7
  char *v12; // r0
  char *v13; // r1
  bool v14; // zf
  void *v15; // r0
  char *v17; // r5
  char *v18; // r0
  char *v19; // r11
  char *v20; // r8
  int v21; // t1
  char *v22; // r0
  char *v23; // r0
  char *v24; // r0
  int v25; // r3
  size_t v26; // [sp+3Ch] [bp-1040h]
  char *v27; // [sp+44h] [bp-1038h]
  void *ptr; // [sp+48h] [bp-1034h]
  char *v29; // [sp+4Ch] [bp-1030h]
  int v31; // [sp+64h] [bp-1018h]
  int v32; // [sp+68h] [bp-1014h]
  int v33; // [sp+74h] [bp-1008h]
  char v34[4100]; // [sp+78h] [bp-1004h] BYREF

  v3 = a1[153];
  v5 = a1[69];
  v7 = v3 * 2 * a2;
  v8 = (const void *)(v5 + v7);
  v26 = v3 + v7;
  if ( !memcmp((const void *)(v5 + v7), s2, v3) || (v9 = (void *)(v5 + v26), !memcmp(v9, s2, v3)) )
  {
    v10 = (char *)calloc(2 * v3 + 1, 1u);
    ptr = v10;
    v11 = (char *)calloc(2 * v3 + 1, 1u);
    v12 = (char *)calloc(2 * v3 + 1, 1u);
    v13 = v12;
    v14 = v10 == 0;
    if ( v10 )
      v14 = v11 == 0;
    v27 = v12;
    if ( v14 )
    {
      if ( !v12 )
      {
        if ( v11 )
          goto LABEL_17;
        goto LABEL_9;
      }
    }
    else
    {
      if ( !v12 )
        goto LABEL_17;
      if ( v3 )
      {
        v17 = s2 - 1;
        v18 = &s2[v3 - 1];
        v19 = v11;
        v20 = v13;
        v29 = v18;
        do
        {
          v21 = (unsigned __int8)*++v17;
          v22 = v10;
          v10 += 2;
          sprintf(v22, "%02x", v21);
          v23 = v19;
          v19 += 2;
          sprintf(v23, "%02x", *(unsigned __int8 *)(a1[69] + v7 + v17 - s2));
          v24 = v20;
          v20 += 2;
          sprintf(v24, "%02x", *(unsigned __int8 *)(a1[69] + v26 + v17 - s2));
        }
        while ( v17 != v29 );
      }
      pthread_mutex_lock(&stru_3B526C);
      v32 = a1[31];
      v25 = dword_3B52A8++;
      logfmt_raw(
        v34,
        0x1000u,
        0,
        v25,
        "chain",
        5,
        3,
        v31,
        (__int64)v32,
        0,
        v33,
        "asic %d repeat nonce %s %s %s",
        a2,
        ptr,
        v11,
        v27);
      pthread_mutex_unlock(&stru_3B526C);
      zlog(
        g_zc,
        "/home/xingfei.wang/work/1764/godminer/backend/backend_base.c",
        60,
        "platform_check_repeat_nonce",
        27,
        81,
        20,
        v34);
    }
    free(v27);
    if ( v11 )
    {
LABEL_17:
      free(v11);
      v15 = ptr;
      if ( !ptr )
        return 4;
      goto LABEL_10;
    }
LABEL_9:
    v15 = ptr;
    if ( !ptr )
      return 4;
LABEL_10:
    free(v15);
    return 4;
  }
  memcpy(v9, v8, v3);
  memcpy((void *)(a1[69] + v7), s2, v3);
  return 0;
}
