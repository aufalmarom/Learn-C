#include <stdio.h>

#define NAMA "Moh. Aufal Marom Arrozi"
#define KELAMIN "L"
#define UMUR 22

int main(){
    char kelamin[2], nama[20];

    printf("------fgets------\n");
    printf("Nama: ");
    fgets(nama, sizeof(nama), stdin);
    printf("Kelamin: ");
    fgets(kelamin, sizeof(kelamin), stdin);
    printf("------const------\n");
    printf("Nama: %s\n", NAMA);
    printf("Kelamin: %s\n", KELAMIN);
    printf("Umur: %d\n", UMUR);

    return 0;
}
