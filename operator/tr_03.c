// Operator - TR 3

#include <stdio.h>

int main() {
    // Deklarasi variabel untuk menyimpan input
    int A, B, C;

    // Meminta pengguna untuk memasukkan nilai A dan B
    printf("Masukkan nilai A: ");
    scanf("%d", &A);  // Input nilai A
    printf("Masukkan nilai B: ");
    scanf("%d", &B);  // Input nilai B

    // Menghitung ekspresi pertama dan menampilkan hasilnya
    C = (A + B - 2) != (B * 20);
    printf("Hasil dari ekspresi pertama C = (A + B - 2) != (B * 20) adalah: %d\n", C);

    // Menghitung ekspresi kedua dan menampilkan hasilnya
    C = (14 - A) <= (B * 5);
    printf("Hasil dari ekspresi kedua C = (14 - A) <= (B * 5) adalah: %d\n", C);

    return 0;
}
