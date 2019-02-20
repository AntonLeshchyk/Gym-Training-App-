#include<iostream>
using namespace std;
int a;
void  Registration() {
	a = 0;
	return;
}

void main() {

	int choseUser;
	cout << "\tHello! It's a your aplication" << endl;

	cout << "If you want to enter your data enter 1" << endl
		<< "If you want to go to your accaunt enter 2" << endl;
	cin >> choseUser;
	if (choseUser == 1) {
		void Registration();
	}
	if (choseUser == 2) {
	
	}
	cout << a << endl;
}