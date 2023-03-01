/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i=0, j=0, soma;
    int *retorno;
    retorno = calloc(2, sizeof(int));

    for(i=0; i<numsSize; i++){
        for(j=i+1; j<numsSize; j++){
            soma = nums[i]+nums[j];
            if(soma == target){
                retorno[0] = i;
                retorno[1] = j;
                *returnSize = 2;
                return retorno;
            }
        }
    }
    *returnSize = 0;
    return retorno;
}