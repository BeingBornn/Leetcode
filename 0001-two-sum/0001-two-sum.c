/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    int *sum;
    int i;
    int j;

    i = 0;
    *returnSize = 2; 
    sum = (int *)malloc(*returnSize * sizeof(int));
    while (i < numsSize - 1)
    {
        j = i + 1;
        while(j < numsSize)
        {
            if(nums[i] + nums[j] == target)
            {
                sum[0] = i;
                sum[1] = j;
                return (sum);
            }
            j++;
        }
        i++;
    }
    free(sum);
    return (NULL);
}