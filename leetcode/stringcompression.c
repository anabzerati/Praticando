int compress(char* chars, int charsSize){
    char s[charsSize];
    int tam = 0, i=0, j, indice = 0;
    s[charsSize-1] = '/0';

    while(i<charsSize){
        j = i + 1;
        while(j<charsSize && chars[i]==chars[j]){ //conta iguais
            j++;
        }

        chars[indice] = chars[i];
        indice++;

        tam = j - i;

        if(tam>1){ //se tiver mais de uma letra repetida
            char armazenar[10];
            int quant = 0;
            while(tam>0){
                armazenar[quant] = tam%10 + '0';
                quant++;
                tam = tam/10;
            }

            while(quant>=0){ //desinverter a ordem
                chars[indice] = armazenar[quant - 1];
                indice++;
                quant--;
            }
        }

        i = j; //i guarda o ultimo lido
    }

    return indice;
}