#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 승점은 사용자 입력
// 상성은 가위바위보
// 승자 이름 + 금메달! 이라고 출력
// 난수 테스트 방법을 고민해볼 것.

// 1. 동작을 선택하는 함수
int move_input();

// 2. 동작끼리 판정하는 함수
int move_result(int, int);

int main() {
	int set_point, NHD_move, GYR_move;
	int NHD_point = 0, GYR_point = 0;
	// 1 : 막기 , 2 : 베기 , 3 : 찌르기
	// 막기 > 베기 > 찌르기

	cout << "<1999 경주 아시안 게임 여자 펜싱 사브르 결승전>\n";
	cout << "승점을 입력하세요: ";
	cin >> set_point;
	cout << "\n";

	// seed를 세팅. 밖에서 seed 값을 실행에 
	srand(time(0));
	
	// 여기부터 주석처리
	// 난수 확인을 위한 코드
	// 디버깅으로 난수가 적절히 나오는지 확인
	/****************************************
	int i = 1;
	int count1 = 0, count2 = 0, count3 = 0;

	while (i++) {
		int check = rand(); // 이건 디버깅으로 난수 생성 체크
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
	// 누적 등장 횟수를 출력하기 위한 부분.
	// 이건 컴파일로 확인.
	cout << "count1: " << count1 << '\n';
	cout << "count2: " << count2 << '\n';
	cout << "count3: " << count3 << "\n";
	cout << "\n";
	
	*******************************************/
	// 실제로 돌려본 결과 평균적으로 1500 ~ 1800의 count가 나온다
	// 통계적으로 적절하다.
	// 1, 2, 3 이 나오는 순서도 크게 문제가 없다.
	// 여기까지 실험용 코드

	do {
		int referee; // 행동을 판정을 위한 변수
		NHD_move = move_input(); // 함수 호출, 입력 받아서 바로 할당

		// 여기에만 무한루프를 씌우고 디버깅을 해서
		// if 문을 추가로 씌워서 나온 횟수를 카운트.
		// 통계적으로 확률이 유사하게 나오는지 검토.

		GYR_move = 1 + rand() % 3; // 1 ~ 3 범위값

		referee = move_result(NHD_move, GYR_move);
		if (referee == 1) {
			NHD_point++; // 리턴값이 1일 때 나희도의 승리
		}
		else if (referee == 2) {
			GYR_point++; // 리턴값이 2일 때 고유림의 승리
		}

		// 행동 선택은 함수로 처리하지 않았음.
		// 단순 출력이기도 하고, 인수로 전달하고 받는 게 더 번거롭다고 판단.
		cout << "나희도 행동: " << NHD_move << " , ";
		cout << "고유림 행동: " << GYR_move << "\n";
		cout << "나희도 점수: " << NHD_point << " , ";
		cout << "고유림 점수: " << GYR_point << "\n\n";

	} while (NHD_point < set_point and GYR_point < set_point);

	if (NHD_point > GYR_point) {
		cout << "나희도 금메달!!\n";
	}
	else {
		cout << "고유림 금메달!!\n";
	}
	
	return 0;
}

int move_input() {
	// 동작 선택 기능을 수행하는 함수
	// parameter: 없음
	// return: int (동작 선택)
	int temp;
	cout << "동작을 선택하세요.\n";
	cout << "1. 막기 2. 베기 3. 찌르기\n? ";
	cin >> temp;

	return temp;
}

int move_result(int NHD, int GYR) {
	// 동작끼리 결과를 출력하는 함수
	// parameter: int, int (플레이어, CPU)
	// return: int (0 = 무승부, 1 플레이어 승, 2 CPU 승)

	// 1 > 2 > 3 > 1 순으로 이긴다.
	// 따라서 %를 사용하면 이 순서를 표현할 수 있다.
	GYR = GYR % 3;
	NHD = NHD % 3;
	if (NHD == GYR) {
		return 0; // 무승부
	}
	else if ((NHD + 1) % 3 == GYR) {
		return 1; // 플레이어(나희도) 1점
	}
	else {
		return 2; // 고유림 1점
	}
}