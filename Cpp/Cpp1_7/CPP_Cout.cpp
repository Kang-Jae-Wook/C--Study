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
	//cout.write("hello world", 11);	// 갯수 조정가능
	
	//cout.width(10);	// 폭지정
	//cout.fill('#'); // 폭 문자 지정
	//cout << 1 << endl;
	
	//float num = 0.1234567f;
	//cout << num << endl;
	
	//cout.precision(10); //	정밀도
	//cout << num << endl;

	//	cout.setf(ios_base::showpos);	// 셋팅
	//	cout << 1 << endl;

	//	cout.unsetf(ios_base::showpos); // 셋팅해제
	//	cout << 2 << endl;

	//	cout << true << endl;
	//	cout << false << endl;
	//	cout.setf(ios_base::boolalpha);	//	boolalpha : true, false로 나타나게 해주는 문장

	//	cout << true << endl;
	//	cout << false << endl;

	//	cout.setf(ios_base::internal, ios_base::adjustfield);	//	adjustfield : left(좌측정렬),right(우측정렬) (default : 오른쪽정렬)  internal 부호정렬
	//	cout.width(10);
	//	cout.setf(ios_base::hex, ios_base::basefield);	//	basefield : 정렬 / hex : 16진수 / oct : 8진수 / dec : 10진수
	//	cout << 16;

	//	hex(cout);
	//	cout << 16;

	freopen("output.txt", "w", stdout); //	#pragma warning(disable: 4996) 로 조건 무시
	cout << setw(10) << setfill('#') << setprecision(1) <<  0.1f;	//	#include <iomanip> 추가 필요


}