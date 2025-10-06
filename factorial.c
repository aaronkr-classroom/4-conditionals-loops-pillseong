//factorial.c
int factorial(int);

int main() {
   int num = 5,
      result = factorial(num);

   printf("%d!= %d", num, result);

   return 0;

}
//재귀적 함수
int factorial(int num){
   if (num <= 1) return 1;
   else return num * factorial(num - 1);


}