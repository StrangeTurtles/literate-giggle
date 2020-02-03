#include <iostream>
#include "BubbleSort.h"

int main()
{
	int list[8] = { 8, 2, 5, 6, 3, 4, 1, 7 };
	std::cout << list[0] << std::endl;
	std::cout << list[1] << std::endl;
	std::cout << list[2] << std::endl;
	std::cout << list[3] << std::endl;
	std::cout << list[4] << std::endl;
	std::cout << list[5] << std::endl;
	std::cout << list[6] << std::endl;
	std::cout << list[7] << std::endl;
	std::cout << "Sorting" << std::endl;
	BubbleSort sort = BubbleSort();
	sort = BubbleSort(list);
	std::cout << list[0] << std::endl;
	std::cout << list[1] << std::endl;
	std::cout << list[2] << std::endl;
	std::cout << list[3] << std::endl;
	std::cout << list[4] << std::endl;
	std::cout << list[5] << std::endl;
	std::cout << list[6] << std::endl;
	std::cout << list[7] << std::endl;
	while (true)
	{

	}
	return 0;
}