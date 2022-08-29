#include <iostream>

using namespace std;

int main()
{
	// true && true == true
	// true && false == false
	// false && true == false
	// false  && false == false

	int num0 = 10, num1(10);
	int num2 = 20, num3(30);
	if (num0 == num1 && num2 != num3)
	{
		cout << "!!!!!!" << endl;  
	}

	//연산자 순서 : 산술 > 비교&관계 > 논리

	// true || true == true
	// true || false == true
	// false || true == true
	// false || false == false
	if (num0 == num1 || num2 == num3)
	{
		cout << "!!!!!!";
	}
	//	논리연산자 순위 && > || 
	if (true || false && false)
	{
		cout << "OK" << endl;
	}

	int i = 10, i1(20);
	cout.setf(ios_base::boolalpha);
	cout << !10 << endl;
	cout << (1 && 2) << endl;

}

