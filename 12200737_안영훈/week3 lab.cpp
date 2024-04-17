#include <iostream>
#include <typeinfo>
using namespace std;

// 일단 강노에 있는 거 먼저 해보고
// 그 다음에 시간 남으면 lab 할 것
// 개념 문제도 꽤 나오니까 복습 열심히 할 것

//// Program 1 )
//// 부동소수점을 분해하는 프로그램 작성
//int main() {
//	double num, fract;
//	int real_num;
//	cout << "부동 소수점 입력: ";
//	cin >> num;
//	cout << "\n";
//
//	cout << "원래 값: " << num << "\n";
//
//	real_num = static_cast<int>(num);
//	fract = num - real_num;
//
//	cout << "정수 부분: " << real_num << "\n";
//	cout << "소수점 아래 부분: " << fract << "\n";
//
//	return 0;
//}

//// Program 2 )
//// 세 자리 양의 정수에서 각 자리 숫자를 추출하는 프로그램
//
//int main() {
//	int num;
//
//	cout << "세 자리의 양의 정수 입력: ";
//	cin >> num;
//	cout << "\n입력한 정수: " << num << '\n';
//	cout << "백의 자리: " << num / 100 << '\n';
//	cout << "십의 자리: " << num % 100 / 10 << '\n';
//	cout << "일의 자리: " << num % 100 % 10 << '\n';
//
//	return 0;
//}

//// Program 3 )
//// 초 단위의 시간을 몇 시간, 몇 분, 몇 초인지 계산하는 프로그램
//int main() {
//	int second_input, hour, minute, second;
//	
//	cout << "초 단위의 시간을 양의 정수로 입력: ";
//	cin >> second_input;
//
//	hour = second_input / 3600;
//	minute = second_input % 3600 / 60;
//	second = second_input % 3600 % 60;
//
//	cout << "\n 입력된 초 단위 시간: " << second_input << '\n';
//	cout << "결과: " << hour << "시간 " << minute << "분 " << second << "초\n";
//
//	return 0;
//}

// Program 4 )
// 세 학생의 점수 평균을 계산하는 프로그램을 작성한다

//// setprecision()을 쓰는 걸 잊지 말자!
//
//#include <iomanip>
//
//int main() {
//	int first_score, second_score, third_score;
//	double sum, mean;
//
//	cout << "첫 번째 학생 점수: ";
//	cin >> first_score;
//	cout << "두 번째 학생 점수: ";
//	cin >> second_score;
//	cout << "셋 번째 학생 점수: ";
//	cin >> third_score;
//
//	sum = first_score + second_score + third_score;
//	mean = sum / 3;
//
//	cout << "\n총점: " << sum << '\n';
//	cout << fixed << setprecision(2) << "평균: " << mean << '\n';
//
//	return 0;
//}

//// Program 5 )
//// 모니터 세로 길이를 출력한다
//
//int main() {
//	double garo, sero, garo_gilyee, sero_gilyee;
//
//	cout << "모니터의 화면 비율을 입력해 주세요: ";
//	cin >> garo >> sero;
//
//	cout << "화면의 가로 길이를 입력해 주세요: ";
//	cin >> garo_gilyee;
//
//	sero_gilyee = garo_gilyee * sero / garo;
//
//	cout << "\n4세로 길이: " << sero_gilyee << '\n';
//
//	return 0;
//}

//// Program 6 )
//// 사과를 균등하게 분배한다.
//
//int main() {
//	int apple, people;
//
//	cout << "사과의 개수를 입력해주세요: ";
//	cin >> apple;
//	cout << "사람 수를 입력해주세요: ";
//	cin >> people;
//
//	cout << "모든 사람은 최소 " << apple / people << "개의 사과를 가져갈 수 있습니다.\n";
//
//}

//// Program 7 ) ***********
//// 16진수 연산을 수행하는 프로그램
//
//#include <iomanip>
//
//int main() {
//	int num1, num2;
//	cout << "두 정수를 16진수로 입력해주세요: ";
//	cin >> hex >> num1 >> num2;
//	cout << "a + b = " << hex << num1 + num2 << '\n';
//	cout << "a * b = " << hex << num1 * num2 << '\n';
//	cout << "a / b = " << hex << num1 / num2 << '\n';
//
//	return 0;
//}

//// Program 8 )
//// 남은 쿠키의 개수를 출력한다
//
//int main() {
//	int cookies, friends, share;
//	
//	cout << "쿠키의 개수를 입력하세요: ";
//	cin >> cookies;
//	cout << "친구의 수를 입력하세요: ";
//	cin >> friends;
//
//	share = cookies / friends;
//
//	cout << "남은 쿠키의 개수: " << cookies - friends * share << endl;
//
//	return 0;
//}

//// Program 9 ) *************
//// 필요한 가방의 개수를 출력한다
//
//// 1 ~ 4 -> 1
//// 5 ~ 8 -> 2
//
//int main() {
//	int notebook;
//
//	cout << "노트북의 개수를 입력하세요: ";
//	cin >> notebook;
//
//	cout << "필요한 가방의 수: " << (notebook + 3) / 4 << '\n';
//
//	return 0;
//}