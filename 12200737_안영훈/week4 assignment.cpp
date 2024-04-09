#include <iostream>
using namespace std;

int main() {
	// 지역변수 선언부
	string name, birthday, caugh_symp, inspection;
	float temperature;
	bool is_caugh;

	// 사용자 입력, 변수 초기화
	cout << "이름과 생년월일을 입력하세요.\n? ";
	cin >> name >> birthday;
	cout << endl;

	cout << "체온과 기침 증상 유무(true/false)를 입력하세요.\n? ";
	cin >> temperature >> caugh_symp; // 변수에 입력 받기 전에 boolalpha 조정자를 쓰면 된다.ㄴ
	cout << endl;

	// true false로만 입력 받을 수 있고, bool 변수로 판단해야 하므로 if로 변환
	if (caugh_symp == "true") is_caugh = true;
	else is_caugh = false;

	cout << "신속항원검사 양성: 신속, PCR 양성: PCR, 음성: 음성\n? ";
	cin >> inspection;
	cout << endl;

	// 결과 출력부
	cout << name << " " << birthday << endl;
	
	// 분기
	if (inspection == "신속" || inspection == "PCR") {
		cout << "확진자입니다. 격리하기 바랍니다." << endl;
	}
	else if (temperature > 38 && is_caugh) {
		cout << "감염의심자입니다. 검사를 받으세요" << endl;
	}
	else {
		cout << "감염되지 않았습니다." << endl;
	}

	return 0;
}