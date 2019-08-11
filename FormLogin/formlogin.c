#include <stdio.h>
#include <string.h>
void main(){
    char user[30], pass[30];

    printf("-------Form Login--------\n");
    printf("Username: ");
    fgets(user, sizeof(user), stdin);
    
    printf("Password: ");
    fgets(pass, sizeof(pass), stdin);

    if (strcmp(user, "aufal") == 0){
        if (strcmp(pass, "marom") == 0){
            printf("Berhasil Login \n");
        }else{
            printf("Password Salah \n");
        }
    }else{
        printf("Username tidak terdaftar \n");
    }    
}
