#include <iostream>
using namespace std;

void input() {
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
	#endif
}

void fun(int x) {
	cout << x << endl;
}

void fun(double x) {
	cout << x << endl;
}

void fun(int x, int y) {
	cout << x << " " << y << endl;
}

int main()
{
	input();
	fun(10);
	fun(20.10);
	fun(10,20);
}