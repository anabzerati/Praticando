char * intToRoman(int num){
    char *resp;
    int milhar, centena, dezena, unidade, tam=0;

    resp = malloc(15*sizeof(char));
    for(int i=0; i<15; i++){
        resp[i] = '/0';
    }

    milhar = num/1000;
    centena = (num%1000)/100;
    dezena = (num%100)/10;
    unidade = (num%10);

    while(milhar!=0){
        strcat(resp, "M");
        milhar--;
    }

    if(centena <= 3){
        while(centena!=0){
            strcat(resp, "C");
            centena--;
        }
    } else if(centena == 4){
        strcat(resp, "CD");
    } else if(centena == 5){
        strcat(resp, "D");
    } else if(centena>5 && centena<9){
        strcat(resp, "D");
        while(centena>5){
            strcat(resp, "C");
            centena--;
        }
    } else if(centena == 9){
        strcat(resp, "CM");
    }

    if(dezena <= 3){
        while(dezena!=0){
            strcat(resp, "X");
            dezena--;
        }
    } else if(dezena == 4){
        strcat(resp, "XL");
    } else if(dezena == 5){
        strcat(resp, "L");
    } else if(dezena>5 && dezena<9){
        strcat(resp, "L");
        while(centena>5){
            strcat(resp, "X");
            dezena--;
        }
    } else if(dezena == 9){
        strcat(resp, "LC");
    }

    if(unidade <= 3){
        while(unidade!=0){
            strcat(resp, "I");
            unidade--;
        }
    } else if(unidade == 4){
        strcat(resp, "IV");
    } else if(unidade == 5){
        strcat(resp, "V");
    } else if(unidade>5 && unidade<9){
        strcat(resp, "V");
        while(unidade>5){
            strcat(resp, "I");
            unidade--;
        }
    } else if(unidade == 9){
        strcat(resp, "IX");
    }

    return resp;
}