// 3�� ���� ����ϰ� ���� ���α׷� ����
// �߸��� �Է��� ī��Ʈ���� �ʴ´�.
// �׽�Ʈ ������ �������� �� �� ���ư����� ���� ��.
// �ٸ� �Է� ���ǿ� ���ؼ��� �����ϰ� �����ؾ���
// ������ �б⿡ ���� ���̽��� üũ�� ��.
#include <iostream>
using namespace std;

// �������� ���� �⺻�� �Ҵ� �ߺ��� ���ϱ� ����
// for �� �ȿ��� �ʱ�ȭ ���ְ� do while�� �ݺ����� ������.
// ���� �ʱ�ȭ�� ���� for�� ���� �������� �̿�.
int main() {
	// count�� �ݺ��� ��� ����ؾ� �ϱ� ������ ���� �Լ��� ���� ������ ����
	// �̿��� ������ ��� ���α׷� ���ۺ��� 4�� �Է��ص� default ������
	// ��µǾ�� �ϱ� ������ ���� �Լ��� ���� ������ ����
	int count = 0;
	string name = "noname", birthday = "220101", covid_inspection ="����";
	float temperature = 0;
	bool is_caugh = false;
	int menu;

	// 3�� ��� ����� �� ������ �ݺ�
	while(count < 3){
		// �޴� �ȳ��� ��� �� ����� �Է� ����
		// �������� ��ȣ�ϴٰ� �ؼ� std namespace�� �ٿ����ϴ�.
		std::cout << "1. �Ż� ���� �Է�\n2.�ǽ� ������ �ִ� ���\n3. �ڷγ� �˻縦 ���� ���\n4. ��� ���\n? ";
		cin >> menu;

		// �޴� ���� �б�. break�� ���� case�� ������� �ʵ��� ����.
		switch (menu) {
		case 1:
			std::cout << "\n�̸��� ��������� �Է��ϼ���.\n? ";
			cin >> name >> birthday;
			break;

		case 2:
			std::cout << "\nü�°� ��ħ ���� ����(true/false)�� �Է��ϼ���.\n? ";
			cin >> temperature >> boolalpha >> is_caugh;
			break;

		case 3:
			std::cout << "\n�ż��׿��˻� �缺: �ż�, PCR �缺: PCR, ����: ����\n? ";
			cin >> covid_inspection;
			break;

		case 4: // �Է� ���� ������ ���� �б� �Ǵ� �� count + 1
			std::cout << "\n" << name << " " << birthday << "\n";
			if (covid_inspection == "�ż�" || covid_inspection == "PCR") {
				std::cout << "Ȯ�����Դϴ�. �ݸ��ϱ� �ٶ��ϴ�.\n";
			}
			else if (temperature > 38 && is_caugh){
				std::cout << "�����ǽ����Դϴ�. �˻縦 ��������.\n";
			}
			else {
				std::cout << "�������� �ʾҽ��ϴ�.\n";
			}

			// count�� ������ ��� ������ default������ �Ҵ�.
			// �ʱ�ȭ�� �ߺ��̶� ���� �������� �� ��ϴ�...
			name = "noname";
			birthday = "220101";
			covid_inspection = "����";
			temperature = 0;
			is_caugh = false;
			// count�� 1 ����.
			count++;
			break;

		default:
			std::cout << "�߸��� �Է��Դϴ�.\n";

		}
		std::cout << "\n";
	}
	return 0;
}