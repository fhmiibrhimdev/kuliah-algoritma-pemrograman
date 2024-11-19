// Operator - Latihan 8
// Sebelum Diperbaiki
#include <stdio.h>

#include <conio.h>

main() {
  int x;
  printf(“Masukkan Nilai X = ”);
  scanf(“ % i”, & x);
  x = x >> 1; //geser ke kanan 1 bit
  printf(“Hasil dari Geser 1 Bit Ke Kiri = % i”, x);
}

// Setelah Diperbaiki
#include <stdio.h>
#include <conio.h>

int main() {
    int x;
    printf("Masukkan Nilai X = ");
    scanf("%i", &x);
    
    x = x >> 1; // geser ke kanan 1 bit
    printf("Hasil dari Geser 1 Bit Ke Kanan = %i", x);
}
