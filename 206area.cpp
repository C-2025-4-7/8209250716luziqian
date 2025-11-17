#include<iostream>
using namespace std;
int main() {
	int Num1, Num2;
	cout << "请输入两个数：" << endl;
	cin >> Num1 >> Num2;
	if (Num1 < Num2) swap(Num1, Num2);
	int num1 = Num1, num2 = Num2;
	while (num1 % num2 != 0) {
		int x=num2;
		num2 = num1 % num2;
		num1 = x;
	}
	int ans1, ans2;
	ans1 = num2;
	ans2 = Num1 * Num2 / ans1;
	cout << "最大公约数为：" << ans1 << endl;
	cout << "修小公倍数为：" << ans2 << endl;
	return 0;

}