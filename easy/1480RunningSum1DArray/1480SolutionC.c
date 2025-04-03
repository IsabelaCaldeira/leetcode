/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int *new = malloc(numsSize * sizeof(int));
    int temp = 0;
    for(int i = 0; i < numsSize; i++){
        new[i] = nums[i] + temp;
        temp += nums[i];
    }
    *returnSize = numsSize;
    return new;
    
}