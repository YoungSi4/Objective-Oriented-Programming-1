// 4���� ���� �ڵ� �ۼ�

// ���� ����
// �Ǽ� Ÿ���� ����� �� �����ڿ� ���� �ʴ´�.
// ���е� ���̷� �������� ���� ����� ���� �� �ִ�.

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

//�� ���� ǥ�� ����
//
//3 > false  / -> �̷� �����δ� ���� �� ��.
//���ʿ� int�� bool�� ���ϴ� �� �̻���.

//int main() {
//	int number;
//
//	cout << "������ �Է��ϼ���: ";
//	cin >> number;
//
//	if (number < 0) {
//		number = -number;
//	}
//
//	cout << "�Է��� ������ ���밪 = " << number << endl;
//
//	return 0;
//}

//#include <iomanip>
//
//int main() {
//	double hours, rate, regularPay, overPay, totalPay;
//
//	cout << "���� �ð��� �Է��ϼ��� : ";
//	cin >> hours;
//	cout << "�ð��� �޿��� �Է��ϼ��� : ";
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
//	cout << endl << fixed; // fixed�� �Ҽ����� �⺻ 6�ڸ�
//	cout << setprecision(2);
//	cout << "�Ϲ� �޿� = " << regularPay << endl;
//	cout << "�ʰ� �ٹ��� ���� �޿� = " << overPay << endl;
//	cout << "��ü �޿� = " << totalPay << endl;
//
//	return 0;
//}

// ����� ����ȯ
// #include <iomanip> + static_cast<�ڷ���>

// �ڷ��� Ȯ��
// #include <typeinfo> + typeid(ǥ����).name()

// �Ҽ��� ��� ǥ�� fixed �⺻ 6�ڸ�
// �Ҽ��� �ڸ��� ���� setprecision()
// + ��ȣ �����ֱ� showpos
// 
// setfill('@')
// setw()
// left right internal

// boolalpha

// 10���� dec 8���� oct 16���� hex

// dangling else �� ������ 16p



// ���� ����
// 
// 4�� ���� �� ������ ����
// 100���� ���� �� ������ ������ �ƴ�
// ������ 400���� ���� �� ������ ����
// 


//// �� ���� ��ȣ and or�� �ƴ϶� && || �� �� ���� ����
//int main() {
//	int year;
//
//	cout << "�⵵�� �Է�: ";
//	cin >> year;
//
//	if ((year % 400 == 0) && (year % 4 == 0 && year % 100 != 0)) {
//		cout << year << "���� �����Դϴ�.\n";
//	}
//	else {
//		cout << year << "���� ������ �ƴմϴ�.\n";
//	}
//
//}

// ���� ������
// 