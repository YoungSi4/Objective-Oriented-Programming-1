#include <iostream>
using namespace std;

int main() {
	// �������� �����
	string name, birthday, caugh_symp, inspection;
	float temperature;
	bool is_caugh;

	// ����� �Է�, ���� �ʱ�ȭ
	cout << "�̸��� ��������� �Է��ϼ���.\n? ";
	cin >> name >> birthday;
	cout << endl;

	cout << "ü�°� ��ħ ���� ����(true/false)�� �Է��ϼ���.\n? ";
	cin >> temperature >> caugh_symp; // ������ �Է� �ޱ� ���� boolalpha �����ڸ� ���� �ȴ�.��
	cout << endl;

	// true false�θ� �Է� ���� �� �ְ�, bool ������ �Ǵ��ؾ� �ϹǷ� if�� ��ȯ
	if (caugh_symp == "true") is_caugh = true;
	else is_caugh = false;

	cout << "�ż��׿��˻� �缺: �ż�, PCR �缺: PCR, ����: ����\n? ";
	cin >> inspection;
	cout << endl;

	// ��� ��º�
	cout << name << " " << birthday << endl;
	
	// �б�
	if (inspection == "�ż�" || inspection == "PCR") {
		cout << "Ȯ�����Դϴ�. �ݸ��ϱ� �ٶ��ϴ�." << endl;
	}
	else if (temperature > 38 && is_caugh) {
		cout << "�����ǽ����Դϴ�. �˻縦 ��������" << endl;
	}
	else {
		cout << "�������� �ʾҽ��ϴ�." << endl;
	}

	return 0;
}