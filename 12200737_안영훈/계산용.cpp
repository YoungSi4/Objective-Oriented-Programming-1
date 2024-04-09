#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double fx, d_fx;
	double x;
	int index = 0;

	for (; ;) {
		cout << "0.1을 입력하면 탈출\n";
		cin >> x;

		fx = -96 * pow(x, 5) + 240 * pow(x, 4) - 244 * pow(x, 3) + 126 * pow(x, 2) - 33 * x + 3.5;
		d_fx = -480 * pow(x, 4) + 960 * pow(x, 3) - 732 * pow(x, 2) - 252 * x - 33;


		cout << "x == " << x << " 일 때 f'(x) = " << fx << '\n';
		cout << "x == " << x << " 일 때 f''(x) = " << d_fx;
		cout << "\n\n";

		if(x == 0.1){
			break;
		}
	}

	return 0;
}