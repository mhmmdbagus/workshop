#include <stdio.h>

int main()
{
    int lagi = 0;
    int nilai = 0;
    int kkm = 80;

    printf("Selamat datang di program penginputan nilai mahasiswa\n");

    do
    {
        printf("Masukkan nilai mata kuliah: ");
        scanf("%d", &nilai);

        if (nilai >= kkm)
        {
            printf("Mahasiswa ini lulus mata kuliah!\n");
        }
        else
        {
            printf("Mahasiswa ini mengulang. Silahkan menginformasikan untuk remedial\n");
        }

        printf("Isi ulang nilai mahasiswa? (1 untuk ya, selain 1 untuk tidak): ");
        scanf("%d", &lagi);
    } while (lagi == 1);

    return 0;
}