//gugudan.c
#include <stdio.h>

void dan(int);



int main() {
   for (int d = 1; d <= 9; d++) {
      printf("***%d dan: ***\n", d);
      for (int num = 1; num <= 9; num++) {
         printf("%d*%d=%d\n", d, num, d*num);
      }
      dan(d);
      printf("\n");


   }
   return 0;


}

void dan(int step) {
   for (int i = 1; i <= 9; i++) {
      printf("%d * %d= %d\n", step, i, step*i);
   }
}