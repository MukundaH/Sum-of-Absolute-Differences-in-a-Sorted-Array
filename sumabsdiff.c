

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSumAbsoluteDifferences(int* nums, int numsSize, int* returnSize){
    int * ret = (int *)malloc(numsSize*sizeof(int));
    int count=0;
    for(int i=0; i<numsSize; i++){
        count+=nums[i];
    }
    for(int i=0; i<numsSize; i++){
        ret[i] = count - (numsSize-2*i)*nums[i];
        count-=2*nums[i];
    }
    *returnSize = numsSize;
    return ret;
}
