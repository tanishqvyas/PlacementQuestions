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
void move(int *nums, int size)
{
    int ptr1 = 0;
    int ptr2 = size-1;

    while(ptr1 <= ptr2)
    {

        for (; ptr1 < size; ptr1++)
        {
            if(nums[ptr1] >= 0)
                break;
        }

        for (; ptr2 >= 0; ptr2--)
        {
            if(nums[ptr2] < 0)
            {
                break;
            }
        }

        swap(nums, ptr2, ptr1);

    }
}



int main(int argc, char const *argv[])
{
	
	int arr[] = {-2,10,32,-2,-20,10,21,0,11,-1};
	int size = 10;
	move(arr, size);
    displayArr(arr, size);
	return 0;
    
}