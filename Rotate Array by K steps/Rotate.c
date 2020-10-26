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
void rotate_slow(int* nums, int numsSize, int k){

    while(k--)
    {
        int holder = nums[numsSize - 1];
        
        // Shifting elements
        for(int i = numsSize - 1; i > 0; i--)
        {
            nums[i] = nums[i-1];
        }
        
        nums[0] = holder;
    }
    
}


// Extra O(n) space but faster
void rotate_fast(int* nums, int numsSize, int k){

    int idx = k%numsSize;
    
    int tempArr[numsSize];
    
    for(int i = 0; i < numsSize; i++)
    {
        tempArr[idx] = nums[i];
        idx = (idx+1)%numsSize;
    }
    
    for(int i = 0; i < numsSize; i++)
    {
        nums[i] = tempArr[i];
    }
}


int main(int argc, char const *argv[])
{
	
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int size = 10;
    int steps = 3;
	rotate_fast(arr, size, steps);
    displayArr(arr, size);
	return 0;
    
}