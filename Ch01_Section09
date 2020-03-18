#include <stdio.h>
int main(){
  int sub(int i, int j){
    return i-j;
  }
  int add(int i, int j){
    return i+j;
  }
  
  main(){
    int i, j, result;
    int (*pf)(int, int);
    scanf("%d %d", i, j); // 12 6 input
    
    pf=add;
    result=pf(i ,j);
    printf("%d, " result);// 18 output
    
    pf=sub;
    result=pf(i ,j);
    printf("%d" result);// 6 output
  }
}
