#include <iostream>
using namespace std;

// ���� ������ ++ --
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


//// 1 ~ 100 ������ 7�� ����� �� �ٿ� 10���� ���
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


//// ���� ������ ���ڸ� ����ϴ� ���α׷�
//
//int main() {
//	int num, left_digit;
//
//	cout << "������ �ƴ� ������ �Է��ϼ���: ";
//	cin >> num;
//
//	do {
//		left_digit = num % 10;
//		num = num / 10;
//	} while (num > 0);
//
//	cout << "���� ������ ����: " << left_digit << endl;
//	
//	return 0;
//}

//// ��� ���� �Է��ϸ� 1���� +1 �ؼ� ����ϰ� �ٹٲ��� �ϸ�
//// �����ϴ� ���ڰ� �ٷ� ���� ���ڿ� +1 �Ǵ� ���α׷�
//
//int main() {
//	int row, col;
//
//	cout << "���� ���� �Է��ϼ���: ";
//	cin >> row;
//	cout << "���� ���� �Է��ϼ���: ";
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


// N x N ũ��� �� ��� �Լ�
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
//	cout << "������ ũ�⸦ �Է��ϼ���: ";
//	cin >> size;
//
//	star(size);
//
//	return 0;
//}


// ���� ������
// 
//int num = 5;
//
//int main() {
//	int num = 25;
//	cout << "���� ���� num�� �� = " << ::num << endl;
//	cout << "���� ���� num�� �� = " << num << endl;
//}

//// ���丮��
//
//int sum(int n);
//int factorial(int n);
//
//int main() {
//	int num;
//
//	cout << "���� �ϳ� �Է�: ";
//	cin >> num;
//
//	cout << "\nsum(" << num << ")�� �� = " << sum(num) << '\n';
//	cout << num << "! �� �� = " << factorial(num) << "\n";
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

//// �Ǻ���ġ
//
//int fibonachi(int n);
//
//int main() {
//	for (int i = 0; i < 11; i++) {
//		cout << "�Ǻ���ġ " << i << "��° �� = " << fibonachi(i) << '\n';
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