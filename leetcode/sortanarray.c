/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void swap(int *a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int *arr, int n, int i) {
    int largest = i, l = 2 * i + 1, r = 2 * i + 2; 
 
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void buildHeap(int *arr, int n) {
    for (int i = (n / 2) - 1; i >= 0; i--) 
        heapify(arr, n, i);
}

int* sortArray(int* nums, int numsSize, int* returnSize){
    buildHeap(nums, numsSize);
    *returnSize = numsSize;

    // Sort
    for (int i = numsSize - 1; i > 0; i--) {
        swap(&nums[i], &nums[0]);
        heapify(nums, i, 0);   
    }

    return nums;    
}