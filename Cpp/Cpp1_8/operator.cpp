#include <iostream>

using namespace std;

int main()
{
	//	�⺻ ������ : + - * /
	//	int a, b, c;
	//	a = b = c = 10;	// a = n �Ҵ翬���� n -> a �����ʿ��� ��������
	//	cout << a << endl;
	//	cout << b << endl;
	//	cout << c << endl;

	//	int a = 10; // a(10) c++ �ʱ�ȭ
	//	cout << a % 3 << endl;	//	% = ������ ������
	//	a %= 5;	//	�Ҵ� ������ += , -= , *= , /= , %=
	//	cout << a << endl;
	//	cout << -+-+-1;	// ���׿����� + , - �� ������ ���� ���� -- or ++ �� �ȵ�(����, ����������)�� �����Ǳ� ������ 
				//	���� �����ڴ� ������ �ٿ����� ��� �Ұ� ex) --1, ++1
	//	int num = 0;
	//	cout << num++ << endl;	//	���������� �տ� ���� ��� �ݿ� �� ��� , �ڿ� ���� ��� ��� �� �ݿ�
	//	cout << num << endl;

	int num = 10;
	cout << ++num + num++ << endl;
	cout << num << endl;

	printf(" % d% d\n", ++num, ++num);
	printf("%d\n", num);

}