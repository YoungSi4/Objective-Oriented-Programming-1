#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// ������ ����� �Է�
// ���� ����������
// ���� �̸� + �ݸ޴�! �̶�� ���
// ���� �׽�Ʈ ����� ����غ� ��.

// 1. ������ �����ϴ� �Լ�
int move_input();

// 2. ���۳��� �����ϴ� �Լ�
int move_result(int, int);

int main() {
	int set_point, NHD_move, GYR_move;
	int NHD_point = 0, GYR_point = 0;
	// 1 : ���� , 2 : ���� , 3 : ���
	// ���� > ���� > ���

	cout << "<1999 ���� �ƽþ� ���� ���� ��� ��긣 �����>\n";
	cout << "������ �Է��ϼ���: ";
	cin >> set_point;
	cout << "\n";

	// seed�� ����. �ۿ��� seed ���� ���࿡ 
	srand(time(0));
	
	// ������� �ּ�ó��
	// ���� Ȯ���� ���� �ڵ�
	// ��������� ������ ������ �������� Ȯ��
	/****************************************
	int i = 1;
	int count1 = 0, count2 = 0, count3 = 0;

	while (i++) {
		int check = rand(); // �̰� ��������� ���� ���� üũ
		int exp = 1 + rand() % 3;
		if (exp == 1) {
			count1++;
		}
		else if (exp == 2) {
			count2++;
		}
		else {
			count3++;
		}

		if (i > 5000) {
			break;
		}
	}
	// ���� ���� Ƚ���� ����ϱ� ���� �κ�.
	// �̰� �����Ϸ� Ȯ��.
	cout << "count1: " << count1 << '\n';
	cout << "count2: " << count2 << '\n';
	cout << "count3: " << count3 << "\n";
	cout << "\n";
	
	*******************************************/
	// ������ ������ ��� ��������� 1500 ~ 1800�� count�� ���´�
	// ��������� �����ϴ�.
	// 1, 2, 3 �� ������ ������ ũ�� ������ ����.
	// ������� ����� �ڵ�

	do {
		int referee; // �ൿ�� ������ ���� ����
		NHD_move = move_input(); // �Լ� ȣ��, �Է� �޾Ƽ� �ٷ� �Ҵ�

		// ���⿡�� ���ѷ����� ����� ������� �ؼ�
		// if ���� �߰��� ������ ���� Ƚ���� ī��Ʈ.
		// ��������� Ȯ���� �����ϰ� �������� ����.

		GYR_move = 1 + rand() % 3; // 1 ~ 3 ������

		referee = move_result(NHD_move, GYR_move);
		if (referee == 1) {
			NHD_point++; // ���ϰ��� 1�� �� ������ �¸�
		}
		else if (referee == 2) {
			GYR_point++; // ���ϰ��� 2�� �� �������� �¸�
		}

		// �ൿ ������ �Լ��� ó������ �ʾ���.
		// �ܼ� ����̱⵵ �ϰ�, �μ��� �����ϰ� �޴� �� �� ���ŷӴٰ� �Ǵ�.
		cout << "���� �ൿ: " << NHD_move << " , ";
		cout << "������ �ൿ: " << GYR_move << "\n";
		cout << "���� ����: " << NHD_point << " , ";
		cout << "������ ����: " << GYR_point << "\n\n";

	} while (NHD_point < set_point and GYR_point < set_point);

	if (NHD_point > GYR_point) {
		cout << "���� �ݸ޴�!!\n";
	}
	else {
		cout << "������ �ݸ޴�!!\n";
	}
	
	return 0;
}

int move_input() {
	// ���� ���� ����� �����ϴ� �Լ�
	// parameter: ����
	// return: int (���� ����)
	int temp;
	cout << "������ �����ϼ���.\n";
	cout << "1. ���� 2. ���� 3. ���\n? ";
	cin >> temp;

	return temp;
}

int move_result(int NHD, int GYR) {
	// ���۳��� ����� ����ϴ� �Լ�
	// parameter: int, int (�÷��̾�, CPU)
	// return: int (0 = ���º�, 1 �÷��̾� ��, 2 CPU ��)

	// 1 > 2 > 3 > 1 ������ �̱��.
	// ���� %�� ����ϸ� �� ������ ǥ���� �� �ִ�.
	GYR = GYR % 3;
	NHD = NHD % 3;
	if (NHD == GYR) {
		return 0; // ���º�
	}
	else if ((NHD + 1) % 3 == GYR) {
		return 1; // �÷��̾�(����) 1��
	}
	else {
		return 2; // ������ 1��
	}
}