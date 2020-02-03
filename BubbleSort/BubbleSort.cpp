#include "BubbleSort.h"



BubbleSort::BubbleSort()
{
}

BubbleSort::BubbleSort(int arr[8])
{
	int length = 8;
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = length - 1; j >= i + 1; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
}


BubbleSort::~BubbleSort()
{
}
