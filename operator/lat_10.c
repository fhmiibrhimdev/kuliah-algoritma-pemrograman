// Operator - Latihan 10
// Sebelum Diperbaiki
#include <stdio.h>
#include <conio.h>
main()
{
  int a,x,y;
  printf (“Masukkan Nilai X= ”); scanf (“%i”, &x);
  printf (“Masukkan Nilai Y= ”); scanf (“%i”, &y);
  a = x | y;
  printf (“Hasilnya adalah %i”,a);
}

// Setelah Diperbaiki
#include <stdio.h>
#include <conio.h>

int main() {
    int a, x, y;
    printf("Masukkan Nilai X = ");
    scanf("%i", &x);
    printf("Masukkan Nilai Y = ");
    scanf("%i", &y);

    a = x | y; // Operasi OR bitwise
    printf("Hasilnya adalah %i", a);
}
