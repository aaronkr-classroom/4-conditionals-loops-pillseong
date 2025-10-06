#include <stdio.h>

void print_calendar(int this_mth);

int main() {
   int chuseok_mth = 10;
   int chuseok = 6;

   int today_mth = 9;
   int today = 30;

   if (today_mth == chuseok_mth && today == chuseok) {
      printf("good chuseock\n");
   }
   else {
      printf("No chuseock\n");
   }

   for (int i = today; i <= 31; i++) {
      printf("Today is %d월 %d일\n", today_mth, i);
   }

   print_calendar(today_mth);

   return 0;
}

void print_calendar(int this_mth) {
   int days;

   switch (this_mth) {
   case 1:
   case 3:
   case 5:
   case 7:
   case 8:
   case 10:
   case 12:
      days = 31; break;
   case 4:
   case 6:
   case 9:
   case 11:
      days = 30; break;
   case 2:
      days = 28; break;
   default:
      printf("That is not a month!\n");
      return;
   }

   printf("***%d월***\n", this_mth);
   for (int i = 1; i<= days; i++) {
      printf("%d\t", i);
      if (i % 7 == 0) {
         printf("\n");
      }
      
      
   }
   printf("\n");
}
