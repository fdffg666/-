#include<iostream>
#include <cmath> // 引入cmath库以使用pow函数
using namespace std;
int add(int b) 
{ int a = 0;
while (b != 0) { 
	b /= 10;
	a++; 
} return a;
}
//求一个数的总位数
void Take() {
	int N;
	int k;
	cout << "请输入一个正数,不能超过9位数:";
	cin >> N;
	if (N < 0){
		cout << "错误,请重新输入一个正数";
		return;
	}
	cout << "请输入你想要的第几位数;";
	cin >> k;
	int a = add(N);
	if (k<1 || k>a) {
		cout<<"错误,请输入一个有效的位数(1-9)。" << endl;
		return;
	}
	else if (k <= 9) {
		int n;
		n = (N / static_cast<int>(pow(10 , k))) % 10;//pow函数是用来计算10的次方，static_cast<int>是将10的次方强行变成int形式
		std::cout << "这个" << N << "数的第" << k << "位数是" << n << std::endl;
	}
	return;
}
//主要的计算过程 
int main() {
	Take(); 
	return 0; 
}