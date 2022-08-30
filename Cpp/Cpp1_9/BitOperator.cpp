#include <iostream>

using namespace std;

int main()	//	비트연산자 1
{
	//	unsigned int num = 1;
	//	cout << ~~~num << endl;	//	~ 비트반전 연산자

	//	0000 0000 0000 0000 0000 0000 0000 0001 = 1 
	//	1111 1111 1111 1111 1111 1111 1111 1110 = 2^32 - 1 - 1

	//	int num0 = 5;
	//	int num1 = 11;
	//	
	//	int result = num0 & num1;
	//	cout << result << endl;

	//	& = &&와 같지만 비트로 계산
	//	0000 0000 = 5 = 4 + 1 = 2^2 + 2^0
	//	0000 0000 = 11 = 8 + 2 + 1 = 2^3 + 2^1 + 2^0
	//	0000 0000 = 1

	//	uint32_t attendanceBook = 7u; // unsigned int에는 뒤에 u를 붙여줄 필요가 있음
	//	cout << attendanceBook << endl;

	//	if (attendanceBook & (int)pow(2, 0))	//	pow = 제곱 (기본값이 double 형임)
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
	
	// << 연산자 비트 숫자를 이동시키는 연산자 (레프트 쉬프트)

	//	ex) 0000 0001 -> 0000 0010 -> 0000 0100 > 0000 1000 = 8
	//	int attendanceBook = 0u;
	//	attendanceBook |= (1 << 2);
	//	cout << attendanceBook;

	//	>> 연산자 비트 숫자를 이동시키는 연산자 (라이트 쉬프트) 비트가 잘릴 수 있어 사용시 주의 필요

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