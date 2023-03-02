/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int soma, carry = 1, i, j=0;
    int *resp;

    resp = malloc((digitsSize + 1)*sizeof(int));

    i = digitsSize;
    while(i>0 && carry!=0){
        soma = digits[i] + carry;
        if(soma>9){
            carry = 1;
            soma = 0;
        } else{
            carry = 0;
        }
        digits[i] = soma;
        i--;
    }

    if(carry){
        resp[0] = 1;
    }

    i = carry;
    for(j=0; j<digitsSize; j++){
        resp[i] = digits[j];
        i++;
    }

    *returnSize = digitsSize + carry;
    return resp;
}