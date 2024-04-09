// for 문 작동 순서
// 1 변수 선언
// 2 조건 비교
// 3 반복문 실행
// 4 증감문 실행
// 5 조건 비교 -> 분기

// for문은 변수 스코프에 유의하여 사용하자

// for( ; ; ) 이런 식으로 쓸 수 있다...
// 대신 내부에서 값을 변화를 주고, if를 이용해서 탈출분기를 만들어야 한다.
// 조건 평가 자리를 비우면 언제나 참으로 판정한다.

// for ( i = 5, j = 7; ; i++, j++ ) 가능함
// c++ 에서 몇 안 되는 콤마로 나열하는 게 가능한 방식임.

// do while
// while의 경우.
// 바디를 실행하기 전에 평가식을 먼저 평가한다.
// 
// do while의 경우, 먼저 do를 실행하고
// while의 조건이 참일 동안 반복한다
// while 조건 뒤에 세미콜론을 찍는 걸 조심하자.
// 
// do-while은 데이터 유효성 검사에 유용하다.
// 
// break와 continue의 대상은 가장 가까운 반복문 (혹은 조건문)
// break는 즉시 탈출
// continue는 만나는 즉시 반복문의 증감 -> 조건평가
// 
// 
// 실습

#include <iostream>
#include <iomanip>
using namespace std;

// 5주차 27p
//int main() {
//	int base = 7;
//	int higher = 300, lower = 1;
//	int col = 1;
//
//	for (int i = lower; i < higher ; i++) {
//		if (i % base == 0) {
//			cout << setw(4) << i;
//			col++;
//			if (col > 10) {
//				cout << '\n';
//				col = 1;
//			}
//		}
//	}
//}

// 5주차 30p
int main() {
	int num;

	do {
		cout << "음수가 아닌 정수를 입력하세요: ";
		cin >> num;
	} while (num < 0);

	while (num / 10 > 0) {
		num = num / 10;
	}
	cout << num << endl;

	return 0;
}