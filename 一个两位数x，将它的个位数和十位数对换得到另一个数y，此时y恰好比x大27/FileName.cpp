#include<iostream>
using namespace std;
void duihuan() {
	int x, y, a, b;
	for (x = 10;x <=100; x++) {
		a = x / 10;
		b = x % 10;
		y = b * 10 + a;
		if (x-y== 27||y-x==27) {
			cout << x<<"and"<<y<< endl;
		}
	}
}
int main() {
	duihuan();
	cout << "2412402060718 �信ΰ" << endl;
	return 0;
}