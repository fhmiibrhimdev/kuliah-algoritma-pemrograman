// program yang mencetak angka genap dari 2 sampai 20 menggunakan perulangan while.

// sebelum perbaikan
#include <stdio.h>

int main() {
    intt i = 2;
    while (i <= 20) 
        printf("%d\n", i);
        i += 2;
    }
    return 0;
}

// setelah perbaikan
#include <stdio.h>

int main() {
    int i = 2;
    while (i <= 20) {
        printf("%d\n", i);
        i += 2;
    }
    return 0;
}
