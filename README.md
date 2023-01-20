# cpp_module_07
### 이슈 관리: [전체 이슈 list](https://github.com/brixxt27/cpp_module_07/issues/1)

# Exercise 00: Start with a few functions 
## Usage
```
git clone https://github.com/brixxt27/cpp_module_07.git
cd cpp_module_07/ex00
make
./start_with_a_few_functions
```
## Summary
- Turn-in directory : ex00/
- Files to turn in : Makefile, main.cpp, whatever.{h, hpp}
- Forbidden functions : None
## Detail
- 다음 템플릿 함수를 구현하시오!
    - swap: 반환값이 없고, 인자로 두 개의 값을 받으면 이 둘의 값을 바꾼다.
    - min: 인자로 두 값이 들어오면 이 두 값을 비교하여 작은 것을 반환한다. 만약 둘이 같다면 두 번째 값을 반환한다.
    - max: 인자로 두 값이 들어오면 이 두 값을 비교하여 큰 것을 반환한다. 만약 둘이 같다면 두 번째 값을 반환한다.
- 두 함수는 어떠한 타입으로도 호출이 가능해야 한다. 구현은 두 개의 타입이 같아야만 하고, 모든 비교 연산을 지원해야 한다.
- Templata는 헤더에 정의 되어야 한다.
- main문과 실행결과는 다음과 같습니다.
```
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

    return 0;
}
----------------------------------------------------------------------
a = 3, b = 2
min(a, b) = 2
max(a, b) = 3
c = chaine2, d = chaine1
min(c, d) = chaine1
max(c, d) = chaine2
```
<bt> </bt>

# Exercise 01: Iter 
## Usage
'''
git clone https://github.com/brixxt27/cpp_module_07.git
cd cpp_module_07/ex01
make
./iter
'''
## Summary
- Turn-in directory : ex01/
- Files to turn in : Makefile, main.cpp, iter.{h, hpp}
- Forbidden functions : None
## Detail
<bt> </bt>

# Exercise 02: Array 
## Usage
'''
git clone https://github.com/brixxt27/cpp_module_07.git
cd cpp_module_07/ex02
make
./array
'''
## Summary
- Turn-in directory : ex02/
- Files to turn in : Makefile, main.cpp, Array.{h, hpp} and optional file: Array.tpp
- Forbidden functions : None
## Detail
<bt> </bt>