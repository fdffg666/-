#include<iostream>
#include <cmath> // ����cmath����ʹ��pow����
using namespace std;
int add(int b) 
{ int a = 0;
while (b != 0) { 
	b /= 10;
	a++; 
} return a;
}
//��һ��������λ��
void Take() {
	int N;
	int k;
	cout << "������һ������,���ܳ���9λ��:";
	cin >> N;
	if (N < 0){
		cout << "����,����������һ������";
		return;
	}
	cout << "����������Ҫ�ĵڼ�λ��;";
	cin >> k;
	int a = add(N);
	if (k<1 || k>a) {
		cout<<"����,������һ����Ч��λ��(1-9)��" << endl;
		return;
	}
	else if (k <= 9) {
		int n;
		n = (N / static_cast<int>(pow(10 , k))) % 10;//pow��������������10�Ĵη���static_cast<int>�ǽ�10�Ĵη�ǿ�б��int��ʽ
		std::cout << "���" << N << "���ĵ�" << k << "λ����" << n << std::endl;
	}
	return;
}
//��Ҫ�ļ������ 
int main() {
	Take(); 
	return 0; 
}