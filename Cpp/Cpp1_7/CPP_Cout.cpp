#pragma warning(disable: 4996)
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//	cout << 'a' << endl;
	//	cout << (char)97 << endl;
	//	operator<<(cout, 'a');
	//	cout.operator<<

	//cout << 'a' << 'b' << endl;
	
	//cout.put('a');
	//cout.put('\n');
	//cout.write("hello world", 11);	// ���� ��������
	
	//cout.width(10);	// ������
	//cout.fill('#'); // �� ���� ����
	//cout << 1 << endl;
	
	//float num = 0.1234567f;
	//cout << num << endl;
	
	//cout.precision(10); //	���е�
	//cout << num << endl;

	//	cout.setf(ios_base::showpos);	// ����
	//	cout << 1 << endl;

	//	cout.unsetf(ios_base::showpos); // ��������
	//	cout << 2 << endl;

	//	cout << true << endl;
	//	cout << false << endl;
	//	cout.setf(ios_base::boolalpha);	//	boolalpha : true, false�� ��Ÿ���� ���ִ� ����

	//	cout << true << endl;
	//	cout << false << endl;

	//	cout.setf(ios_base::internal, ios_base::adjustfield);	//	adjustfield : left(��������),right(��������) (default : ����������)  internal ��ȣ����
	//	cout.width(10);
	//	cout.setf(ios_base::hex, ios_base::basefield);	//	basefield : ���� / hex : 16���� / oct : 8���� / dec : 10����
	//	cout << 16;

	//	hex(cout);
	//	cout << 16;

	freopen("output.txt", "w", stdout); //	#pragma warning(disable: 4996) �� ���� ����
	cout << setw(10) << setfill('#') << setprecision(1) <<  0.1f;	//	#include <iomanip> �߰� �ʿ�


}