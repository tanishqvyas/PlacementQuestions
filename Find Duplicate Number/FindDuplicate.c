#include <stdio.h>
#include <stdlib.h>


void swap(int* nums, int i, int j)
{
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
    
    return;
}

void displayArr(int *nums, int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", nums[i]);
	}
	printf("\n");
}


// Order does not matter
int findDuplicate_slow(int* nums, int numsSize){

    int isFound = 0;
    int idx = 0;
    
    for(int i = 0; i < numsSize; i++)
    {
        for(int j = i+1; j < numsSize; j++)
        {
            if(nums[i] == nums[j])
            {
                isFound = 1;
                idx = nums[i];
                break;
            }
        }
        
        if(isFound)
            break;
    }
    
    return idx;
    
}


int findDuplicate_fast(int* nums, int numsSize){

    int count[numsSize];
    for(int i = 0; i < numsSize; i++)
    {
        count[i] = 0;   
    }
    
    int ans;
    
    for(int i = 0; i < numsSize; i++)
    {
        if(count[nums[i]-1] > 0)
        {
            ans = nums[i];
            break;
        }
        
        count[nums[i]-1] = 1;
    }
    
    return ans;
    
}


int main(int argc, char const *argv[])
{
	
	int arr[] = {1,3,4,4,2};
	int size = 5;
    printf("Duplicate number is : %d\n", findDuplicate_fast(arr, size));
	displayArr(arr, size);
    return 0;
    
}