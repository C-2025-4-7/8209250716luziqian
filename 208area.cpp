#include<iostream>
using namespace std;
double sqt(double a) {
	double x_now = a, x_next, x = 1;
	while (x >= 0.00001) {
		x_next = (x_now + a / x_now) / 2;
		x = abs(x_next - x_now);
		x_now = x_next;
	}
	return x_now;
}
int main() {
	double a;
	cout << "ÇëÊäÈëÊý×Ö£º" << endl;
	cin >> a;
	if (a < 0)  cout << sqt(-a) << 'i' << endl; 
	else  cout << sqt(a) <<endl; 
	return 0;
}