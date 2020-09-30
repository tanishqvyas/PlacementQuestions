#include <iostream>

using namespace std;

void moveZeroes(int* nums, int numsSize)
{
	int count = 0;

	// Find total count of non zero elements
	for (int i = 0; i < numsSize; ++i)
	{
		if(nums[i] != 0)
		{
			count++;
		}
	}

	int index = 0;
	int finder;

	// As and when u find a non zero number, begin placing them from the front
	// towards end and replace their place with a 0.
	while(count != index)
	{
		finder = index;

		while(finder < numsSize && nums[finder] == 0)
		{
			finder++;
		}

		if(finder == numsSize)
		{
			break;
		}

		nums[index] = nums[finder];
		if(finder != index)
		{
			nums[finder] = 0;
		}
		
		index++;
		
	}

}


int main()
{
	
	int array[] = {1, 9, 0, 0, 8, 0, 11, 2, 3, 9, 10, 0, 0, 1};
	int length = 14;
	// int array[] = {1};
	// int length = 1;

	printf("Initial Array : \n");
	for (int i = 0; i < length; ++i)
	{
		printf("%d, ", array[i]);
	}
	printf("\n\n");
	moveZeroes(array, length);

	printf("\n\nMoved Array : \n");
	for (int i = 0; i < length; ++i)
	{
		printf("%d, ", array[i]);
	}





	return 0;
}
