#include<iostream>
using namespace std;
int main() {
	int apple = 0, total = 0, i = 1;
	do {
		apple = pow(2, i);
		total += apple;
		i++;
	} while (apple * 2 < 100);
	double average = total * 0.8 / ( i - 1 );
	cout << "Æ½¾ù»¨·Ñ" << average << "Ôª" << endl;
	return 0;
}
