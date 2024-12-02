// program yang meminta pengguna memasukkan angka, dan program akan mencetak angka tersebut. Program berhenti jika angka yang dimasukkan adalah -1.
#include <stdio.h>

int main() {
    int angka;
    do {
        printf("Masukkan angka: ");
        scanf("%d", &angka);
        if (angka != -1) {
            printf("Anda memasukkan: %d\n", angka);
        }
    } while (angka != -1);
    printf("Program berhenti.\n");
    return 0;
}
