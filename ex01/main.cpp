#include "iter.h"

//class Base
//{
//public:
//	Base() : a(1) {}
//private:
//	int	a;
//};

int	main()
{
	int				editable_arr[5] = {1, 2, 3, 4, 5};
	unsigned long	edit_arr_len = sizeof(editable_arr) / sizeof(int);

	for (unsigned long i = 0; i < edit_arr_len; i++) {
		std::cout << "idx " << i << ": " << editable_arr[i] << std::endl;
	}

	::iter(editable_arr, edit_arr_len, increase);

	for (unsigned long i = 0; i < edit_arr_len; i++) {
		std::cout << "idx " << i << ": " << editable_arr[i] << std::endl;
	}



	const int			constant_arr[5] = {5, 4, 3, 2, 1};
	unsigned long		const_arr_len = sizeof(constant_arr) / sizeof(int);

	for (unsigned long i = 0; i < const_arr_len; i++) {
		std::cout << "idx " << i << ": " << constant_arr[i] << std::endl;
	}

	::iter(constant_arr, const_arr_len, printElement);




	std::string	arr_str[3] = {
			"42",
			"Seoul",
			"jayoon"
	};

	::iter(arr_str, sizeof(arr_str) / sizeof(std::string), printElement);
	return 0;
}