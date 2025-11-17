#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double r, h, v;
	const double PI = 3.1415926;
	cout << "请输入圆锥的半径和锥高：" << endl;
	cin >> r >> h;
	v = (r * r * PI * h) / 3;
	cout << "圆锥的体积为：" << fixed << setprecision(7) << v << endl;
	return 0;

}