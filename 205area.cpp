#include<iostream>
using namespace std;
int main() {
	char x;
	int ans[4] = { 0 };
	while (cin.get(x)) {
		if (static_cast<int>(x) == 10) {
			ans[3]++;
			cout << "英文字母" << ans[0] << "个" << endl;
			cout << "空格" << ans[1] << "个" << endl;
			cout << "数字字符" << ans[2] << "个" << endl;
			cout << "其他字符" << ans[3] << "个" << endl;
			return 0;
		}
		if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) ans[0]++;
		else if (static_cast<int>(x) == 32) ans[1]++;
		else if (x >= '0' && x <= '9') ans[2]++;
		else ans[3]++;
	}

}