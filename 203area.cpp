#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "请输入三角形的三条边长：" << endl;
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a) {
		cout << "不能构成三角形！" << endl;
		return 0;
	}
	double len;
	len = a + b + c;
	if (a == b || a == c || b == c) {
		cout << "可以构成等腰三角形，周长为：" << len << endl;
	}
	else {
		cout << "可以构成三角形，周长为：" << len << endl;
	}
	return 0;

}