#include <iostream>
#include <typeinfo>
using namespace std;

// �ϴ� ���뿡 �ִ� �� ���� �غ���
// �� ������ �ð� ������ lab �� ��
// ���� ������ �� �����ϱ� ���� ������ �� ��

//// Program 1 )
//// �ε��Ҽ����� �����ϴ� ���α׷� �ۼ�
//int main() {
//	double num, fract;
//	int real_num;
//	cout << "�ε� �Ҽ��� �Է�: ";
//	cin >> num;
//	cout << "\n";
//
//	cout << "���� ��: " << num << "\n";
//
//	real_num = static_cast<int>(num);
//	fract = num - real_num;
//
//	cout << "���� �κ�: " << real_num << "\n";
//	cout << "�Ҽ��� �Ʒ� �κ�: " << fract << "\n";
//
//	return 0;
//}

//// Program 2 )
//// �� �ڸ� ���� �������� �� �ڸ� ���ڸ� �����ϴ� ���α׷�
//
//int main() {
//	int num;
//
//	cout << "�� �ڸ��� ���� ���� �Է�: ";
//	cin >> num;
//	cout << "\n�Է��� ����: " << num << '\n';
//	cout << "���� �ڸ�: " << num / 100 << '\n';
//	cout << "���� �ڸ�: " << num % 100 / 10 << '\n';
//	cout << "���� �ڸ�: " << num % 100 % 10 << '\n';
//
//	return 0;
//}

//// Program 3 )
//// �� ������ �ð��� �� �ð�, �� ��, �� ������ ����ϴ� ���α׷�
//int main() {
//	int second_input, hour, minute, second;
//	
//	cout << "�� ������ �ð��� ���� ������ �Է�: ";
//	cin >> second_input;
//
//	hour = second_input / 3600;
//	minute = second_input % 3600 / 60;
//	second = second_input % 3600 % 60;
//
//	cout << "\n �Էµ� �� ���� �ð�: " << second_input << '\n';
//	cout << "���: " << hour << "�ð� " << minute << "�� " << second << "��\n";
//
//	return 0;
//}

// Program 4 )
// �� �л��� ���� ����� ����ϴ� ���α׷��� �ۼ��Ѵ�

//// setprecision()�� ���� �� ���� ����!
//
//#include <iomanip>
//
//int main() {
//	int first_score, second_score, third_score;
//	double sum, mean;
//
//	cout << "ù ��° �л� ����: ";
//	cin >> first_score;
//	cout << "�� ��° �л� ����: ";
//	cin >> second_score;
//	cout << "�� ��° �л� ����: ";
//	cin >> third_score;
//
//	sum = first_score + second_score + third_score;
//	mean = sum / 3;
//
//	cout << "\n����: " << sum << '\n';
//	cout << fixed << setprecision(2) << "���: " << mean << '\n';
//
//	return 0;
//}

//// Program 5 )
//// ����� ���� ���̸� ����Ѵ�
//
//int main() {
//	double garo, sero, garo_gilyee, sero_gilyee;
//
//	cout << "������� ȭ�� ������ �Է��� �ּ���: ";
//	cin >> garo >> sero;
//
//	cout << "ȭ���� ���� ���̸� �Է��� �ּ���: ";
//	cin >> garo_gilyee;
//
//	sero_gilyee = garo_gilyee * sero / garo;
//
//	cout << "\n4���� ����: " << sero_gilyee << '\n';
//
//	return 0;
//}

//// Program 6 )
//// ����� �յ��ϰ� �й��Ѵ�.
//
//int main() {
//	int apple, people;
//
//	cout << "����� ������ �Է����ּ���: ";
//	cin >> apple;
//	cout << "��� ���� �Է����ּ���: ";
//	cin >> people;
//
//	cout << "��� ����� �ּ� " << apple / people << "���� ����� ������ �� �ֽ��ϴ�.\n";
//
//}

//// Program 7 ) ***********
//// 16���� ������ �����ϴ� ���α׷�
//
//#include <iomanip>
//
//int main() {
//	int num1, num2;
//	cout << "�� ������ 16������ �Է����ּ���: ";
//	cin >> hex >> num1 >> num2;
//	cout << "a + b = " << hex << num1 + num2 << '\n';
//	cout << "a * b = " << hex << num1 * num2 << '\n';
//	cout << "a / b = " << hex << num1 / num2 << '\n';
//
//	return 0;
//}

//// Program 8 )
//// ���� ��Ű�� ������ ����Ѵ�
//
//int main() {
//	int cookies, friends, share;
//	
//	cout << "��Ű�� ������ �Է��ϼ���: ";
//	cin >> cookies;
//	cout << "ģ���� ���� �Է��ϼ���: ";
//	cin >> friends;
//
//	share = cookies / friends;
//
//	cout << "���� ��Ű�� ����: " << cookies - friends * share << endl;
//
//	return 0;
//}

//// Program 9 ) *************
//// �ʿ��� ������ ������ ����Ѵ�
//
//// 1 ~ 4 -> 1
//// 5 ~ 8 -> 2
//
//int main() {
//	int notebook;
//
//	cout << "��Ʈ���� ������ �Է��ϼ���: ";
//	cin >> notebook;
//
//	cout << "�ʿ��� ������ ��: " << (notebook + 3) / 4 << '\n';
//
//	return 0;
//}