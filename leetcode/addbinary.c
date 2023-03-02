char * addBinary(char * a, char * b){
    char*resp;
    int carry=0, tamA, tamB, tamResp, soma;

    tamA = strlen(a);
    tamB = strlen(b);

    if(tamA>tamB){
        tamResp = tamA + 1;
    } else{
        tamResp = tamB + 1;
    }

    resp = (char *)malloc(tamResp+1);
    resp[tamResp] = '/0';

    while(tamA>0 || tamB>0 || carry>0){
        soma = carry;

        if(tamA>0){
            soma = soma + a[tamA];
            tamA--;
        }
        if(tamB>0){
            soma = soma + b[tamB];
            tamB--;
        } 

        soma = soma%2;
        carry = soma/2;

        resp[tamResp] = soma;
        tamResp--;
    }

    return resp + tamResp;

}