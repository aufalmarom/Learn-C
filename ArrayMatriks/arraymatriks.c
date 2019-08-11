#include <stdio.h>

int main(){
    int matriks[2][3][4] =  {
                            {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}},
                            {{13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24}}
                            }; 
    printf("%d\n", matriks[0][0][0]);
    printf("%d\n", matriks[1][0][2]);

    return 0;
}
