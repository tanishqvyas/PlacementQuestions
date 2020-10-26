#include <stdlib.h>
#include <stdio.h>




int findKthLargest(int* nums, int numsSize, int k){

    for(int i = 0; i < numsSize; i++)
    {
        for(int j = i; j < numsSize; j++)
        {
            if(nums[i] <= nums[j])
            {
               int temp = nums[i];
               nums[i] = nums[j];
               nums[j] = temp;
            }
        }
    }
    
    return nums[k-1];
}

int main(int argc, char const *argv[])
{
	int nums[] = {3,2,3,1,2,4,5,5,6};
	int size = 9;
	int k = 4;
	

	printf("\n%dth Largest num : %d\n",k , findKthLargest(nums, size ,k) );

	
	return 0;
}