int cmpfunc(const int * a, const int * b){ 
    return (*b - *a); 
} 

void twoHeaviest(int *stones, int stonesSize){
    qsort(stones, stonesSize, sizeof(int), cmpfunc);
}

int lastStoneWeight(int *stones, int stonesSize){
    if(stonesSize < 2){
        return stones[0];
    }
    while(true){
        twoHeaviest(stones, stonesSize);
        int x = stones[0], y = stones[1];
        stones[0] = stones[1] = 0;
        if(x != y){
            stones[0] = x - y;
        }
        if(y == 0){
            return stones[0];
        }
    }
    return stones[0];
}