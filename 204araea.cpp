#include<iostream>
using namespace std;
string formula;
int main() {
	cout << "请输入算式：" << endl;
	cin >> formula;
	int len = formula.length(), i = 0, x = 0, num1 = 0, num2 = 0;
	for (i = 0; i < len; i++) {
		if (formula[i] == '+' || formula[i] == '-' || formula[i] == '*' || formula[i] == '/' || formula[i] == '%') {
			if (formula[i] == '/' || formula[i] == '%') {
				if (formula[i + 1] == '0') {
					cout << "算式错误！"<<endl;
					return 0;
				}
			}
			x = i;
			int time = 1;
			for (int l = i - 1; l >= 0; l--) {
				num1 += (formula[l] - '0') * time;
				time *= 10;
			}
			time = pow(10, len - i - 2);
			for (int r = i + 1; r <= len; r++) {
				num2 += (formula[r] - '0') * time;
				time /= 10;
			}
			break;
		}
	}
	if (i == len) {
		cout << "符号错误！" << endl;
		return 0;
	}
	switch(formula[x]) {
		case '+':cout << "答案为：" << num1 + num2 << endl; break;
		case '-':cout << "答案为：" << num1 - num2 << endl; break;
		case '*':cout << "答案为：" << num1 * num2 << endl; break;
		case '/':cout << "答案为：" << num1 / num2 << endl; break;
		case '%':cout << "答案为：" << num1 % num2 << endl; break;
	}
	return 0;
}