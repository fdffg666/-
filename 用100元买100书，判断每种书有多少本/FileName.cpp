#include<iostream>
using namespace std;
int main() {
	int a, b, c, d, f;
	f = 100;//这是总本数
	for (a = 0; a <= f / 5; a++) {
		for (b = 0; b <= (f - a) / 3; b++) {
			c = 100 - a - b;
			if (((5 * a) + (3 * b) + c/3) == f)// 总本数=总钱数
			{
				cout << "大本数" << a << "小本数" << b << "小小本数" << c << endl;
			}
			
		}
	}
	return 0;
}
