#include <iostream>
#include <numeric>

using namespace std;

int main()
{

	// int num0 = 11;
	// int num1 = 011;		// ���� 0 �� ���� ��� 8����
	// int num2 = 0b11;	// ���� 0b�� ���� ��� 2����
	// int num3 = 0x11;	// ���� 0x�� ���� ��� 16����
	// 
	// cout << "num0 " << num0 << endl;
	// cout << "num1 " << num1 << endl;
	// cout << "num2 " << num2 << endl;
	// cout << "num3 " << num3 << endl;

	//int intNum = 0;
	//int longNum = 0;
	//int* intPointer = &intNum;
	//
	//cout << sizeof(intNum) << endl;
	//cout << sizeof(longNum) << endl;
	//cout << sizeof(intPointer) << endl;

	// int8_t num0 = 0;				��ȣȭ � ����
	// int16_t num1 = 0;			��ȣȭ � ����
	// int32_t num2 = 0;			��ȣȭ � ����
	// cout << sizeof(num0) << endl;
	// cout << sizeof(num1) << endl; 
	// cout << sizeof(num2) << endl;

	// unsigned int a = 11u;
	// long int longNum = 0L;
	// long long longLongNunm = 0LL;
	// unsigned long long ulongLongNum = 0LL;

	// cout << (int)numeric_limits<uint8_t>::max() << endl;
	// cout << numeric_limits<uint16_t>::max() << endl;
	// cout << numeric_limits<uint32_t>::max() << endl;
	// cout << numeric_limits<uint64_t>::max() << endl;

	// cout << (int)numeric_limits<int8_t>::min() << endl;
	// cout << numeric_limits<int16_t>::min() << endl;
	// cout << numeric_limits<int32_t>::min() << endl;
	// cout << numeric_limits<int64_t>::min() << endl;

	// int32_t num32 = numeric_limits<int32_t>::max();
	// int32_t num32_ = num32 + 1;
	// cout << num32 << endl;
	// cout << num32_ << endl;

	int32_t num32 = numeric_limits<int32_t>::min();
	int32_t num32_ = num32 - 1;
	cout << num32 << endl;
	cout << num32_ << endl;



}
