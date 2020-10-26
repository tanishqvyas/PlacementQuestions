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



void sortColors_slow(int* nums, int numsSize){

    int ptr = 0;
    
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] == 0)
        {
            swap(nums, ptr, i);
            ptr++;
        }
    }
    
    for(int j = 0; j < numsSize; j++)
    {
        if(nums[j] == 1)
        {
            swap(nums, ptr, j);
            ptr++;
        }
    }
    
    for(int k = ptr; k < numsSize; k++)
    {
        nums[k] = 2;
    }
    

}



void sortColors_fast(int* nums, int numsSize){

    int zero = 0;
    int two = numsSize - 1;
    
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] == 0)
        {
            swap(nums, zero, i);
            zero++;
        }
    }
    
    for(int j = zero; j <numsSize; j++)
    {
        if(nums[j] == 1)
        {
            swap(nums, j, zero);
            zero++;
        }
    }

}


int main(int argc, char const *argv[])
{
	
	int arr[] = {2,1,2,2,2,1,2,0,1,1};
	int size = 10;
	sortColors_fast(arr, size);
	return 0;
}