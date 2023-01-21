#include "Array.h"

int	main()
{
	try {
		Array<int>	arr;

		std::cout << arr.size() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
