#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int apple = 0, total = 0, i = 1;
	do {
		apple = pow(2, i);
		total += apple;
		i++;
	} while (apple * 2 < 100);
	double average = total * 0.8 / ( i - 1 );
	cout << "平均花费" << average << "元" << endl;
	return 0;
}


