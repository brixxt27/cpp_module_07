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
```
git clone https://github.com/brixxt27/cpp_module_07.git
cd cpp_module_07/ex01
make
./iter
```
## Summary
- Turn-in directory : ex01/
- Files to turn in : Makefile, main.cpp, iter.{h, hpp}
- Forbidden functions : None
## Detail
- 인자를 세 개 받고, 아무 것도 반환하지 않는 함수 템플릿 iter를 구현해라
	- 첫 번째 인자는 배열의 주소
	- 두 번째 인자는 배열의 길이
	- 세 번째 인자는 배열의 모든 요소에서 호출될 함수
- 테스트를 포함하여 main.cpp 를 제출해라. 테스트하기에 충분한 코드를 넣어라.
- iter 함수 템플릿은 어떤 타입의 배열이든 작동해야 한다.
- 세 번째 인자는 함수 템플릿으로 인스턴스화(실제화) 될 수 있다.
<bt> </bt>

# Exercise 02: Array 
## Usage
```
git clone https://github.com/brixxt27/cpp_module_07.git
cd cpp_module_07/ex02
make
./array
```
## Summary
- Turn-in directory : ex02/
- Files to turn in : Makefile, main.cpp, Array.{h, hpp} and optional file: Array.tpp
- Forbidden functions : None
## Detail
- T 자료형을 포함하고 있고, 아래의 기능을 하는 Array 라는 클래스 템플릿을 구현해라.
	- 인자를 받지 않는 생성자: 비어 있는 배열을 만든다.
	- unsigned int n 을 인자로 받는 생성자: n 의 길이를 갖는 배열을 생성한다.
		- Tip: int * a = new int(); 를 컴파일 할 때 *a를 보여줘라.
	- 복사 생성자와 할당 연산자. 두 경우에, 원본 배열이나 수정 뒤의 배열이 수정되는 것은 다른 배열에 영향을 끼칠 수 없다.
	- new[] 연산자를 사용할 수 있어야 한다. 예방적인 할당(미리 할당)은 금지 된다. 프로그램은 할당되지 않는 메모리를 접근할 수 없다.
	- 인자들은 연산자 []를 이용하여 접근 될 수 있다.
	- [] 연산자를 사용하여 접근할 때, 만약 인덱스가 경계를 넘는다면 std::exception을 던져라.
	- 멤버 함수 size() 는 배열에서 요소의 수를 반환한다. 이 멤버함수는 인자를 받지 않고, 현재 인스턴스를 변경해서는 안 된다.
- 모든 기능이 예상대로 수행되는지 테스트를 작성하여 main.cpp 에 구현해라.
<bt> </bt>
