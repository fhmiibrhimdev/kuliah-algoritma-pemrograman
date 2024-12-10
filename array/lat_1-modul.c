// Latihan 1 - Modul
#include <stdio.h>
#include <conio.h>

int main()
{
    int index, nilai[10];
    system("CLS");

    // input nilai mahasiswa
    printf("Input nilai 10 mahasiswa\n\n");

    for(index = 0; index < 10; index++)
    {
        printf("Mahasiswa %d: ", index+1);
        scanf("%d", &nilai[index]);
    }

    // tampilan nilai mahasiswa
    printf("\n\nNilai mahasiswa yang telah diinput: ");
    for(index = 0; index < 10; index++)
    {
        printf("%5.0i", nilai[index]);
    }

    getch();
}
