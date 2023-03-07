#include<iostream>

using std::cout;
using std::cin;
using std::endl;

bool IsMultiple(int m, int n) {
	if (m % n == 0)
		return true;
	else
		return false;
}

int main()
{
	int integer1, integer2;
	cout << "please enter two integers!" << endl;
	cin >> integer1 >> integer2;
	if (IsMultiple(integer1, integer2))
		cout << integer1 << "是" << integer2 << "的倍数！" << endl;
	else
		cout << integer1 << "不是" << integer2 << "的倍数！" << endl;
	return 0;
}