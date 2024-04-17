// 4주차 강노 코드 작성

// 들어가기 전에
// 실수 타입은 절대로 비교 연산자에 쓰지 않는다.
// 정밀도 차이로 예상하지 못한 결과가 나올 수 있다.

#include <iostream>
using namespace std;

//int main() {
//	cout << 0.1 << endl;
//	cout.precision(17);
//	cout << 0.1 << endl;
//	cout << 0.1 * 0.1 << endl;
//
//	return 0;
//}

//비교 연산 표현 주의
//
//3 > false  / -> 이런 식으로는 하지 말 것.
//애초에 int와 bool을 비교하는 게 이상함.

//int main() {
//	int number;
//
//	cout << "정수를 입력하세요: ";
//	cin >> number;
//
//	if (number < 0) {
//		number = -number;
//	}
//
//	cout << "입력한 숫자의 절대값 = " << number << endl;
//
//	return 0;
//}

//#include <iomanip>
//
//int main() {
//	double hours, rate, regularPay, overPay, totalPay;
//
//	cout << "업무 시간을 입력하세요 : ";
//	cin >> hours;
//	cout << "시간당 급여를 입력하세요 : ";
//	cin >> rate;
//
//	regularPay = hours * rate;
//	overPay = 0.0;
//
//	if (hours > 40.0)
//		overPay = (hours - 40.0) * rate * 0.30;
//
//	totalPay = regularPay + overPay;
//
//	cout << endl << fixed; // fixed의 소수점은 기본 6자리
//	cout << setprecision(2);
//	cout << "일반 급여 = " << regularPay << endl;
//	cout << "초과 근무에 대한 급여 = " << overPay << endl;
//	cout << "전체 급여 = " << totalPay << endl;
//
//	return 0;
//}

// 명시적 형변환
// #include <iomanip> + static_cast<자료형>

// 자료형 확인
// #include <typeinfo> + typeid(표현식).name()

// 소수점 없어도 표시 fixed 기본 6자리
// 소수점 자리수 지정 setprecision()
// + 부호 보여주기 showpos
// 
// setfill('@')
// setw()
// left right internal

// boolalpha

// 10진수 dec 8진수 oct 16진수 hex

// dangling else 잘 봐두자 16p



// 윤년 문제
// 
// 4로 나눌 수 있으면 윤년
// 100으로 나눌 수 있으면 윤년이 아님
// 연수를 400으로 나눌 수 있으면 윤년
// 


//// 논리 연산 기호 and or가 아니라 && || 인 거 잊지 말기
//int main() {
//	int year;
//
//	cout << "년도를 입력: ";
//	cin >> year;
//
//	if ((year % 400 == 0) && (year % 4 == 0 && year % 100 != 0)) {
//		cout << year << "년은 윤년입니다.\n";
//	}
//	else {
//		cout << year << "년은 윤년이 아닙니다.\n";
//	}
//
//}

// 삼항 연산자
// 