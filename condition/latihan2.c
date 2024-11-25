#include <stdio.h>

int main() {
    int umur;
    printf("Masukkan umur: ");
    scanf("%d", & umur);
    if (umur >= 0 && umur <= 5) {
        printf("Kategori: Balita\n");
    } else if (umur <= 12) {
        printf("Kategori: Anak-anak\n");
    } else if (umur <= 17) {
        printf("Kategori: Remaja\n");
    } else if (umur <= 64) {
        printf("Kategori: Dewasa\n");
    } else if (umur >= 65) {
        printf("Kategori: Lanjut Usia\n");
    } else {
        printf("Umur tidak valid\n");
    }
    return 0;
}