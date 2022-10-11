#include <iostream>

using namespace std;

int main()
{
	//	int num = 0;
	//	if (num == 0)
	//	{
	//		cout << "Excuted 0 " << endl;
	//	}
	//	if (num != 0)
	//	{
	//		cout << "Excuted 1 " << endl;
	//	}

	//	if(condition)
	//		statment

	int array[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	
	int array3[3][3] = {0 ,};

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			for (int k = 0; k < 3; ++k) {
				array3[i][j] += array[i][k] * array[k][j];
				cout << " \[ " <<array3[i][j] << " \]" << " ";
			}
			cout << endl;
//			cout << array3[i][j] << " ";
		}
//		cout << endl;
	}

	


}