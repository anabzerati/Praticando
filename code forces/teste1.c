#include <stdio.h>
#include <string.h>

void abrevia(char *palavra);

int main(){
    int quant;
    
    scanf("%d", &quant);
    
    for(int i=0; i < quant; i++){
        char palavra[100];
        
        scanf("%s", palavra);
        
        abrevia(palavra);
    }
    
    return 0;
}

void abrevia(char *palavra){
    int tam = strlen(palavra);
    
    if(tam <= 10){
        printf("%s\n", palavra);
    } else{
        char abreviacao[4];
        abreviacao[0] = palavra[0];
        int num = tam - 2;
        
        sprintf(abreviacao, "%d", num);
        sprintf(abreviacao, "%c", palavra[tam-1]);
        
        printf("%s", abreviacao);
    }
}