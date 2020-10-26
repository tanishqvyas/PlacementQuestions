#include <stdlib.h>
#include <stdio.h>


int maxProfit(int* prices, int pricesSize)
{
	if(pricesSize == 1)
	{
		return 0;
	}

	int profit = 0;
	int brought = 0;

	for (int i = 0; i < pricesSize; ++i)
	{
		if(i == 0)
		{
			continue;
		}

		if(prices[i] < prices[i-1] && brought == 0)
		{
			brought = 1;
			continue;
		}

		else
		{
			profit += prices[i] - prices[i-1];
		}
	}
    
    
}



int main()
{
	int arr[] = {7,1,5,3,6,4};
	int size = 6;
	int ans = 7;

	if(7 == maxProfit(arr, size))
	{
		printf("Passed Test Case\n");
	}
	
	else
	{
		printf("Test Case Failed, got ans : %d\n", maxProfit(arr, size) );
	}

	return 0;
}