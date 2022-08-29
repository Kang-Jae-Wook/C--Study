#include <iostream>

using namespace std;

int main()
{
	//	기본 연산자 : + - * /
	//	int a, b, c;
	//	a = b = c = 10;	// a = n 할당연산자 n -> a 오른쪽에서 왼쪽으로
	//	cout << a << endl;
	//	cout << b << endl;
	//	cout << c << endl;

	//	int a = 10; // a(10) c++ 초기화
	//	cout << a % 3 << endl;	//	% = 나머지 연산자
	//	a %= 5;	//	할당 연산자 += , -= , *= , /= , %=
	//	cout << a << endl;
	//	cout << -+-+-1;	// 단항연산자 + , - 가 정수에 붙은 형식 -- or ++ 은 안됨(감소, 증가연산자)로 변형되기 때문에 
				//	증감 연산자는 정수만 붙여서는 사용 불가 ex) --1, ++1
	//	int num = 0;
	//	cout << num++ << endl;	//	증감연산자 앞에 붙일 경우 반영 후 출력 , 뒤에 붙일 경우 출력 후 반영
	//	cout << num << endl;

	int num = 10;
	cout << ++num + num++ << endl;
	cout << num << endl;

	printf(" % d% d\n", ++num, ++num);
	printf("%d\n", num);

}