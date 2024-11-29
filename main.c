#include <stdio.h>



int main(void){
      int x = 50;
      int y = 4;
      int z = 100;
      int a = 20;
      int b = 3;

      int mul = x * y;
      int diff = mul - z;
      int div = diff / a;
      int remain = div % b;

      printf("계산한 값 : %d", remain);
      printf("  \n %d ", x*y-z/a%b);
  
  return 0;
}