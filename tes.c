#include <stdio.h>

int main() {
    //variabel
    int kkm = 80;
    int nilai;

    printf("SELAMAT DATANG DI PROGRAM PENILAIAN MAHASISWA\n");

    //looping
   for (int i = 0; i < kkm; i++) {
        printf("Masukkan nilai mata kuliah anda : ");
        scanf("%d", &nilai);
    }
    //boolean
    if (nilai > kkm) {
        printf("Selamat anda lulus dari matkul ini!");
    }

    else if (nilai == kkm) {
        printf("Selamat anda telah memenuhi nilai matkul ini!");

    }

    else (nilai < kkm); {
        printf("Maaf anda tidak lulus dari matkul ini dan remedial");
    }

    return 0;

}