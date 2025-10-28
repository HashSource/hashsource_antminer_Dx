int __fastcall json_object_seed(int oflag)
{
  int v1; // r1
  unsigned __int8 v2; // r2
  int v3; // r3
  int v4; // r3
  int v5; // r0
  int v6; // r5
  ssize_t v7; // r7
  int v8; // r5
  struct timeval v9; // [sp+0h] [bp-Ch] BYREF

  if ( !hashtable_seed )
  {
    v1 = oflag;
    oflag = 1;
    do
      v2 = __ldrex(byte_12A418);
    while ( __strex(1u, byte_12A418) );
    if ( v2 )
    {
      do
      {
        oflag = sched_yield();
        v3 = hashtable_seed;
        __dmb(0xBu);
        if ( v3 )
          break;
        oflag = sched_yield();
        v4 = hashtable_seed;
        __dmb(0xBu);
      }
      while ( !v4 );
    }
    else
    {
      if ( !v1 )
      {
        v5 = open("/dev/urandom", 0);
        v6 = v5;
        if ( v5 == -1 || (v7 = read(v5, &v9, 4u), close(v6), v7 != 4) )
        {
          gettimeofday(&v9, 0);
          v8 = v9.tv_usec ^ v9.tv_sec;
          oflag = getpid();
          v1 = oflag ^ v8;
        }
        else
        {
          oflag = LOBYTE(v9.tv_sec);
          v1 = HIBYTE(v9.tv_sec) | ((BYTE2(v9.tv_sec) | ((BYTE1(v9.tv_sec) | (LOBYTE(v9.tv_sec) << 8)) << 8)) << 8);
        }
        if ( !v1 )
          v1 = 1;
      }
      __dmb(0xBu);
      hashtable_seed = v1;
    }
  }
  return oflag;
}
