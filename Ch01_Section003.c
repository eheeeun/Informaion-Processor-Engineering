/*
  Section003
  Practice predicting stored value in variable.
*/
#include <stdio.h>

int main(){
  float j;
  scanf("%4f",&j);      // input : 12.123
  printf("%.1f\n",j);   // output : 12.1 (if there's no '.1', output is 12.10000)
  
  printf("\n");
  
  char a;
  scanf("%c", &a);      // input : SINAGONG
  printf("%c\n", a);    // output : S
  
  printf("\n");
  
  int i=0; char b[8];
  scanf("%4c", b);      // input : SINAGONG
  for(i=0; i<8; i++){   // output : SINA儆儆(only receives 4characters. remained area is filled with garbage value)
    printf("%c", b[i]);
  }
  
  printf("\n");
  
  i=0; char c[8];
  scanf("%s", c);       // input : GIL BUT
  for(i=0; i<8; i++){   // output : GIL 儆儆(save until meet blank)
    printf("%c", c[i]);
  }
  
  printf("\n");
  
  int d;
  float e;
  char f[8];
  scanf("%d %f %s", &d, &e, f); // input : 345 2.62e-6 LOVE
  printf("%d %e ", d, e);	// to express character 'e' for exponential, use '%e'
  i=0;
  for(i=0; i<8; i++){
    print("%c", f[i]);		// output : 345 2.620000e-05 LOVE 儆
  }
  
  printf("\n");
  
  char g[8], h[8];
  scanf("%c %5c", g, h);	// input : LOVE ME
  i=0;
  for(i=0; i<8; i++){
    printf("%c", g[i]);		// output : L儆儆儆
  }
  printf("\n");
  for(i=0; i<8; i++){
    printf("%c", h[i]);		// output : OVE M儆
  }
  
  printf("\n");
  
  int j;
  float k;
  scanf("%3d %5f", &j, &k); // input : 123456789
  printf("%d %f\n", j, k);  // output : 123 45678.000000
  
  printf("\n");
  
  int l;
  float m;
  scanf("3d%$$%3f", &l, &m);  // input : 123$$456789
  printf("%d %f\n", l, m);    // output : 123 456.000000
  
  printf("\n=======================================================\n");
  
  /*
    "%X.Yf"
      X만큼 자리를 확보하고 소숫점 자리 아래 Y자리까지 출력
  */
  
  printf("%3d\n", 2543);      // output : 2543
  printf("%6d\n", 2543);      // output :   2543  (two blanks exist ahead)
  printf("%-6d\n". 2543);     // output : 2543    (two blanks exist in the end)
  printf("%06d", 2543);       // output : 002543
  
  printf("%8.2f", 245.2555);  // output : __245.25
  printf("%e", 25.43);        // output : 2.543000e+1

  printf("%.3s", "help me");    // output : hel
  printf("%3s", "help me");     // output : help me
  printf("%8.6s", "help me");   // output :   help m (two blanks exist ahead)
  printf("-8.6s", "help me");   // output : help m   (two blanks exist in the end)
  
  printf("a=8.2f \tb=%e\n", 125.23f, 3141.592e-1);  // output :   125.23   3.141592e+02
  
  int n, o;
  scanf("%3d \n \t %3d", &n, &o); // input : 12345678 (don't care about '\n', \t')
  printf("i=%d j=%d\n", n, o);    // output : i=123 j=456
  
  /*
    getchar(), gets(), putchat(), puts()
  */
  
  char p;
  p=getchar();  // input : GIL BUT
  putchar(a);   // output : G
  
  printf("\n");
  
  putchar('G');   // output : G
  putchar('G'+1); // output : H
  
  printf("\n");
  
  char q[10];
  gets(q);  // input : GIL BUT
  puts(q);  // output : GIL BUT
  
  puts("GIL BUT"); // output : GIL BUT (include '\n')
}
