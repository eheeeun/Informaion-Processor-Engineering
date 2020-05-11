#include <stdio.h>

int main(){
  int exint[] = {2,4,2,27,6,4,7,2,3,4,5};
  printf("%d\n", sizeof(exint));  // output : 44 (number of elements * sizeof(int))
}
