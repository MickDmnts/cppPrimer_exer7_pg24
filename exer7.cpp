#include <iostream>
#include "Sales_item.h"

void CountTransactions()
{
	int itemCount = 0;
	Sales_item currentItem, item;

	if (std::cin>>currentItem)
	{
		itemCount = 1;
		while (std::cin>>item)
		{
			if (item.isbn()==currentItem.isbn())
			{
				++itemCount;
			}
			else
			{
				std::cout << currentItem.isbn() << " occurs " << itemCount << " times." << std::endl;
				currentItem = item;
				itemCount = 1;
			}
		}

		std::cout << currentItem.isbn() << " occurs " << itemCount << " times." << std::endl;
	}
}

int main()
{
	CountTransactions(); //Task 1.23 && 1.24
	system("pause");

	return 0;
}