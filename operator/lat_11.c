#include <stdio.h>

int main() {
  int a, x, y;
  printf("Masukkan Nilai X = ");
  scanf("%i", &x);
  printf("Masukkan Nilai Y = ");
  scanf("%i", &y);
  
  a = x ^ y;  // Operasi XOR bitwise
  printf("Hasilnya adalah %i", a);

  return 0;
}
