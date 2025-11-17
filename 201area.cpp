#include<iostream>
using namespace std;
int main() {
	char x;
	cin >> x;
	int num = static_cast<int>(x);
	if (num >= 97 && num <= 122) {
		num -= 32;
		cout << static_cast<char>(num) <<endl;
	}
	else {
		cout << ++num << endl;
	}
	return 0;

}