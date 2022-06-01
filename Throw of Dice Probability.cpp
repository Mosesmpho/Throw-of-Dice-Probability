#include <iostream>
using namespace std;
#include <cmath>

int main() {
	int Num1, Num2;
	int sum = 0;
	int Dice;

	cout << " Enter two numbers ranging from 1 to 6 " << endl;
	cin >> Num1 >> Num2;

	sum = Num1 + Num2;
	if (sum == 7 || sum == 11) {
		Dice = 1;
	}
	else if (sum == 2) {
		Dice = 2;
	}
	else if (sum == 12) {
		Dice = 3;
	}
	else if (sum != 7 || sum != 11 || sum != 2 || sum != 12) {
		Dice = 4;

	}

	switch (Dice) {
	case 1:
		cout << " You win!! ";
		break;

	case 2:
		cout << " Snake eyes !! ";
		break;

	case 3:
		cout << " Good shot!! ";
		break;

	case 4:
		cout << " Try again!! ";
		break;


	}





	return 0;



}
