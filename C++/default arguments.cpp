#include <iostream>
using namespace std;

void input() {
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
	#endif
}

void fun(int x = 5, int y = 20) {
	cout << x << " " << y << endl;
}

int main()
{
	input();
	fun(10);
}

// Invalid
// void add(int a, int b = 3, int c, int d);

// Invalid
// void add(int a, int b = 3, int c, int d = 4);

// Valid
// void add(int a, int c, int b = 3, int d = 4);
