// Operator - TR 4

#include <stdio.h>

int main() {
    // Deklarasi variabel untuk menyimpan input
    int a, b, x, y, z, c;

    // Meminta pengguna untuk memasukkan nilai a, b, x, dan y
    printf("Masukkan nilai a: ");
    scanf("%d", &a);  // Input nilai a
    printf("Masukkan nilai b: ");
    scanf("%d", &b);  // Input nilai b
    printf("Masukkan nilai x: ");
    scanf("%d", &x);  // Input nilai x
    printf("Masukkan nilai y: ");
    scanf("%d", &y);  // Input nilai y

    // Menghitung ekspresi pertama
    z = (a * (1 << y)) || (x != y);
    printf("Hasil dari ekspresi pertama z = a * 2^y || x != y adalah: %d\n", z);

    // Menghitung ekspresi kedua
    c = !(a == b) && (a > b);
    printf("Hasil dari ekspresi kedua c = !(a == b) && (a > b) adalah: %d\n", c);

    return 0;
}
