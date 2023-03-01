void inverte(char *a, int comeco, int fim){
    int aux;
    if(comeco<=fim){
        aux = a[comeco];
        a[comeco] = a[fim];
        a[fim] = aux;
        return inverte(a, comeco+1, fim-1);
    }
}

char * addBinary(char * a, char * b){
    char*resp;
    int carry=0, tamA, tamB, tamResp, i=0, soma;

    tamA = strlen(a);
    tamB = strlen(b);

    if(tamA>tamB){
        tamResp = tamA + 1;
    } else{
        tamResp = tamB + 1;
    }

    resp = malloc((tamResp+1)*sizeof(char));
    inverte(a, 0, tamA);
    inverte(b, 0, tamB);

    while(i<tamA && i<tamB){
        soma = a[i] + b[i] + carry;
        if(soma>1){
            carry = 1;
            resp[i] = soma%2;
        } else{
            carry = 0;
            resp[i] = soma;
        }
       i++; 
    }

    while(i<tamB){
        soma = b[i] + carry;
        if(soma>1){
            carry = 1;
            resp[i] = soma%2;
        } else{
            carry = 0;
            resp[i] = soma;
        }
        i++;
    }

    while(i<tamA){
        soma = a[i] + carry;
        if(soma>1){
            carry = 1;
            resp[i] = soma%2;
        } else{
            carry = 0;
            resp[i] = soma;
        }
        i++;
    }

    inverte(resp, 0, tamResp);
    return resp;

}

/*
char * addBinary(char * a, char * b){
    int sizeA = strlen(a);
    int sizeB = strlen(b);
    int sizeOutput = (sizeA > sizeB ? sizeA : sizeB) + 1;
    char * output = (char *)malloc(sizeOutput + 1);
    int sum = 0;
    
    output[sizeOutput] = '\0';
    
    while(sizeA > 0 || sizeB > 0 || sum > 0) {
        
        if(sizeA > 0) {
            sum += a[--sizeA] - '0';
        }
        if(sizeB > 0) {
            sum += b[--sizeB] - '0';
        }
        output[--sizeOutput] = sum % 2 + '0';
        sum /= 2;
    }
    return output + sizeOutput;   
}
*/