/*
  Latihan 2 - Modul
  Buatlah simulasi menu program dengan tampilan di bawah ini menggunakan WHILE
  MENU PILIHAN
  1. Baca Data
  2. Ubah Data
  3. Hapus Data
  4. Exit
  5. Pilihan Anda (1/2/3/4)?
*/

// Tanpa penjelasan
#include <stdio.h>
#include <stdlib.h>

int main() {
    int pilihan = 0;

    while (pilihan != 4) {
        printf("MENU PILIHAN\n");
        printf("1. Baca Data\n");
        printf("2. Ubah Data\n");
        printf("3. Hapus Data\n");
        printf("4. Exit\n");
        printf("Pilihan Anda (1/2/3/4)? ");
        scanf("%d", &pilihan);
        getchar();

        switch (pilihan) {
            case 1:
                printf("\nAnda memilih menu 1\n");
                break;
            case 2:
                printf("\nAnda memilih menu 2\n");
                break;
            case 3:
                printf("\nAnda memilih menu 3\n");
                break;
            case 4:
                break;
            default:
                printf("\nPilihan tidak valid. Silakan coba lagi.\n");
        }

        if (pilihan != 4) {
            printf("Tekan ENTER untuk kembali ke menu utama...");
            getchar();
            system("cls");
        }
    }

    return 0;
}

// Dengan penjelasan

// #include <stdio.h>
// #include <stdlib.h> // Untuk fungsi system("cls") dan getchar()

// int main() {
//     int pilihan = 0;

//     while (pilihan != 4) {
//         // Tampilkan menu
//         printf("MENU PILIHAN\n");
//         printf("1. Baca Data\n");
//         printf("2. Ubah Data\n");
//         printf("3. Hapus Data\n");
//         printf("4. Exit\n");
//         printf("Pilihan Anda (1/2/3/4)? ");
//         scanf("%d", &pilihan);
//         getchar(); // Untuk mengonsumsi karakter newline setelah input angka

//         // Proses pilihan
//         switch (pilihan) {
//             case 1:
//                 printf("\nAnda memilih menu 1\n");
//                 break;
//             case 2:
//                 printf("\nAnda memilih menu 2\n");
//                 break;
//             case 3:
//                 printf("\nAnda memilih menu 3\n");
//                 break;
//             case 4:
//                 // Langsung keluar dari program tanpa tambahan pesan
//                 break;
//             default:
//                 printf("\nPilihan tidak valid. Silakan coba lagi.\n");
//         }

//         // Jika pilihan bukan 4, minta user untuk menekan ENTER
//         if (pilihan != 4) {
//             printf("Tekan ENTER untuk kembali ke menu utama...");
//             getchar(); // Tunggu user menekan ENTER
//             system("cls"); // Membersihkan layar (opsional, untuk tampilan lebih rapi)
//         }
//     }

//     return 0;
// }
