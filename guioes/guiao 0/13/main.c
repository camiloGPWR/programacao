#include <stdio.h>
#include <string.h>
#define N 80

int naosei(char str1[N], char str2[N], char str3[N]){

    if(strcmp(str1, str2)==0){
        printf("Sao iguais");
    }else if(strlen(str1)== strlen(str2)){
        printf("Tamanho igual");
    }else if(strcmp(str1, str2)<0){
        printf("Nao e igual\n\n");
        strcat(str1, str2);
        strcpy(str3, str1);
        puts(str3);
    }else{
        printf("Nao e igual\n\n");
        strcat(str2, str1);
        strcpy(str3, str2);
        puts(str3);
    }



    return 0;
}


int main() {
    char str1[N]="ala meu carooiyiuy";
    char str2[N]="blaaaaaaaaaaa";
    char str3[N];
    naosei(str1, str2, str3);
    return 0;
}
