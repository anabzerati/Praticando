void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){ /*merge normal. Começa-se ao contrário para não sobrescrever numeros do vetor 1 desde o começo*/
    int pointer, i=0;

    pointer = m + n -1;
    m--;
    n--;

    while(pointer>=0){
        if(m>=0 && n>=0){
            if(nums1[m]>nums2[n]){
                nums1[pointer] = nums1[m];
                m--;
            } else{
                nums1[pointer] = nums2[n];
                n--;
            }
        } else if(m<0){
            nums1[pointer] = nums2[n];
            n--;
        } else{
            nums1[pointer] = nums1[m];
            m--;
        }
        pointer--;
    }
}