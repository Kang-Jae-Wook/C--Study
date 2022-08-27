#pragma warning(disable: 4996)
#include <iostream>
#include <limits>


using namespace std;

int main()
{

	//	int a;
	//	if (cin >> a)
	//		cout << a << endl;


	//	char ch;
	//	if(cin >> ch)				// in >>	&를 붙이지 않는 이유 : C++에서는 함수 내부에서 인자 변경 가능하다
	//	cout << ch << endl;			// cout <<

	//	int num;
	//	cin >> num;
	//	cout << num << endl;
	//	if (cout << cin.fail())
	//		cin.clear();													//	값을 입력받는데 실패할 경우 초기화 해주는 방식
	//	cin.ignore(numeric_limits<streamsize>::max(), '\n');				//	ignore = default : 하나만 무시하게 해줌	() 안에 숫자넣을 시, 제한 가능 
	//																		//	numeric_limits<streamsize>::max() 무한히 무시하게끔 설정 가능하며 , '문자' 설정시, 해당 문자 입력시까지 무시
	//	cin >> num;
	//	cout << num << endl;

	//	bool b;
	//	cin.setf(ios_base::boolalpha);										// true or false로 값을 받아도 인식됨
	//	cin >> b;
	//	cout << b;
	//	int num;
	//	cin.setf(ios_base::hex, ios_base::basefield);
	//	cin >> num;
	//	cout << num;

	//	cin >> ch;
	//	cout << ch << endl;

	//	operator>>(cin).
	//	cin.operator>>	

	//	int num;
	//	cin >> hex >> num;
	//	cout << num << endl;

	freopen("input.txt", "r", stdin);

	int num;
	cin >> num;
	cout << num;



}