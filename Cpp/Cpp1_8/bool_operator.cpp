#include <iostream>
#include <compare>

using namespace std;

int main()
{
	cout.setf(ios_base::boolalpha);
	cout << typeid(1 <=> 1).name() << endl;	//	((n<=>n) > n) ����� ���ʿ� �ִ°ͺ��� �������� ũ�� = true / �����ʿ� �ִ°ͺ��� ������ ũ�� = true 
											//	is_eq ũ�� / is_lq �۴� 
											//	


	//	int num0 = 10, num1(10);	
	//	if (true <=> num1)	// != �ٸ� /  == ����  / < ū / <= ũ�ų� ���� / > ���� / >= �۰ų� ���� / <=>	 
	//		cout << "num0 == num1" << endl;


}
