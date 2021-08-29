#include <stdio.h>
#include "fun.h"
int main(int argc, char const *argv[])
{
    char mail[50]="aaaaaaaaaaaaaal@gmail.com";
    char ip_ipv4[50]="222.212.002.255";
    char targeta[50];

    if(validacionIp_ipv4(ip_ipv4)){
        printf("la validacion de la ip es correcta\n");
    }else{printf("la validacion de la ip es incorrecta\n");}
    if(validacionMail(mail)){
        printf("la validacion del gmail es correcta\n");
    }else{printf("la validacion del gmail es incorrecta\n");}
    return 0;

}
