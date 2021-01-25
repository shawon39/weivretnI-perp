#include <iostream>
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
	cout << (3<<1) << endl;
	cout << (3>>1) << endl;
}