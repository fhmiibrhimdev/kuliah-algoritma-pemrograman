/*
  Latihan 1 - Modul
  Buatlah program C++ untuk membuat tampilan segitiga seperti di bawah ini menggunakan FOR:
  *
  **
  ***
  ****
  *****
*/

#include <stdio.h>

int main() {
   int n;

   printf("Masukkan n= ");
   scanf("%d", &n);

   for(int i = 0; i <= n; i++) {
       for(int j = 0; j <= i; j++) {
           printf("* ");
       }
       printf("\n");
   }
}
