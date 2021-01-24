#include <iostream>
#include <limits.h>
using namespace std;

void input() {
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
	#endif
}

int main()
{
	input();
	int x;
	double y = 10.56;
	x = y;
	cout << x;
}