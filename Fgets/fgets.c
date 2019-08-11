#include <stdio.h>

int main(){
    char name[20], add[10];

    printf("Nama : ");
    fgets(name, sizeof(name), stdin);

    printf("Umur : ");
    fgets(add, sizeof(add), stdin);

    printf("----------Result-----------\n");

    printf("Nama: %s", name);
    printf("Umur: %s", add);

    return 0;

}
