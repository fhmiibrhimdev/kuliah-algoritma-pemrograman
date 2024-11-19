#include <stdio.h>
 
int main() {
    // Deklarasi variabel untuk menyimpan input
    float a, b, x, y, z, hasil;
 
    // Meminta pengguna untuk memasukkan nilai a, b, x, y, dan z
    printf("Masukkan nilai a: ");
    scanf("%f", &a);  // Input nilai a
    printf("Masukkan nilai b: ");
    scanf("%f", &b);  // Input nilai b
    printf("Masukkan nilai x: ");
    scanf("%f", &x);  // Input nilai x
    printf("Masukkan nilai y: ");
    scanf("%f", &y);  // Input nilai y
    printf("Masukkan nilai z: ");
    scanf("%f", &z);  // Input nilai z
 
    // Menghitung hasil berdasarkan rumus yang diberikan
    hasil = (a / b + 6) / (x - y / z);
 
    // Menampilkan hasil
    printf("Hasil dari rumus adalah: %f\n", hasil);
 
    return 0;
}
