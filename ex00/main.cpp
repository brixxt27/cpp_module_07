#include <iostream>
#include "whatever.h"

int main( void ) {
    int a = 2;
    int b = 3;

    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    // int n1 = 3;
    // int n2 = 3; 
    // int& ret1 = min(n1 , n2);
    // int& ret2 = max(n1 , n2);

    // ++ret1;
    // std::cout << "n1 is " << n1 << "\nn2 is " << n2 << std::endl;
    // std::cout << "---------------------------" << std::endl;
    // ++ret2;
    // std::cout << "n1 is " << n1 << "\nn2 is " << n2 << std::endl;

    const int num1 = 3;
    const int num2 = 3; 

    std::cout <<  min(num1 , num2) << std::endl;
    std::cout <<  max(num1 , num2) << std::endl;

    return 0;
}
