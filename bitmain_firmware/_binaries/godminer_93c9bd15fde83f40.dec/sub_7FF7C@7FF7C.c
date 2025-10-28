int __fastcall sub_7FF7C(int a1)
{
  int v1; // r11
  int *v2; // r10
  int result; // r0
  int *v4; // r11
  int v5; // t1
  _DWORD *v6; // r3
  int v7; // r7
  int v8; // lr
  int v9; // r4
  int v10; // r6
  _DWORD *v11; // r1
  int v12; // r12
  int v13; // r3
  int v14; // r2
  int v15; // r8
  int *v16; // lr
  int v17; // r3
  int v18; // t1
  _DWORD *v19; // r12
  int v20; // lr
  int v21; // r3
  int v22; // r2
  int v23; // r1
  int *v24; // r4
  int v25; // r3
  int v26; // t1
  int v27; // r11
  int *v28; // r10
  int *v29; // r11
  int v30; // t1
  _DWORD *v31; // r3
  int v32; // r7
  int v33; // lr
  int v34; // r4
  int v35; // r6
  _DWORD *v36; // r1
  int v37; // r12
  int v38; // r3
  int v39; // r2
  int v40; // r8
  int *v41; // lr
  int v42; // r3
  int v43; // t1
  _DWORD *v44; // r12
  int v45; // lr
  int v46; // r3
  int v47; // r2
  int v48; // r1
  int *v49; // r4
  int v50; // r3
  int v51; // t1
  int v52; // r11
  int *v53; // r10
  int *v54; // r11
  int v55; // t1
  int *v56; // r2
  int v57; // lr
  int v58; // r7
  int v59; // r4
  int v60; // r6
  _DWORD *v61; // r1
  int v62; // r12
  int v63; // r3
  int v64; // r2
  int v65; // r8
  int *v66; // lr
  int v67; // r3
  int v68; // t1
  _DWORD *v69; // r12
  int v70; // lr
  int v71; // r3
  int v72; // r2
  int v73; // r1
  int *v74; // r4
  int v75; // r3
  int v76; // t1

  switch ( a1 )
  {
    case 0:
      pthread_mutex_lock(&stru_1A9B48);
      v52 = dword_1A9B60;
      pthread_mutex_unlock(&stru_1A9B48);
      if ( v52 <= 0 )
        goto LABEL_167;
      v53 = dword_1A9B64;
      result = 0x80000000;
      v54 = &dword_1A9B64[v52];
      do
      {
        v55 = *v53++;
        v56 = &dword_1A4178[52 * *(_DWORD *)(v55 + 132)];
        v57 = *v56;
        v58 = v56[6];
        v59 = v56[2];
        v60 = v56[7];
        if ( v58 > 0 )
        {
          if ( v58 <= 8 )
          {
            v62 = 0;
          }
          else
          {
            v61 = (_DWORD *)(v57 + 116);
            v62 = 0;
            do
            {
              v63 = *(v61 - 29);
              v62 += 8;
              v64 = *(v61 - 28);
              v65 = *(v61 - 27);
              __pld(v61);
              v61 += 8;
              if ( v63 < v64 )
                v63 = v64;
              if ( v63 < v65 )
                v63 = v65;
              if ( v63 < *(v61 - 34) )
                v63 = *(v61 - 34);
              if ( v63 < *(v61 - 33) )
                v63 = *(v61 - 33);
              if ( v63 < *(v61 - 32) )
                v63 = *(v61 - 32);
              if ( v63 < *(v61 - 31) )
                v63 = *(v61 - 31);
              if ( v63 < *(v61 - 30) )
                v63 = *(v61 - 30);
              if ( result < v63 )
                result = v63;
            }
            while ( v62 != ((v58 - 9) & 0xFFFFFFF8) + 8 );
          }
          v66 = (int *)(v57 + 4 * v62);
          do
          {
            v68 = *v66++;
            v67 = v68;
            ++v62;
            if ( result < v68 )
              result = v67;
          }
          while ( v58 > v62 );
        }
        if ( v60 > 0 )
        {
          if ( v60 <= 8 )
          {
            v70 = 0;
          }
          else
          {
            v69 = (_DWORD *)(v59 + 116);
            v70 = 0;
            do
            {
              v71 = *(v69 - 29);
              v70 += 8;
              v72 = *(v69 - 28);
              v73 = *(v69 - 27);
              __pld(v69);
              v69 += 8;
              if ( v71 < v72 )
                v71 = v72;
              if ( v71 < v73 )
                v71 = v73;
              if ( v71 < *(v69 - 34) )
                v71 = *(v69 - 34);
              if ( v71 < *(v69 - 33) )
                v71 = *(v69 - 33);
              if ( v71 < *(v69 - 32) )
                v71 = *(v69 - 32);
              if ( v71 < *(v69 - 31) )
                v71 = *(v69 - 31);
              if ( v71 < *(v69 - 30) )
                v71 = *(v69 - 30);
              if ( result < v71 )
                result = v71;
            }
            while ( v70 != ((v60 - 9) & 0xFFFFFFF8) + 8 );
          }
          v74 = (int *)(v59 + 4 * v70);
          do
          {
            v76 = *v74++;
            v75 = v76;
            ++v70;
            if ( result < v76 )
              result = v75;
          }
          while ( v60 > v70 );
        }
      }
      while ( v54 != v53 );
      break;
    case 1:
      result = sub_7AC8C();
      break;
    case 2:
      pthread_mutex_lock(&stru_1A9B48);
      v27 = dword_1A9B60;
      pthread_mutex_unlock(&stru_1A9B48);
      if ( v27 <= 0 )
      {
LABEL_167:
        result = 0x80000000;
      }
      else
      {
        v28 = dword_1A9B64;
        result = 0x80000000;
        v29 = &dword_1A9B64[v27];
        do
        {
          v30 = *v28++;
          v31 = &dword_1A4178[52 * *(_DWORD *)(v30 + 132)];
          v32 = v31[6];
          v33 = v31[1];
          v34 = v31[3];
          v35 = v31[7];
          if ( v32 > 0 )
          {
            if ( v32 <= 8 )
            {
              v37 = 0;
            }
            else
            {
              v36 = (_DWORD *)(v33 + 116);
              v37 = 0;
              do
              {
                v38 = *(v36 - 29);
                v37 += 8;
                v39 = *(v36 - 28);
                v40 = *(v36 - 27);
                __pld(v36);
                v36 += 8;
                if ( v38 < v39 )
                  v38 = v39;
                if ( v38 < v40 )
                  v38 = v40;
                if ( v38 < *(v36 - 34) )
                  v38 = *(v36 - 34);
                if ( v38 < *(v36 - 33) )
                  v38 = *(v36 - 33);
                if ( v38 < *(v36 - 32) )
                  v38 = *(v36 - 32);
                if ( v38 < *(v36 - 31) )
                  v38 = *(v36 - 31);
                if ( v38 < *(v36 - 30) )
                  v38 = *(v36 - 30);
                if ( result < v38 )
                  result = v38;
              }
              while ( v37 != ((v32 - 9) & 0xFFFFFFF8) + 8 );
            }
            v41 = (int *)(v33 + 4 * v37);
            do
            {
              v43 = *v41++;
              v42 = v43;
              ++v37;
              if ( result < v43 )
                result = v42;
            }
            while ( v32 > v37 );
          }
          if ( v35 > 0 )
          {
            if ( v35 <= 8 )
            {
              v45 = 0;
            }
            else
            {
              v44 = (_DWORD *)(v34 + 116);
              v45 = 0;
              do
              {
                v46 = *(v44 - 29);
                v45 += 8;
                v47 = *(v44 - 28);
                v48 = *(v44 - 27);
                __pld(v44);
                v44 += 8;
                if ( v46 < v47 )
                  v46 = v47;
                if ( v46 < v48 )
                  v46 = v48;
                if ( v46 < *(v44 - 34) )
                  v46 = *(v44 - 34);
                if ( v46 < *(v44 - 33) )
                  v46 = *(v44 - 33);
                if ( v46 < *(v44 - 32) )
                  v46 = *(v44 - 32);
                if ( v46 < *(v44 - 31) )
                  v46 = *(v44 - 31);
                if ( v46 < *(v44 - 30) )
                  v46 = *(v44 - 30);
                if ( result < v46 )
                  result = v46;
              }
              while ( v45 != ((v35 - 9) & 0xFFFFFFF8) + 8 );
            }
            v49 = (int *)(v34 + 4 * v45);
            do
            {
              v51 = *v49++;
              v50 = v51;
              ++v45;
              if ( result < v51 )
                result = v50;
            }
            while ( v35 > v45 );
          }
        }
        while ( v28 != v29 );
      }
      break;
    case 3:
      pthread_mutex_lock(&stru_1A9B48);
      v1 = dword_1A9B60;
      pthread_mutex_unlock(&stru_1A9B48);
      if ( v1 <= 0 )
      {
        result = 0x7FFFFFFF;
      }
      else
      {
        v2 = dword_1A9B64;
        result = 0x7FFFFFFF;
        v4 = &dword_1A9B64[v1];
        do
        {
          v5 = *v2++;
          v6 = &dword_1A4178[52 * *(_DWORD *)(v5 + 132)];
          v7 = v6[6];
          v8 = v6[1];
          v9 = v6[3];
          v10 = v6[7];
          if ( v7 > 0 )
          {
            if ( v7 <= 8 )
            {
              v12 = 0;
            }
            else
            {
              v11 = (_DWORD *)(v8 + 116);
              v12 = 0;
              do
              {
                v13 = *(v11 - 29);
                v12 += 8;
                v14 = *(v11 - 28);
                v15 = *(v11 - 27);
                __pld(v11);
                v11 += 8;
                if ( v13 >= v14 )
                  v13 = v14;
                if ( v13 >= v15 )
                  v13 = v15;
                if ( v13 >= *(v11 - 34) )
                  v13 = *(v11 - 34);
                if ( v13 >= *(v11 - 33) )
                  v13 = *(v11 - 33);
                if ( v13 >= *(v11 - 32) )
                  v13 = *(v11 - 32);
                if ( v13 >= *(v11 - 31) )
                  v13 = *(v11 - 31);
                if ( v13 >= *(v11 - 30) )
                  v13 = *(v11 - 30);
                if ( result >= v13 )
                  result = v13;
              }
              while ( v12 != ((v7 - 9) & 0xFFFFFFF8) + 8 );
            }
            v16 = (int *)(v8 + 4 * v12);
            do
            {
              v18 = *v16++;
              v17 = v18;
              ++v12;
              if ( result >= v18 )
                result = v17;
            }
            while ( v7 > v12 );
          }
          if ( v10 > 0 )
          {
            if ( v10 <= 8 )
            {
              v20 = 0;
            }
            else
            {
              v19 = (_DWORD *)(v9 + 116);
              v20 = 0;
              do
              {
                v21 = *(v19 - 29);
                v20 += 8;
                v22 = *(v19 - 28);
                v23 = *(v19 - 27);
                __pld(v19);
                v19 += 8;
                if ( v21 >= v22 )
                  v21 = v22;
                if ( v21 >= v23 )
                  v21 = v23;
                if ( v21 >= *(v19 - 34) )
                  v21 = *(v19 - 34);
                if ( v21 >= *(v19 - 33) )
                  v21 = *(v19 - 33);
                if ( v21 >= *(v19 - 32) )
                  v21 = *(v19 - 32);
                if ( v21 >= *(v19 - 31) )
                  v21 = *(v19 - 31);
                if ( v21 >= *(v19 - 30) )
                  v21 = *(v19 - 30);
                if ( result >= v21 )
                  result = v21;
              }
              while ( v20 != ((v10 - 9) & 0xFFFFFFF8) + 8 );
            }
            v24 = (int *)(v9 + 4 * v20);
            do
            {
              v26 = *v24++;
              v25 = v26;
              ++v20;
              if ( result >= v26 )
                result = v25;
            }
            while ( v10 > v20 );
          }
        }
        while ( v2 != v4 );
      }
      break;
    default:
      result = sub_7FEE4(a1);
      break;
  }
  return result;
}
