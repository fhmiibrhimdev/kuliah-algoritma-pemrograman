// Operator - TR 2

#include <stdio.h>
#include <math.h>  // Library untuk fungsi sqrt

int main() {
    // Deklarasi variabel untuk menyimpan input
    float a, b, c;

    // Meminta pengguna untuk memasukkan panjang sisi a dan b
    printf("Masukkan panjang sisi a: ");
    scanf("%f", &a);  // Input nilai a
    printf("Masukkan panjang sisi b: ");
    scanf("%f", &b);  // Input nilai b

    // Menghitung sisi miring c menggunakan rumus Pythagoras
    c = sqrt(a * a + b * b);

    // Menampilkan hasil panjang sisi miring
    printf("Panjang sisi miring (c) adalah: %f\n", c);

    return 0;
}
