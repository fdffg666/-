#include<iostream>
using namespace std;
int main() {
	int a, b, c, d, f;
	f = 100;//�����ܱ���
	for (a = 0; a <= f / 5; a++) {
		for (b = 0; b <= (f - a) / 3; b++) {
			c = 100 - a - b;
			if (((5 * a) + (3 * b) + c/3) == f)// �ܱ���=��Ǯ��
			{
				cout << "����" << a << "С����" << b << "СС����" << c << endl;
			}
			
		}
	}
	cout << "2412402060718 �信ΰ" << endl;
	return 0;
}
