#include <iostream>

using namespace std;

int main()	//	��Ʈ������ 1
{
	//	unsigned int num = 1;
	//	cout << ~~~num << endl;	//	~ ��Ʈ���� ������

	//	0000 0000 0000 0000 0000 0000 0000 0001 = 1 
	//	1111 1111 1111 1111 1111 1111 1111 1110 = 2^32 - 1 - 1

	//	int num0 = 5;
	//	int num1 = 11;
	//	
	//	int result = num0 & num1;
	//	cout << result << endl;

	//	& = &&�� ������ ��Ʈ�� ���
	//	0000 0000 = 5 = 4 + 1 = 2^2 + 2^0
	//	0000 0000 = 11 = 8 + 2 + 1 = 2^3 + 2^1 + 2^0
	//	0000 0000 = 1

	//	uint32_t attendanceBook = 7u; // unsigned int���� �ڿ� u�� �ٿ��� �ʿ䰡 ����
	//	cout << attendanceBook << endl;

	//	if (attendanceBook & (int)pow(2, 0))	//	pow = ���� (�⺻���� double ����)
	//		cout << "1st" << endl;
	//	if (attendanceBook & (int)pow(2, 1))
	//		cout << "2nd" << endl;
	//	if (attendanceBook & (int)pow(2, 2))
	//		cout << "3th" << endl;
	//	if (attendanceBook & ((int)pow(2, 0) + (int)pow(2,1)))
	//		cout << "1 or 2" << endl;

	//	int flag = (int)pow(2, 0) + (int)pow(2, 1);
	//	if ((attendanceBook & flag) == flag)
	//		cout << "1 and 2";
	//	0000 0000 0000 0000 0000 0000 0000 0000

	//	uint32_t attendanceBook = 1u;
	//	if (!(attendanceBook & (int)pow(2, 0)))
	//	attendanceBook += (int)pow(2, 0);
	//	attendanceBook &= ~((int)pow(2,2) + (int)pow(2,0));
	//	cout << attendanceBook;
	//	OR
	//	0000 0000 0000 0000 0000 0000 0000 0101
	//	0000 0000 0000 0000 0000 0000 0000 0001
	//	&= ~(int)pow(2,2)
	//	1111 1111 1111 1111 1111 1111 1111 1011 &
	// 
	//	0000 0000 0000 0000 0000 0000 0000 0001

	//	XOR
	//	1 ^ 1 == 0
	//	1 ^ 0 == 1
	//	0 ^ 1 == 1
	//	0 ^ 0 == 0

	//	int num0 = 5;
	//	int num1 = 10;
	//	cout << (num0 ^ num1);
	//	0000 0101
	//	0000 1010
	//	0000 1111

	//	uint32_t attendanceBook = 0u;		//	0000
	//	attendanceBook |= (int)pow(2, 0);	//	0001
	//	cout << attendanceBook << endl;
	//	attendanceBook ^= (int)pow(2, 0);	// 0001 ^ 0001 == 0000
	//	cout << attendanceBook << endl;
	//	attendanceBook ^= (int)pow(2, 0);	// 0000 ^ 0001 == 0001
	//	cout << attendanceBook << endl;

	//	int a = 1, b = 3, c = 2, d = 1, e = 2;
	//	cout << (a ^ d ^ c ^ e ^ b);
	//	cout << (a ^ b ^ c ^ d ^ e);
	
	// << ������ ��Ʈ ���ڸ� �̵���Ű�� ������ (����Ʈ ����Ʈ)

	//	ex) 0000 0001 -> 0000 0010 -> 0000 0100 > 0000 1000 = 8
	//	int attendanceBook = 0u;
	//	attendanceBook |= (1 << 2);
	//	cout << attendanceBook;

	//	>> ������ ��Ʈ ���ڸ� �̵���Ű�� ������ (����Ʈ ����Ʈ) ��Ʈ�� �߸� �� �־� ���� ���� �ʿ�

	cout << (16 >> 1) << endl;	//	8
	cout << (8 >> 1) << endl;	//	4
	cout << (4 >> 1) << endl;	//	2
	cout << (2 >> 1) << endl;	//	1
	cout << (1 >> 1) << endl;	//	0
	
	cout << (14 >> 1) << endl;	//	7
	cout << (15 >> 1) << endl;	//	7

	cout << (14 >> 2) << endl;	//	3
	cout << (15 >> 2) << endl;	//	3

}