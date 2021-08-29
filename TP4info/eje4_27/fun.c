#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include <ctype.h>

int validacionIp_ipv4(char *ip){
    char ip_ipv4[50];
    int i,contadorDeToken;
    char *token;

    strcpy(ip_ipv4,ip);

    for (token=strtok(ip_ipv4,"."), i = 0; token != NULL; i++,token = strtok(NULL,"."))
    {
        if(strlen(token)!=3){
            printf("introducir TRES numeros entre punto y punto \n");
            return 0;   
        }
        else if ((atoi(token)>256) || (atoi(token)<=0))
        {      
            printf("introdusca numeros mayores a 0 y menores a 255 \n");
            return 0;
        }
        else if (contadorDeToken>3)
        {
            printf("introdusca solo 4 tokens\n");
            return 0;
        }
        else if(!isdigit(token[0]) | !isdigit(token[1]) |!isdigit(token[2])){
            printf("introdusca introdusca numeros\n");
            return 0;
        }
        contadorDeToken+=1;
    }
    return 1;
}
int validacionMail(char * mail){
    //char mailCopy[50];
    //strcpy(mailCopy,mail);
    char *token;
    int i,a;
    for (token=strtok(mail,"@"),i = 0; token != NULL; token=strtok(NULL,"@"),i++)
    {
        //verifiricacion del gmail.com despues del "@"
        if(i==1){
            char *token2;
            
            for (token2=strtok(token,"."),a = 0; token2!=NULL; token2=strtok(NULL,"."),a++)
            {
                //verifica que este el "gmail"
                //printf("token2: %s a: %i\n",token2,a);
                if (a==0)
                {
                    if (strcmp(token2,"gmail"))
                    {
                        printf("te falto el agregar gmail despues del arroga\n");
                        return 0;
                    }                   
                }
                //verifica que este el "com"
                if (a==1 & strcmp(token2,"com"))
                {
                    printf("te falto agregar el \"com\" despues del punto\n");
                    return 0;
                }
                
            }
            
        }
        //verifica que la cantidad de caracteres antes del @
        if(i==0 & strlen(token)<8){
            printf("ingrese almenos 8 caracteres antes del \"@\"\n");
            return 0;
        }
    }
    return 1;
}
/*
bool validacionTargeta(char * targeta);*/