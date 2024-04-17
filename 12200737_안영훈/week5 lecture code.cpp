#include <iostream>
using namespace std;

// 증감 연산자 ++ --
/*
int main() {
	int a = 5;
	a = 16;
	16 = a;

	++a;
	++16;
	++(++a);

	a++;
	16++;
	(a++)++;
}
*/


//// 1 ~ 100 사이의 7의 배수를 한 줄에 10개씩 출력
//#include <iomanip>
//
//int main() {
//	int lower = 1, higher = 300;
//	int divivor = 7;
//	int col = 1;
//
//	for (int i = lower; i < higher; i++) {
//		if (i % divivor == 0) {
//			cout << setw(4) << i;
//			col += 1;
//
//			if (col > 10) {
//				cout << '\n';
//				col = 1;
//			}
//
//		}
//	}
//
//	return 0;
//}


//// 가장 왼쪽의 숫자를 출력하는 프로그램
//
//int main() {
//	int num, left_digit;
//
//	cout << "음수가 아닌 정수를 입력하세요: ";
//	cin >> num;
//
//	do {
//		left_digit = num % 10;
//		num = num / 10;
//	} while (num > 0);
//
//	cout << "가장 왼쪽의 숫자: " << left_digit << endl;
//	
//	return 0;
//}

//// 행과 열을 입력하면 1부터 +1 해서 출력하고 줄바꿈을 하면
//// 시작하는 숫자가 바로 위의 숫자에 +1 되는 프로그램
//
//int main() {
//	int row, col;
//
//	cout << "행의 수를 입력하세요: ";
//	cin >> row;
//	cout << "열의 수를 입력하세요: ";
//	cin >> col;
//
//	for (int i = 1; i <= row; i++) {
//		for (int j = i; j < col + i; j++) {
//			cout << j << " ";
//		}
//		cout << '\n';
//		
//	}
//
//	return 0;
//}


// N x N 크기로 별 찍는 함수
// 
//void star(int size) {
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size; j++) {
//			cout << "*";
//		}
//		cout << '\n';
//	}
//}
//
//int main() {
//	int size;
//	cout << "패턴의 크기를 입력하세요: ";
//	cin >> size;
//
//	star(size);
//
//	return 0;
//}


// 변수 섀도잉
// 
//int num = 5;
//
//int main() {
//	int num = 25;
//	cout << "전역 변수 num의 값 = " << ::num << endl;
//	cout << "지역 변수 num의 값 = " << num << endl;
//}

//// 팩토리얼
//
//int sum(int n);
//int factorial(int n);
//
//int main() {
//	int num;
//
//	cout << "수를 하나 입력: ";
//	cin >> num;
//
//	cout << "\nsum(" << num << ")의 값 = " << sum(num) << '\n';
//	cout << num << "! 의 값 = " << factorial(num) << "\n";
//
//	return 0;
//}
//
//int sum(int n) {
//	if (n <= 0) {
//		return 0;
//	}
//
//	return n + sum(n - 1);
//}
//
//int factorial(int n) {
//	if (n <= 1) {
//		return 1;
//	}
//
//	return n * factorial(n - 1);
//}

//// 피보나치
//
//int fibonachi(int n);
//
//int main() {
//	for (int i = 0; i < 11; i++) {
//		cout << "피보나치 " << i << "번째 수 = " << fibonachi(i) << '\n';
//	}
//	return 0;
//}
//
//int fibonachi(int n) {
//	if (n == 0) {
//		return 0;
//	}
//	else if (n == 1) {
//		return 1;
//	}
//
//	return fibonachi(n - 2) + fibonachi(n - 1);
//}