#include <stdio.h>
/*
  전치 후치 증감 연산 practice
*/
int main(){
  int a=1, b=2, c=3, d=4;
  printf("%d\n", d %= c < d ? c++ : d++); // output : 1
}
