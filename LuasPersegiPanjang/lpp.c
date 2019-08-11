#include <stdio.h>

int main(){
    float panjang, lebar;

    printf("Program Penghitung Luas Bangun\n");
    printf("Masukkan Panjang: ");
    scanf("%f", &panjang);
    printf("Masukkan Lebar: ");
    scanf("%f", &lebar);
    
    printf("Luas Bangun: %2.f\n",  panjang * lebar);

    return 0;
}
