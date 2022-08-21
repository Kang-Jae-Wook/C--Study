#include <iostream>
#include <cfloat>

using namespace std;
int main()
{
	// float num0 = 1.5;
	// float num1 = num0 * 1.5;
	// float num2 = num0 / 2;
	// float num3 = num0 - 3;
	// 
	// cout << "num0 " << num0 << endl; 
	// cout << "num1 " << num1 << endl;
	// cout << "num2 " << num2 << endl;
	// cout << "num3 " << num3 << endl;

	// float num0 = 1.0;
	// double num1 = 1.0;
	// long double num2 = 1.0;
	// 
	// cout << sizeof(num0) << endl;
	// cout << sizeof(num1) << endl;
	// cout << sizeof(num2) << endl;
	// 
	// cout << sizeof(1.0f) << endl;
	// cout << sizeof(1.0) << endl;
	// cout << sizeof(1.0L) << endl;

	// unsigned int num0;
	// float num1 = -118.625;
	// memcpy(&num0, &num1, sizeof(num1));
	// 
	// cout << num0 << endl; 
	// cout << num1 << endl;

	/* 부동소수점 사용 시 주의점
		==에서는 사용을 하지 않는게 중요 실제 값이 다르기 때문에 (확인법 : precision)
		정밀도를 요하는 연산에서는 오차로 인해 오류가 발생할 수 있어 정수 사용을 권함
		
	*/
	
	// float num0 = 0.1f;
	// float num1 = 0.02f * 5.0f;
	// 
	// cout.precision(64);		//	정밀도 부여기능
	// cout << num0 << endl;
	// cout << num1 << endl;
	// 
	// if (num0 == num1)
	// 	cout << "Equal 1" << endl;
	// if (num0 == 0.1f)
	// 	cout << "Equal 2" << endl;
	// 
	// if(num0 == 0.1)
	// 	cout << "Equal 3" << endl;
	// if (num0 == 0.1L)
	// 	cout << "Equal 4" << endl;
	// 
	// cout << 0.1f << endl;
	// cout << 0.1 << endl;
	// cout << 0.1L << endl;
	// 
	// if (fabsf(num0 - num1) <= FLT_EPSILON) // EPSILON = 1보다 가장큰 가장 작은 함수(오차율 존재)
	// 	cout << "Equal 1" << endl;

	//	float num0 = 1.0f;
	//	float num1 = 0.0f;
	//	for (int i = 0; i < 10; i++)
	//		num1 = num1 + 0.1;
	//	if (num0 == num1) 
	//		cout << "Equal 0" << endl;
	//	if (fabsf(num0 - num1) <= FLT_EPSILON)
	//		cout << "Equal 1" << endl;

	//	unsigned int num0 = 0b00111111100000000000000000000000;
	//	float num1;
	//	memcpy(&num1, &num0, sizeof(num0));
	//	
	//	cout.precision(64);
	//	cout << "num1 " << num1 << endl;
	//	
	//	unsigned int num2 = 0b00111111100000000000000000000001;
	//	float num3;
	//	memcpy(&num3, &num2, sizeof(num2));
	//	
	//	cout << "num3 " << num3 << endl;
	//	
	//	cout << num3 - num1 << endl;
	//	cout << FLT_EPSILON << endl;

	// float이 인지를 제대로 못하는 경우

	//float num0 = 1.0f;
	//
	//unsigned int num1 = 0b01001011100000000000000000000000; 
	////	unsigned int num1 = 0b00110011100000000000000000000000; // 1.0(2) * 10^-24(2) = 1
	////	unsigned int num1 = 0b00110100000000000000000000000000; // 1.0(2) * 10^-23(2) = 1.000...
	//float num2;
	//memcpy(&num2, &num1, sizeof(num1));
	//
	//cout.precision(64);
	//cout << num2 << endl;
	//cout << num0 + num2 << endl;

	//	float num0 = FLT_MAX;
	//
	//	cout.precision(64);
	//	cout << num0 << endl;
	//	
	//	float num1;
	//	unsigned int num2 = 0b01111111100000000000000000000000;
	//	memcpy(&num1, &num2, sizeof(num2));
	//	
	//	cout << num1 <<  endl;
	
	float fltMin = FLT_MIN;
	unsigned int ifltMin;
	memcpy(&ifltMin, &fltMin, sizeof(fltMin));

	float fltTrueMin = FLT_TRUE_MIN;
	unsigned int ifltTrueMin;
	memcpy(&ifltTrueMin, &fltTrueMin, sizeof(fltTrueMin));


	cout << ifltMin << endl;
	cout << ifltTrueMin << endl;

	cout << fltMin << endl;
	cout << fltTrueMin << endl;

}