
#include <stdlib.h>
#include <stdio.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    int *sum;
    int i;
    int j;

    i = 0;
    /* int temp;
        returnSize = &temp;
    */
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
int main ()
{
    int target;
    int returnSize;

    target = 9;
    int nums []= {2,7,11,16};
    int * sum = twoSum(nums, 4, target, &returnSize);
 
    if(sum != NULL)
    {
           printf("indice of two numbers that add up to %d are at index : %d and %d.", target, sum[0], sum[1]);
        free(sum);
    } else
    {
        printf("no two numbers add up to %d.", target);
    }
    return (0);
}
