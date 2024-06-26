// 4주차 - 2
// 
// 지난 시간
// 논리연산자 ! && || (XOR도 있긴 한데 나중에 다른 곳에서 다룰 예정)
// 절대 하면 안 되는 것.
// 값 1 < x < 값 2 -> 동시에 비교하는 것이 아닌, 왼쪽부터 한 묶음씩 한다.
// 원하지 않는 결과가 나올 가능성이 너무나도 높다.
// 
// 에어컨 피드백 시스템
// hot = temperature >= 23
// cold = (temperature <= 15) -> 소괄호 안 치면?
// ㄴ 코드가 너무 긴 경우, 그냥 먼저 할당해버리고 비교 연산을 하는 경우가 있다.
// 
#include <iostream>
using namespace std;

int main() {
	int temperature;
	int hot, cold;

	cout << "현재 온도를 입력하세요: ";
	cin >> temperature;

	hot = temperature >= 23;
	cold = temperature <= 15;

	if (hot || cold) {
		cout << "에어컨이 가동됩니다." << endl;

		if (hot)
			cout << "냉방 모드로 작동합니다" << endl;
		else
			cout << "난방 모드로 작동합니다" << endl;
	}
	else
		cout << "에어컨이 꺼집니다." << endl;

	return 0;
}
// 
// 
// 4주차 - 2 본 내용
// 
// 윤년. - 논리연산 연습
// 400으로 나눌 수 있으면 윤년 또는 4로 나눌 수 있지만 100으로 나울 수 없다면 윤년
// 
// 다른 연습 예제 - FizzBuzz 문제?
// 
// S C P 였던가
// ( 3 < 2 ) && ( x = 2 ) -> x 에 2가 할당되지 않는다.
// 이미 앞에서 F가 됐으니까 뒤에는 실행하지 않음.
// 
// ( 3 > 2 ) || ( x = 3 ) -> 마찬가지로 3이 할당되지 않는다.
// 
// 
// 
// switch문
// switch(표현식-> int) 무조건 int여야만 한다. case를 나누기 때문
// {
//	case 값1:
//  case 값2: // 점프해와서 이 지점부터 순서대로 실행한다.
//	.
//  .
//  .
//	default: (그 어떤 case 값도 아닐 때 실행됨. else와 비슷함)
//	보통 마지막에 두니까 break를 쓰지 않는 편
// }
// 
// switch를 분기라고 볼 수 있는건가...?
// 해당 케이스만 실행시키고 다른 건 실행 안 시켜야 하는데?
// 
// 그래서 break를 같이 사용한다.
// 
// 같이 알면 좋은 거 1.
// case 여러개를 묶을 수 있다.
// case 'A'
// case 'B'
// case 'C'
//	cout << "통과입니다."
// 
// case 'D'
// case 'F'
//	cout << "실패입니다."
// 
// 같이 알면 좋은 거 2.
// case 뒤에 올 수 있는 것들
// 1. 리터럴 정수, 
// 2. 상수인 정수형 변수 (const) - 그냥 int a는?
// 값이 바뀔 수 있으므로 올 수 없다. 
// 3. char형 ' '  ASCII 로 정해진 숫자로 저장 -> 상수
// 이외에도 열거형이 존재하긴 하다.
// 
// 
// 주의사항 1: 동일한 값을 가진 case는 만들 수 없다.
// case 5:
// case 5: -> 컴파일러가 해석할 수 없음.
// 
// case 'a':
// case 'A': -> 둘은 값이 다르니까 뭐...
// 
// 주의사항 2: switch 문 내부에서 변수 선언은 불가능하다.
// 예외적으로 case 안쪽에 {}를 치고 그 안에서만 선언해서 쓸 순 있다.
// 
// case 1 : {
//	int a = 3;
//  ~~
// } -> 근데 굳이... 스코프 상으로 굳이 굳이
// 
// 
// 
// 
// 삼항 연산자
// condition ? expression 1 : expression 2
// 조건이 참 -> expr 1
// 조건이 거짓 -> expr 2
// 
// 구조적으로 if else와 동일하다.
// 코드를 간결하게 작성할 수 있어서.
// ㄴ 개발자 입장에서 확실히 가독성 좋으면 무조건 좋은 코드
// 길이가 짧은 코드가 유리할 때도 있는 것 같다.
// 개발 환경마다 주어진 리소스가 적을 수도 있고
// 코드가 컴팩트 할수록 컴파일 타임이 짧아져서 유리하다.
// 
// 제한된 시간 안에 코드를 완성할 수 있다면 좋다.
// 일단 코드부터 제한시간 안에 만들고 제출 후에 고쳐야 하는 상황이라면
// 이렇게 하는 수밖에 없지 않을까...
// 
// 
// 이 셋 중에 뭐가 제일 좋은가요?
// 그래도 학생이면 일단 가독성 좋게 코드를 짜는 연습부터 하자.
// 충분히 보기 좋은 코드를 만들 수 있는 사람이라면
// 더 좋게 만들수도 있고 난해하게도, 그냥 빠르게 만드는 것 위주로만 하기도 가능하다.
// 
// ** cpp는 삼항 연산으로만 가능한 문장이 있다
// const int larger = ( num1 >= num2 ? num1 : num2 )
// ㄴ 이건 if else로는 만들 수 없다.
// 파이썬 제네레이터 같은 느낌인건가
// 
// if와 switch 중에 뭐가 더 유리한지 생각해서 코딩
// 지금은 익숙하지 않은 걸 우선시해서 코딩.
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 