void troca(int *primeiro, int *segundo){
    int aux;
    aux = *primeiro;
    *primeiro = *segundo;
    *segundo = aux;
}

int removeElement(int* nums, int numsSize, int val){
    int i, ultimo = numsSize - 1, arrumado = 0;

    while(arrumado<=ultimo){
        if(nums[ultimo] == val){
            ultimo--;
        } else if(nums[arrumado] == val){
            troca(&nums[arrumado], &nums[ultimo]);
        } else{
            arrumado++;
        }
    }

    return arrumado;
}