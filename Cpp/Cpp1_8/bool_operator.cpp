#include <iostream>
#include <compare>

using namespace std;

int main()
{
	cout.setf(ios_base::boolalpha);
	cout << typeid(1 <=> 1).name() << endl;	//	((n<=>n) > n) 결과가 왼쪽에 있는것보다 오른쪽이 크다 = true / 오른쪽에 있는것보다 왼쪽이 크다 = true 
											//	is_eq 크다 / is_lq 작다 
											//	


	//	int num0 = 10, num1(10);	
	//	if (true <=> num1)	// != 다른 /  == 같은  / < 큰 / <= 크거나 같은 / > 작은 / >= 작거나 같은 / <=>	 
	//		cout << "num0 == num1" << endl;


}
