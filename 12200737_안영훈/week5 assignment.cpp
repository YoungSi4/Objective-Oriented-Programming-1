// 3명 분을 출력하고 나면 프로그램 종료
// 잘못된 입력은 카운트하지 않는다.
// 테스트 파일을 복붙했을 때 잘 돌아가도록 만들 것.
// 다른 입력 조건에 대해서도 동일하게 동작해야함
// 스스로 분기에 따른 케이스를 체크할 것.
#include <iostream>
using namespace std;

// 교수님은 변수 기본값 할당 중복을 피하기 위해
// for 문 안에서 초기화 해주고 do while로 반복문을 돌렸음.
// 변수 초기화를 위해 for문 변수 스코프를 이용.
int main() {
	// count는 반복문 제어에 사용해야 하기 때문에 메인 함수의 지역 변수로 선언
	// 이외의 변수의 경우 프로그램 시작부터 4를 입력해도 default 값으로
	// 출력되어야 하기 때문에 메인 함수의 지역 변수로 선언
	int count = 0;
	string name = "noname", birthday = "220101", covid_inspection ="음성";
	float temperature = 0;
	bool is_caugh = false;
	int menu;

	// 3번 결과 출력을 할 때까지 반복
	while(count < 3){
		// 메뉴 안내문 출력 및 사용자 입력 변수
		// 오류문에 모호하다고 해서 std namespace를 붙였습니다.
		std::cout << "1. 신상 정보 입력\n2.의심 증상이 있는 경우\n3. 코로나 검사를 받은 경우\n4. 결과 출력\n? ";
		cin >> menu;

		// 메뉴 선택 분기. break로 이후 case가 실행되지 않도록 제어.
		switch (menu) {
		case 1:
			std::cout << "\n이름과 생년월일을 입력하세요.\n? ";
			cin >> name >> birthday;
			break;

		case 2:
			std::cout << "\n체온과 기침 증상 유무(true/false)를 입력하세요.\n? ";
			cin >> temperature >> boolalpha >> is_caugh;
			break;

		case 3:
			std::cout << "\n신속항원검사 양성: 신속, PCR 양성: PCR, 음성: 음성\n? ";
			cin >> covid_inspection;
			break;

		case 4: // 입력 받은 변수에 의한 분기 판단 및 count + 1
			std::cout << "\n" << name << " " << birthday << "\n";
			if (covid_inspection == "신속" || covid_inspection == "PCR") {
				std::cout << "확진자입니다. 격리하기 바랍니다.\n";
			}
			else if (temperature > 38 && is_caugh){
				std::cout << "감염의심자입니다. 검사를 받으세요.\n";
			}
			else {
				std::cout << "감염되지 않았습니다.\n";
			}

			// count를 제외한 모든 변수를 default값으로 할당.
			// 초기화랑 중복이라 별로 마음에는 안 듭니다...
			name = "noname";
			birthday = "220101";
			covid_inspection = "음성";
			temperature = 0;
			is_caugh = false;
			// count만 1 증가.
			count++;
			break;

		default:
			std::cout << "잘못된 입력입니다.\n";

		}
		std::cout << "\n";
	}
	return 0;
}